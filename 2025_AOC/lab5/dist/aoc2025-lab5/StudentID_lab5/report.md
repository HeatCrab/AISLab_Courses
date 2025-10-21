# Lab 5 Homework Template

## HW 5.1 Codegen with TVM compiler (40%)
### Complete the python script (30%)
- Explain how you implement `visit_call()` in `codegen.py`

    > Answer here

### screen shot of Relay Graph using visuTVM (10%)
- Relay Graph before fuse PASS

    > ![Link to *.svg file]()

- Relay Graph after fuse PASS

    > ![Link to *.svg file]()

## HW 5.2 Simulation and Performance Analysis (50%)
### Inference model with CPU-only (25%)
- Screenshot the `test_full` result matrix, including Accuracy (%)

    > ![Link to screenshot image]()

- Screenshot the massif-visualizer memory graph result, and record the pick memory usage in the report.

    Memory Peak : ???

    > ![Link to screenshot image]()

### Inference model with DLA (25%)

- Fill the statistic data in to the sheet.

    | Layer | Operation             | Cycles   | Time(ns) | Memory read | Memory write |
    |-------|-----------------------|----------|----------|-------------|--------------|
    |   1   |qconv2d_relu_maxpool   |          |          |             |              |
    |   2   |qconv2d_relu_maxpool   |          |          |             |              |
    |   3   |qconv2d_relu           |          |          |             |              |
    |   4   |qconv2d_relu           |          |          |             |              |
    |   5   |qconv2d_relu_maxpool   |          |          |             |              |

- Bar chart of **Cycles per Layer**
    ```mermaid
    %%{init: {
    "themeVariables": {
        "xyChart": {
        "plotColorPalette": "#1783b5"
        }
    }
    }}%%
    xychart-beta
        title "Cycles per Layer"
        x-axis ["layer 1", "layer 2", "layer 3", "layer 4", "layer 5"]
        y-axis "Cycles"
        bar [0, 0, 0, 0, 0]
    ```

- Bar chart of **Memory read per Layer**
    ```mermaid
    %%{init: {
    "themeVariables": {
        "xyChart": {
        "plotColorPalette": "#17b55e"
        }
    }
    }}%%
    xychart-beta
        title "Memory read per Layer"
        x-axis ["layer 1", "layer 2", "layer 3", "layer 4", "layer 5"]
        y-axis "Memory read (Btyes)"
        bar [0, 0, 0, 0, 0]
    ```

- Bar chart of **Memory write per Layer**
    ```mermaid
    %%{init: {
    "themeVariables": {
        "xyChart": {
        "plotColorPalette": "#e4b311"
        }
    }
    }}%%
    xychart-beta
        title "Memory write per Layer"
        x-axis ["layer 1", "layer 2", "layer 3", "layer 4", "layer 5"]
        y-axis "Memory write (Btyes)"
        bar [0, 0, 0, 0, 0]
    ```

## Reflection (10%)
(more reflection, more credits)
