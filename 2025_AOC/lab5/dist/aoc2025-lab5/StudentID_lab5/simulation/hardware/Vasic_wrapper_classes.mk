# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vasic_wrapper.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vasic_wrapper \
	Vasic_wrapper___024root__DepSet_hc7f50bc6__0 \
	Vasic_wrapper___024root__DepSet_h96dbd89d__0 \
	Vasic_wrapper_PE__DepSet_h8ca1d622__0 \
	Vasic_wrapper_PE__DepSet_h8ca1d622__1 \
	Vasic_wrapper_PE__DepSet_h8ca1d622__2 \
	Vasic_wrapper_PE__DepSet_h8ca1d622__3 \
	Vasic_wrapper_PE__DepSet_h8ca1d622__4 \
	Vasic_wrapper_GIN_Bus__T4__DepSet_h849ebe82__0 \
	Vasic_wrapper_GON_Bus__T4__DepSet_hf05d1119__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vasic_wrapper__ConstPool_0 \
	Vasic_wrapper___024root__Slow \
	Vasic_wrapper___024root__DepSet_hc7f50bc6__0__Slow \
	Vasic_wrapper___024root__DepSet_h96dbd89d__0__Slow \
	Vasic_wrapper_PE__Slow \
	Vasic_wrapper_PE__DepSet_hef61c206__0__Slow \
	Vasic_wrapper_PE__DepSet_h8ca1d622__0__Slow \
	Vasic_wrapper_GIN_Bus__T4__Slow \
	Vasic_wrapper_GIN_Bus__T4__DepSet_h29500e2c__0__Slow \
	Vasic_wrapper_GIN_Bus__T4__DepSet_h849ebe82__0__Slow \
	Vasic_wrapper_GON_Bus__T4__Slow \
	Vasic_wrapper_GON_Bus__T4__DepSet_h41453ef8__0__Slow \
	Vasic_wrapper_GON_Bus__T4__DepSet_hf05d1119__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vasic_wrapper__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vasic_wrapper__Syms \
	Vasic_wrapper__Trace__0__Slow \
	Vasic_wrapper__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
