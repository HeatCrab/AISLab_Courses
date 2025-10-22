# EAI LABs Reports - Lab2

## Modify `ResNet.py`

### How I modify the code?

針對 `Bottleneck` 的 `__init__` 我更改問號的部分：

```python
    self.conv1 = nn.Conv2d(in_channels, out_channels[0], kernel_size=1, stride=1, padding=0, bias=False)
    self.bn1 = nn.BatchNorm2d(out_channels[0])

    self.conv2 = nn.Conv2d(out_channels[0], out_channels[1], kernel_size=3, stride=stride, padding=1, bias=False)
    self.bn2 = nn.BatchNorm2d(out_channels[1])

    self.conv3 = nn.Conv2d(out_channels[1], out_channels[2], kernel_size=1, stride=1, padding=0, bias=False)
    self.bn3 = nn.BatchNorm2d(out_channels[2])
```

`conv1`： 輸入 `in_channels`，輸出 `out_channels[0]`（1×1 降維）
`conv2`： 輸入 `out_channels[0]`，輸出 `out_channels[1]`（3×3 主要運算）
`conv3`： 輸入 `out_channels[1]`，輸出 `out_channels[2]`（1×1 升維）

每層卷積後都接 BatchNorm2d，通道數對應該層的輸出通道數。


在 `_make_layer` 的實作中，關鍵在於區分 Projection 和 Identity Shortcut 的處理方式。首先計算原始輸出的通道數：

```python
    original_out_channels = planes * block.expansion
```

並對第一個 Bottleneck ，使用原始通道數而非 cfg 的值。

```python!
    # 從 cfg 讀取前兩個通道數，但第三個固定為原始值
    first_block_out_channels = [
        cfg[self.current_cfg_idx],        # bn1
        cfg[self.current_cfg_idx + 1],    # bn2
        original_out_channels             # bn3: 固定為 256/512/1024/2048
    ]
    
    # Check if Projection shortcut is needed
    if stride != 1 or self.inplanes != first_block_out_channels[2]:
        downsample = nn.Sequential(
            nn.Conv2d(self.inplanes, first_block_out_channels[2], 
                      kernel_size=1, stride=stride, bias=False),
        )
```

接著檢查是否需要 downsample：
  - 條件 1: `stride != 1`（需要降採樣）
  - 條件 2: `self.inplanes != out_channels[2]`（輸入輸出通道數不同）
如果需要 Projection Shortcut ，就建立 1×1 的 `Conv2d` 作為 downsample，但是不用加 `BN` 。並在最後更新 `self.inplanes` 和 `self.current_cfg_idx`

```python
    layers.append(block(self.inplanes, planes, first_block_out_channels, downsample, stride))
    self.current_cfg_idx += 3
    self.inplanes = first_block_out_channels[2]
```

後續的 Identity Shortcut Bottleneck 同樣從 `cfg` 讀取前兩層的通道數，但關鍵在於將 `out_channels[2]` 固定為 `self.inplanes`，這樣就能確保輸入輸出通道數相同。

```python    
    for i in range(1, blocks):
        out_channels = [
            cfg[self.current_cfg_idx],
            cfg[self.current_cfg_idx + 1],
            self.inplanes
        ]
        layers.append(block(self.inplanes, planes, out_channels, None, 1))
        self.current_cfg_idx += 3

    return nn.Sequential(*layers) 
```

最後把 `downsample` 設為 `None`，`stride` 設為 1 ，並在每一次迭代後把 `self.current_cfg_idx` 加 3 。通過以上的實作，來固定 Identity Shortcut 的輸入輸出通道數相同，確保剪枝後的模型保持原有的 Shortcut 結構。

實作完成後，透過 model summary 驗證參數量是否正確：

```bash
================================================================
Total params: 23,513,162
Trainable params: 23,513,162
Non-trainable params: 0
----------------------------------------------------------------
Input size (MB): 0.01
Forward/backward pass size (MB): 22.47
Params size (MB): 89.70
Estimated Total Size (MB): 112.18
----------------------------------------------------------------
```

接著透過測試程式驗證結果：

```python
cfg = [64, 64, 64, 255, 64, 64, 256, 64, 64, 256, 128, 128, 403, 128, 128, 482, 
       128, 128, 485, 128, 126, 472, 182, 180, 396, 175, 170, 564, 108, 138, 541, 
       94, 95, 497, 82, 112, 499, 91, 105, 479, 199, 267, 569, 176, 250, 601, 110, 136, 464]
model = ResNet50(num_classes=10, cfg=cfg)
print(model) 
```

執行後的到以下的結果：

```bash
ResNet(
  (conv1): Conv2d(3, 64, kernel_size=(3, 3), stride=(1, 1), padding=(1, 1), bias=False)
  (bn1): BatchNorm2d(64, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
  (relu): ReLU(inplace=True)
  (maxpool): MaxPool2d(kernel_size=3, stride=2, padding=1, dilation=1, ceil_mode=False)
  (layer1): Sequential(
    (0): Bottleneck(
      (conv1): Conv2d(64, 64, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn1): BatchNorm2d(64, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv2): Conv2d(64, 64, kernel_size=(3, 3), stride=(1, 1), padding=(1, 1), bias=False)
      (bn2): BatchNorm2d(64, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv3): Conv2d(64, 256, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn3): BatchNorm2d(256, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (relu): ReLU(inplace=True)
      (downsample): Sequential(
        (0): Conv2d(64, 256, kernel_size=(1, 1), stride=(1, 1), bias=False)
      )
    )
    (1): Bottleneck(
      (conv1): Conv2d(256, 64, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn1): BatchNorm2d(64, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv2): Conv2d(64, 64, kernel_size=(3, 3), stride=(1, 1), padding=(1, 1), bias=False)
      (bn2): BatchNorm2d(64, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv3): Conv2d(64, 256, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn3): BatchNorm2d(256, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (relu): ReLU(inplace=True)
    )
    (2): Bottleneck(
      (conv1): Conv2d(256, 64, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn1): BatchNorm2d(64, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv2): Conv2d(64, 64, kernel_size=(3, 3), stride=(1, 1), padding=(1, 1), bias=False)
      (bn2): BatchNorm2d(64, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv3): Conv2d(64, 256, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn3): BatchNorm2d(256, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (relu): ReLU(inplace=True)
    )
  )
  (layer2): Sequential(
    (0): Bottleneck(
      (conv1): Conv2d(256, 128, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn1): BatchNorm2d(128, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv2): Conv2d(128, 128, kernel_size=(3, 3), stride=(2, 2), padding=(1, 1), bias=False)
      (bn2): BatchNorm2d(128, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv3): Conv2d(128, 512, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn3): BatchNorm2d(512, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (relu): ReLU(inplace=True)
      (downsample): Sequential(
        (0): Conv2d(256, 512, kernel_size=(1, 1), stride=(2, 2), bias=False)
      )
    )
    (1): Bottleneck(
      (conv1): Conv2d(512, 128, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn1): BatchNorm2d(128, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv2): Conv2d(128, 128, kernel_size=(3, 3), stride=(1, 1), padding=(1, 1), bias=False)
      (bn2): BatchNorm2d(128, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv3): Conv2d(128, 512, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn3): BatchNorm2d(512, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (relu): ReLU(inplace=True)
    )
    (2): Bottleneck(
      (conv1): Conv2d(512, 128, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn1): BatchNorm2d(128, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv2): Conv2d(128, 128, kernel_size=(3, 3), stride=(1, 1), padding=(1, 1), bias=False)
      (bn2): BatchNorm2d(128, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv3): Conv2d(128, 512, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn3): BatchNorm2d(512, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (relu): ReLU(inplace=True)
    )
    (3): Bottleneck(
      (conv1): Conv2d(512, 128, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn1): BatchNorm2d(128, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv2): Conv2d(128, 126, kernel_size=(3, 3), stride=(1, 1), padding=(1, 1), bias=False)
      (bn2): BatchNorm2d(126, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv3): Conv2d(126, 512, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn3): BatchNorm2d(512, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (relu): ReLU(inplace=True)
    )
  )
  (layer3): Sequential(
    (0): Bottleneck(
      (conv1): Conv2d(512, 182, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn1): BatchNorm2d(182, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv2): Conv2d(182, 180, kernel_size=(3, 3), stride=(2, 2), padding=(1, 1), bias=False)
      (bn2): BatchNorm2d(180, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv3): Conv2d(180, 1024, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn3): BatchNorm2d(1024, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (relu): ReLU(inplace=True)
      (downsample): Sequential(
        (0): Conv2d(512, 1024, kernel_size=(1, 1), stride=(2, 2), bias=False)
      )
    )
    (1): Bottleneck(
      (conv1): Conv2d(1024, 175, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn1): BatchNorm2d(175, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv2): Conv2d(175, 170, kernel_size=(3, 3), stride=(1, 1), padding=(1, 1), bias=False)
      (bn2): BatchNorm2d(170, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv3): Conv2d(170, 1024, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn3): BatchNorm2d(1024, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (relu): ReLU(inplace=True)
    )
    (2): Bottleneck(
      (conv1): Conv2d(1024, 108, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn1): BatchNorm2d(108, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv2): Conv2d(108, 138, kernel_size=(3, 3), stride=(1, 1), padding=(1, 1), bias=False)
      (bn2): BatchNorm2d(138, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv3): Conv2d(138, 1024, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn3): BatchNorm2d(1024, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (relu): ReLU(inplace=True)
    )
    (3): Bottleneck(
      (conv1): Conv2d(1024, 94, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn1): BatchNorm2d(94, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv2): Conv2d(94, 95, kernel_size=(3, 3), stride=(1, 1), padding=(1, 1), bias=False)
      (bn2): BatchNorm2d(95, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv3): Conv2d(95, 1024, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn3): BatchNorm2d(1024, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (relu): ReLU(inplace=True)
    )
    (4): Bottleneck(
      (conv1): Conv2d(1024, 82, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn1): BatchNorm2d(82, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv2): Conv2d(82, 112, kernel_size=(3, 3), stride=(1, 1), padding=(1, 1), bias=False)
      (bn2): BatchNorm2d(112, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv3): Conv2d(112, 1024, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn3): BatchNorm2d(1024, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (relu): ReLU(inplace=True)
    )
    (5): Bottleneck(
      (conv1): Conv2d(1024, 91, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn1): BatchNorm2d(91, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv2): Conv2d(91, 105, kernel_size=(3, 3), stride=(1, 1), padding=(1, 1), bias=False)
      (bn2): BatchNorm2d(105, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv3): Conv2d(105, 1024, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn3): BatchNorm2d(1024, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (relu): ReLU(inplace=True)
    )
  )
  (layer4): Sequential(
    (0): Bottleneck(
      (conv1): Conv2d(1024, 199, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn1): BatchNorm2d(199, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv2): Conv2d(199, 267, kernel_size=(3, 3), stride=(2, 2), padding=(1, 1), bias=False)
      (bn2): BatchNorm2d(267, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv3): Conv2d(267, 2048, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn3): BatchNorm2d(2048, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (relu): ReLU(inplace=True)
      (downsample): Sequential(
        (0): Conv2d(1024, 2048, kernel_size=(1, 1), stride=(2, 2), bias=False)
      )
    )
    (1): Bottleneck(
      (conv1): Conv2d(2048, 176, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn1): BatchNorm2d(176, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv2): Conv2d(176, 250, kernel_size=(3, 3), stride=(1, 1), padding=(1, 1), bias=False)
      (bn2): BatchNorm2d(250, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv3): Conv2d(250, 2048, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn3): BatchNorm2d(2048, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (relu): ReLU(inplace=True)
    )
    (2): Bottleneck(
      (conv1): Conv2d(2048, 110, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn1): BatchNorm2d(110, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv2): Conv2d(110, 136, kernel_size=(3, 3), stride=(1, 1), padding=(1, 1), bias=False)
      (bn2): BatchNorm2d(136, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (conv3): Conv2d(136, 2048, kernel_size=(1, 1), stride=(1, 1), bias=False)
      (bn3): BatchNorm2d(2048, eps=1e-05, momentum=0.1, affine=True, track_running_stats=True)
      (relu): ReLU(inplace=True)
    )
  )
  (avgpool): AdaptiveAvgPool2d(output_size=(1, 1))
  (fc): Linear(in_features=2048, out_features=10, bias=True)
)
```

從輸出可以驗證，所有 bottleneck 的輸出通道數都固定為標準值：

- Layer1：所有 bottleneck 輸出 256
- Layer2：所有 bottleneck 輸出 512
- Layer3：所有 bottleneck 輸出 1024
- Layer4：所有 bottleneck 輸出 2048

所有 Identity Shortcut 都沒有 `downsample` 層，成功保持了原始 ResNet 的 Shortcut 結構。

### Why Fix Input/Output Channels?

講義裡有說到：

> 將每個 bottleneck 的輸入輸出 Channel 數固定為原本沒剪枝前的 Channel 數。

這個要求的核心問題在於權重複製時的維度匹配和結構一致性。

假設我們不固定 bottleneck 的輸出通道數，允許它隨著剪枝而改變，會發生什麼？

以 layer1 為例，原始模型的結構是：

```python
layer1_bottleneck0 (Projection): 64 → [64, 64, 256] → 256
layer1_bottleneck1 (Identity):   256 → [64, 64, 256] → 256
layer1_bottleneck2 (Identity):   256 → [64, 64, 256] → 256
```

如果允許第一個 bottleneck 的輸出通道數被剪枝（比如從 256 剪到 253），那麼新模型會變成：

```python
layer1_bottleneck0 (Projection): 64 → [64, 64, 253] → 253
layer1_bottleneck1 (Identity):   253 → [64, 64, ???] → ???
layer1_bottleneck2 (Identity):   ??? → [64, 64, ???] → ???
```

此時 Identity Shortcut 面臨兩個選擇：

**選擇 A：後續的 Identity bottleneck 也使用各自被剪枝後的通道數**

如果 layer1_bottleneck1 的輸出也被剪枝（假設剪到 223），那麼：

```
layer1_bottleneck1: 253 (輸入) → [64, 64, 223] → 223 (輸出)
```

這樣輸入 253、輸出 223，不符合 Identity Shortcut 的定義（輸入輸出通道數必須相同），必須添加 downsample 層將 253 投影到 223。但這樣 Identity Shortcut 就變成了 Projection Shortcut，違反了原始 ResNet 的設計理念。ResNet 的核心優勢就是透過 Identity Shortcut 讓梯度能夠直接傳遞，如果都變成 Projection，就會增加梯度消失或爆炸的風險。

**選擇 B：強制 Identity bottleneck 的輸出等於輸入**

為了保持 Identity 特性，讓後續 bottleneck 的輸出跟著前一個的輸出走：

```python
layer1_bottleneck1: 253 → [64, 64, 253] → 253
layer1_bottleneck2: 253 → [64, 64, 253] → 253
```

這樣雖然 Identity 特性保留了，但權重複製時會遇到嚴重問題。原始模型的結構是：

```python
old_model.layer1_bottleneck0.bn3: 256 channels
old_model.layer1_bottleneck1.bn3: 256 channels
old_model.layer1_bottleneck2.bn3: 256 channels
```

現在要複製到新模型：

```python
new_model.layer1_bottleneck0.bn3: 253 channels
new_model.layer1_bottleneck1.bn3: 253 channels
new_model.layer1_bottleneck2.bn3: 253 channels
```

問題在於，cfg_mask 記錄的是每個 BN 層各自的剪枝結果：

```python
cfg_mask[3]: 對應 bottleneck0.bn3，可能保留了其中 253 個通道
cfg_mask[6]: 對應 bottleneck1.bn3，可能保留了其中 223 個通道
cfg_mask[9]: 對應 bottleneck2.bn3，可能保留了其中 119 個通道
```

如果要讓所有 bottleneck 都輸出 253，就需要統一選擇策略。但每個 BN 層在 sparsity training 時學到的重要通道是不同的，強制使用同一組通道索引會丟失各層獨立學習到的稀疏性資訊。更麻煩的是，cfg_mask[6] 只有 223 個通道，根本不夠 253 個，這時該如何補足？用 topk 從原始的 256 個通道中再選？那 sparsity training 的意義何在？

固定輸入輸出通道數的設計解決了這些問題。具體來說：

1. 結構一致性

    每個 layer 內的所有 bottleneck 輸出通道數相同，Identity Shortcut 的輸入輸出自然相等，不需要額外的 Projection 層。

    ```python
    layer1: 所有 bottleneck 輸出都是 256
    layer2: 所有 bottleneck 輸出都是 512
    layer3: 所有 bottleneck 輸出都是 1024
    layer4: 所有 bottleneck 輸出都是 2048
    ```

2. 權重複製邏輯清晰

    原始模型和新模型在 bottleneck 輸出層的對應關係是一對一的：

    ```python
    # 原始模型
    old_model.layer1.*.bn3: 都是 256 channels

    # 新模型
    new_model.layer1.*.bn3: 都是 256 channels
    ```
    
    這樣在複製權重時，bn3 層可以直接全部複製過去，不需要進行通道選擇。剪枝只作用在 bn1 和 bn2（bottleneck 內部的降維和主要運算層），這些層才會根據 cfg_mask 來選擇要保留的通道。

3. 實作上的處理方式

    在 modelprune.ipynb 計算 cfg 的過程中，程式會對 bn3 進行特殊處理。雖然 cfg_mask 記錄了每個 BN 層的剪枝結果，但在建立新模型時，bn3 對應的 cfg 值會被強制設為固定值，而不是使用 cfg_mask 中記錄的剪枝後通道數。

    也就是說，cfg 的結構會是：

    ```python
    cfg = [bn1_pruned, bn2_pruned, 256,  # bottleneck0 的第三個值固定
           bn1_pruned, bn2_pruned, 256,  # bottleneck1 的第三個值固定
           bn1_pruned, bn2_pruned, 256,  # bottleneck2 的第三個值固定
           ...]
    ```

    這樣建立出來的新模型，bn3 的通道數就會和原始模型一樣，權重複製時就能直接對應過去。

因此，固定 bottleneck 的輸入輸出通道數至剪枝前的大小，是確保剪枝後模型能夠保持 ResNet 原始架構特性、維持權重複製邏輯清晰的關鍵設計。剪枝主要作用在 bn1 和 bn2，而 bn3 保持固定，這樣既能減少參數量和計算量，又能保持 Identity Shortcut 的結構優勢。

### The problem I encountered

最初實作 `resnet.py` 時，我確實注意到了講義中「請確保剪枝後的模型架構和原本一樣，該要是 Identity Shortcut 的部分就要是 Identity Shortcut，不能變成 Projection Shortcut」這個要求，因此在實作時讓每個 layer 內的所有 bottleneck 輸出通道數保持一致，避免 Identity Shortcut 因為輸入輸出通道數不同而被迫變成 Projection Shortcut。

然而，我卻忽略了另一個關鍵提示：「將每個 bottleneck 的輸入輸出 Channel 數固定為原本沒剪枝前的 Channel 數。」

我的初版實作直接讓所有 bottleneck 的 bn3 都使用 cfg 中記錄的剪枝後通道數：

```python
first_block_out_channels = [
    cfg[self.current_cfg_idx],      
    cfg[self.current_cfg_idx + 1],  
    cfg[self.current_cfg_idx + 2]   # 錯誤：直接使用 cfg 中的剪枝後通道數
]
```

這樣的實作雖然確保了同一個 layer 內的 bottleneck 輸出通道數一致（因為我讓後續的 Identity bottleneck 都繼承第一個 Projection bottleneck 的輸出），但這個「一致」的通道數是剪枝後的值，而不是原始的標準值。

以 layer1 為例，如果 cfg 記錄的剪枝結果是 `[64, 64, 255, 64, 64, 256, 64, 64, 256, ...]`，我的實作會產生：

```python
layer1_bottleneck0 (Projection): 64 → [64, 64, 255] → 255
layer1_bottleneck1 (Identity):   255 → [64, 64, 255] → 255
layer1_bottleneck2 (Identity):   255 → [64, 64, 255] → 255
```

表面上看起來 Identity Shortcut 的輸入輸出相等，結構似乎沒問題。但真正的問題出現在權重複製階段。

當我執行 `modelprune.ipynb` 進行權重複製時，程式需要將原始模型的權重複製到剪枝後的新模型。原始模型的 layer1 所有 bottleneck 輸出都是標準的 256 通道，但我建立的新模型輸出是 255 通道。這導致在複製 downsample 層的權重時，維度對不上：

```python
# 原始模型
old_model.layer1[0].downsample: Conv2d(64, 256, ...)

# 我的新模型
new_model.layer1[0].downsample: Conv2d(64, 255, ...)
```

為了讓程式能夠運作，我必須修改助教提供的權重複製程式碼，特別是處理 downsample 層的部分。但這樣做顯然是錯誤的，因為助教的程式碼假設 bottleneck 的輸出通道數是固定的標準值，不應該需要額外處理維度不匹配的問題。

重新閱讀講義並向助教請教後，我理解到問題的根源：講義要求固定的不是「讓同一個 layer 內的輸出一致」，而是「讓輸出固定為原始的標準通道數」。cfg 雖然記錄了 bn3 的剪枝結果，但在建立新模型時，這些值應該被忽略。

修正後的 `resnet.py` 實作如下：

```diff
+   original_out_channels = planes * block.expansion
+
    first_block_out_channels = [
        cfg[self.current_cfg_idx],      
        cfg[self.current_cfg_idx + 1],  
-       cfg[self.current_cfg_idx + 2]   
+       original_out_channels           # 固定為原始標準值，不使用 cfg
    ]
```

這樣修改後，layer1 的結構變成：

```python
layer1_bottleneck0 (Projection): 64 → [64, 64, 256] → 256
layer1_bottleneck1 (Identity):   256 → [64, 64, 256] → 256
layer1_bottleneck2 (Identity):   256 → [64, 64, 256] → 256
```

所有 bottleneck 的輸出都固定為標準的 256，與原始模型完全一致。這樣在權重複製時，downsample 層的維度自然對應，不需要修改助教的程式碼。剪枝只作用在 `bn1` 和 `bn2`，而 `bn3` 保持固定，這才是講義要求的正確實作方式。

## Sparsity Training Result

### Plot Train and Test Accuracy

![image](https://hackmd.io/_uploads/By2Bbo7Cgx.png)

從訓練曲線可以觀察到，模型在前 20 個 epoch 中快速收斂。在 Epoch 21 時學習率降低為原本的 0.1 倍，測試準確率出現明顯提升，從約 85% 跳升至接近 90%。之後模型持續穩定訓練，在 Epoch 30 再次降低學習率後準確率進一步提升並趨於穩定。最終在第 40 個 epoch，訓練準確率達到 95.7%，測試準確率達到 90.7%。整體而言，訓練過程穩定且收斂良好，訓練集與測試集的準確率差距約為 5%，顯示模型沒有嚴重的過擬合現象。

### Plot Scaling Factor Distribution

從 Scaling factor 分布圖可以看出，不同 $\lambda$ 值對 $\gamma$ 參數稀疏化有明顯的影響。當 $\lambda$ = 0 時，不使用 Sparsity Regularization，$\gamma$ 參數呈現接近正態分布的形態，中心集中在 0.9-1.0 附近，幾乎沒有參數接近零，這表示所有通道都被認為是重要的，無法進行有效的剪枝。

| ![image](https://hackmd.io/_uploads/ryKIWjQAlx.png) | ![image](https://hackmd.io/_uploads/S1tPWoXCxg.png) | ![image](https://hackmd.io/_uploads/SJfu-sXAxe.png) |
| :------: | :------: | :------: |
|      |      |     |

當 $\lambda$ = 1e-5 時，開始出現稀疏化效果，可以觀察到大量的 $\gamma$ 值向零靠攏，在接近 0 的位置形成明顯的高峰，同時仍有部分 $\gamma$ 值分散在其他數值範圍。這顯示 $L1$ 正則化開始發揮作用，迫使部分不重要的通道的 $\gamma$ 值趨近於零，但力度尚不足以達到極度稀疏的效果。

當 $\lambda$ = 1e-4 時，稀疏化效果最為顯著，幾乎所有的 $\gamma$ 值都集中在非常接近零的位置，形成一個極高且極窄的峰值。此時的分布表明絕大多數通道的 scaling factor 都被壓縮到接近零，這些通道對模型輸出的貢獻極小，可以在剪枝階段被安全地移除。這正是 $L1-norm$ 正則化的預期效果：透過懲罰 $\gamma$ 的絕對值，促使模型自動識別並抑制不重要的通道。

比較三個分布圖可以清楚看出，隨著 $\lambda$ 值增加，稀疏化程度顯著提升。$\lambda$ = 1e-4 在達到高度稀疏化的同時，仍保持了 90.7% 的測試準確率，證明這些被抑制的通道確實是冗餘的，移除它們不會顯著影響模型性能。

## Modify `modelprune.ipynb` and Result

### How I copied the original model weights

權重複製的關鍵在於利用 `cfg_mask` 來找出要保留的通道，然後把原始模型對應通道的權重複製到剪枝後的新模型。整個過程是逐層遍歷，根據層的類型採用不同的複製策略。

對於 BatchNorm2d 層，我先從 `end_mask` 中找出非零元素的 index，這些 index 代表在 sparsity training 後 $gamma$ 值大於 threshold 的通道，也就是要保留的通道：

```python
idx = torch.nonzero(end_mask).squeeze()
if idx.dim() == 0:
    idx = idx.unsqueeze(0)
idx = idx.cuda()
```

找到 index 後，就可以根據這些 index 從原始模型複製對應的參數到新模型：

```python
m1.weight.data.copy_(m0.weight.data[idx].clone())
m1.bias.data.copy_(m0.bias.data[idx].clone())
m1.running_mean.copy_(m0.running_mean[idx].clone())
m1.running_var.copy_(m0.running_var[idx].clone())
```

對於 Conv2d 層，複製比較複雜，因為需要同時處理輸入和輸出通道。輸入通道由前一層 BN 的 mask（`start_mask`）決定，輸出通道由下一層 BN 的 mask（`end_mask`）決定。程式會先把這些 mask 轉成 index，然後從原始權重中選出對應的部分：

```python
idx0 = np.squeeze(np.argwhere(np.asarray(start_mask.cpu().numpy())))
idx1 = np.squeeze(np.argwhere(np.asarray(end_mask.cpu().numpy())))

w = m0.weight.data[:, idx0, :, :].clone()    # 先選輸入通道
w = w[idx1, :, :, :].clone()                 # 再選輸出通道
m1.weight.data.copy_(w)
```

這樣就能把原始模型中對應通道的權重準確地複製到新模型的對應位置。對於 downsample 層，因為它不接 BN 層，所以直接整個複製過去。
Linear 層則只需要處理輸入通道，根據最後一個 BN 的 mask 來選擇：

```python
m1.weight.data.copy_(m0.weight.data[:, idx0].clone())
```

透過這樣的方式，剪枝後的模型就能繼承原始模型在重要通道上學到的權重，保留模型的性能。

### Test accuracy after pruning 50% and 90% channels

剪枝 50% 的通道後，模型在測試集上的準確率為 90.0%，相較於 sparsity training 完成後的 90.7%，僅下降了 0.7%。這顯示在中等剪枝率下，模型仍能保留大部分的性能，說明有一半的通道確實是冗餘的。

```bash
Test set: Accuracy: 9004/10000 (90.0%)

tensor(0.9004)
```

然而，當剪枝率提升到 90% 時，測試準確率大幅下降至 37.0%，損失了超過 50% 的準確率。這樣的劇烈下降是預期的，因為 90% 的剪枝率意味著模型只剩下 10% 的通道，大量重要的特徵表示能力被移除。不過，這正是接下來 fine-tuning 要解決的問題，透過重新訓練剪枝後的模型，讓剩餘的通道學習補償被移除通道的功能，以恢復模型的準確率。

```bash
Test set: Accuracy: 3704/10000 (37.0%)

tensor(0.3704)
```

### The problem I encountered

修正了 `resnet.py` 後，我以為問題已經解決，bottleneck 的輸出通道數都固定為標準值，權重複製應該能順利進行。然而，當我執行 `modelprune.ipynb` 時，卻又遇到了新的維度不匹配問題。

問題出在 `cfg_mask` 和新模型的通道數不一致。在 `modelprune.ipynb` 中，程式會對所有 BN 層（包括 bn3）計算哪些通道的 $\gamma$ 值大於 threshold，並記錄在 `cfg_mask` 中。以 layer1 的第一個 bottleneck 為例，如果 bn3 有 255 個通道的 $\gamma$ 值大於 threshold，`cfg_mask` 就會記錄這 255 個通道。

但問題是，我在 `resnet.py` 中已經把新模型的 bn3 固定為 256 通道。所以當權重複製程式嘗試用 `cfg_mask` 來選擇要複製的通道時，會發現：

```python
idx = torch.nonzero(end_mask).squeeze()  # 從 mask 找到 255 個 index
# 但新模型需要 256 個通道
m1.weight.data.shape[0]  # 256
```

`len(idx)` 是 255，但新模型需要 256 個通道，維度又對不上了。這個問題不只出現在 BN 層，Conv 層也會遇到相同的情況，因為 Conv 的輸出通道數是由下一層 BN 決定的。

為了解決這個問題，我在權重複製的程式碼中加入了檢查。對於 BN 層，當 mask 提供的通道數不足時，我改用 topk 從原始模型的所有通道中選出權重絕對值最大的通道：

```python
if len(idx) != m1.weight.data.shape[0]:
    _, top_indices = torch.topk(m0.weight.data.abs(), m1.weight.data.shape[0])
    idx = top_indices.sort()[0]
    
    # 更新 end_mask 以匹配實際選擇的 idx
    end_mask = torch.zeros(m0.weight.data.shape[0]).cuda()
    end_mask[idx] = 1.0
```

這樣做的邏輯是，既然 mask 記錄的資訊不足，那就直接從原始模型中挑選權重最大的通道，這些通道很可能是最重要的。同時，我也更新了 `end_mask`，確保後續的 Conv 層複製時能使用正確的 index。

對於 Conv 層，我採用類似的策略，但改用權重的 $L1-norm$ 來衡量通道的重要性：

```python
target_output_channels = m1.weight.data.shape[0]
if len(idx1) != target_output_channels:
    weight_temp = m0.weight.data[:, idx0, :, :].clone()
    weight_norm = weight_temp.view(weight_temp.shape[0], -1).abs().sum(dim=1)
    _, top_indices = torch.topk(weight_norm, target_output_channels)
    idx1, _ = torch.sort(top_indices)
    idx1 = idx1.cpu().numpy()
```

這樣計算每個輸出通道的權重 $L1-norm$，選出 norm 最大的通道，這些通道對輸出的貢獻最大，應該優先保留。

透過這些額外的檢查和處理，權重複製終於能順利進行。雖然這些檢查偏離了原本「完全依賴 `cfg_mask`」的設計，但在固定 bn3 通道數的前提下，這是必要的妥協。最終，剪枝後的模型成功建立並複製了權重，為後續的 fine-tuning 做好準備。

## Fine-tuning Result and Comparison

### Plot Train and Test Accuracy with the pruned 90% model

剪枝 90% 後的模型在 fine-tuning 過程中展現了良好的恢復能力。從訓練曲線可以看出，模型從剪枝後的 37% 測試準確率開始重新訓練，在前 10 個 epoch 中穩定上升。在 Epoch 10 時學習率降低，測試準確率出現明顯提升，從 85.6% 跳升至 89.7%，這和 sparsity training 時觀察到的現象類似。

![image](https://hackmd.io/_uploads/HJZ-Ue8Cle.png)

之後模型持續穩定訓練，準確率逐漸收斂。最終在第 20 個 epoch，訓練準確率達到 95.44%，測試準確率達到 90.42%，幾乎完全恢復到 sparsity training 完成後的 90.7%。這表示雖然移除了 90% 的通道，剩餘的 10% 通道透過 fine-tuning 仍能學習到足夠的特徵表示能力。

訓練集與測試集的準確率差距約 5%，顯示模型在大幅減少參數量的情況下，仍保持良好的泛化能力，沒有明顯的過擬合現象。

### Comparison with Original Model

| Model | Parameters | FLOPs | Test Accuracy |
|-------|------------|-------|---------------|
| Original Model (Sparsity Training) | 23.51M | 329M | 90.7% |
| Fine-tuned Model (90% Pruned) | 3.67M | 125M | 90.4% |
| **Reduction** | **84.4%** | **62.0%** | **-0.3%** |

從對比結果可以看出，經過 Network Slimming 和 fine-tuning 後，模型在大幅縮減參數量和計算量的同時，幾乎完全保留了原始性能。參數量減少了超過 80%，FLOPs 也降低了 60% 以上，但測試準確率僅下降了 0.3 個百分點。

這個結果驗證了 Network Slimming 的核心假設：深度神經網路中確實存在大量冗餘的通道，移除這些通道不會顯著影響模型的表現能力。透過 sparsity training 識別不重要的通道，再經過 fine-tuning 讓剩餘通道重新學習，就能在保持性能的前提下大幅壓縮模型。