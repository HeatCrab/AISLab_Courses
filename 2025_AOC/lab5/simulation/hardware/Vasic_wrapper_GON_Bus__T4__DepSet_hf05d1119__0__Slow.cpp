// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasic_wrapper.h for the primary calling header

#include "Vasic_wrapper__pch.h"
#include "Vasic_wrapper_GON_Bus__T4.h"
#include "Vasic_wrapper__Syms.h"

VL_ATTR_COLD void Vasic_wrapper_GON_Bus__T4___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus__0(Vasic_wrapper_GON_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GON_Bus__T4___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ID_scan_chain[8U] = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[0U] = vlSelfRef.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[1U] = vlSelfRef.__Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[2U] = vlSelfRef.__Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[3U] = vlSelfRef.__Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[4U] = vlSelfRef.__Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[5U] = vlSelfRef.__Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[6U] = vlSelfRef.__Vcellout__GON_MC__BRA__6__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[7U] = vlSelfRef.__Vcellout__GON_MC__BRA__7__KET____DOT__MC_i__id;
    vlSelfRef.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__6__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__7__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.__PVT__mc_valid = ((((((IData)(vlSelfRef.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                     & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                >> 7U))) 
                                    << 7U) | (((IData)(vlSelfRef.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                               & (IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                          >> 6U))) 
                                              << 6U)) 
                                  | ((((IData)(vlSelfRef.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                       & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                  >> 5U))) 
                                      << 5U) | (((IData)(vlSelfRef.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                            >> 4U))) 
                                                << 4U))) 
                                 | (((((IData)(vlSelfRef.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                       & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                  >> 3U))) 
                                      << 3U) | (((IData)(vlSelfRef.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                            >> 2U))) 
                                                << 2U)) 
                                    | ((((IData)(vlSelfRef.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                         & (IData)(
                                                   (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                    >> 1U))) 
                                        << 1U) | ((IData)(vlSelfRef.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                  & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid)))));
}

VL_ATTR_COLD void Vasic_wrapper_GON_Bus__T4___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus__0(Vasic_wrapper_GON_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GON_Bus__T4___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ID_scan_chain[8U] = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[0U] = vlSelfRef.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[1U] = vlSelfRef.__Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[2U] = vlSelfRef.__Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[3U] = vlSelfRef.__Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[4U] = vlSelfRef.__Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[5U] = vlSelfRef.__Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[6U] = vlSelfRef.__Vcellout__GON_MC__BRA__6__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[7U] = vlSelfRef.__Vcellout__GON_MC__BRA__7__KET____DOT__MC_i__id;
    vlSelfRef.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__6__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__7__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.__PVT__mc_valid = ((((((IData)(vlSelfRef.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                     & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                >> 0xfU))) 
                                    << 7U) | (((IData)(vlSelfRef.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                               & (IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                          >> 0xeU))) 
                                              << 6U)) 
                                  | ((((IData)(vlSelfRef.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                       & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                  >> 0xdU))) 
                                      << 5U) | (((IData)(vlSelfRef.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                            >> 0xcU))) 
                                                << 4U))) 
                                 | (((((IData)(vlSelfRef.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                       & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                  >> 0xbU))) 
                                      << 3U) | (((IData)(vlSelfRef.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                            >> 0xaU))) 
                                                << 2U)) 
                                    | ((((IData)(vlSelfRef.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                         & (IData)(
                                                   (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                    >> 9U))) 
                                        << 1U) | ((IData)(vlSelfRef.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                             >> 8U))))));
}

VL_ATTR_COLD void Vasic_wrapper_GON_Bus__T4___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus__0(Vasic_wrapper_GON_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GON_Bus__T4___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ID_scan_chain[8U] = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[0U] = vlSelfRef.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[1U] = vlSelfRef.__Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[2U] = vlSelfRef.__Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[3U] = vlSelfRef.__Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[4U] = vlSelfRef.__Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[5U] = vlSelfRef.__Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[6U] = vlSelfRef.__Vcellout__GON_MC__BRA__6__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[7U] = vlSelfRef.__Vcellout__GON_MC__BRA__7__KET____DOT__MC_i__id;
    vlSelfRef.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__6__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__7__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.__PVT__mc_valid = ((((((IData)(vlSelfRef.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                     & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                >> 0x17U))) 
                                    << 7U) | (((IData)(vlSelfRef.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                               & (IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                          >> 0x16U))) 
                                              << 6U)) 
                                  | ((((IData)(vlSelfRef.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                       & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                  >> 0x15U))) 
                                      << 5U) | (((IData)(vlSelfRef.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                            >> 0x14U))) 
                                                << 4U))) 
                                 | (((((IData)(vlSelfRef.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                       & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                  >> 0x13U))) 
                                      << 3U) | (((IData)(vlSelfRef.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                            >> 0x12U))) 
                                                << 2U)) 
                                    | ((((IData)(vlSelfRef.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                         & (IData)(
                                                   (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                    >> 0x11U))) 
                                        << 1U) | ((IData)(vlSelfRef.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                             >> 0x10U))))));
}

VL_ATTR_COLD void Vasic_wrapper_GON_Bus__T4___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus__0(Vasic_wrapper_GON_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GON_Bus__T4___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ID_scan_chain[8U] = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[0U] = vlSelfRef.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[1U] = vlSelfRef.__Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[2U] = vlSelfRef.__Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[3U] = vlSelfRef.__Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[4U] = vlSelfRef.__Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[5U] = vlSelfRef.__Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[6U] = vlSelfRef.__Vcellout__GON_MC__BRA__6__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[7U] = vlSelfRef.__Vcellout__GON_MC__BRA__7__KET____DOT__MC_i__id;
    vlSelfRef.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__6__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__7__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.__PVT__mc_valid = ((((((IData)(vlSelfRef.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                     & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                >> 0x1fU))) 
                                    << 7U) | (((IData)(vlSelfRef.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                               & (IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                          >> 0x1eU))) 
                                              << 6U)) 
                                  | ((((IData)(vlSelfRef.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                       & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                  >> 0x1dU))) 
                                      << 5U) | (((IData)(vlSelfRef.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                            >> 0x1cU))) 
                                                << 4U))) 
                                 | (((((IData)(vlSelfRef.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                       & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                  >> 0x1bU))) 
                                      << 3U) | (((IData)(vlSelfRef.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                            >> 0x1aU))) 
                                                << 2U)) 
                                    | ((((IData)(vlSelfRef.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                         & (IData)(
                                                   (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                    >> 0x19U))) 
                                        << 1U) | ((IData)(vlSelfRef.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                             >> 0x18U))))));
}

VL_ATTR_COLD void Vasic_wrapper_GON_Bus__T4___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus__0(Vasic_wrapper_GON_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GON_Bus__T4___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ID_scan_chain[8U] = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[0U] = vlSelfRef.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[1U] = vlSelfRef.__Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[2U] = vlSelfRef.__Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[3U] = vlSelfRef.__Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[4U] = vlSelfRef.__Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[5U] = vlSelfRef.__Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[6U] = vlSelfRef.__Vcellout__GON_MC__BRA__6__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[7U] = vlSelfRef.__Vcellout__GON_MC__BRA__7__KET____DOT__MC_i__id;
    vlSelfRef.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__6__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__7__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.__PVT__mc_valid = ((((((IData)(vlSelfRef.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                     & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                >> 0x27U))) 
                                    << 7U) | (((IData)(vlSelfRef.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                               & (IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                          >> 0x26U))) 
                                              << 6U)) 
                                  | ((((IData)(vlSelfRef.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                       & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                  >> 0x25U))) 
                                      << 5U) | (((IData)(vlSelfRef.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                            >> 0x24U))) 
                                                << 4U))) 
                                 | (((((IData)(vlSelfRef.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                       & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                  >> 0x23U))) 
                                      << 3U) | (((IData)(vlSelfRef.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                            >> 0x22U))) 
                                                << 2U)) 
                                    | ((((IData)(vlSelfRef.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                         & (IData)(
                                                   (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                    >> 0x21U))) 
                                        << 1U) | ((IData)(vlSelfRef.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                             >> 0x20U))))));
}

VL_ATTR_COLD void Vasic_wrapper_GON_Bus__T4___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus__0(Vasic_wrapper_GON_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GON_Bus__T4___stl_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ID_scan_chain[0U] = vlSelfRef.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[1U] = vlSelfRef.__Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[2U] = vlSelfRef.__Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[3U] = vlSelfRef.__Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[4U] = vlSelfRef.__Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[5U] = vlSelfRef.__Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[6U] = vlSelfRef.__Vcellout__GON_MC__BRA__6__KET____DOT__MC_i__id;
    vlSelfRef.__PVT__ID_scan_chain[7U] = vlSelfRef.__Vcellout__GON_MC__BRA__7__KET____DOT__MC_i__id;
    vlSelfRef.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__6__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0 
        = ((IData)(vlSelfRef.__Vcellout__GON_MC__BRA__7__KET____DOT__MC_i__id) 
           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X));
    vlSelfRef.__PVT__ID_scan_chain[8U] = vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__opsum_XID_scan_in;
    vlSelfRef.__PVT__mc_valid = ((((((IData)(vlSelfRef.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                     & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                >> 0x2fU))) 
                                    << 7U) | (((IData)(vlSelfRef.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                               & (IData)(
                                                         (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                          >> 0x2eU))) 
                                              << 6U)) 
                                  | ((((IData)(vlSelfRef.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                       & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                  >> 0x2dU))) 
                                      << 5U) | (((IData)(vlSelfRef.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                            >> 0x2cU))) 
                                                << 4U))) 
                                 | (((((IData)(vlSelfRef.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                       & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                  >> 0x2bU))) 
                                      << 3U) | (((IData)(vlSelfRef.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                 & (IData)(
                                                           (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                            >> 0x2aU))) 
                                                << 2U)) 
                                    | ((((IData)(vlSelfRef.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                         & (IData)(
                                                   (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                    >> 0x29U))) 
                                        << 1U) | ((IData)(vlSelfRef.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                  & (IData)(
                                                            (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                             >> 0x28U))))));
    vlSelfRef.master_ready = ((((((IData)(vlSelfRef.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                  & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__ready_out)) 
                                 << 7U) | (((IData)(vlSelfRef.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                            & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__ready_out)) 
                                           << 6U)) 
                               | ((((IData)(vlSelfRef.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__ready_out)) 
                                   << 5U) | (((IData)(vlSelfRef.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                              & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__ready_out)) 
                                             << 4U))) 
                              | (((((IData)(vlSelfRef.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__ready_out)) 
                                   << 3U) | (((IData)(vlSelfRef.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                              & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__ready_out)) 
                                             << 2U)) 
                                 | ((((IData)(vlSelfRef.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                      & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__ready_out)) 
                                     << 1U) | ((IData)(vlSelfRef.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                               & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__ready_out)))));
}
