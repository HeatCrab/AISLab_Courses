# Lab 6 - Transformer Quantization Report
  
### SmoothQuant vs Lab3 Methods
> What's the difference between SmoothQuant and the method in Lab3?

Lab3 和 Lab6 都是針對神經網路的 INT8 quantization，但兩者的核心方法和應對的問題有本質差異。

Lab3 的方法（傳統 $PTQ$ / $QAT$）採用直接量化的策略：

```python
model.qconfig = CustomQConfig.CusQuant.value
model_prepared = tq.prepare(model)
calibrate(model_prepared, val_loader)  # 收集 min/max 統計資料
model_int8 = tq.convert(model_prepared)  # 直接轉換為 INT8
```

在 Lab3 中，quantization 的關鍵是使用 observer 收集每層 activation 的 min/max 值，然後計算 scale 和 zero-point 直接進行量化。這種方法對 CNN 模型（如 ResNet-50）效果很好，因為 CNN 的 activation 分布相對均勻。

Lab6 的方法（SmoothQuant）則在量化前增加了 smoothing 步驟來解決 Transformer 特有的問題：

```python
# 1. 收集 activation statistics
collector = ActivationCollector()
collector.register_hooks(model)

# 2. 計算 smoothing factors
smoothing_factors = compute_smoothing_factors(model, activation_stats, alpha=0.5)

# 3. 應用 smoothing transformation
apply_smooth_quant_vit(model, smoothing_factors)

# 4. 然後才進行量化
quantized_model = quantize_model_dynamic(smoothed_model, n_bits=8)
```

SmoothQuant 的核心創新在於**遷移量化難度**。透過數學變換 $Y = (X/s) \times (W \times s)$，將量化難度從 activation 轉移到 weight。這是因為：

1. **Transformer 的 activation 存在嚴重的 outliers**：某些 channel 的最大值可能是其他 channel 的 100 倍以上，導致大部分值被壓縮到很小的量化區間，造成嚴重的精度損失。

2. **Weight 更容易量化**：weight 的分布相對平滑，即使乘以 smoothing factor 後數值範圍變大，量化誤差的影響也相對較小。

為了具體說明這個問題，假設某個 channel 的 activation 最大值為 100（outlier），但大部分值都在 1 附近。

在 Lab3 的 INT8 quantization 中，我們需要將 FP32 的值映射到 [-127, 127] 的整數範圍。根據最大值計算 scale：

$$\text{scale} = \frac{\max(|X|)}{127} = \frac{100}{127} \approx 0.79$$

量化過程為 $\text{quantized} = \text{round}(X / \text{scale})$。這會使得值為 100 的 outlier 被量化到 127（使用了最大範圍），但值為 1 的常見值卻只被量化到約 1，僅使用了 127 個可用 levels 中的一個。結果會導致大部分值都被壓縮到 [-2, 2] 這個很小的整數範圍，損失了大量精度。

而在 Lab6 ，SmoothQuant 透過 smoothing factor $s = 10$ 進行調整，將 activation 除以 $s$，同時將 weight 乘以 $s$：

$$X' = X/10, \quad W' = W \times 10$$

調整後，activation 的最大值變成 10（原本 100），大部分值則在 0.1 附近（原本 1）。新的 scale 變為：

$$\text{scale}_{X'} = \frac{\max(|X/s|)}{127} = \frac{10}{127} \approx 0.08$$

現在值為 10 的最大值被量化到 125，而值為 0.1 的常見值同樣被量化到約 1。雖然量化後的整數值相同，但關鍵在於反量化後的誤差大幅降低。在 Lab3 的方法中，整數值 1 反量化後為 $1 \times 0.79 = 0.79$，與原始值 1 的誤差為 0.21；而 SmoothQuant 中，整數值 1 反量化後為 $1 \times 0.08 = 0.08$，與原始值 0.1 的誤差僅為 0.02，誤差減少了約 10 倍。

雖然 weight 的數值範圍增加了 10 倍，但由於 weight 分布本來就比較平滑，增加的量化誤差相對較小。這種將量化難度從 activation 轉移到 weight 的策略，使得整體量化精度得到了顯著改善。

此外，兩者在實作細節上也有差異：

| 特性 | Lab3 (PTQ/QAT) | Lab6 (SmoothQuant) |
|:---:|:---:|:---:|
| **目標模型** | CNN (ResNet-50) | Transformer (ViT-S) |
| **量化方式** | 直接量化 | Smoothing + 量化 |
| **Activation 量化** | Static (per-tensor) | Dynamic (per-token) |
| **Weight 量化** | Per-channel | Per-channel |
| **主要挑戰** | 維持 accuracy | 處理 activation outliers |
| **Fusion** | Conv-BN-ReLU | LayerNorm-Linear |

總結來說，Lab3 的方法適用於 activation 分布均勻的 CNN，而 Lab6 的 SmoothQuant 專門設計來解決 Transformer 中 activation outliers 的問題，透過 mathematical equivalence 將量化難度重新分配，在不改變模型輸出的前提下獲得更好的量化效果。

### Activation Smoothing Location
> When applying SmoothQuant, where do activation values get divided by the smooth factor?

Activation 值並不是在執行時直接被除以 smooth factor，而是透過修改 LayerNorm 的參數來達成。這是 SmoothQuant 的巧妙之處：它將 smoothing 操作融入到模型的參數中，而不需要額外的運算。

在我的實作中，`smooth_ln_fcs()` 函式負責執行這個轉換：

```python
def smooth_ln_fcs(ln, fc, scales):
    # 1. Smooth the Activation Source (LayerNorm)
    ln.weight.div_(scales)
    ln.bias.div_(scales)

    # 2. Smooth the Weight (Linear)
    fc.weight.mul_(scales)
```

這裡的關鍵在於理解 LayerNorm 的運算方式。LayerNorm 的計算公式為：

$$\text{LayerNorm}(x) = \gamma \cdot \frac{x - \mu}{\sigma} + \beta$$

其中 $\gamma$ 是 `ln.weight`，$\beta$ 是 `ln.bias`。當我們將 $\gamma$ 和 $\beta$ 都除以 $s$ 後，LayerNorm 的輸出就自動變成原本輸出的 $1/s$：

$$\text{LayerNorm}'(x) = \frac{\gamma}{s} \cdot \frac{x - \mu}{\sigma} + \frac{\beta}{s} = \frac{1}{s} \left( \gamma \cdot \frac{x - \mu}{\sigma} + \beta \right)$$

因此，activation 在經過修改後的 LayerNorm 時就被自動除以了 smooth factor，而不需要額外的除法運算。

在 ViT-S 架構中，smoothing 發生在每個 Transformer block 的兩個位置：

**位置 1：Attention 之前（norm1 $\rightarrow$ qkv）**

```python
# 在 apply_smooth_quant_vit() 中
qkv_key = f"blocks.{i}.attn.qkv"
if qkv_key in smoothing_factors:
    scales = smoothing_factors[qkv_key]
    smooth_ln_fcs(block.norm1, block.attn.qkv, scales)
```

這會讓進入 QKV projection 之前的 activation 被 smooth。

**位置 2：MLP 之前（norm2 $\rightarrow$ fc1）**

```python
fc1_key = f"blocks.{i}.mlp.fc1"
if fc1_key in smoothing_factors:
    scales = smoothing_factors[fc1_key]
    smooth_ln_fcs(block.norm2, block.mlp.fc1, scales)
```

這會讓進入 MLP 第一層之前的 activation 被 smooth。

值得注意的是，並非所有 Linear 層都需要 smoothing。在 ViT 中，我們只對那些前面有 LayerNorm 的 Linear 層進行 smoothing，因為只有這樣才能保持數學等價性 $(X/s) \times (W \times s) = X \times W$。像是 `attn.proj`（attention 的輸出投影）和 `mlp.fc2`（MLP 的第二層）就沒有在前面接 LayerNorm，所以不進行 smoothing。

總結來說，activation 的 smoothing 發生在它們流經被修改過的 LayerNorm 層時，具體位置是每個 Transformer block 中 `norm1` $\rightarrow$ `attn.qkv` 和 `norm2` $\rightarrow$ `mlp.fc1` 這兩個連接處。這種設計讓 smoothing 成為模型參數的一部分，在推論時不會增加額外的計算成本。

### Smooth Factor Calculation
> How is the smooth factor being calculated?

Smooth factor 的計算是 SmoothQuant 的核心，它決定了量化難度如何在 activation 和 weight 之間分配。在我的實作中，`compute_smoothing_factors()` 函式負責這個計算：

```python
def compute_smoothing_factors(model, activation_stats, alpha=0.5):
    smoothing_factors = {}

    for name, module in model.named_modules():
        if isinstance(module, nn.Linear) and name in activation_stats:
            # 1. 獲取 activation max per channel
            act_max = activation_stats[name]

            # 2. 獲取 weight max per input channel
            weight_max = torch.abs(module.weight).max(dim=0)[0]

            # 3. 計算 smoothing factor
            s = act_max ** alpha / (weight_max ** (1 - alpha))

            smoothing_factors[name] = s.to(device)

    return smoothing_factors
```

計算公式遵循 SmoothQuant 論文的定義，對每個 input channel $j$ 計算：

$$s_j = \frac{\max(|X_j|)^\alpha}{\max(|W_j|)^{1-\alpha}}$$

其中：
- $\max(|X_j|)$ 是第 $j$ 個 input channel 的 activation 最大絕對值
- $\max(|W_j|)$ 是第 $j$ 個 input channel 的 weight 最大絕對值（跨所有 output channels）
- $\alpha$ 是平衡參數，控制難度遷移的程度

首先，我們需要理解為什麼要用這個公式。回顧 smoothing 的目標是讓 activation 和 weight 在量化後都能保持較好的精度。如果 $s$ 太大，activation 被過度壓縮但 weight 範圍變太大；如果 $s$ 太小，則相反。理想的 $s$ 應該讓兩者的量化難度達到平衡。

**步驟 1：收集 activation statistics**

在 calibration 階段，`ActivationCollector` 透過 forward hooks 記錄每個 Linear 層輸入的最大絕對值：

```python
channel_max = torch.abs(x).max(dim=0)[0]  # [input_channels]
```

這會得到每個 input channel 在整個 calibration dataset 上看到的最大值。

**步驟 2：計算 weight statistics**

對於 Linear 層的 weight（形狀為 `[output_channels, input_channels]`），我們需要找出每個 input channel 的最大值：

```python
weight_max = torch.abs(module.weight).max(dim=0)[0]  # [input_channels]
```

這會沿著 output channel 維度（dim=0）取最大值，得到每個 input channel 的最大 weight。

**步驟 3：應用 SmoothQuant 公式**

有了這兩個統計值後，我們使用公式計算 smoothing factor。這裡 $\alpha$ 參數扮演關鍵角色：

- 當 $\alpha = 0$：$s_j = 1 / \max(|W_j|)$，完全根據 weight 調整，activation 不變
- 當 $\alpha = 1$：$s_j = \max(|X_j|)$，完全根據 activation 調整，weight 變化最大
- 當 $\alpha = 0.5$（預設值）：$s_j = \sqrt{\max(|X_j|) / \max(|W_j|)}$，在兩者間取得平衡

在我的實作中使用 $\alpha = 0.5$，這是論文推薦的值，能在大多數情況下取得最佳的量化效果。

那考慮量化誤差與數值範圍的關係。量化誤差大約正比於 $\max / 127$（scale 的大小）。經過 smoothing 後：
- Activation 的量化誤差：$\propto \max(|X_j/s_j|) / 127 = \max(|X_j|)^{1-\alpha} \cdot \max(|W_j|)^{1-\alpha} / 127$
- Weight 的量化誤差：$\propto \max(|W_j \times s_j|) / 127 = \max(|W_j|)^{\alpha} \cdot \max(|X_j|)^{\alpha} / 127$

當 $\alpha = 0.5$ 時，兩者的誤差大致相等，達到最佳平衡。這確保了沒有任何一方承受過大的量化壓力，從而最小化整體的精度損失。

### ViT-S vs CNN Quantization
> What's the difference between ViT-S and CNN models when doing quantization?

ViT-S 和 CNN 在量化時面臨截然不同的挑戰，這些差異源於兩種架構的本質特性。

**1. Activation 分布特性**

CNN（如 ResNet-50）的 activation 分布相對均勻。卷積操作對局部特徵進行加權求和，由於感受野內的像素值通常在相似範圍內，產生的 activation 不會有極端的 outliers。這使得傳統的 per-tensor 或 per-channel quantization 就能取得良好效果。

相對地，Transformer（如 ViT-S）的 activation 存在嚴重的 outlier 問題。Self-attention 機制會計算所有 token 之間的關係，某些特定的 channel 可能會累積來自多個 token 的強烈信號，導致數值遠大於其他 channels。在 SmoothQuant 論文中提到，這些 outlier 的最大值可能是其他 channel 的 100 倍以上。

**2. Quantization 策略**

在 Lab3 的 CNN quantization 中，我們使用 static quantization：

```python
model.qconfig = qconfig
model_prepared = tq.prepare(model)
calibrate(model_prepared, val_loader)  # 一次性收集統計
model_int8 = tq.convert(model_prepared)
```

Scale 在 calibration 階段計算一次後就固定了，因為 CNN 的 activation 分布相對穩定。

而在 Lab6 的 ViT quantization 中，我們對 activation 使用 dynamic per-token quantization：

```python
def quantize_activation_dynamic_per_token(t, n_bits=8):
    # 每個 token 動態計算 scale
    scales = t.abs().max(dim=-1, keepdim=True)[0]
    # omitted
```

這是因為 Transformer 中不同 token 的 activation 範圍可能差異很大。Per-token 的動態量化讓每個 token 都有自己的 scale，避免某些 token 的 outliers 影響其他 token 的量化精度。

**3. 需要 Smoothing 的必要性**

CNN 不需要 SmoothQuant。由於 activation 分布均勻，直接量化就能保持精度。在 Lab3 中，PTQ 的 accuracy drop 只有 0.28%，證明直接量化對 CNN 很有效。

ViT 則必須使用 SmoothQuant。如果直接量化，outlier channels 會佔用大部分的量化範圍，導致其他 channels 的精度嚴重損失。SmoothQuant 透過將量化難度從 activation 遷移到 weight，解決了這個問題。

**4. 架構特性與 Fusion**

CNN 的量化優化主要針對 Conv-BN-ReLU 的 fusion：

```python
# CNN fusion
torch.ao.quantization.fuse_modules(self, [['conv1', 'bn1', 'relu']], inplace=True)
```

這能減少中間的 quantize/dequantize 轉換，降低量化誤差累積。

ViT 的量化優化則針對 LayerNorm-Linear 的 fusion，這正是 SmoothQuant 發揮作用的地方：

```python
# ViT smoothing (LayerNorm-Linear fusion)
smooth_ln_fcs(block.norm1, block.attn.qkv, scales)
```

LayerNorm 的存在讓我們能夠將 smoothing 操作融入參數，而不增加運算成本。CNN 中沒有 LayerNorm，所以無法使用這個技巧。

**5. Weight 量化策略**

兩者都使用 per-channel weight quantization，但原因不同。CNN 的不同 output channel 學習不同的特徵（邊緣、紋理等），需要獨立的 scale。ViT 的不同 output channel 則對應不同的 attention heads 或 MLP 神經元，同樣需要 per-channel 的精細度。

總結來說，ViT 量化的主要挑戰在於處理 activation outliers，需要 SmoothQuant 和 dynamic per-token quantization；而 CNN 的 activation 分布均勻，傳統的 static quantization 就足夠了。這些差異反映了兩種架構在特徵提取方式上的根本不同：CNN 的局部性 vs Transformer 的全局性。

### Distribution Visualization Observations
> What's your observation on the visualization of weight and activation values distribution?

透過 3D surface plot 可視化 ViT-S 第一個 Transformer block 的 attention QKV layer，我觀察到 SmoothQuant 對 weight 和 activation 分布產生了截然相反但互補的效果。這些可視化結果清楚地驗證了 SmoothQuant 的核心機制：透過數學變換將量化難度從 activation 轉移到 weight。

**Weight 分布變化：從平滑到尖銳（Smoother $\rightarrow$ Spikier）**

![Weight Distribution](pictures/weight_spikier.png)

在 smoothing 前（左圖），weight 的分布相當平滑且均勻，大部分數值集中在 [-0.05, 0.05] 範圍內。整個 surface 呈現平坦的藍綠色基底，只有零星的小幅波動，數值範圍的跨度相對較小。

經過 smoothing 後（右圖），weight 的分布變得顯著地 spikier。可以清楚看到多個紅色和橙色的尖峰突出於藍色基底之上，數值範圍擴大到約 [-1.0, 1.0]。這些尖峰對應到原本 activation 中存在 outliers 的 input channels，因為 smoothing 將這些 channels 的 scale factor $s$ 乘到了對應的 weight columns 上。

這個變化的數學原理來自 $W' = W \times s$。對於那些 activation 最大值較大的 channels，對應的 $s$ 值也較大（參考公式 $s_j = \frac{\max(|X_j|)^\alpha}{\max(|W_j|)^{1-\alpha}}$），因此 weight 被放大的幅度也越大，形成了視覺上的尖峰。

**Activation 分布變化：從尖銳到平滑（Spikier $\rightarrow$ Flatter）**

![Activation Distribution](pictures/weight_flatter.png)

在 smoothing 前（左圖），activation 的分布極度不均勻，存在明顯的 outlier 問題。可以看到幾個突出的綠色和黃色尖峰，最大值達到約 7-8，而大部分的 surface 則維持在接近 0 的低值，呈現出深藍色和紫色的基底。這種極端的不均勻分布正是 Transformer 量化的核心挑戰：少數 outlier channels 會主導整個量化範圍的計算，導致大部分正常值被壓縮到很小的整數區間。

經過 smoothing 後（右圖），activation 的分布變得顯著地平滑。原本高聳的綠色尖峰被壓低，整體數值範圍縮小到約 [0, 2-3]。雖然仍可見一些紅色的局部高點，但相較於原始分布，outliers 的影響已經大幅降低。整個 surface 呈現更加均勻的藍色基底，數值的動態範圍（最大值與最小值的比例）明顯縮小。

這個變化來自 $X' = X / s$。對於那些原本有 outliers 的 channels，smoothing factor $s$ 較大，因此 $X/s$ 會將這些極端值有效地壓縮下來。從可視化可以觀察到，原始 activation 中少數 outlier channels 與大部分正常值之間存在顯著的數量級差異（最大值 ~7-8 vs 基底 ~0），而 smoothing 後這個差異明顯縮小（最大值 ~2-3 vs 基底 ~0-1），大幅改善了量化的難度。

從最終結果可以看到，這種分布的重新調整帶來了顯著的量化效益。在 INT8 quantization 下：
- **FP32 Fine-tuned Accuracy**: 98.21%
- **W8A8 SmoothQuant Accuracy**: 98.17%
- **Accuracy Drop**: 0.04%

這個極小的精度損失證實了 SmoothQuant 的有效性。透過將量化難度從 activation（難以量化）轉移到 weight（容易量化），即使 weight 的數值範圍擴大了，整體的量化誤差依然維持在可接受的範圍內。0.04% 的 accuracy drop 遠低於直接量化 Transformer 可能造成的數個百分點損失，驗證了 smoothing 策略的成功。

![Training Curves](pictures/train_accuracy_loss.png)

而從訓練曲線可以觀察到，模型在 10 個 epochs 內快速收斂。Training loss 從初始的 0.15 穩定下降至接近 0，training accuracy 則快速攀升至接近 100%。Test accuracy 也達到了 98% 以上的高水準，且在後期趨於穩定。

值得注意的是，training accuracy 和 test accuracy 之間保持了相當接近的水準，兩者的差距始終小於 2%。這顯示模型沒有明顯的 overfitting 問題，generalization 能力良好。Training loss 的平滑下降曲線也證實了 fine-tuning 過程的穩定性，沒有出現震盪或不收斂的情況。

總結來說，可視化結果完美地印證了 SmoothQuant 的設計理念：weight 和 activation 的分布變化呈現鏡像關係（一個變 spikier，一個變 flatter），而這種互補的轉換正是讓 Transformer 能夠成功進行 INT8 quantization 的關鍵。從訓練曲線也可以看出，fine-tuned 的 ViT-S 模型收斂良好，為後續的量化提供了穩定的基礎。
