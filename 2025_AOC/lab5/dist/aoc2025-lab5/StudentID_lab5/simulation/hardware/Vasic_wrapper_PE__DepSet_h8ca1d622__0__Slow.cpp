// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasic_wrapper.h for the primary calling header

#include "Vasic_wrapper__pch.h"
#include "Vasic_wrapper_PE.h"
#include "Vasic_wrapper__Syms.h"

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((1U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 
                                                (((IData)(vlSelfRef.__PVT__count_ofmap_col) 
                                                  == (IData)(vlSelfRef.__PVT__ofmap_col))
                                                  ? 0U
                                                  : 6U)
                                                 : 5U)
                                             : (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid) 
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
                                             : (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((2U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 1U)) 
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
                                                          >> 1U)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                                  >> 1U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                                   >> 1U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 1U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[1U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((4U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 2U)) 
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
                                                          >> 2U)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                                  >> 2U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                                   >> 2U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 2U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[2U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((8U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 3U)) 
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
                                                          >> 3U)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                                  >> 3U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                                   >> 3U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 3U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[3U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((0x10U 
                                              & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 4U)) 
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
                                                          >> 4U)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                                  >> 4U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                                   >> 4U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 4U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[4U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((0x20U 
                                              & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 5U)) 
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
                                                          >> 5U)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                                  >> 5U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                                   >> 5U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 5U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[5U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((0x40U 
                                              & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 6U)) 
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
                                                          >> 6U)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                                  >> 6U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                                   >> 6U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 6U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[6U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((0x80U 
                                              & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 7U)) 
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
                                                          >> 7U)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                                  >> 7U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
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
                                                            >> 7U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[7U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((1U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 8U)) 
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
                                                          >> 8U)) 
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
                                             : (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 8U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[8U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((2U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 9U)) 
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
                                                          >> 9U)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                                  >> 1U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                                   >> 1U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 9U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[9U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((4U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0xaU)) 
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
                                                          >> 0xaU)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                                  >> 2U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                                   >> 2U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0xaU)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xaU]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((8U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0xbU)) 
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
                                                          >> 0xbU)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                                  >> 3U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                                   >> 3U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0xbU)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xbU]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((0x10U 
                                              & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0xcU)) 
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
                                                          >> 0xcU)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                                  >> 4U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                                   >> 4U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0xcU)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xcU]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((0x20U 
                                              & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0xdU)) 
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
                                                          >> 0xdU)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                                  >> 5U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                                   >> 5U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0xdU)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xdU]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((0x40U 
                                              & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0xeU)) 
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
                                                          >> 0xeU)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                                  >> 6U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                                   >> 6U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0xeU)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xeU]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((0x80U 
                                              & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0xfU)) 
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
                                                          >> 0xfU)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                                  >> 7U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
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
                                                            >> 0xfU)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xfU]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((1U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x10U)) 
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
                                                          >> 0x10U)) 
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
                                             : (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x10U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x10U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((2U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x11U)) 
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
                                                          >> 0x11U)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                                  >> 1U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                                   >> 1U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x11U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x11U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((4U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x12U)) 
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
                                                          >> 0x12U)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                                  >> 2U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                                   >> 2U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x12U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x12U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((8U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x13U)) 
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
                                                          >> 0x13U)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                                  >> 3U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                                   >> 3U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x13U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x13U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((0x10U 
                                              & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x14U)) 
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
                                                          >> 0x14U)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                                  >> 4U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                                   >> 4U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x14U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x14U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((0x20U 
                                              & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x15U)) 
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
                                                          >> 0x15U)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                                  >> 5U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                                   >> 5U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x15U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x15U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((0x40U 
                                              & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x16U)) 
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
                                                          >> 0x16U)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                                  >> 6U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                                   >> 6U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x16U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x16U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((0x80U 
                                              & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x17U)) 
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
                                                          >> 0x17U)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                                  >> 7U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
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
                                                            >> 0x17U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x17U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((1U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x18U)) 
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
                                                          >> 0x18U)) 
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
                                             : (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x18U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x18U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((2U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x19U)) 
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
                                                          >> 0x19U)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                                  >> 1U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                                   >> 1U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x19U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x19U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((4U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x1aU)) 
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
                                                          >> 0x1aU)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                                  >> 2U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                                   >> 2U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x1aU)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1aU]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((8U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x1bU)) 
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
                                                          >> 0x1bU)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                                  >> 3U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                                   >> 3U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x1bU)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1bU]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((0x10U 
                                              & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x1cU)) 
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
                                                          >> 0x1cU)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                                  >> 4U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                                   >> 4U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x1cU)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1cU]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((0x20U 
                                              & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x1dU)) 
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
                                                          >> 0x1dU)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                                  >> 5U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                                   >> 5U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x1dU)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1dU]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((0x40U 
                                              & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x1eU)) 
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
                                                          >> 0x1eU)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                                  >> 6U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                                   >> 6U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x1eU)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1eU]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((0x80U 
                                              & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x1fU)) 
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
                                                          >> 0x1fU)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                                  >> 7U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
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
                                                            >> 0x1fU)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1fU]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((1U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x20U)) 
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
                                                          >> 0x20U)) 
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
                                             : (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x20U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x20U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((2U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x21U)) 
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
                                                          >> 0x21U)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                                  >> 1U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                                   >> 1U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x21U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x21U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((4U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x22U)) 
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
                                                          >> 0x22U)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                                  >> 2U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                                   >> 2U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x22U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x22U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((8U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x23U)) 
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
                                                          >> 0x23U)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                                  >> 3U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                                   >> 3U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x23U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x23U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((0x10U 
                                              & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x24U)) 
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
                                                          >> 0x24U)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                                  >> 4U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                                   >> 4U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x24U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x24U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((0x20U 
                                              & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x25U)) 
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
                                                          >> 0x25U)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                                  >> 5U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                                   >> 5U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x25U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x25U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((0x40U 
                                              & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x26U)) 
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
                                                          >> 0x26U)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                                  >> 6U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                                   >> 6U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x26U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x26U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((0x80U 
                                              & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x27U)) 
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
                                                          >> 0x27U)) 
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
                                             : ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                                  >> 7U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
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
                                                            >> 0x27U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x27U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((1U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x28U)) 
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
                                                          >> 0x28U)) 
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
                                             : (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x28U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x28U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((2U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x29U)) 
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
                                                          >> 0x29U)) 
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
                                                  >> 1U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid) 
                                                   >> 1U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x29U)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x29U]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((4U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x2aU)) 
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
                                                          >> 0x2aU)) 
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
                                                  >> 2U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid) 
                                                   >> 2U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x2aU)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2aU]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((8U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x2bU)) 
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
                                                          >> 0x2bU)) 
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
                                                  >> 3U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid) 
                                                   >> 3U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x2bU)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2bU]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((0x10U 
                                              & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x2cU)) 
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
                                                          >> 0x2cU)) 
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
                                                  >> 4U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid) 
                                                   >> 4U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x2cU)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2cU]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((0x20U 
                                              & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x2dU)) 
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
                                                          >> 0x2dU)) 
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
                                                  >> 5U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid) 
                                                   >> 5U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x2dU)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2dU]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ns = ((8U & (IData)(vlSelfRef.__PVT__cs))
                            ? 0U : ((4U & (IData)(vlSelfRef.__PVT__cs))
                                     ? ((2U & (IData)(vlSelfRef.__PVT__cs))
                                         ? ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? 0U : 
                                            ((0x40U 
                                              & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid))
                                              ? 3U : 6U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                                          >> 0x2eU)) 
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
                                                          >> 0x2eU)) 
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
                                                  >> 6U) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__count_filt_col)))
                                                 ? 3U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelfRef.__PVT__cs))
                                             ? (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid) 
                                                   >> 6U) 
                                                  & (2U 
                                                     == (IData)(vlSelfRef.__PVT__count_filt_col))) 
                                                 & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                    == (IData)(vlSelfRef.__PVT__ofmap_ch)))
                                                 ? 2U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                            >> 0x2eU)))
                                                 ? 1U
                                                 : 0U)))));
    vlSelfRef.__PVT__add_res = (vlSelfRef.__PVT__ofmap_spad
                                [vlSelfRef.__PVT__count_ofmap_ch] 
                                + ((3U == (IData)(vlSelfRef.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSelfRef.__PVT__mul_res))
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2eU]));
}

VL_ATTR_COLD void Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1\n"); );
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
