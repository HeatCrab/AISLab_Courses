// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasic_wrapper.h for the primary calling header

#include "Vasic_wrapper__pch.h"
#include "Vasic_wrapper_GON_Bus__T4.h"
#include "Vasic_wrapper__Syms.h"

void Vasic_wrapper_GON_Bus__T4___ctor_var_reset(Vasic_wrapper_GON_Bus__T4* vlSelf);

Vasic_wrapper_GON_Bus__T4::Vasic_wrapper_GON_Bus__T4(Vasic_wrapper__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vasic_wrapper_GON_Bus__T4___ctor_var_reset(this);
}

void Vasic_wrapper_GON_Bus__T4::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vasic_wrapper_GON_Bus__T4::~Vasic_wrapper_GON_Bus__T4() {
}
