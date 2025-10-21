// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasic_wrapper.h for the primary calling header

#include "Vasic_wrapper__pch.h"
#include "Vasic_wrapper_GIN_Bus__T4.h"
#include "Vasic_wrapper__Syms.h"

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.ARESETn) {
        if ((1U & (~ ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                      & (IData)(vlSelfRef.master_ready))))) {
            vlSelfRef.__PVT__j = 8U;
        }
        if (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
             & (IData)(vlSelfRef.master_ready))) {
            vlSelfRef.__PVT__valid_mask = 0U;
        } else {
            if ((1U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (1U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((2U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (2U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((4U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (4U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((8U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (8U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x10U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x10U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x20U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x20U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x40U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x40U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x80U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x80U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
        }
        if ((1U == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id 
                = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
        }
    } else {
        vlSelfRef.__PVT__valid_mask = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id = 0U;
    }
    vlSelfRef.__PVT__ID_scan_chain[0U] = vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[1U] = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[2U] = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[3U] = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[4U] = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[5U] = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[6U] = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[7U] = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ID_scan_chain[8U] = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__2\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mc_ready = (((((IData)((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                              >> 7U) 
                                             | ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id)))) 
                                    << 7U) | (0x40U 
                                              & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                                  << 6U) 
                                                 | (0xffffffc0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready))))) 
                                  | ((0x20U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                                << 5U) 
                                               | (0xffffffe0U 
                                                  & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready)))) 
                                     | (0x10U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                                  << 4U) 
                                                 | (0xfffffff0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready)))))) 
                                 | (((8U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                              != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                             << 3U) 
                                            | (0xfffffff8U 
                                               & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready)))) 
                                     | (4U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                               << 2U) 
                                              | (0xfffffffcU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready))))) 
                                    | ((2U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                               << 1U) 
                                              | (0xfffffffeU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready)))) 
                                       | (1U & (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                                | (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready))))));
    vlSelfRef.__PVT__mc_valid = (((((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                      == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                     & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid)) 
                                    << 7U) | ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                                == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                               & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid)) 
                                              << 6U)) 
                                  | (((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                        == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                       & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid)) 
                                      << 5U) | ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                                  == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid)) 
                                                << 4U))) 
                                 | ((((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                        == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                       & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid)) 
                                      << 3U) | ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                                  == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid)) 
                                                << 2U)) 
                                    | (((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                          == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                         & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid)) 
                                        << 1U) | (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                                   == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                                  & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid)))));
    vlSelfRef.master_ready = (0xffU == ((IData)(vlSelfRef.__PVT__mc_ready) 
                                        | (IData)(vlSelfRef.__PVT__valid_mask)));
    vlSelfRef.slave_valid = ((~ (IData)(vlSelfRef.__PVT__valid_mask)) 
                             & (IData)(vlSelfRef.__PVT__mc_valid));
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.ARESETn) {
        if ((1U & (~ (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                       >> 1U) & (IData)(vlSelfRef.master_ready))))) {
            vlSelfRef.__PVT__j = 8U;
        }
        if ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
              >> 1U) & (IData)(vlSelfRef.master_ready))) {
            vlSelfRef.__PVT__valid_mask = 0U;
        } else {
            if ((1U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (1U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((2U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (2U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((4U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (4U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((8U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (8U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x10U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x10U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x20U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x20U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x40U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x40U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x80U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x80U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
        }
        if ((1U == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id 
                = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
        }
    } else {
        vlSelfRef.__PVT__valid_mask = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id = 0U;
    }
    vlSelfRef.__PVT__ID_scan_chain[0U] = vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[1U] = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[2U] = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[3U] = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[4U] = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[5U] = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[6U] = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[7U] = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ID_scan_chain[8U] = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__2\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mc_ready = (((((IData)((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                              >> 7U) 
                                             | ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id)))) 
                                    << 7U) | (0x40U 
                                              & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                                  << 6U) 
                                                 | (0xffffffc0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready))))) 
                                  | ((0x20U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                                << 5U) 
                                               | (0xffffffe0U 
                                                  & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready)))) 
                                     | (0x10U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                                  << 4U) 
                                                 | (0xfffffff0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready)))))) 
                                 | (((8U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                              != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                             << 3U) 
                                            | (0xfffffff8U 
                                               & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready)))) 
                                     | (4U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                               << 2U) 
                                              | (0xfffffffcU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready))))) 
                                    | ((2U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                               << 1U) 
                                              | (0xfffffffeU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready)))) 
                                       | (1U & (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                                | (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready))))));
    vlSelfRef.__PVT__mc_valid = ((((0xffffff80U & (
                                                   (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                                     == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                                    << 7U) 
                                                   & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                                      << 6U))) 
                                   | (0xffffffc0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                        << 6U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                                  << 5U)))) 
                                  | ((0xffffffe0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                        << 5U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                                  << 4U))) 
                                     | (0xfffffff0U 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                            << 4U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                              << 3U))))) 
                                 | (((0xfffffff8U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                        << 3U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                                  << 2U))) 
                                     | (0xfffffffcU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                            << 2U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                              << 1U)))) 
                                    | ((0xfffffffeU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                            << 1U) 
                                           & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid))) 
                                       | (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                          & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                             >> 1U)))));
    vlSelfRef.master_ready = (0xffU == ((IData)(vlSelfRef.__PVT__mc_ready) 
                                        | (IData)(vlSelfRef.__PVT__valid_mask)));
    vlSelfRef.slave_valid = ((~ (IData)(vlSelfRef.__PVT__valid_mask)) 
                             & (IData)(vlSelfRef.__PVT__mc_valid));
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.ARESETn) {
        if ((1U & (~ (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                       >> 2U) & (IData)(vlSelfRef.master_ready))))) {
            vlSelfRef.__PVT__j = 8U;
        }
        if ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
              >> 2U) & (IData)(vlSelfRef.master_ready))) {
            vlSelfRef.__PVT__valid_mask = 0U;
        } else {
            if ((1U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (1U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((2U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (2U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((4U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (4U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((8U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (8U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x10U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x10U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x20U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x20U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x40U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x40U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x80U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x80U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
        }
        if ((1U == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id 
                = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
        }
    } else {
        vlSelfRef.__PVT__valid_mask = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id = 0U;
    }
    vlSelfRef.__PVT__ID_scan_chain[0U] = vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[1U] = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[2U] = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[3U] = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[4U] = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[5U] = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[6U] = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[7U] = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ID_scan_chain[8U] = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__2\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mc_ready = (((((IData)((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                              >> 7U) 
                                             | ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id)))) 
                                    << 7U) | (0x40U 
                                              & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                                  << 6U) 
                                                 | (0xffffffc0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready))))) 
                                  | ((0x20U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                                << 5U) 
                                               | (0xffffffe0U 
                                                  & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready)))) 
                                     | (0x10U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                                  << 4U) 
                                                 | (0xfffffff0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready)))))) 
                                 | (((8U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                              != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                             << 3U) 
                                            | (0xfffffff8U 
                                               & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready)))) 
                                     | (4U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                               << 2U) 
                                              | (0xfffffffcU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready))))) 
                                    | ((2U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                               << 1U) 
                                              | (0xfffffffeU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready)))) 
                                       | (1U & (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                                | (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready))))));
    vlSelfRef.__PVT__mc_valid = ((((0xffffff80U & (
                                                   (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                                     == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                                    << 7U) 
                                                   & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                                      << 5U))) 
                                   | (0xffffffc0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                        << 6U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                                  << 4U)))) 
                                  | ((0xffffffe0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                        << 5U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                                  << 3U))) 
                                     | (0xfffffff0U 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                            << 4U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                              << 2U))))) 
                                 | (((0xfffffff8U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                        << 3U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                                  << 1U))) 
                                     | (0xfffffffcU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                            << 2U) 
                                           & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid)))) 
                                    | ((0x7ffffffeU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                            << 1U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                              >> 1U))) 
                                       | (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                          & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                             >> 2U)))));
    vlSelfRef.master_ready = (0xffU == ((IData)(vlSelfRef.__PVT__mc_ready) 
                                        | (IData)(vlSelfRef.__PVT__valid_mask)));
    vlSelfRef.slave_valid = ((~ (IData)(vlSelfRef.__PVT__valid_mask)) 
                             & (IData)(vlSelfRef.__PVT__mc_valid));
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.ARESETn) {
        if ((1U & (~ (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                       >> 3U) & (IData)(vlSelfRef.master_ready))))) {
            vlSelfRef.__PVT__j = 8U;
        }
        if ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
              >> 3U) & (IData)(vlSelfRef.master_ready))) {
            vlSelfRef.__PVT__valid_mask = 0U;
        } else {
            if ((1U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (1U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((2U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (2U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((4U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (4U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((8U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (8U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x10U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x10U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x20U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x20U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x40U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x40U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x80U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x80U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
        }
        if ((1U == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id 
                = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
        }
    } else {
        vlSelfRef.__PVT__valid_mask = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id = 0U;
    }
    vlSelfRef.__PVT__ID_scan_chain[0U] = vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[1U] = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[2U] = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[3U] = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[4U] = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[5U] = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[6U] = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[7U] = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ID_scan_chain[8U] = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__2\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mc_ready = (((((IData)((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                              >> 7U) 
                                             | ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id)))) 
                                    << 7U) | (0x40U 
                                              & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                                  << 6U) 
                                                 | (0xffffffc0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready))))) 
                                  | ((0x20U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                                << 5U) 
                                               | (0xffffffe0U 
                                                  & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready)))) 
                                     | (0x10U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                                  << 4U) 
                                                 | (0xfffffff0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready)))))) 
                                 | (((8U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                              != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                             << 3U) 
                                            | (0xfffffff8U 
                                               & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready)))) 
                                     | (4U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                               << 2U) 
                                              | (0xfffffffcU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready))))) 
                                    | ((2U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                               << 1U) 
                                              | (0xfffffffeU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready)))) 
                                       | (1U & (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                                | (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready))))));
    vlSelfRef.__PVT__mc_valid = ((((0xffffff80U & (
                                                   (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                                     == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                                    << 7U) 
                                                   & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                                      << 4U))) 
                                   | (0xffffffc0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                        << 6U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                                  << 3U)))) 
                                  | ((0xffffffe0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                        << 5U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                                  << 2U))) 
                                     | (0xfffffff0U 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                            << 4U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                              << 1U))))) 
                                 | (((0xfffffff8U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                        << 3U) & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid))) 
                                     | (0x7ffffffcU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                            << 2U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                              >> 1U)))) 
                                    | ((0x3ffffffeU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                            << 1U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                              >> 2U))) 
                                       | (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                          & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                             >> 3U)))));
    vlSelfRef.master_ready = (0xffU == ((IData)(vlSelfRef.__PVT__mc_ready) 
                                        | (IData)(vlSelfRef.__PVT__valid_mask)));
    vlSelfRef.slave_valid = ((~ (IData)(vlSelfRef.__PVT__valid_mask)) 
                             & (IData)(vlSelfRef.__PVT__mc_valid));
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.ARESETn) {
        if ((1U & (~ (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                       >> 4U) & (IData)(vlSelfRef.master_ready))))) {
            vlSelfRef.__PVT__j = 8U;
        }
        if ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
              >> 4U) & (IData)(vlSelfRef.master_ready))) {
            vlSelfRef.__PVT__valid_mask = 0U;
        } else {
            if ((1U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (1U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((2U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (2U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((4U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (4U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((8U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (8U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x10U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x10U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x20U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x20U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x40U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x40U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x80U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x80U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
        }
        if ((1U == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id 
                = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
        }
    } else {
        vlSelfRef.__PVT__valid_mask = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id = 0U;
    }
    vlSelfRef.__PVT__ID_scan_chain[0U] = vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[1U] = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[2U] = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[3U] = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[4U] = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[5U] = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[6U] = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[7U] = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ID_scan_chain[8U] = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__2\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mc_ready = (((((IData)((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                              >> 7U) 
                                             | ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id)))) 
                                    << 7U) | (0x40U 
                                              & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                                  << 6U) 
                                                 | (0xffffffc0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready))))) 
                                  | ((0x20U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                                << 5U) 
                                               | (0xffffffe0U 
                                                  & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready)))) 
                                     | (0x10U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                                  << 4U) 
                                                 | (0xfffffff0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready)))))) 
                                 | (((8U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                              != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                             << 3U) 
                                            | (0xfffffff8U 
                                               & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready)))) 
                                     | (4U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                               << 2U) 
                                              | (0xfffffffcU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready))))) 
                                    | ((2U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                               << 1U) 
                                              | (0xfffffffeU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready)))) 
                                       | (1U & (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                                | (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready))))));
    vlSelfRef.__PVT__mc_valid = ((((0xffffff80U & (
                                                   (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                                     == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                                    << 7U) 
                                                   & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                                      << 3U))) 
                                   | (0xffffffc0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                        << 6U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                                  << 2U)))) 
                                  | ((0xffffffe0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                        << 5U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                                  << 1U))) 
                                     | (0xfffffff0U 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                            << 4U) 
                                           & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid))))) 
                                 | (((0x7ffffff8U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                        << 3U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                                  >> 1U))) 
                                     | (0x3ffffffcU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                            << 2U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                              >> 2U)))) 
                                    | ((0x1ffffffeU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                            << 1U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                              >> 3U))) 
                                       | (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                          & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                             >> 4U)))));
    vlSelfRef.master_ready = (0xffU == ((IData)(vlSelfRef.__PVT__mc_ready) 
                                        | (IData)(vlSelfRef.__PVT__valid_mask)));
    vlSelfRef.slave_valid = ((~ (IData)(vlSelfRef.__PVT__valid_mask)) 
                             & (IData)(vlSelfRef.__PVT__mc_valid));
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.ARESETn) {
        if ((1U & (~ (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                       >> 5U) & (IData)(vlSelfRef.master_ready))))) {
            vlSelfRef.__PVT__j = 8U;
        }
        if ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
              >> 5U) & (IData)(vlSelfRef.master_ready))) {
            vlSelfRef.__PVT__valid_mask = 0U;
        } else {
            if ((1U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (1U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((2U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (2U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((4U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (4U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((8U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (8U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x10U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x10U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x20U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x20U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x40U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x40U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x80U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x80U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
        }
        if ((1U == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id 
                = vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_XID_scan_in;
        }
    } else {
        vlSelfRef.__PVT__valid_mask = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id = 0U;
    }
    vlSelfRef.__PVT__ID_scan_chain[0U] = vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[1U] = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[2U] = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[3U] = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[4U] = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[5U] = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[6U] = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[7U] = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ID_scan_chain[8U] = vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_XID_scan_in;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__2\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mc_ready = (((((IData)((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                              >> 7U) 
                                             | ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id)))) 
                                    << 7U) | (0x40U 
                                              & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                                  << 6U) 
                                                 | (0xffffffc0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready))))) 
                                  | ((0x20U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                                << 5U) 
                                               | (0xffffffe0U 
                                                  & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready)))) 
                                     | (0x10U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                                  << 4U) 
                                                 | (0xfffffff0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready)))))) 
                                 | (((8U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                              != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                             << 3U) 
                                            | (0xfffffff8U 
                                               & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready)))) 
                                     | (4U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                               << 2U) 
                                              | (0xfffffffcU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready))))) 
                                    | ((2U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                               << 1U) 
                                              | (0xfffffffeU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready)))) 
                                       | (1U & (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                                | (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready))))));
    vlSelfRef.__PVT__mc_valid = ((((0xffffff80U & (
                                                   (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                                     == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                                    << 7U) 
                                                   & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                                      << 2U))) 
                                   | (0xffffffc0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                        << 6U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                                  << 1U)))) 
                                  | ((0xffffffe0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                        << 5U) & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid))) 
                                     | (0x7ffffff0U 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                            << 4U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                              >> 1U))))) 
                                 | (((0x3ffffff8U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                        << 3U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                                  >> 2U))) 
                                     | (0x1ffffffcU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                            << 2U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                              >> 3U)))) 
                                    | ((0xffffffeU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                            << 1U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                              >> 4U))) 
                                       | (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                          & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                             >> 5U)))));
    vlSelfRef.master_ready = (0xffU == ((IData)(vlSelfRef.__PVT__mc_ready) 
                                        | (IData)(vlSelfRef.__PVT__valid_mask)));
    vlSelfRef.slave_valid = ((~ (IData)(vlSelfRef.__PVT__valid_mask)) 
                             & (IData)(vlSelfRef.__PVT__mc_valid));
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.ARESETn) {
        if ((1U & (~ ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                      & (IData)(vlSelfRef.master_ready))))) {
            vlSelfRef.__PVT__j = 8U;
        }
        if (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
             & (IData)(vlSelfRef.master_ready))) {
            vlSelfRef.__PVT__valid_mask = 0U;
        } else {
            if ((1U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (1U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((2U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (2U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((4U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (4U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((8U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (8U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x10U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x10U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x20U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x20U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x40U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x40U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x80U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x80U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
        }
        if ((1U == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id 
                = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
        }
    } else {
        vlSelfRef.__PVT__valid_mask = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id = 0U;
    }
    vlSelfRef.__PVT__ID_scan_chain[0U] = vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[1U] = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[2U] = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[3U] = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[4U] = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[5U] = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[6U] = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[7U] = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ID_scan_chain[8U] = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__2\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mc_ready = (((((IData)((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                              >> 7U) 
                                             | ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id)))) 
                                    << 7U) | (0x40U 
                                              & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                                  << 6U) 
                                                 | (0xffffffc0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready))))) 
                                  | ((0x20U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                                << 5U) 
                                               | (0xffffffe0U 
                                                  & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready)))) 
                                     | (0x10U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                                  << 4U) 
                                                 | (0xfffffff0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready)))))) 
                                 | (((8U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                              != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                             << 3U) 
                                            | (0xfffffff8U 
                                               & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready)))) 
                                     | (4U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                               << 2U) 
                                              | (0xfffffffcU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready))))) 
                                    | ((2U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                               << 1U) 
                                              | (0xfffffffeU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready)))) 
                                       | (1U & (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                                | (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready))))));
    vlSelfRef.__PVT__mc_valid = (((((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                      == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                     & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid)) 
                                    << 7U) | ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                                == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                               & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid)) 
                                              << 6U)) 
                                  | (((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                        == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                       & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid)) 
                                      << 5U) | ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                                  == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid)) 
                                                << 4U))) 
                                 | ((((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                        == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                       & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid)) 
                                      << 3U) | ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                                  == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid)) 
                                                << 2U)) 
                                    | (((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                          == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                         & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid)) 
                                        << 1U) | (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                                   == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                                  & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid)))));
    vlSelfRef.master_ready = (0xffU == ((IData)(vlSelfRef.__PVT__mc_ready) 
                                        | (IData)(vlSelfRef.__PVT__valid_mask)));
    vlSelfRef.slave_valid = ((~ (IData)(vlSelfRef.__PVT__valid_mask)) 
                             & (IData)(vlSelfRef.__PVT__mc_valid));
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.ARESETn) {
        if ((1U & (~ (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                       >> 1U) & (IData)(vlSelfRef.master_ready))))) {
            vlSelfRef.__PVT__j = 8U;
        }
        if ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
              >> 1U) & (IData)(vlSelfRef.master_ready))) {
            vlSelfRef.__PVT__valid_mask = 0U;
        } else {
            if ((1U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (1U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((2U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (2U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((4U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (4U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((8U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (8U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x10U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x10U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x20U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x20U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x40U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x40U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x80U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x80U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
        }
        if ((1U == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id 
                = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
        }
    } else {
        vlSelfRef.__PVT__valid_mask = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id = 0U;
    }
    vlSelfRef.__PVT__ID_scan_chain[0U] = vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[1U] = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[2U] = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[3U] = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[4U] = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[5U] = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[6U] = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[7U] = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ID_scan_chain[8U] = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__2\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mc_ready = (((((IData)((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                              >> 7U) 
                                             | ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id)))) 
                                    << 7U) | (0x40U 
                                              & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                                  << 6U) 
                                                 | (0xffffffc0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready))))) 
                                  | ((0x20U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                                << 5U) 
                                               | (0xffffffe0U 
                                                  & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready)))) 
                                     | (0x10U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                                  << 4U) 
                                                 | (0xfffffff0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready)))))) 
                                 | (((8U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                              != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                             << 3U) 
                                            | (0xfffffff8U 
                                               & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready)))) 
                                     | (4U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                               << 2U) 
                                              | (0xfffffffcU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready))))) 
                                    | ((2U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                               << 1U) 
                                              | (0xfffffffeU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready)))) 
                                       | (1U & (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                                | (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready))))));
    vlSelfRef.__PVT__mc_valid = ((((0xffffff80U & (
                                                   (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                                     == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                                    << 7U) 
                                                   & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                                      << 6U))) 
                                   | (0xffffffc0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                        << 6U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                                  << 5U)))) 
                                  | ((0xffffffe0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                        << 5U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                                  << 4U))) 
                                     | (0xfffffff0U 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                            << 4U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                              << 3U))))) 
                                 | (((0xfffffff8U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                        << 3U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                                  << 2U))) 
                                     | (0xfffffffcU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                            << 2U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                              << 1U)))) 
                                    | ((0xfffffffeU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                            << 1U) 
                                           & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid))) 
                                       | (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                          & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                             >> 1U)))));
    vlSelfRef.master_ready = (0xffU == ((IData)(vlSelfRef.__PVT__mc_ready) 
                                        | (IData)(vlSelfRef.__PVT__valid_mask)));
    vlSelfRef.slave_valid = ((~ (IData)(vlSelfRef.__PVT__valid_mask)) 
                             & (IData)(vlSelfRef.__PVT__mc_valid));
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.ARESETn) {
        if ((1U & (~ (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                       >> 2U) & (IData)(vlSelfRef.master_ready))))) {
            vlSelfRef.__PVT__j = 8U;
        }
        if ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
              >> 2U) & (IData)(vlSelfRef.master_ready))) {
            vlSelfRef.__PVT__valid_mask = 0U;
        } else {
            if ((1U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (1U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((2U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (2U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((4U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (4U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((8U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (8U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x10U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x10U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x20U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x20U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x40U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x40U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x80U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x80U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
        }
        if ((1U == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id 
                = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
        }
    } else {
        vlSelfRef.__PVT__valid_mask = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id = 0U;
    }
    vlSelfRef.__PVT__ID_scan_chain[0U] = vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[1U] = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[2U] = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[3U] = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[4U] = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[5U] = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[6U] = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[7U] = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ID_scan_chain[8U] = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__2\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mc_ready = (((((IData)((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                              >> 7U) 
                                             | ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id)))) 
                                    << 7U) | (0x40U 
                                              & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                                  << 6U) 
                                                 | (0xffffffc0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready))))) 
                                  | ((0x20U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                                << 5U) 
                                               | (0xffffffe0U 
                                                  & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready)))) 
                                     | (0x10U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                                  << 4U) 
                                                 | (0xfffffff0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready)))))) 
                                 | (((8U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                              != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                             << 3U) 
                                            | (0xfffffff8U 
                                               & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready)))) 
                                     | (4U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                               << 2U) 
                                              | (0xfffffffcU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready))))) 
                                    | ((2U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                               << 1U) 
                                              | (0xfffffffeU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready)))) 
                                       | (1U & (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                                | (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready))))));
    vlSelfRef.__PVT__mc_valid = ((((0xffffff80U & (
                                                   (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                                     == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                                    << 7U) 
                                                   & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                                      << 5U))) 
                                   | (0xffffffc0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                        << 6U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                                  << 4U)))) 
                                  | ((0xffffffe0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                        << 5U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                                  << 3U))) 
                                     | (0xfffffff0U 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                            << 4U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                              << 2U))))) 
                                 | (((0xfffffff8U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                        << 3U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                                  << 1U))) 
                                     | (0xfffffffcU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                            << 2U) 
                                           & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid)))) 
                                    | ((0x7ffffffeU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                            << 1U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                              >> 1U))) 
                                       | (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                          & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                             >> 2U)))));
    vlSelfRef.master_ready = (0xffU == ((IData)(vlSelfRef.__PVT__mc_ready) 
                                        | (IData)(vlSelfRef.__PVT__valid_mask)));
    vlSelfRef.slave_valid = ((~ (IData)(vlSelfRef.__PVT__valid_mask)) 
                             & (IData)(vlSelfRef.__PVT__mc_valid));
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.ARESETn) {
        if ((1U & (~ (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                       >> 3U) & (IData)(vlSelfRef.master_ready))))) {
            vlSelfRef.__PVT__j = 8U;
        }
        if ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
              >> 3U) & (IData)(vlSelfRef.master_ready))) {
            vlSelfRef.__PVT__valid_mask = 0U;
        } else {
            if ((1U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (1U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((2U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (2U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((4U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (4U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((8U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (8U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x10U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x10U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x20U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x20U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x40U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x40U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x80U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x80U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
        }
        if ((1U == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id 
                = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
        }
    } else {
        vlSelfRef.__PVT__valid_mask = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id = 0U;
    }
    vlSelfRef.__PVT__ID_scan_chain[0U] = vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[1U] = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[2U] = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[3U] = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[4U] = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[5U] = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[6U] = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[7U] = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ID_scan_chain[8U] = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__2\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mc_ready = (((((IData)((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                              >> 7U) 
                                             | ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id)))) 
                                    << 7U) | (0x40U 
                                              & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                                  << 6U) 
                                                 | (0xffffffc0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready))))) 
                                  | ((0x20U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                                << 5U) 
                                               | (0xffffffe0U 
                                                  & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready)))) 
                                     | (0x10U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                                  << 4U) 
                                                 | (0xfffffff0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready)))))) 
                                 | (((8U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                              != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                             << 3U) 
                                            | (0xfffffff8U 
                                               & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready)))) 
                                     | (4U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                               << 2U) 
                                              | (0xfffffffcU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready))))) 
                                    | ((2U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                               << 1U) 
                                              | (0xfffffffeU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready)))) 
                                       | (1U & (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                                | (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready))))));
    vlSelfRef.__PVT__mc_valid = ((((0xffffff80U & (
                                                   (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                                     == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                                    << 7U) 
                                                   & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                                      << 4U))) 
                                   | (0xffffffc0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                        << 6U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                                  << 3U)))) 
                                  | ((0xffffffe0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                        << 5U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                                  << 2U))) 
                                     | (0xfffffff0U 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                            << 4U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                              << 1U))))) 
                                 | (((0xfffffff8U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                        << 3U) & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid))) 
                                     | (0x7ffffffcU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                            << 2U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                              >> 1U)))) 
                                    | ((0x3ffffffeU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                            << 1U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                              >> 2U))) 
                                       | (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                          & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                             >> 3U)))));
    vlSelfRef.master_ready = (0xffU == ((IData)(vlSelfRef.__PVT__mc_ready) 
                                        | (IData)(vlSelfRef.__PVT__valid_mask)));
    vlSelfRef.slave_valid = ((~ (IData)(vlSelfRef.__PVT__valid_mask)) 
                             & (IData)(vlSelfRef.__PVT__mc_valid));
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.ARESETn) {
        if ((1U & (~ (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                       >> 4U) & (IData)(vlSelfRef.master_ready))))) {
            vlSelfRef.__PVT__j = 8U;
        }
        if ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
              >> 4U) & (IData)(vlSelfRef.master_ready))) {
            vlSelfRef.__PVT__valid_mask = 0U;
        } else {
            if ((1U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (1U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((2U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (2U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((4U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (4U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((8U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (8U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x10U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x10U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x20U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x20U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x40U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x40U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x80U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x80U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
        }
        if ((1U == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id 
                = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
        }
    } else {
        vlSelfRef.__PVT__valid_mask = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id = 0U;
    }
    vlSelfRef.__PVT__ID_scan_chain[0U] = vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[1U] = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[2U] = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[3U] = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[4U] = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[5U] = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[6U] = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[7U] = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ID_scan_chain[8U] = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__2\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mc_ready = (((((IData)((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                              >> 7U) 
                                             | ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id)))) 
                                    << 7U) | (0x40U 
                                              & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                                  << 6U) 
                                                 | (0xffffffc0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready))))) 
                                  | ((0x20U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                                << 5U) 
                                               | (0xffffffe0U 
                                                  & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready)))) 
                                     | (0x10U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                                  << 4U) 
                                                 | (0xfffffff0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready)))))) 
                                 | (((8U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                              != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                             << 3U) 
                                            | (0xfffffff8U 
                                               & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready)))) 
                                     | (4U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                               << 2U) 
                                              | (0xfffffffcU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready))))) 
                                    | ((2U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                               << 1U) 
                                              | (0xfffffffeU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready)))) 
                                       | (1U & (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                                | (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready))))));
    vlSelfRef.__PVT__mc_valid = ((((0xffffff80U & (
                                                   (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                                     == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                                    << 7U) 
                                                   & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                                      << 3U))) 
                                   | (0xffffffc0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                        << 6U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                                  << 2U)))) 
                                  | ((0xffffffe0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                        << 5U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                                  << 1U))) 
                                     | (0xfffffff0U 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                            << 4U) 
                                           & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid))))) 
                                 | (((0x7ffffff8U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                        << 3U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                                  >> 1U))) 
                                     | (0x3ffffffcU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                            << 2U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                              >> 2U)))) 
                                    | ((0x1ffffffeU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                            << 1U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                              >> 3U))) 
                                       | (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                          & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                             >> 4U)))));
    vlSelfRef.master_ready = (0xffU == ((IData)(vlSelfRef.__PVT__mc_ready) 
                                        | (IData)(vlSelfRef.__PVT__valid_mask)));
    vlSelfRef.slave_valid = ((~ (IData)(vlSelfRef.__PVT__valid_mask)) 
                             & (IData)(vlSelfRef.__PVT__mc_valid));
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.ARESETn) {
        if ((1U & (~ (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                       >> 5U) & (IData)(vlSelfRef.master_ready))))) {
            vlSelfRef.__PVT__j = 8U;
        }
        if ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
              >> 5U) & (IData)(vlSelfRef.master_ready))) {
            vlSelfRef.__PVT__valid_mask = 0U;
        } else {
            if ((1U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (1U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((2U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (2U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((4U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (4U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((8U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (8U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x10U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x10U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x20U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x20U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x40U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x40U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x80U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x80U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
        }
        if ((1U == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id 
                = vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_XID_scan_in;
        }
    } else {
        vlSelfRef.__PVT__valid_mask = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id = 0U;
    }
    vlSelfRef.__PVT__ID_scan_chain[0U] = vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[1U] = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[2U] = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[3U] = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[4U] = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[5U] = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[6U] = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[7U] = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ID_scan_chain[8U] = vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_XID_scan_in;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__2\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mc_ready = (((((IData)((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                              >> 7U) 
                                             | ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id)))) 
                                    << 7U) | (0x40U 
                                              & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                                  << 6U) 
                                                 | (0xffffffc0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready))))) 
                                  | ((0x20U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                                << 5U) 
                                               | (0xffffffe0U 
                                                  & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready)))) 
                                     | (0x10U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                                  << 4U) 
                                                 | (0xfffffff0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready)))))) 
                                 | (((8U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                              != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                             << 3U) 
                                            | (0xfffffff8U 
                                               & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready)))) 
                                     | (4U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                               << 2U) 
                                              | (0xfffffffcU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready))))) 
                                    | ((2U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                               << 1U) 
                                              | (0xfffffffeU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready)))) 
                                       | (1U & (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                                | (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready))))));
    vlSelfRef.__PVT__mc_valid = ((((0xffffff80U & (
                                                   (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                                     == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                                    << 7U) 
                                                   & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                                      << 2U))) 
                                   | (0xffffffc0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                        << 6U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                                  << 1U)))) 
                                  | ((0xffffffe0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                        << 5U) & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid))) 
                                     | (0x7ffffff0U 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                            << 4U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                              >> 1U))))) 
                                 | (((0x3ffffff8U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                        << 3U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                                  >> 2U))) 
                                     | (0x1ffffffcU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                            << 2U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                              >> 3U)))) 
                                    | ((0xffffffeU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                            << 1U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                              >> 4U))) 
                                       | (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                          & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                             >> 5U)))));
    vlSelfRef.master_ready = (0xffU == ((IData)(vlSelfRef.__PVT__mc_ready) 
                                        | (IData)(vlSelfRef.__PVT__valid_mask)));
    vlSelfRef.slave_valid = ((~ (IData)(vlSelfRef.__PVT__valid_mask)) 
                             & (IData)(vlSelfRef.__PVT__mc_valid));
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.ARESETn) {
        if ((1U & (~ ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                      & (IData)(vlSelfRef.master_ready))))) {
            vlSelfRef.__PVT__j = 8U;
        }
        if (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
             & (IData)(vlSelfRef.master_ready))) {
            vlSelfRef.__PVT__valid_mask = 0U;
        } else {
            if ((1U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (1U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((2U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (2U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((4U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (4U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((8U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (8U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x10U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x10U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x20U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x20U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x40U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x40U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x80U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x80U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
        }
        if ((1U == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id 
                = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
        }
    } else {
        vlSelfRef.__PVT__valid_mask = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id = 0U;
    }
    vlSelfRef.__PVT__ID_scan_chain[0U] = vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[1U] = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[2U] = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[3U] = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[4U] = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[5U] = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[6U] = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[7U] = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ID_scan_chain[8U] = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__2\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mc_ready = (((((IData)((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                              >> 7U) 
                                             | ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id)))) 
                                    << 7U) | (0x40U 
                                              & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                                  << 6U) 
                                                 | (0xffffffc0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready))))) 
                                  | ((0x20U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                                << 5U) 
                                               | (0xffffffe0U 
                                                  & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready)))) 
                                     | (0x10U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                                  << 4U) 
                                                 | (0xfffffff0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready)))))) 
                                 | (((8U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                              != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                             << 3U) 
                                            | (0xfffffff8U 
                                               & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready)))) 
                                     | (4U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                               << 2U) 
                                              | (0xfffffffcU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready))))) 
                                    | ((2U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                               << 1U) 
                                              | (0xfffffffeU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready)))) 
                                       | (1U & (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                                | (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready))))));
    vlSelfRef.__PVT__mc_valid = (((((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                      == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                     & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid)) 
                                    << 7U) | ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                                == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                               & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid)) 
                                              << 6U)) 
                                  | (((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                        == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                       & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid)) 
                                      << 5U) | ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                                  == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid)) 
                                                << 4U))) 
                                 | ((((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                        == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                       & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid)) 
                                      << 3U) | ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                                  == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid)) 
                                                << 2U)) 
                                    | (((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                          == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                         & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid)) 
                                        << 1U) | (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                                   == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                                  & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid)))));
    vlSelfRef.master_ready = (0xffU == ((IData)(vlSelfRef.__PVT__mc_ready) 
                                        | (IData)(vlSelfRef.__PVT__valid_mask)));
    vlSelfRef.slave_valid = ((~ (IData)(vlSelfRef.__PVT__valid_mask)) 
                             & (IData)(vlSelfRef.__PVT__mc_valid));
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.ARESETn) {
        if ((1U & (~ (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                       >> 1U) & (IData)(vlSelfRef.master_ready))))) {
            vlSelfRef.__PVT__j = 8U;
        }
        if ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
              >> 1U) & (IData)(vlSelfRef.master_ready))) {
            vlSelfRef.__PVT__valid_mask = 0U;
        } else {
            if ((1U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (1U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((2U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (2U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((4U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (4U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((8U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (8U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x10U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x10U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x20U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x20U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x40U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x40U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x80U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x80U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
        }
        if ((1U == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id 
                = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
        }
    } else {
        vlSelfRef.__PVT__valid_mask = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id = 0U;
    }
    vlSelfRef.__PVT__ID_scan_chain[0U] = vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[1U] = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[2U] = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[3U] = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[4U] = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[5U] = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[6U] = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[7U] = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ID_scan_chain[8U] = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__2\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mc_ready = (((((IData)((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                              >> 7U) 
                                             | ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id)))) 
                                    << 7U) | (0x40U 
                                              & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                                  << 6U) 
                                                 | (0xffffffc0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready))))) 
                                  | ((0x20U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                                << 5U) 
                                               | (0xffffffe0U 
                                                  & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready)))) 
                                     | (0x10U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                                  << 4U) 
                                                 | (0xfffffff0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready)))))) 
                                 | (((8U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                              != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                             << 3U) 
                                            | (0xfffffff8U 
                                               & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready)))) 
                                     | (4U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                               << 2U) 
                                              | (0xfffffffcU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready))))) 
                                    | ((2U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                               << 1U) 
                                              | (0xfffffffeU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready)))) 
                                       | (1U & (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                                | (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready))))));
    vlSelfRef.__PVT__mc_valid = ((((0xffffff80U & (
                                                   (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                                     == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                                    << 7U) 
                                                   & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                                      << 6U))) 
                                   | (0xffffffc0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                        << 6U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                                  << 5U)))) 
                                  | ((0xffffffe0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                        << 5U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                                  << 4U))) 
                                     | (0xfffffff0U 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                            << 4U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                              << 3U))))) 
                                 | (((0xfffffff8U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                        << 3U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                                  << 2U))) 
                                     | (0xfffffffcU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                            << 2U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                              << 1U)))) 
                                    | ((0xfffffffeU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                            << 1U) 
                                           & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid))) 
                                       | (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                          & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                             >> 1U)))));
    vlSelfRef.master_ready = (0xffU == ((IData)(vlSelfRef.__PVT__mc_ready) 
                                        | (IData)(vlSelfRef.__PVT__valid_mask)));
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.ARESETn) {
        if ((1U & (~ (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                       >> 2U) & (IData)(vlSelfRef.master_ready))))) {
            vlSelfRef.__PVT__j = 8U;
        }
        if ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
              >> 2U) & (IData)(vlSelfRef.master_ready))) {
            vlSelfRef.__PVT__valid_mask = 0U;
        } else {
            if ((1U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (1U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((2U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (2U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((4U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (4U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((8U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (8U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x10U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x10U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x20U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x20U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x40U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x40U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x80U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x80U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
        }
        if ((1U == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id 
                = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
        }
    } else {
        vlSelfRef.__PVT__valid_mask = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id = 0U;
    }
    vlSelfRef.__PVT__ID_scan_chain[0U] = vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[1U] = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[2U] = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[3U] = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[4U] = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[5U] = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[6U] = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[7U] = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ID_scan_chain[8U] = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__2\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mc_ready = (((((IData)((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                              >> 7U) 
                                             | ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id)))) 
                                    << 7U) | (0x40U 
                                              & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                                  << 6U) 
                                                 | (0xffffffc0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready))))) 
                                  | ((0x20U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                                << 5U) 
                                               | (0xffffffe0U 
                                                  & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready)))) 
                                     | (0x10U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                                  << 4U) 
                                                 | (0xfffffff0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready)))))) 
                                 | (((8U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                              != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                             << 3U) 
                                            | (0xfffffff8U 
                                               & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready)))) 
                                     | (4U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                               << 2U) 
                                              | (0xfffffffcU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready))))) 
                                    | ((2U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                               << 1U) 
                                              | (0xfffffffeU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready)))) 
                                       | (1U & (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                                | (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready))))));
    vlSelfRef.__PVT__mc_valid = ((((0xffffff80U & (
                                                   (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                                     == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                                    << 7U) 
                                                   & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                                      << 5U))) 
                                   | (0xffffffc0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                        << 6U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                                  << 4U)))) 
                                  | ((0xffffffe0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                        << 5U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                                  << 3U))) 
                                     | (0xfffffff0U 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                            << 4U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                              << 2U))))) 
                                 | (((0xfffffff8U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                        << 3U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                                  << 1U))) 
                                     | (0xfffffffcU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                            << 2U) 
                                           & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid)))) 
                                    | ((0x7ffffffeU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                            << 1U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                              >> 1U))) 
                                       | (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                          & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                             >> 2U)))));
    vlSelfRef.master_ready = (0xffU == ((IData)(vlSelfRef.__PVT__mc_ready) 
                                        | (IData)(vlSelfRef.__PVT__valid_mask)));
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.ARESETn) {
        if ((1U & (~ (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                       >> 3U) & (IData)(vlSelfRef.master_ready))))) {
            vlSelfRef.__PVT__j = 8U;
        }
        if ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
              >> 3U) & (IData)(vlSelfRef.master_ready))) {
            vlSelfRef.__PVT__valid_mask = 0U;
        } else {
            if ((1U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (1U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((2U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (2U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((4U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (4U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((8U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (8U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x10U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x10U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x20U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x20U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x40U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x40U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x80U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x80U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
        }
        if ((1U == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id 
                = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
        }
    } else {
        vlSelfRef.__PVT__valid_mask = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id = 0U;
    }
    vlSelfRef.__PVT__ID_scan_chain[0U] = vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[1U] = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[2U] = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[3U] = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[4U] = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[5U] = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[6U] = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[7U] = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ID_scan_chain[8U] = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__2\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mc_ready = (((((IData)((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                              >> 7U) 
                                             | ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id)))) 
                                    << 7U) | (0x40U 
                                              & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                                  << 6U) 
                                                 | (0xffffffc0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready))))) 
                                  | ((0x20U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                                << 5U) 
                                               | (0xffffffe0U 
                                                  & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready)))) 
                                     | (0x10U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                                  << 4U) 
                                                 | (0xfffffff0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready)))))) 
                                 | (((8U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                              != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                             << 3U) 
                                            | (0xfffffff8U 
                                               & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready)))) 
                                     | (4U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                               << 2U) 
                                              | (0xfffffffcU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready))))) 
                                    | ((2U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                               << 1U) 
                                              | (0xfffffffeU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready)))) 
                                       | (1U & (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                                | (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready))))));
    vlSelfRef.__PVT__mc_valid = ((((0xffffff80U & (
                                                   (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                                     == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                                    << 7U) 
                                                   & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                                      << 4U))) 
                                   | (0xffffffc0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                        << 6U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                                  << 3U)))) 
                                  | ((0xffffffe0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                        << 5U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                                  << 2U))) 
                                     | (0xfffffff0U 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                            << 4U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                              << 1U))))) 
                                 | (((0xfffffff8U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                        << 3U) & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid))) 
                                     | (0x7ffffffcU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                            << 2U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                              >> 1U)))) 
                                    | ((0x3ffffffeU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                            << 1U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                              >> 2U))) 
                                       | (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                          & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                             >> 3U)))));
    vlSelfRef.master_ready = (0xffU == ((IData)(vlSelfRef.__PVT__mc_ready) 
                                        | (IData)(vlSelfRef.__PVT__valid_mask)));
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.ARESETn) {
        if ((1U & (~ (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                       >> 4U) & (IData)(vlSelfRef.master_ready))))) {
            vlSelfRef.__PVT__j = 8U;
        }
        if ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
              >> 4U) & (IData)(vlSelfRef.master_ready))) {
            vlSelfRef.__PVT__valid_mask = 0U;
        } else {
            if ((1U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (1U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((2U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (2U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((4U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (4U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((8U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (8U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x10U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x10U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x20U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x20U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x40U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x40U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x80U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x80U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
        }
        if ((1U == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id 
                = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
        }
    } else {
        vlSelfRef.__PVT__valid_mask = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id = 0U;
    }
    vlSelfRef.__PVT__ID_scan_chain[0U] = vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[1U] = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[2U] = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[3U] = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[4U] = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[5U] = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[6U] = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[7U] = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ID_scan_chain[8U] = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__2\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mc_ready = (((((IData)((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                              >> 7U) 
                                             | ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id)))) 
                                    << 7U) | (0x40U 
                                              & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                                  << 6U) 
                                                 | (0xffffffc0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready))))) 
                                  | ((0x20U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                                << 5U) 
                                               | (0xffffffe0U 
                                                  & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready)))) 
                                     | (0x10U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                                  << 4U) 
                                                 | (0xfffffff0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready)))))) 
                                 | (((8U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                              != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                             << 3U) 
                                            | (0xfffffff8U 
                                               & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready)))) 
                                     | (4U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                               << 2U) 
                                              | (0xfffffffcU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready))))) 
                                    | ((2U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                               << 1U) 
                                              | (0xfffffffeU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready)))) 
                                       | (1U & (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                                | (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready))))));
    vlSelfRef.__PVT__mc_valid = ((((0xffffff80U & (
                                                   (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                                     == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                                    << 7U) 
                                                   & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                                      << 3U))) 
                                   | (0xffffffc0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                        << 6U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                                  << 2U)))) 
                                  | ((0xffffffe0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                        << 5U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                                  << 1U))) 
                                     | (0xfffffff0U 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                            << 4U) 
                                           & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid))))) 
                                 | (((0x7ffffff8U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                        << 3U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                                  >> 1U))) 
                                     | (0x3ffffffcU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                            << 2U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                              >> 2U)))) 
                                    | ((0x1ffffffeU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                            << 1U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                              >> 3U))) 
                                       | (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                          & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                             >> 4U)))));
    vlSelfRef.master_ready = (0xffU == ((IData)(vlSelfRef.__PVT__mc_ready) 
                                        | (IData)(vlSelfRef.__PVT__valid_mask)));
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.ARESETn) {
        if ((1U & (~ (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                       >> 5U) & (IData)(vlSelfRef.master_ready))))) {
            vlSelfRef.__PVT__j = 8U;
        }
        if ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
              >> 5U) & (IData)(vlSelfRef.master_ready))) {
            vlSelfRef.__PVT__valid_mask = 0U;
        } else {
            if ((1U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (1U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((2U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (2U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((4U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (4U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((8U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                       & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (8U | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x10U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x10U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x20U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x20U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x40U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x40U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
            if ((0x80U & ((IData)(vlSelfRef.__PVT__mc_valid) 
                          & (IData)(vlSelfRef.__PVT__mc_ready)))) {
                vlSelfRef.__PVT__valid_mask = (0x80U 
                                               | (IData)(vlSelfRef.__PVT__valid_mask));
            }
        }
        if ((1U == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id 
                = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
            vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id 
                = vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_XID_scan_in;
        }
    } else {
        vlSelfRef.__PVT__valid_mask = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id = 0U;
        vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id = 0U;
    }
    vlSelfRef.__PVT__ID_scan_chain[0U] = vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[1U] = vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[2U] = vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[3U] = vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[4U] = vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[5U] = vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[6U] = vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id;
    vlSelfRef.__PVT__ID_scan_chain[7U] = vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__ID_scan_chain[8U] = vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_XID_scan_in;
}

VL_INLINE_OPT void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__2\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mc_ready = (((((IData)((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                              >> 7U) 
                                             | ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id)))) 
                                    << 7U) | (0x40U 
                                              & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                                  << 6U) 
                                                 | (0xffffffc0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready))))) 
                                  | ((0x20U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                                << 5U) 
                                               | (0xffffffe0U 
                                                  & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready)))) 
                                     | (0x10U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                   != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                                  << 4U) 
                                                 | (0xfffffff0U 
                                                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready)))))) 
                                 | (((8U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                              != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                             << 3U) 
                                            | (0xfffffff8U 
                                               & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready)))) 
                                     | (4U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                               << 2U) 
                                              | (0xfffffffcU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready))))) 
                                    | ((2U & ((((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                               << 1U) 
                                              | (0xfffffffeU 
                                                 & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready)))) 
                                       | (1U & (((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                                 != (IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                                | (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready))))));
    vlSelfRef.__PVT__mc_valid = ((((0xffffff80U & (
                                                   (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                                     == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                                    << 7U) 
                                                   & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                                      << 2U))) 
                                   | (0xffffffc0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                        << 6U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                                  << 1U)))) 
                                  | ((0xffffffe0U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                        << 5U) & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid))) 
                                     | (0x7ffffff0U 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                            << 4U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                              >> 1U))))) 
                                 | (((0x3ffffff8U & 
                                      ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                         == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                        << 3U) & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                                  >> 2U))) 
                                     | (0x1ffffffcU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                            << 2U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                              >> 3U)))) 
                                    | ((0xffffffeU 
                                        & ((((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                             == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                            << 1U) 
                                           & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                              >> 4U))) 
                                       | (((IData)(vlSelfRef.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                           == (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                          & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                             >> 5U)))));
    vlSelfRef.master_ready = (0xffU == ((IData)(vlSelfRef.__PVT__mc_ready) 
                                        | (IData)(vlSelfRef.__PVT__valid_mask)));
}
