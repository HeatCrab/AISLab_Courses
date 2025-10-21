// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VASIC_WRAPPER__SYMS_H_
#define VERILATED_VASIC_WRAPPER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vasic_wrapper.h"

// INCLUDE MODULE CLASSES
#include "Vasic_wrapper___024root.h"
#include "Vasic_wrapper_PE.h"
#include "Vasic_wrapper_GIN_Bus__T4.h"
#include "Vasic_wrapper_GON_Bus__T4.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vasic_wrapper__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vasic_wrapper* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vasic_wrapper___024root        TOP;
    Vasic_wrapper_GIN_Bus__T4      TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4      TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4      TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4      TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4      TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4      TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4      TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4      TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4      TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4      TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4      TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4      TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4      TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4      TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4      TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4      TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4      TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus;
    Vasic_wrapper_GIN_Bus__T4      TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus;
    Vasic_wrapper_GON_Bus__T4      TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus;
    Vasic_wrapper_GON_Bus__T4      TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus;
    Vasic_wrapper_GON_Bus__T4      TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus;
    Vasic_wrapper_GON_Bus__T4      TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus;
    Vasic_wrapper_GON_Bus__T4      TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus;
    Vasic_wrapper_GON_Bus__T4      TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE;
    Vasic_wrapper_PE               TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE;

    // CONSTRUCTORS
    Vasic_wrapper__Syms(VerilatedContext* contextp, const char* namep, Vasic_wrapper* modelp);
    ~Vasic_wrapper__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
