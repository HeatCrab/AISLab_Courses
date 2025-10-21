// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasic_wrapper.h for the primary calling header

#include "Vasic_wrapper__pch.h"
#include "Vasic_wrapper_GIN_Bus__T4.h"

VL_ATTR_COLD void Vasic_wrapper_GIN_Bus__T4___ctor_var_reset(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___ctor_var_reset\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->tag = VL_RAND_RESET_I(4);
    vlSelf->master_valid = VL_RAND_RESET_I(1);
    vlSelf->master_data = VL_RAND_RESET_I(32);
    vlSelf->master_ready = VL_RAND_RESET_I(1);
    vlSelf->slave_ready = VL_RAND_RESET_I(8);
    vlSelf->slave_valid = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(256, vlSelf->slave_data);
    vlSelf->set_id = VL_RAND_RESET_I(1);
    vlSelf->ID_scan_in = VL_RAND_RESET_I(4);
    vlSelf->ID_scan_out = VL_RAND_RESET_I(4);
    vlSelf->__PVT__valid_mask = VL_RAND_RESET_I(8);
    vlSelf->__PVT__mc_valid = VL_RAND_RESET_I(8);
    vlSelf->__PVT__mc_ready = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__PVT__ID_scan_chain[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__PVT__j = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id = VL_RAND_RESET_I(4);
    vlSelf->__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id = VL_RAND_RESET_I(4);
    vlSelf->__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id = VL_RAND_RESET_I(4);
    vlSelf->__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id = VL_RAND_RESET_I(4);
    vlSelf->__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id = VL_RAND_RESET_I(4);
    vlSelf->__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id = VL_RAND_RESET_I(4);
    vlSelf->__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id = VL_RAND_RESET_I(4);
    vlSelf->__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id = VL_RAND_RESET_I(4);
}
