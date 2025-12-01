# Lab4 - Homework Template
### 1. About Knowledge Distillation (15%)
- What Modes of Distillation is used in this Lab ?

    本次 Lab 使用的是 **Offline Distillation**。在這種模式下，teacher model 會先完成 training 並固定參數，然後 student model 再從已訓練好的 teacher 學習知識。這種方式的優點是 teacher 和 student 的訓練過程完全獨立，student 可以直接利用已經優化好的 teacher 輸出作為 learning target。

- What role do logits play in knowledge distillation? What effect does a higher temperature parameter have on logits conversion ?

    Logits 在 knowledge distillation 中扮演產生 **soft targets** 的角色。相比於 hard labels（one-hot encoding），logits 經過 softmax 轉換後的 soft targets 包含了類別間的 similarity 資訊，讓 student 不只學到正確答案，也能學到 teacher 對不同類別的 confidence distribution。

    當溫度參數 T 越高時，softmax 輸出會變得**更平滑（softer）**。數學上，$\text{softmax}(z_i / T) = \frac{e^{z_i/T}}{\sum_j e^{z_j/T}}$，T 增大會減小 logits 的相對差異，使得原本機率很小的類別也能獲得較明顯的機率值。這樣可以讓 student 學習到更多 teacher 對 class relationships 的細微認知。

- In Feature-Based Knowledge Distillation, from which parts of the Teacher model do we extract features for knowledge transfer?

    在 Feature-Based Knowledge Distillation 中，我們從 teacher model 的 **intermediate hidden layers**（中間隱藏層）extract features 進行 knowledge transfer。這些中間層的 feature representations 包含了不同抽象程度的 hierarchical information，讓 student 不只模仿 teacher 的最終輸出，還能學習 teacher 內部的 feature learning 過程。透過對齊中間層 features，student 可以獲得更豐富的知識，通常能獲得比單純使用 response-based KD 更好的效果。

### 2. Response-Based KD (30%)

Please explain the following:
- How you choose the Temperature and alpha?
- How you design the loss function?

我選擇 **T=3, α=0.5**。Temperature 參數控制 softmax 的平滑度，較高的 T 能產生更軟的機率分布，揭露 teacher 對不同 classes 之間的 relationships。T=3 在保留豐富的 class relationship 資訊與維持 training stability 之間取得平衡。α 參數則平衡 distillation loss 與 classification loss 的重要性，α=0.5 讓 student 同時向 teacher 學習 soft targets，也保持對 ground truth 的學習能力。

Loss function 設計如下：

```python
def loss_re(student_logits, teacher_logits, labels):
    T = 3
    alpha = 0.5

    soft_loss = nn.KLDivLoss(reduction='batchmean')(
        F.log_softmax(student_logits/T, dim=1),
        F.softmax(teacher_logits/T, dim=1)
    ) * (T*T)
    hard_loss = nn.CrossEntropyLoss()(student_logits, labels)

    loss = alpha * soft_loss + (1 - alpha) * hard_loss
    return loss
```

結合兩種 loss：Distillation loss 使用 KL divergence 計算 student 和 teacher 在溫度 T 下的 softmax 輸出差異，乘以 $T^2$ 確保不同溫度下 gradient 的一致性；Hard loss 則使用標準的 cross-entropy 計算 student 輸出與 ground truth 的差異。最終 loss 為兩者的加權組合。

### 3. Feature-based KD (30%)

Please explain the following:
- How you extract features from the choosing intermediate layers?
- How you design the loss function?

在 feature extraction 方面，我最初選擇提取 **layer2, layer3, layer4** 的 features，參考 tmp.md 中較深層的 features 能提供更高階的 abstract information。然而實作時發現 ResNet18 和 ResNet50 在這些層的 dimension 差異過大，connector layers 需要大幅度的通道數轉換（例如 512->2048），導致 training 不穩定。因此改為選擇 **layer1, layer2, layer3**，dimension 轉換相對平緩（64->256, 128->512, 256->1024），讓 student 從低階到中階 features 循序漸進地學習。

在 `ResNet` 的 `forward()` 中返回 `[feature1, feature2, feature3, feature4]`，並使用 connector layers 進行 dimension alignment：

```python
self.connector1 = nn.Sequential(
    nn.Conv2d(64, 256, kernel_size=1, bias=False),
    nn.BatchNorm2d(256),
)
self.connector2 = nn.Sequential(
    nn.Conv2d(128, 512, kernel_size=1, bias=False),
    nn.BatchNorm2d(512),
)
self.connector3 = nn.Sequential(
    nn.Conv2d(256, 1024, kernel_size=1, bias=False),
    nn.BatchNorm2d(1024),
)
```

Loss function 設計方面，我最初使用 **Direct Feature Matching**，直接計算 student 和 teacher features 的 MSE loss，但效果不佳，可能是因為兩個模型的 feature scale 差異過大。後來改用 **Normalized Feature Matching**，先對 features 進行 normalization 再計算距離，消除 scale 影響後效果明顯改善：

```python
def loss_fe(student_logits, student_feature, teacher_feature, labels,
            connector1, connector2, connector3):
    alpha = 0.1
    ce_loss = nn.CrossEntropyLoss()(student_logits, labels)
    fe_loss = 0.0

    s_feat1, s_feat2, s_feat3 = student_feature[0], student_feature[1], student_feature[2]
    t_feat1, t_feat2, t_feat3 = teacher_feature[0], teacher_feature[1], teacher_feature[2]

    s_trans1 = connector1(s_feat1)
    s_trans2 = connector2(s_feat2)
    s_trans3 = connector3(s_feat3)

    fe_loss += nn.MSELoss()(F.normalize(s_trans1, dim=1), F.normalize(t_feat1, dim=1))
    fe_loss += nn.MSELoss()(F.normalize(s_trans2, dim=1), F.normalize(t_feat2, dim=1))
    fe_loss += nn.MSELoss()(F.normalize(s_trans3, dim=1), F.normalize(t_feat3, dim=1))
    fe_loss = fe_loss / 3

    loss = alpha * fe_loss + (1 - alpha) * ce_loss
    return loss
```

α=0.1 讓模型主要關注 classification task（cross-entropy loss），feature distillation 作為 auxiliary objective。透過 `F.normalize` 將 features normalize，使模型專注於學習 features 的 direction 而非 absolute values，提升了 distillation 效果。

### 4. Comparison of student models w/ & w/o KD (5%)

Provide results according to the following structure:
|                            | loss     | accuracy |
| -------------------------- | -------- | -------- |
| Teacher from scratch       | 0.42     | 89.77%   |
| Student from scratch       | 0.46     | 84.90%   |
| Response-based student     | 1.17     | 85.10%   |
| Featured-based student     | 0.41     | 85.16%   |

### 5. Implementation Observations and Analysis (20%)
Based on the comparison results above:
- Did any KD method perform unexpectedly?
- What do you think are the reasons?
- If not, please share your observations during the implementation process, or what difficulties you encountered and how you solved them?

從實驗結果來看，**Response-based KD 的 loss 值異常偏高**（1.17），這是一個值得探討的現象。雖然 accuracy 有輕微提升（85.10% vs 84.90%），但 test loss 卻比 student from scratch 高出將近 3 倍，甚至遠高於 teacher model 的 0.42。

這個現象的主要原因是 **loss function 的計算方式差異**。Response-based KD 的 loss 結合了 soft loss（KL divergence）和 hard loss（cross-entropy），且 soft loss 乘以 $T^2 = 9$，導致總 loss 數值顯著放大。相比之下，student from scratch 只使用單純的 cross-entropy loss。因此兩者的 loss 值無法直接比較，應該主要關注 accuracy 作為性能指標。

另一個觀察是 **KD 帶來的 accuracy 提升相當有限**（0.2-0.26%）。我認為原因包括：

1. **Training epochs 不足**：Student model 和 distillation 都只訓練 10 epochs，而 teacher 訓練了 35 epochs。更多的 training time 可能讓 student 更充分地學習 teacher 的知識。

2. **Model capacity gap 較大**：Teacher (ResNet50, 23.5M parameters) 和 student (ResNet18, 11.2M parameters) 的參數量差距約 2 倍，student 的 capacity 可能不足以完全吸收 teacher 的知識。Teacher 達到 89.77% 而 student 只有 84.90%，這 5% 的 gap 較難僅靠 KD 彌補。

3. **Feature-based KD 的改進效果較好**：Feature-based KD (85.16%) 表現優於 response-based KD (85.10%)，且 loss 降到 0.41 接近 teacher 水準。這驗證了 feature distillation 能提供更豐富的 learning signals，讓 student 學習 teacher 的 internal representations，而非只是最終輸出。

整體而言，雖然 KD 的提升幅度不大，但在相同 training epochs 下確實能帶來性能改善，特別是 feature-based 方法。若要獲得更顯著的提升，可能需要增加 training time 或調整 hyperparameters（如 temperature, alpha, learning rate）。