# Lab 6 - Transformer Pruning Report
  
1. **請說明 get_real_idx 實作部分是怎麼做的** 10%

`get_real_idx` 函數的目的是將每一層 pruning 後保留的 token 索引映射回原始輸入圖片的 token 位置。這是必要的，因為在多層 Transformer 中，每一層的 token 索引都是相對於上一層的輸出，而非相對於最初的輸入。

當 `fuse_token=True` 時（EViT 的情況），每一層 pruning 後的輸出包含：
- 保留的 tokens（來自 `idxs[i-1]`）
- 一個 fused token（由被丟棄的 tokens 加權融合而成）

因此上一層的 image tokens 數量為 `len(idxs[i-1]) + 1`。當前層的 `idxs[i]` 是相對於這些 tokens 的索引，所以我需要建立一個映射表 `prev_mapping`：

```python
prev_mapping = torch.cat([idxs[i-1], idxs[i-1][:, -1:]], dim=1)
```

這個映射表將上一層的所有 image token 位置（kept tokens + fused token）對應到原始輸入的位置。其中：
- `idxs[i-1]` 是上一層保留的 tokens 在原始輸入中的位置
- `idxs[i-1][:, -1:]` 代表 fused token，為了視覺化方便，我將其映射到上一層最後一個保留的 token 位置

最後使用 `torch.gather` 將當前層的相對索引映射到原始位置：

```python
idxs[i] = torch.gather(prev_mapping, dim=1, index=idxs[i])
```

這樣遞迴地映射所有層後，每一層的 `idxs[i]` 都會指向原始輸入圖片的 token 位置，讓視覺化能正確顯示每一層實際保留了哪些 image patches。

最後完整的 function 實作如下：

```python
def get_real_idx(idxs, fuse_token):
    for i in range(1, len(idxs)):
        if fuse_token:
            prev_mapping = torch.cat([idxs[i-1], idxs[i-1][:, -1:]], dim=1)
            idxs[i] = torch.gather(prev_mapping, dim=1, index=idxs[i])
        else:
            idxs[i] = torch.gather(idxs[i-1], dim=1, index=idxs[i])
    return idxs
```

2. **實際在哪些層做了 pruning ?** 10%

根據模型初始化時的 `keep_rate` 參數設定：

```python
model = EViT(keep_rate=(1, 1, 1, 0.7) + (1, 1, 0.7) + (1, 1, 0.7) + (1, 1))
```

展開後為 12 層的 keep_rate 序列：
```
[1, 1, 1, 0.7, 1, 1, 0.7, 1, 1, 0.7, 1, 1]
```

實際進行 token pruning 的層為 **第 4、7、10 層**（索引從 0 開始計算為第 3、6、9 層），這三層的 `keep_rate = 0.7`，代表只保留 70% 的 tokens。

計算每一層保留的 token 數量：
- 初始輸入：224×224 圖片，patch size=16，共有 $(224/16)^2 = 196$ 個 image tokens（不含 CLS token）
- **第 4 層 pruning**：保留 $\lceil 196 \times 0.7 \rceil = 138$ 個 tokens
- **第 7 層 pruning**：保留 $\lceil 138 \times 0.7 \rceil = 97$ 個 tokens
- **第 10 層 pruning**：保留 $\lceil 97 \times 0.7 \rceil = 68$ 個 tokens

最終模型只需處理 68 個 image tokens（加上 1 個 CLS token 和 1 個 fused token = 70 個 tokens），相比原始的 196 個 tokens，**計算量減少約 65%**。

3. **如果沒有 get_real_idx 可視化結果會長怎樣，為什麼 ?** 10%

如果沒有 `get_real_idx` 進行索引映射，視覺化會出現問題。假設第一層 pruning 保留了原始圖片中索引為 `[5, 10, 15, 20, 25, ...]` 的 138 個 tokens（分散在圖片各處）。第二層 pruning 在這 138 個 tokens 中又選擇了索引為 `[0, 1, 2, 3, ..., 96]` 的前 97 個。

沒有 `get_real_idx` 的情況下，視覺化會直接使用 `[0, 1, 2, 3, ..., 96]` 作為原始圖片的 patch 索引，結果會顯示圖片**左上角連續的前 97 個 patches**，呈現一個方形區塊。

但這不完全是模型實際保留的區域。實際上第二層保留的應該是第一層結果中的前 97 個 tokens，也就是原始圖片中的 `[5, 10, 15, 20, ..., 490]` 這些分散的 patches。

那造成這些結果的根本原因是 EViT 的每一層 pruning 都是基於**上一層的輸出**進行選擇，而不是基於原始輸入。每層記錄的 `idx` 是「在當前這一層的輸入中選擇哪些 tokens」，這是**相對索引**。

以三層 pruning 為例，索引的參照基準逐層改變：
- 第一層（`idxs[0]`）：標記原始 196 個 tokens 中的哪些被保留
- 第二層（`idxs[1]`）：標記第一層保留的 138 個 tokens 中的哪些被保留
- 第三層（`idxs[2]`）：標記第二層保留的 97 個 tokens 中的哪些被保留

只有第一層的索引可以直接用於視覺化，因為它直接指向原始圖片的 patches。若將第二層和第三層的相對索引直接套用到原始圖片上，就會誤將相對位置當作絕對位置使用，導致顯示的 patches 位置完全錯誤。這樣的視覺化不僅無法反映模型的實際行為，還可能誤導我們對 pruning 策略的理解。

所以正確的做法應該是使用 `get_real_idx` 變數，通過逐層映射，將所有相對索引轉換為相對於原始輸入的絕對索引：

$$\text{idxs}[1] \text{ 的相對索引} \xrightarrow{\text{映射}} \text{idxs}[0] \xrightarrow{\text{映射}} \text{原始位置}$$

$$\text{idxs}[2] \text{ 的相對索引} \xrightarrow{\text{映射}} \text{idxs}[1] \xrightarrow{\text{映射}} \text{idxs}[0] \xrightarrow{\text{映射}} \text{原始位置}$$

這樣視覺化才能正確顯示「模型在原始圖片的哪些位置保留了資訊」，讓我們看到真實的 attention pattern 和 pruning 策略。

4. **分析視覺化的圖，這些變化代表著什麼 ?** 10%

從五張測試圖片的視覺化結果可以觀察到幾個一致且重要的模式：

- **逐層 token 減少的趨勢**：從 Layer 4 到 Layer 7 再到 Layer 10，保留的 patches（白色區域）逐漸減少，符合 keep_rate=0.7 的設定。每經過一次 pruning，模型會丟棄 30% 的 tokens，將注意力逐步聚焦到更核心的區域。

- **前景物體優先保留**：在所有五張圖片中，模型都優先保留包含主要分類目標的 patches，而背景區域則被大量 pruning。這顯示 CLS token 的 attention 成功識別出與分類任務最相關的區域。

- **邊緣和紋理保留**：除了主體物件的中心區域，模型也傾向保留物體邊緣和具有豐富紋理細節的區域。

接下來針對個別的圖片進行分析：

**圖片 1 (Goldfish, Class 1)**：

![Goldfish](Pictures/output001.png)

- Layer 4 保留了大部分魚的身體輪廓和周圍水域
- Layer 7 專注於魚的頭部、身體中心和尾鰭特徵
- Layer 10 只保留最核心的魚身特徵，主要集中在頭部和身體主軸

金魚的橘色身體與藍色水域形成強烈對比，模型成功識別出這個主體並逐步將注意力集中在最具辨識度的部位。

**圖片 2 (Cock, Class 7)**：

![Cock](Pictures/output007.png)

- Layer 4 保留了公雞的整體輪廓，包括頭部、頸部和身體
- Layer 7 開始丟棄大部分背景草地，專注於公雞本體
- Layer 10 高度聚焦在公雞的頭部和頸部特徵

公雞鮮豔的雞冠和羽毛是最具辨識性的特徵，模型在最終層幾乎完全聚焦於這些區域。

**圖片 3 (Brambling, Class 10)**：

![Brambling](Pictures/output010.png)

- Layer 4 清楚保留了鳥的完整身體輪廓
- Layer 7 捨棄樹枝等背景元素，聚焦於鳥的身體和頭部
- Layer 10 集中在鳥的頭部、翅膀和胸部的特徵性斑紋

這張圖展示了模型處理複雜背景的能力，成功將主體（鳥）與背景（樹枝）分離。

**圖片 4 (Axolotl, Class 29)**：

![Axolotl](Pictures/output029.png)

- Layer 4 保留了蠑螈獨特的外型，包括頭部觸鬚和身體
- Layer 7 丟棄水底背景，專注於蠑螈本體
- Layer 10 聚焦於最具特徵的頭部觸鬚和身體中段

Axolotl 是相對罕見的物種，但模型仍能識別並保留其最具辨識性的特徵（外鰓觸鬚）。

**圖片 5 (Peacock, Class 84)**：

![Peacock](Pictures/output084.png)

- Layer 4 保留了大部分展開的尾羽和身體
- Layer 7 聚焦於尾羽的眼狀斑紋和孔雀頭部
- Layer 10 高度集中在最具特徵的尾羽斑紋區域

孔雀展開的尾羽是最複雜的圖片，但模型成功定位並保留了最關鍵的眼狀斑紋特徵。

這些視覺化結果證明了 EViT 採用基於 CLS token attention 的語義感知 pruning 策略，能精準識別並保留與分類任務最相關的區域。從 Layer 4 到 Layer 10 展現出明顯的 coarse-to-fine 精煉過程，逐步聚焦於最核心的辨識特徵。最令人印象深刻的是，儘管最終只保留了約 35% 的 tokens（從 196 降到 68），所有測試圖片仍達到 100% 準確率，證明被丟棄的 tokens 多為冗餘資訊。由於 self-attention 複雜度為 $O(n^2)$，token 數量的減少使每個 attention 層計算量降低約 $(196/68)^2 \approx 8.3$ 倍，展現了 EViT 在準確率與效率間取得的平衡。
