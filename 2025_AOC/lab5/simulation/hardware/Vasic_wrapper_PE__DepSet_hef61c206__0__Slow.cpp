// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasic_wrapper.h for the primary calling header

#include "Vasic_wrapper__pch.h"
#include "Vasic_wrapper_PE.h"

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ifmap_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                     << 2U) | (IData)(vlSelfRef.__PVT__count_input_ch));
    vlSelfRef.__PVT__filter_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                      << 4U) | (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                 << 2U) 
                                                | (IData)(vlSelfRef.__PVT__count_input_ch)));
    vlSelfRef.__PVT__index_0 = ((1U == (IData)(vlSelfRef.__PVT__cs))
                                 ? (IData)(vlSelfRef.__PVT__filter_index)
                                 : (IData)(vlSelfRef.__PVT__ifmap_index));
    vlSelfRef.__PVT__mul_res = (0xffffU & VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, 
                                                                       ((0xbU 
                                                                         >= (IData)(vlSelfRef.__PVT__ifmap_index))
                                                                         ? 
                                                                        vlSelfRef.__PVT__ifmap_spad
                                                                        [vlSelfRef.__PVT__ifmap_index]
                                                                         : 0U))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, 
                                                                       ((0x2fU 
                                                                         >= (IData)(vlSelfRef.__PVT__filter_index))
                                                                         ? 
                                                                        vlSelfRef.__PVT__filter_spad
                                                                        [vlSelfRef.__PVT__filter_index]
                                                                         : 0U)))));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ifmap_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                     << 2U) | (IData)(vlSelfRef.__PVT__count_input_ch));
    vlSelfRef.__PVT__filter_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                      << 4U) | (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                 << 2U) 
                                                | (IData)(vlSelfRef.__PVT__count_input_ch)));
    vlSelfRef.ifmap_ready = ((2U == (IData)(vlSelfRef.__PVT__cs)) 
                             | (6U == (IData)(vlSelfRef.__PVT__cs)));
    vlSelfRef.__PVT__index_0 = ((1U == (IData)(vlSelfRef.__PVT__cs))
                                 ? (IData)(vlSelfRef.__PVT__filter_index)
                                 : (IData)(vlSelfRef.__PVT__ifmap_index));
    vlSelfRef.__PVT__mul_res = (0xffffU & VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, 
                                                                       ((0xbU 
                                                                         >= (IData)(vlSelfRef.__PVT__ifmap_index))
                                                                         ? 
                                                                        vlSelfRef.__PVT__ifmap_spad
                                                                        [vlSelfRef.__PVT__ifmap_index]
                                                                         : 0U))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, 
                                                                       ((0x2fU 
                                                                         >= (IData)(vlSelfRef.__PVT__filter_index))
                                                                         ? 
                                                                        vlSelfRef.__PVT__filter_spad
                                                                        [vlSelfRef.__PVT__filter_index]
                                                                         : 0U)))));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ifmap_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                     << 2U) | (IData)(vlSelfRef.__PVT__count_input_ch));
    vlSelfRef.__PVT__filter_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                      << 4U) | (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                 << 2U) 
                                                | (IData)(vlSelfRef.__PVT__count_input_ch)));
    vlSelfRef.ifmap_ready = ((2U == (IData)(vlSelfRef.__PVT__cs)) 
                             | (6U == (IData)(vlSelfRef.__PVT__cs)));
    vlSelfRef.opsum = ((5U == (IData)(vlSelfRef.__PVT__cs))
                        ? vlSelfRef.__PVT__ofmap_spad
                       [vlSelfRef.__PVT__count_ofmap_ch]
                        : 0U);
    vlSelfRef.__PVT__index_0 = ((1U == (IData)(vlSelfRef.__PVT__cs))
                                 ? (IData)(vlSelfRef.__PVT__filter_index)
                                 : (IData)(vlSelfRef.__PVT__ifmap_index));
    vlSelfRef.__PVT__mul_res = (0xffffU & VL_MULS_III(16, 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, 
                                                                       ((0xbU 
                                                                         >= (IData)(vlSelfRef.__PVT__ifmap_index))
                                                                         ? 
                                                                        vlSelfRef.__PVT__ifmap_spad
                                                                        [vlSelfRef.__PVT__ifmap_index]
                                                                         : 0U))), 
                                                      (0xffffU 
                                                       & VL_EXTENDS_II(16,8, 
                                                                       ((0x2fU 
                                                                         >= (IData)(vlSelfRef.__PVT__filter_index))
                                                                         ? 
                                                                        vlSelfRef.__PVT__filter_spad
                                                                        [vlSelfRef.__PVT__filter_index]
                                                                         : 0U)))));
}

VL_ATTR_COLD void Vasic_wrapper_PE___ctor_var_reset(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___ctor_var_reset\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->PE_en = VL_RAND_RESET_I(1);
    vlSelf->i_config = VL_RAND_RESET_I(11);
    vlSelf->ifmap = VL_RAND_RESET_I(32);
    vlSelf->filter = VL_RAND_RESET_I(32);
    vlSelf->ipsum = VL_RAND_RESET_I(32);
    vlSelf->ifmap_valid = VL_RAND_RESET_I(1);
    vlSelf->filter_valid = VL_RAND_RESET_I(1);
    vlSelf->ipsum_valid = VL_RAND_RESET_I(1);
    vlSelf->opsum_ready = VL_RAND_RESET_I(1);
    vlSelf->opsum = VL_RAND_RESET_I(32);
    vlSelf->ifmap_ready = VL_RAND_RESET_I(1);
    vlSelf->filter_ready = VL_RAND_RESET_I(1);
    vlSelf->ipsum_ready = VL_RAND_RESET_I(1);
    vlSelf->opsum_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->__PVT__ifmap_spad[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 48; ++__Vi0) {
        vlSelf->__PVT__filter_spad[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__ofmap_spad[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__count_filt_col = VL_RAND_RESET_I(2);
    vlSelf->__PVT__input_ch = VL_RAND_RESET_I(2);
    vlSelf->__PVT__count_input_ch = VL_RAND_RESET_I(2);
    vlSelf->__PVT__ofmap_col = VL_RAND_RESET_I(5);
    vlSelf->__PVT__count_ofmap_col = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ofmap_ch = VL_RAND_RESET_I(2);
    vlSelf->__PVT__count_ofmap_ch = VL_RAND_RESET_I(2);
    vlSelf->__PVT__operation_mode = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_ipsum = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ifmap_index = VL_RAND_RESET_I(4);
    vlSelf->__PVT__filter_index = VL_RAND_RESET_I(6);
    vlSelf->__PVT__index_0 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__mul_res = VL_RAND_RESET_I(16);
    vlSelf->__PVT__add_res = VL_RAND_RESET_I(32);
    vlSelf->__PVT__i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs = VL_RAND_RESET_I(4);
    vlSelf->__PVT__ns = VL_RAND_RESET_I(4);
    vlSelf->__PVT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk2__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vlvbound_h652caa15__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vlvbound_h94c06f97__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vlvbound_h3265d838__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vlvbound_h136a5f52__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vlvbound_h88de6bbc__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vlvbound_h3953f0de__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vlvbound_h2357e037__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vlvbound_hbb266322__0 = VL_RAND_RESET_I(8);
}
