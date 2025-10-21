// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasic_wrapper.h for the primary calling header

#include "Vasic_wrapper__pch.h"
#include "Vasic_wrapper_PE.h"
#include "Vasic_wrapper__Syms.h"

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2fU]));
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__2\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((0x80U 
                                              & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x2fU)) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 
                                                (((IData)(vlSelfRef.__PVT__count_ofmap_col) 
                                                  == (IData)(vlSelfRef.__PVT__ofmap_col))
                                                  ? 0U
                                                  : 6U)
                                                 : 5U)
                                             : (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                                          >> 0x2fU)) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 5U
                                                 : 4U)))
                                     : ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? ((((2U 
                                                   == (IData)(vlSelfRef.__PVT__count_filt_col)) 
                                                  & ((IData)(vlSelfRef.__PVT__count_input_ch) 
                                                     == (IData)(vlSelfRef.__PVT__input_ch))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 4U
                                                 : 3U)
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid) 
                                                  >> 7U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid) 
                                                   >> 7U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x2fU)))
                                                 ? 1U
                                                 : 0U)))));
}
