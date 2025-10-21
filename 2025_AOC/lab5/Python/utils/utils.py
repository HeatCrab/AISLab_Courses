import tvm
import onnx
from tvm import relay

from tvm.micro import export_model_library_format

from tvm.relay.backend import Runtime
from tvm.contrib import cc as _cc
import os
from tvm import runtime as tvm_runtime
from tvm.target import Target

def load_onnx_model(model_path, input_name = "input", input_shapes = [1,3,32,32]):
    input_info = {input_name: input_shapes}
    onnx_model = onnx.load_model(model_path)
    relay_mod, params = relay.frontend.from_onnx(onnx_model,input_info)
    return relay_mod, params

def dump_relay_model(relay_model, path):
    with open(path, "w") as f:
        f.write(repr(relay_model))


def build_model(relay_model,mod_params,opts):

    runtime = Runtime("crt", {"system-lib": True})
    target = "llvm"

    file_format_str = "{name}_c.{ext}"
    with tvm.transform.PassContext(opt_level=3, config={"tir.disable_vectorize": True}):
        graph, lib, params = relay.build(relay_model, target=target, runtime=runtime, params=mod_params)

    print(lib)

    build_dir = os.path.abspath(opts.out_dir)
    if not os.path.isdir(build_dir):
        os.makedirs(build_dir)

    lib_file_name = os.path.join(build_dir, file_format_str.format(name="model", ext="tar"))
    lib.export_library(lib_file_name)

    # with open(
    #     os.path.join(build_dir, file_format_str.format(name="graph", ext="json")), "w"
    # ) as f_graph_json:
    #     f_graph_json.write(graph)
    # with open(
    #     os.path.join(build_dir, file_format_str.format(name="params", ext="bin")), "wb"
    # ) as f_params:
    #     f_params.write(tvm_runtime.save_param_dict(params))
