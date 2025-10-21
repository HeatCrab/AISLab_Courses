from tvm.relay import dataflow_pattern as dfp
from tvm.relay import transform
from tvm.relay import qnn
from tvm import relay
import tvm
from tvm.relay.op.contrib.register import register_pattern_table

COMPILER_NAME = "DLA"

# Define the pattern for fusion
def fuse_conv2d_bias_add_relu():
    # Define the pattern for the operations to be fused
    i = dfp.wildcard()  # Input
    w = dfp.wildcard()  # Weight
    b = dfp.wildcard()  # Bias
    dequantized_i = dfp.is_op("qnn.dequantize")(i,dfp.wildcard(),dfp.wildcard())
    dequantized_w = dfp.is_op("qnn.dequantize")(w,dfp.wildcard(),dfp.wildcard())
    dequantized_b = dfp.is_op("qnn.dequantize")(b,dfp.wildcard(),dfp.wildcard())
    conv2d_op = dfp.is_op("nn.conv2d")(dequantized_i,dequantized_w)
    bias_add_op = dfp.is_op("nn.bias_add")(conv2d_op, dequantized_b)
    relu_op = dfp.is_op("nn.relu")(bias_add_op)
    quantize_op = dfp.is_op("qnn.quantize")(relu_op,dfp.wildcard(),dfp.wildcard())
    cast_op = dfp.is_op("cast")(quantize_op)  # Assuming requantize is a cast operation
    return cast_op

def fuse_conv2d_bias_add_relu_max_pool2d():
    # Define the pattern for the operations to be fused
    # Hint: match dequant(i), dequant(w), dequant(b) -> conv2d -> bias_add -> relu -> quant -> cast
    # When done, remove the following line

    raise NotImplementedError('You need to imeplement here')

def fuse_dense_add_relu():
    # Define the pattern for the operations to be fused
    # When done, remove the following line

    raise NotImplementedError('You need to imeplement here')

def fuse_dense_add():
    # Define the pattern for the operations to be fused
    # When done, remove the following line

    raise NotImplementedError('You need to imeplement here')

def fuse_flatten():
    # Define the pattern for the operations to be fused
    # Hint: match nn.batch_flatten -> quant -> cast
    # When done, remove the following line

    raise NotImplementedError('You need to imeplement here')

def quantize():
    # Hint: qnn.quantize -> cast
    # When done, remove the following line

    raise NotImplementedError('You need to imeplement here')

def dequantize():
    dequantize_op = dfp.is_op("qnn.dequantize")(dfp.wildcard(),dfp.wildcard(),dfp.wildcard())
    return dequantize_op

@register_pattern_table(COMPILER_NAME)
def  pattern_table():
    acc_pattern_tables = [
        (f"{COMPILER_NAME}.qconv2d_relu_maxpool", fuse_conv2d_bias_add_relu_max_pool2d()),
        (f"{COMPILER_NAME}.qconv2d_relu", fuse_conv2d_bias_add_relu()),
        (f"{COMPILER_NAME}.qlinear_relu", fuse_dense_add_relu()),
        (f"{COMPILER_NAME}.qlinear", fuse_dense_add()),
        (f"{COMPILER_NAME}.flatten", fuse_flatten()),
        (f"{COMPILER_NAME}.quantize", quantize()),
        (f"{COMPILER_NAME}.dequantize", dequantize()),
    ]
    return acc_pattern_tables

# Define the fusion function
def merge_composite_pass(mod):
    with tvm.transform.PassContext(opt_level=3):
        model_progress = dict()
        model_progress['origin'] = mod
        model_progress['MergeComposite'] = transform.MergeComposite(pattern_table())(model_progress['origin'])
        model_progress['AnnotateTarget'] = transform.AnnotateTarget([COMPILER_NAME])(model_progress['MergeComposite'])
        model_progress['MergeCompilerRegions'] = transform.MergeCompilerRegions()(model_progress['AnnotateTarget'])
        model_progress['PartitionGraph'] = transform.PartitionGraph()(model_progress['MergeCompilerRegions'])
    return (model_progress, model_progress['PartitionGraph'])
