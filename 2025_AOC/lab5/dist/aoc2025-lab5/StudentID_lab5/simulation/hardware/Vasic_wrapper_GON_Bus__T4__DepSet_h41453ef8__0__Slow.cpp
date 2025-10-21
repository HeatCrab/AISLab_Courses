// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasic_wrapper.h for the primary calling header

#include "Vasic_wrapper__pch.h"
#include "Vasic_wrapper_GON_Bus__T4.h"

VL_ATTR_COLD void Vasic_wrapper_GON_Bus__T4___eval_initial__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus(Vasic_wrapper_GON_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GON_Bus__T4___eval_initial__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__select_data[0U] = 0U;
}

VL_ATTR_COLD void Vasic_wrapper_GON_Bus__T4___ctor_var_reset(Vasic_wrapper_GON_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GON_Bus__T4___ctor_var_reset\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->tag = VL_RAND_RESET_I(4);
    vlSelf->master_valid = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(256, vlSelf->master_data);
    vlSelf->master_ready = VL_RAND_RESET_I(8);
    vlSelf->slave_valid = VL_RAND_RESET_I(1);
    vlSelf->slave_ready = VL_RAND_RESET_I(1);
    vlSelf->slave_data = VL_RAND_RESET_I(32);
    vlSelf->set_id = VL_RAND_RESET_I(1);
    vlSelf->ID_scan_in = VL_RAND_RESET_I(4);
    vlSelf->ID_scan_out = VL_RAND_RESET_I(4);
    vlSelf->__PVT__mc_valid = VL_RAND_RESET_I(8);
    vlSelf->__PVT__select_valid = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__PVT__select_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__PVT__ID_scan_chain[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id = VL_RAND_RESET_I(4);
    vlSelf->__Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id = VL_RAND_RESET_I(4);
    vlSelf->__Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id = VL_RAND_RESET_I(4);
    vlSelf->__Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id = VL_RAND_RESET_I(4);
    vlSelf->__Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id = VL_RAND_RESET_I(4);
    vlSelf->__Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id = VL_RAND_RESET_I(4);
    vlSelf->__Vcellout__GON_MC__BRA__6__KET____DOT__MC_i__id = VL_RAND_RESET_I(4);
    vlSelf->__Vcellout__GON_MC__BRA__7__KET____DOT__MC_i__id = VL_RAND_RESET_I(4);
    vlSelf->GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 = VL_RAND_RESET_I(1);
    vlSelf->GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 = VL_RAND_RESET_I(1);
    vlSelf->GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 = VL_RAND_RESET_I(1);
    vlSelf->GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 = VL_RAND_RESET_I(1);
    vlSelf->GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 = VL_RAND_RESET_I(1);
    vlSelf->GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 = VL_RAND_RESET_I(1);
    vlSelf->GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 = VL_RAND_RESET_I(1);
    vlSelf->GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 = VL_RAND_RESET_I(1);
}
