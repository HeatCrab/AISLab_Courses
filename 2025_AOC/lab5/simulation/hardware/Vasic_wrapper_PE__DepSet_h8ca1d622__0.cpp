// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasic_wrapper.h for the primary calling header

#include "Vasic_wrapper__pch.h"
#include "Vasic_wrapper_PE.h"
#include "Vasic_wrapper__Syms.h"

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__count_filt_col;
    __Vdly__count_filt_col = 0;
    CData/*1:0*/ __Vdly__count_ofmap_ch;
    __Vdly__count_ofmap_ch = 0;
    CData/*1:0*/ __Vdly__count_input_ch;
    __Vdly__count_input_ch = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v0;
    __VdlyVal__filter_spad__v0 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v0;
    __VdlyDim0__filter_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v0;
    __VdlySet__filter_spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v1;
    __VdlyVal__filter_spad__v1 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v1;
    __VdlyDim0__filter_spad__v1 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v1;
    __VdlySet__filter_spad__v1 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v2;
    __VdlyVal__filter_spad__v2 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v2;
    __VdlyDim0__filter_spad__v2 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v2;
    __VdlySet__filter_spad__v2 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v3;
    __VdlyVal__filter_spad__v3 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v3;
    __VdlyDim0__filter_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v3;
    __VdlySet__filter_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v4;
    __VdlySet__filter_spad__v4 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v0;
    __VdlyVal__ifmap_spad__v0 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v0;
    __VdlyDim0__ifmap_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v0;
    __VdlySet__ifmap_spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v1;
    __VdlyVal__ifmap_spad__v1 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v1;
    __VdlyDim0__ifmap_spad__v1 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v1;
    __VdlySet__ifmap_spad__v1 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v2;
    __VdlyVal__ifmap_spad__v2 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v2;
    __VdlyDim0__ifmap_spad__v2 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v2;
    __VdlySet__ifmap_spad__v2 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v3;
    __VdlyVal__ifmap_spad__v3 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v3;
    __VdlyDim0__ifmap_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v3;
    __VdlySet__ifmap_spad__v3 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v4;
    __VdlyVal__ifmap_spad__v4 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v4;
    __VdlySet__ifmap_spad__v4 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v5;
    __VdlyVal__ifmap_spad__v5 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v6;
    __VdlyVal__ifmap_spad__v6 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v7;
    __VdlyVal__ifmap_spad__v7 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v8;
    __VdlyVal__ifmap_spad__v8 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v9;
    __VdlyVal__ifmap_spad__v9 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v10;
    __VdlyVal__ifmap_spad__v10 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v11;
    __VdlyVal__ifmap_spad__v11 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v12;
    __VdlyVal__ifmap_spad__v12 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v13;
    __VdlyVal__ifmap_spad__v13 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v14;
    __VdlyVal__ifmap_spad__v14 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v15;
    __VdlyVal__ifmap_spad__v15 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v16;
    __VdlySet__ifmap_spad__v16 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v0;
    __VdlySet__ofmap_spad__v0 = 0;
    IData/*31:0*/ __VdlyVal__ofmap_spad__v4;
    __VdlyVal__ofmap_spad__v4 = 0;
    CData/*1:0*/ __VdlyDim0__ofmap_spad__v4;
    __VdlyDim0__ofmap_spad__v4 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v4;
    __VdlySet__ofmap_spad__v4 = 0;
    IData/*31:0*/ __VdlyVal__ofmap_spad__v5;
    __VdlyVal__ofmap_spad__v5 = 0;
    CData/*1:0*/ __VdlyDim0__ofmap_spad__v5;
    __VdlyDim0__ofmap_spad__v5 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v5;
    __VdlySet__ofmap_spad__v5 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v6;
    __VdlySet__ofmap_spad__v6 = 0;
    // Body
    __VdlySet__filter_spad__v0 = 0U;
    __VdlySet__filter_spad__v1 = 0U;
    __VdlySet__filter_spad__v2 = 0U;
    __VdlySet__filter_spad__v3 = 0U;
    __VdlySet__filter_spad__v4 = 0U;
    __VdlySet__ofmap_spad__v0 = 0U;
    __VdlySet__ofmap_spad__v4 = 0U;
    __VdlySet__ofmap_spad__v5 = 0U;
    __VdlySet__ofmap_spad__v6 = 0U;
    __Vdly__count_input_ch = vlSelfRef.__PVT__count_input_ch;
    __Vdly__count_filt_col = vlSelfRef.__PVT__count_filt_col;
    __VdlySet__ifmap_spad__v0 = 0U;
    __VdlySet__ifmap_spad__v1 = 0U;
    __VdlySet__ifmap_spad__v2 = 0U;
    __VdlySet__ifmap_spad__v3 = 0U;
    __VdlySet__ifmap_spad__v4 = 0U;
    __VdlySet__ifmap_spad__v16 = 0U;
    __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
    if ((1U & (~ (IData)(vlSymsp->TOP.ARESETn)))) {
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x18U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xcU;
    }
    if (vlSymsp->TOP.ARESETn) {
        if (((0U == (IData)(vlSelfRef.__PVT__cs)) | 
             (6U == (IData)(vlSelfRef.__PVT__cs)))) {
            vlSelfRef.__PVT__i = 4U;
            __VdlySet__ofmap_spad__v0 = 1U;
        } else if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            __VdlyVal__ofmap_spad__v4 = vlSelfRef.__PVT__add_res;
            __VdlyDim0__ofmap_spad__v4 = vlSelfRef.__PVT__count_ofmap_ch;
            __VdlySet__ofmap_spad__v4 = 1U;
        } else if (((4U == (IData)(vlSelfRef.__PVT__cs)) 
                    & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid))) {
            __VdlyVal__ofmap_spad__v5 = vlSelfRef.__PVT__add_res;
            __VdlyDim0__ofmap_spad__v5 = vlSelfRef.__PVT__count_ofmap_ch;
            __VdlySet__ofmap_spad__v5 = 1U;
        }
        if (((1U == (IData)(vlSelfRef.__PVT__cs)) & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))) {
            vlSelfRef.__Vlvbound_h652caa15__0 = (0xffU 
                                                 & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray);
            if ((0x2fU >= (IData)(vlSelfRef.__PVT__index_0))) {
                __VdlyVal__filter_spad__v0 = vlSelfRef.__Vlvbound_h652caa15__0;
                __VdlyDim0__filter_spad__v0 = vlSelfRef.__PVT__index_0;
                __VdlySet__filter_spad__v0 = 1U;
            }
            vlSelfRef.__Vlvbound_h94c06f97__0 = (0xffU 
                                                 & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                    >> 8U));
            if ((0x2fU >= (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v1 = vlSelfRef.__Vlvbound_h94c06f97__0;
                __VdlyDim0__filter_spad__v1 = (0x3fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v1 = 1U;
            }
            vlSelfRef.__Vlvbound_h3265d838__0 = (0xffU 
                                                 & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                    >> 0x10U));
            if ((0x2fU >= (0x3fU & ((IData)(2U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v2 = vlSelfRef.__Vlvbound_h3265d838__0;
                __VdlyDim0__filter_spad__v2 = (0x3fU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v2 = 1U;
            }
            vlSelfRef.__Vlvbound_h136a5f52__0 = (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                 >> 0x18U);
            if ((0x2fU >= (0x3fU & ((IData)(3U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v3 = vlSelfRef.__Vlvbound_h136a5f52__0;
                __VdlyDim0__filter_spad__v3 = (0x3fU 
                                               & ((IData)(3U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v3 = 1U;
            }
        }
        if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            __Vdly__count_input_ch = (((IData)(vlSelfRef.__PVT__count_input_ch) 
                                       == (IData)(vlSelfRef.__PVT__input_ch))
                                       ? 0U : (3U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__count_input_ch))));
        }
        if ((1U == (IData)(vlSelfRef.__PVT__cs))) {
            if ((1U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__cs))) {
            if ((1U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            if (((IData)(vlSelfRef.__PVT__count_input_ch) 
                 == (IData)(vlSelfRef.__PVT__input_ch))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else {
            __Vdly__count_filt_col = vlSelfRef.__PVT__count_filt_col;
        }
        if (((2U == (IData)(vlSelfRef.__PVT__cs)) & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))) {
            vlSelfRef.__Vlvbound_h88de6bbc__0 = ((0x80U 
                                                  & ((~ 
                                                      (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                       >> 7U)) 
                                                     << 7U)) 
                                                 | (0x7fU 
                                                    & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray));
            if ((0xbU >= (0xfU & (IData)(vlSelfRef.__PVT__index_0)))) {
                __VdlyVal__ifmap_spad__v0 = vlSelfRef.__Vlvbound_h88de6bbc__0;
                __VdlyDim0__ifmap_spad__v0 = (0xfU 
                                              & (IData)(vlSelfRef.__PVT__index_0));
                __VdlySet__ifmap_spad__v0 = 1U;
            }
            vlSelfRef.__Vlvbound_h3953f0de__0 = ((1U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0xfU)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 8U))));
            if ((0xbU >= (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v1 = vlSelfRef.__Vlvbound_h3953f0de__0;
                __VdlyDim0__ifmap_spad__v1 = (0xfU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v1 = 1U;
            }
            vlSelfRef.__Vlvbound_h2357e037__0 = ((2U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x17U)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x10U))));
            if ((0xbU >= (0xfU & ((IData)(2U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v2 = vlSelfRef.__Vlvbound_h2357e037__0;
                __VdlyDim0__ifmap_spad__v2 = (0xfU 
                                              & ((IData)(2U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v2 = 1U;
            }
            vlSelfRef.__Vlvbound_hbb266322__0 = ((3U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x1fU)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x18U))));
            if ((0xbU >= (0xfU & ((IData)(3U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v3 = vlSelfRef.__Vlvbound_hbb266322__0;
                __VdlyDim0__ifmap_spad__v3 = (0xfU 
                                              & ((IData)(3U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v3 = 1U;
            }
        } else if (((6U == (IData)(vlSelfRef.__PVT__cs)) 
                    & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))) {
            __VdlyVal__ifmap_spad__v4 = vlSelfRef.__PVT__ifmap_spad
                [4U];
            __VdlySet__ifmap_spad__v4 = 1U;
            __VdlyVal__ifmap_spad__v5 = vlSelfRef.__PVT__ifmap_spad
                [5U];
            __VdlyVal__ifmap_spad__v6 = vlSelfRef.__PVT__ifmap_spad
                [6U];
            __VdlyVal__ifmap_spad__v7 = vlSelfRef.__PVT__ifmap_spad
                [7U];
            __VdlyVal__ifmap_spad__v8 = vlSelfRef.__PVT__ifmap_spad
                [8U];
            __VdlyVal__ifmap_spad__v9 = vlSelfRef.__PVT__ifmap_spad
                [9U];
            __VdlyVal__ifmap_spad__v10 = vlSelfRef.__PVT__ifmap_spad
                [0xaU];
            __VdlyVal__ifmap_spad__v11 = vlSelfRef.__PVT__ifmap_spad
                [0xbU];
            __VdlyVal__ifmap_spad__v12 = ((0x80U & 
                                           ((~ (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                >> 7U)) 
                                            << 7U)) 
                                          | (0x7fU 
                                             & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray));
            __VdlyVal__ifmap_spad__v13 = ((1U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0xfU)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 8U))));
            __VdlyVal__ifmap_spad__v14 = ((2U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x17U)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x10U))));
            __VdlyVal__ifmap_spad__v15 = ((3U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x1fU)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x18U))));
        }
        if ((((5U == (IData)(vlSelfRef.__PVT__cs)) 
              & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                 == (IData)(vlSelfRef.__PVT__ofmap_ch))) 
             & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready))) {
            vlSelfRef.__PVT__count_ofmap_col = (((IData)(vlSelfRef.__PVT__count_ofmap_col) 
                                                 == (IData)(vlSelfRef.__PVT__ofmap_col))
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__count_ofmap_col))));
        }
        if ((8U & (IData)(vlSelfRef.__PVT__cs))) {
            __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
        } else if ((4U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((2U & (IData)(vlSelfRef.__PVT__cs))) {
                __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
            } else if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
                if ((1U & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready))) {
                    __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                               == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
                }
            } else if ((1U & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid))) {
                __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                           == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
                if ((((IData)(vlSelfRef.__PVT__count_input_ch) 
                      == (IData)(vlSelfRef.__PVT__input_ch)) 
                     & (2U == (IData)(vlSelfRef.__PVT__count_filt_col)))) {
                    __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                               == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
                }
            } else {
                __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
            if (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                 & (2U == (IData)(vlSelfRef.__PVT__count_filt_col)))) {
                __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                           == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
            }
        } else {
            __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
        }
        if (((0U == (IData)(vlSelfRef.__PVT__cs)) & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en))) {
            vlSelfRef.__PVT__operation_mode = (1U & 
                                               ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                                >> 9U));
            vlSelfRef.__PVT__ofmap_col = (0x1fU & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                                   >> 2U));
            vlSelfRef.__PVT__ofmap_ch = (3U & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                               >> 7U));
            vlSelfRef.__PVT__input_ch = (3U & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config));
        }
        vlSelfRef.__PVT__cs = vlSelfRef.__PVT__ns;
    } else {
        vlSelfRef.__PVT__i = 4U;
        __VdlySet__filter_spad__v4 = 1U;
        __VdlySet__ofmap_spad__v6 = 1U;
        __Vdly__count_input_ch = 0U;
        __Vdly__count_filt_col = 0U;
        __VdlySet__ifmap_spad__v16 = 1U;
        vlSelfRef.__PVT__count_ofmap_col = 0U;
        __Vdly__count_ofmap_ch = 0U;
        vlSelfRef.__PVT__operation_mode = 0U;
        vlSelfRef.__PVT__ofmap_col = 0U;
        vlSelfRef.__PVT__ofmap_ch = 0U;
        vlSelfRef.__PVT__input_ch = 0U;
        vlSelfRef.__PVT__cs = 0U;
    }
    if (__VdlySet__filter_spad__v0) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v0] 
            = __VdlyVal__filter_spad__v0;
    }
    if (__VdlySet__filter_spad__v1) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v1] 
            = __VdlyVal__filter_spad__v1;
    }
    if (__VdlySet__filter_spad__v2) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v2] 
            = __VdlyVal__filter_spad__v2;
    }
    if (__VdlySet__filter_spad__v3) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v3] 
            = __VdlyVal__filter_spad__v3;
    }
    if (__VdlySet__filter_spad__v4) {
        vlSelfRef.__PVT__filter_spad[0U] = 0U;
        vlSelfRef.__PVT__filter_spad[1U] = 0U;
        vlSelfRef.__PVT__filter_spad[2U] = 0U;
        vlSelfRef.__PVT__filter_spad[3U] = 0U;
        vlSelfRef.__PVT__filter_spad[4U] = 0U;
        vlSelfRef.__PVT__filter_spad[5U] = 0U;
        vlSelfRef.__PVT__filter_spad[6U] = 0U;
        vlSelfRef.__PVT__filter_spad[7U] = 0U;
        vlSelfRef.__PVT__filter_spad[8U] = 0U;
        vlSelfRef.__PVT__filter_spad[9U] = 0U;
        vlSelfRef.__PVT__filter_spad[0xaU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xbU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xcU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xdU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xeU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xfU] = 0U;
        vlSelfRef.__PVT__filter_spad[0x10U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x11U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x12U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x13U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x14U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x15U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x16U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x17U] = 0U;
    }
    if (__VdlySet__ofmap_spad__v0) {
        vlSelfRef.__PVT__ofmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[3U] = 0U;
    }
    if (__VdlySet__ofmap_spad__v4) {
        vlSelfRef.__PVT__ofmap_spad[__VdlyDim0__ofmap_spad__v4] 
            = __VdlyVal__ofmap_spad__v4;
    }
    if (__VdlySet__ofmap_spad__v5) {
        vlSelfRef.__PVT__ofmap_spad[__VdlyDim0__ofmap_spad__v5] 
            = __VdlyVal__ofmap_spad__v5;
    }
    if (__VdlySet__ofmap_spad__v6) {
        vlSelfRef.__PVT__ofmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[3U] = 0U;
    }
    if (__VdlySet__ifmap_spad__v0) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v0] 
            = __VdlyVal__ifmap_spad__v0;
    }
    if (__VdlySet__ifmap_spad__v1) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v1] 
            = __VdlyVal__ifmap_spad__v1;
    }
    if (__VdlySet__ifmap_spad__v2) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v2] 
            = __VdlyVal__ifmap_spad__v2;
    }
    if (__VdlySet__ifmap_spad__v3) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v3] 
            = __VdlyVal__ifmap_spad__v3;
    }
    if (__VdlySet__ifmap_spad__v4) {
        vlSelfRef.__PVT__ifmap_spad[0U] = __VdlyVal__ifmap_spad__v4;
        vlSelfRef.__PVT__ifmap_spad[1U] = __VdlyVal__ifmap_spad__v5;
        vlSelfRef.__PVT__ifmap_spad[2U] = __VdlyVal__ifmap_spad__v6;
        vlSelfRef.__PVT__ifmap_spad[3U] = __VdlyVal__ifmap_spad__v7;
        vlSelfRef.__PVT__ifmap_spad[4U] = __VdlyVal__ifmap_spad__v8;
        vlSelfRef.__PVT__ifmap_spad[5U] = __VdlyVal__ifmap_spad__v9;
        vlSelfRef.__PVT__ifmap_spad[6U] = __VdlyVal__ifmap_spad__v10;
        vlSelfRef.__PVT__ifmap_spad[7U] = __VdlyVal__ifmap_spad__v11;
        vlSelfRef.__PVT__ifmap_spad[8U] = __VdlyVal__ifmap_spad__v12;
        vlSelfRef.__PVT__ifmap_spad[9U] = __VdlyVal__ifmap_spad__v13;
        vlSelfRef.__PVT__ifmap_spad[0xaU] = __VdlyVal__ifmap_spad__v14;
        vlSelfRef.__PVT__ifmap_spad[0xbU] = __VdlyVal__ifmap_spad__v15;
    }
    if (__VdlySet__ifmap_spad__v16) {
        vlSelfRef.__PVT__ifmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[3U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[4U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[5U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[6U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[7U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[8U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[9U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[0xaU] = 0U;
        vlSelfRef.__PVT__ifmap_spad[0xbU] = 0U;
    }
    vlSelfRef.__PVT__count_filt_col = __Vdly__count_filt_col;
    vlSelfRef.__PVT__count_input_ch = __Vdly__count_input_ch;
    vlSelfRef.__PVT__count_ofmap_ch = __Vdly__count_ofmap_ch;
    vlSelfRef.__PVT__ifmap_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                     << 2U) | (IData)(vlSelfRef.__PVT__count_input_ch));
    vlSelfRef.__PVT__filter_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                      << 4U) | (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                 << 2U) 
                                                | (IData)(vlSelfRef.__PVT__count_input_ch)));
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
    vlSelfRef.__PVT__index_0 = ((1U == (IData)(vlSelfRef.__PVT__cs))
                                 ? (IData)(vlSelfRef.__PVT__filter_index)
                                 : (IData)(vlSelfRef.__PVT__ifmap_index));
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1\n"); );
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
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0U]));
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__2\n"); );
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
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__count_filt_col;
    __Vdly__count_filt_col = 0;
    CData/*1:0*/ __Vdly__count_ofmap_ch;
    __Vdly__count_ofmap_ch = 0;
    CData/*1:0*/ __Vdly__count_input_ch;
    __Vdly__count_input_ch = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v0;
    __VdlyVal__filter_spad__v0 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v0;
    __VdlyDim0__filter_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v0;
    __VdlySet__filter_spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v1;
    __VdlyVal__filter_spad__v1 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v1;
    __VdlyDim0__filter_spad__v1 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v1;
    __VdlySet__filter_spad__v1 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v2;
    __VdlyVal__filter_spad__v2 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v2;
    __VdlyDim0__filter_spad__v2 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v2;
    __VdlySet__filter_spad__v2 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v3;
    __VdlyVal__filter_spad__v3 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v3;
    __VdlyDim0__filter_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v3;
    __VdlySet__filter_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v4;
    __VdlySet__filter_spad__v4 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v0;
    __VdlyVal__ifmap_spad__v0 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v0;
    __VdlyDim0__ifmap_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v0;
    __VdlySet__ifmap_spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v1;
    __VdlyVal__ifmap_spad__v1 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v1;
    __VdlyDim0__ifmap_spad__v1 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v1;
    __VdlySet__ifmap_spad__v1 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v2;
    __VdlyVal__ifmap_spad__v2 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v2;
    __VdlyDim0__ifmap_spad__v2 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v2;
    __VdlySet__ifmap_spad__v2 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v3;
    __VdlyVal__ifmap_spad__v3 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v3;
    __VdlyDim0__ifmap_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v3;
    __VdlySet__ifmap_spad__v3 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v4;
    __VdlyVal__ifmap_spad__v4 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v4;
    __VdlySet__ifmap_spad__v4 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v5;
    __VdlyVal__ifmap_spad__v5 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v6;
    __VdlyVal__ifmap_spad__v6 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v7;
    __VdlyVal__ifmap_spad__v7 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v8;
    __VdlyVal__ifmap_spad__v8 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v9;
    __VdlyVal__ifmap_spad__v9 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v10;
    __VdlyVal__ifmap_spad__v10 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v11;
    __VdlyVal__ifmap_spad__v11 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v12;
    __VdlyVal__ifmap_spad__v12 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v13;
    __VdlyVal__ifmap_spad__v13 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v14;
    __VdlyVal__ifmap_spad__v14 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v15;
    __VdlyVal__ifmap_spad__v15 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v16;
    __VdlySet__ifmap_spad__v16 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v0;
    __VdlySet__ofmap_spad__v0 = 0;
    IData/*31:0*/ __VdlyVal__ofmap_spad__v4;
    __VdlyVal__ofmap_spad__v4 = 0;
    CData/*1:0*/ __VdlyDim0__ofmap_spad__v4;
    __VdlyDim0__ofmap_spad__v4 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v4;
    __VdlySet__ofmap_spad__v4 = 0;
    IData/*31:0*/ __VdlyVal__ofmap_spad__v5;
    __VdlyVal__ofmap_spad__v5 = 0;
    CData/*1:0*/ __VdlyDim0__ofmap_spad__v5;
    __VdlyDim0__ofmap_spad__v5 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v5;
    __VdlySet__ofmap_spad__v5 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v6;
    __VdlySet__ofmap_spad__v6 = 0;
    // Body
    __VdlySet__filter_spad__v0 = 0U;
    __VdlySet__filter_spad__v1 = 0U;
    __VdlySet__filter_spad__v2 = 0U;
    __VdlySet__filter_spad__v3 = 0U;
    __VdlySet__filter_spad__v4 = 0U;
    __VdlySet__ofmap_spad__v0 = 0U;
    __VdlySet__ofmap_spad__v4 = 0U;
    __VdlySet__ofmap_spad__v5 = 0U;
    __VdlySet__ofmap_spad__v6 = 0U;
    __Vdly__count_input_ch = vlSelfRef.__PVT__count_input_ch;
    __Vdly__count_filt_col = vlSelfRef.__PVT__count_filt_col;
    __VdlySet__ifmap_spad__v0 = 0U;
    __VdlySet__ifmap_spad__v1 = 0U;
    __VdlySet__ifmap_spad__v2 = 0U;
    __VdlySet__ifmap_spad__v3 = 0U;
    __VdlySet__ifmap_spad__v4 = 0U;
    __VdlySet__ifmap_spad__v16 = 0U;
    __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
    if ((1U & (~ (IData)(vlSymsp->TOP.ARESETn)))) {
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x18U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xcU;
    }
    if (vlSymsp->TOP.ARESETn) {
        if (((0U == (IData)(vlSelfRef.__PVT__cs)) | 
             (6U == (IData)(vlSelfRef.__PVT__cs)))) {
            vlSelfRef.__PVT__i = 4U;
            __VdlySet__ofmap_spad__v0 = 1U;
        } else if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            __VdlyVal__ofmap_spad__v4 = vlSelfRef.__PVT__add_res;
            __VdlyDim0__ofmap_spad__v4 = vlSelfRef.__PVT__count_ofmap_ch;
            __VdlySet__ofmap_spad__v4 = 1U;
        } else if (((4U == (IData)(vlSelfRef.__PVT__cs)) 
                    & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                               >> 1U)))) {
            __VdlyVal__ofmap_spad__v5 = vlSelfRef.__PVT__add_res;
            __VdlyDim0__ofmap_spad__v5 = vlSelfRef.__PVT__count_ofmap_ch;
            __VdlySet__ofmap_spad__v5 = 1U;
        }
        if (((1U == (IData)(vlSelfRef.__PVT__cs)) & 
             ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
              >> 1U))) {
            vlSelfRef.__Vlvbound_h652caa15__0 = (0xffU 
                                                 & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray);
            if ((0x2fU >= (IData)(vlSelfRef.__PVT__index_0))) {
                __VdlyVal__filter_spad__v0 = vlSelfRef.__Vlvbound_h652caa15__0;
                __VdlyDim0__filter_spad__v0 = vlSelfRef.__PVT__index_0;
                __VdlySet__filter_spad__v0 = 1U;
            }
            vlSelfRef.__Vlvbound_h94c06f97__0 = (0xffU 
                                                 & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                    >> 8U));
            if ((0x2fU >= (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v1 = vlSelfRef.__Vlvbound_h94c06f97__0;
                __VdlyDim0__filter_spad__v1 = (0x3fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v1 = 1U;
            }
            vlSelfRef.__Vlvbound_h3265d838__0 = (0xffU 
                                                 & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                    >> 0x10U));
            if ((0x2fU >= (0x3fU & ((IData)(2U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v2 = vlSelfRef.__Vlvbound_h3265d838__0;
                __VdlyDim0__filter_spad__v2 = (0x3fU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v2 = 1U;
            }
            vlSelfRef.__Vlvbound_h136a5f52__0 = (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                 >> 0x18U);
            if ((0x2fU >= (0x3fU & ((IData)(3U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v3 = vlSelfRef.__Vlvbound_h136a5f52__0;
                __VdlyDim0__filter_spad__v3 = (0x3fU 
                                               & ((IData)(3U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v3 = 1U;
            }
        }
        if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            __Vdly__count_input_ch = (((IData)(vlSelfRef.__PVT__count_input_ch) 
                                       == (IData)(vlSelfRef.__PVT__input_ch))
                                       ? 0U : (3U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__count_input_ch))));
        }
        if ((1U == (IData)(vlSelfRef.__PVT__cs))) {
            if ((2U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__cs))) {
            if ((2U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            if (((IData)(vlSelfRef.__PVT__count_input_ch) 
                 == (IData)(vlSelfRef.__PVT__input_ch))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else {
            __Vdly__count_filt_col = vlSelfRef.__PVT__count_filt_col;
        }
        if (((2U == (IData)(vlSelfRef.__PVT__cs)) & 
             ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
              >> 1U))) {
            vlSelfRef.__Vlvbound_h88de6bbc__0 = ((0x80U 
                                                  & ((~ 
                                                      (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                       >> 7U)) 
                                                     << 7U)) 
                                                 | (0x7fU 
                                                    & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray));
            if ((0xbU >= (0xfU & (IData)(vlSelfRef.__PVT__index_0)))) {
                __VdlyVal__ifmap_spad__v0 = vlSelfRef.__Vlvbound_h88de6bbc__0;
                __VdlyDim0__ifmap_spad__v0 = (0xfU 
                                              & (IData)(vlSelfRef.__PVT__index_0));
                __VdlySet__ifmap_spad__v0 = 1U;
            }
            vlSelfRef.__Vlvbound_h3953f0de__0 = ((1U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0xfU)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 8U))));
            if ((0xbU >= (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v1 = vlSelfRef.__Vlvbound_h3953f0de__0;
                __VdlyDim0__ifmap_spad__v1 = (0xfU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v1 = 1U;
            }
            vlSelfRef.__Vlvbound_h2357e037__0 = ((2U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x17U)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x10U))));
            if ((0xbU >= (0xfU & ((IData)(2U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v2 = vlSelfRef.__Vlvbound_h2357e037__0;
                __VdlyDim0__ifmap_spad__v2 = (0xfU 
                                              & ((IData)(2U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v2 = 1U;
            }
            vlSelfRef.__Vlvbound_hbb266322__0 = ((3U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x1fU)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x18U))));
            if ((0xbU >= (0xfU & ((IData)(3U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v3 = vlSelfRef.__Vlvbound_hbb266322__0;
                __VdlyDim0__ifmap_spad__v3 = (0xfU 
                                              & ((IData)(3U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v3 = 1U;
            }
        } else if (((6U == (IData)(vlSelfRef.__PVT__cs)) 
                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                       >> 1U))) {
            __VdlyVal__ifmap_spad__v4 = vlSelfRef.__PVT__ifmap_spad
                [4U];
            __VdlySet__ifmap_spad__v4 = 1U;
            __VdlyVal__ifmap_spad__v5 = vlSelfRef.__PVT__ifmap_spad
                [5U];
            __VdlyVal__ifmap_spad__v6 = vlSelfRef.__PVT__ifmap_spad
                [6U];
            __VdlyVal__ifmap_spad__v7 = vlSelfRef.__PVT__ifmap_spad
                [7U];
            __VdlyVal__ifmap_spad__v8 = vlSelfRef.__PVT__ifmap_spad
                [8U];
            __VdlyVal__ifmap_spad__v9 = vlSelfRef.__PVT__ifmap_spad
                [9U];
            __VdlyVal__ifmap_spad__v10 = vlSelfRef.__PVT__ifmap_spad
                [0xaU];
            __VdlyVal__ifmap_spad__v11 = vlSelfRef.__PVT__ifmap_spad
                [0xbU];
            __VdlyVal__ifmap_spad__v12 = ((0x80U & 
                                           ((~ (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                >> 7U)) 
                                            << 7U)) 
                                          | (0x7fU 
                                             & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray));
            __VdlyVal__ifmap_spad__v13 = ((1U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0xfU)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 8U))));
            __VdlyVal__ifmap_spad__v14 = ((2U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x17U)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x10U))));
            __VdlyVal__ifmap_spad__v15 = ((3U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x1fU)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x18U))));
        }
        if ((((5U == (IData)(vlSelfRef.__PVT__cs)) 
              & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                 == (IData)(vlSelfRef.__PVT__ofmap_ch))) 
             & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                        >> 1U)))) {
            vlSelfRef.__PVT__count_ofmap_col = (((IData)(vlSelfRef.__PVT__count_ofmap_col) 
                                                 == (IData)(vlSelfRef.__PVT__ofmap_col))
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__count_ofmap_col))));
        }
        if ((8U & (IData)(vlSelfRef.__PVT__cs))) {
            __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
        } else if ((4U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((2U & (IData)(vlSelfRef.__PVT__cs))) {
                __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
            } else if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
                if ((1U & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                   >> 1U)))) {
                    __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                               == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
                }
            } else if ((1U & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                      >> 1U)))) {
                __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                           == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
                if ((((IData)(vlSelfRef.__PVT__count_input_ch) 
                      == (IData)(vlSelfRef.__PVT__input_ch)) 
                     & (2U == (IData)(vlSelfRef.__PVT__count_filt_col)))) {
                    __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                               == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
                }
            } else {
                __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                  >> 1U) & (2U == (IData)(vlSelfRef.__PVT__count_filt_col)))) {
                __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                           == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
            }
        } else {
            __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
        }
        if (((0U == (IData)(vlSelfRef.__PVT__cs)) & (IData)(
                                                            (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                             >> 1U)))) {
            vlSelfRef.__PVT__operation_mode = (1U & 
                                               ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                                >> 9U));
            vlSelfRef.__PVT__ofmap_col = (0x1fU & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                                   >> 2U));
            vlSelfRef.__PVT__ofmap_ch = (3U & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                               >> 7U));
            vlSelfRef.__PVT__input_ch = (3U & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config));
        }
        vlSelfRef.__PVT__cs = vlSelfRef.__PVT__ns;
    } else {
        vlSelfRef.__PVT__i = 4U;
        __VdlySet__filter_spad__v4 = 1U;
        __VdlySet__ofmap_spad__v6 = 1U;
        __Vdly__count_input_ch = 0U;
        __Vdly__count_filt_col = 0U;
        __VdlySet__ifmap_spad__v16 = 1U;
        vlSelfRef.__PVT__count_ofmap_col = 0U;
        __Vdly__count_ofmap_ch = 0U;
        vlSelfRef.__PVT__operation_mode = 0U;
        vlSelfRef.__PVT__ofmap_col = 0U;
        vlSelfRef.__PVT__ofmap_ch = 0U;
        vlSelfRef.__PVT__input_ch = 0U;
        vlSelfRef.__PVT__cs = 0U;
    }
    if (__VdlySet__filter_spad__v0) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v0] 
            = __VdlyVal__filter_spad__v0;
    }
    if (__VdlySet__filter_spad__v1) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v1] 
            = __VdlyVal__filter_spad__v1;
    }
    if (__VdlySet__filter_spad__v2) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v2] 
            = __VdlyVal__filter_spad__v2;
    }
    if (__VdlySet__filter_spad__v3) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v3] 
            = __VdlyVal__filter_spad__v3;
    }
    if (__VdlySet__filter_spad__v4) {
        vlSelfRef.__PVT__filter_spad[0U] = 0U;
        vlSelfRef.__PVT__filter_spad[1U] = 0U;
        vlSelfRef.__PVT__filter_spad[2U] = 0U;
        vlSelfRef.__PVT__filter_spad[3U] = 0U;
        vlSelfRef.__PVT__filter_spad[4U] = 0U;
        vlSelfRef.__PVT__filter_spad[5U] = 0U;
        vlSelfRef.__PVT__filter_spad[6U] = 0U;
        vlSelfRef.__PVT__filter_spad[7U] = 0U;
        vlSelfRef.__PVT__filter_spad[8U] = 0U;
        vlSelfRef.__PVT__filter_spad[9U] = 0U;
        vlSelfRef.__PVT__filter_spad[0xaU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xbU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xcU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xdU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xeU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xfU] = 0U;
        vlSelfRef.__PVT__filter_spad[0x10U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x11U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x12U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x13U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x14U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x15U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x16U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x17U] = 0U;
    }
    if (__VdlySet__ofmap_spad__v0) {
        vlSelfRef.__PVT__ofmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[3U] = 0U;
    }
    if (__VdlySet__ofmap_spad__v4) {
        vlSelfRef.__PVT__ofmap_spad[__VdlyDim0__ofmap_spad__v4] 
            = __VdlyVal__ofmap_spad__v4;
    }
    if (__VdlySet__ofmap_spad__v5) {
        vlSelfRef.__PVT__ofmap_spad[__VdlyDim0__ofmap_spad__v5] 
            = __VdlyVal__ofmap_spad__v5;
    }
    if (__VdlySet__ofmap_spad__v6) {
        vlSelfRef.__PVT__ofmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[3U] = 0U;
    }
    if (__VdlySet__ifmap_spad__v0) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v0] 
            = __VdlyVal__ifmap_spad__v0;
    }
    if (__VdlySet__ifmap_spad__v1) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v1] 
            = __VdlyVal__ifmap_spad__v1;
    }
    if (__VdlySet__ifmap_spad__v2) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v2] 
            = __VdlyVal__ifmap_spad__v2;
    }
    if (__VdlySet__ifmap_spad__v3) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v3] 
            = __VdlyVal__ifmap_spad__v3;
    }
    if (__VdlySet__ifmap_spad__v4) {
        vlSelfRef.__PVT__ifmap_spad[0U] = __VdlyVal__ifmap_spad__v4;
        vlSelfRef.__PVT__ifmap_spad[1U] = __VdlyVal__ifmap_spad__v5;
        vlSelfRef.__PVT__ifmap_spad[2U] = __VdlyVal__ifmap_spad__v6;
        vlSelfRef.__PVT__ifmap_spad[3U] = __VdlyVal__ifmap_spad__v7;
        vlSelfRef.__PVT__ifmap_spad[4U] = __VdlyVal__ifmap_spad__v8;
        vlSelfRef.__PVT__ifmap_spad[5U] = __VdlyVal__ifmap_spad__v9;
        vlSelfRef.__PVT__ifmap_spad[6U] = __VdlyVal__ifmap_spad__v10;
        vlSelfRef.__PVT__ifmap_spad[7U] = __VdlyVal__ifmap_spad__v11;
        vlSelfRef.__PVT__ifmap_spad[8U] = __VdlyVal__ifmap_spad__v12;
        vlSelfRef.__PVT__ifmap_spad[9U] = __VdlyVal__ifmap_spad__v13;
        vlSelfRef.__PVT__ifmap_spad[0xaU] = __VdlyVal__ifmap_spad__v14;
        vlSelfRef.__PVT__ifmap_spad[0xbU] = __VdlyVal__ifmap_spad__v15;
    }
    if (__VdlySet__ifmap_spad__v16) {
        vlSelfRef.__PVT__ifmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[3U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[4U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[5U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[6U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[7U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[8U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[9U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[0xaU] = 0U;
        vlSelfRef.__PVT__ifmap_spad[0xbU] = 0U;
    }
    vlSelfRef.__PVT__count_filt_col = __Vdly__count_filt_col;
    vlSelfRef.__PVT__count_input_ch = __Vdly__count_input_ch;
    vlSelfRef.__PVT__count_ofmap_ch = __Vdly__count_ofmap_ch;
    vlSelfRef.__PVT__ifmap_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                     << 2U) | (IData)(vlSelfRef.__PVT__count_input_ch));
    vlSelfRef.__PVT__filter_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                      << 4U) | (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                 << 2U) 
                                                | (IData)(vlSelfRef.__PVT__count_input_ch)));
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
    vlSelfRef.__PVT__index_0 = ((1U == (IData)(vlSelfRef.__PVT__cs))
                                 ? (IData)(vlSelfRef.__PVT__filter_index)
                                 : (IData)(vlSelfRef.__PVT__ifmap_index));
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1\n"); );
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
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[1U]));
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__2\n"); );
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
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__count_filt_col;
    __Vdly__count_filt_col = 0;
    CData/*1:0*/ __Vdly__count_ofmap_ch;
    __Vdly__count_ofmap_ch = 0;
    CData/*1:0*/ __Vdly__count_input_ch;
    __Vdly__count_input_ch = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v0;
    __VdlyVal__filter_spad__v0 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v0;
    __VdlyDim0__filter_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v0;
    __VdlySet__filter_spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v1;
    __VdlyVal__filter_spad__v1 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v1;
    __VdlyDim0__filter_spad__v1 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v1;
    __VdlySet__filter_spad__v1 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v2;
    __VdlyVal__filter_spad__v2 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v2;
    __VdlyDim0__filter_spad__v2 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v2;
    __VdlySet__filter_spad__v2 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v3;
    __VdlyVal__filter_spad__v3 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v3;
    __VdlyDim0__filter_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v3;
    __VdlySet__filter_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v4;
    __VdlySet__filter_spad__v4 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v0;
    __VdlyVal__ifmap_spad__v0 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v0;
    __VdlyDim0__ifmap_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v0;
    __VdlySet__ifmap_spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v1;
    __VdlyVal__ifmap_spad__v1 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v1;
    __VdlyDim0__ifmap_spad__v1 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v1;
    __VdlySet__ifmap_spad__v1 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v2;
    __VdlyVal__ifmap_spad__v2 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v2;
    __VdlyDim0__ifmap_spad__v2 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v2;
    __VdlySet__ifmap_spad__v2 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v3;
    __VdlyVal__ifmap_spad__v3 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v3;
    __VdlyDim0__ifmap_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v3;
    __VdlySet__ifmap_spad__v3 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v4;
    __VdlyVal__ifmap_spad__v4 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v4;
    __VdlySet__ifmap_spad__v4 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v5;
    __VdlyVal__ifmap_spad__v5 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v6;
    __VdlyVal__ifmap_spad__v6 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v7;
    __VdlyVal__ifmap_spad__v7 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v8;
    __VdlyVal__ifmap_spad__v8 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v9;
    __VdlyVal__ifmap_spad__v9 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v10;
    __VdlyVal__ifmap_spad__v10 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v11;
    __VdlyVal__ifmap_spad__v11 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v12;
    __VdlyVal__ifmap_spad__v12 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v13;
    __VdlyVal__ifmap_spad__v13 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v14;
    __VdlyVal__ifmap_spad__v14 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v15;
    __VdlyVal__ifmap_spad__v15 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v16;
    __VdlySet__ifmap_spad__v16 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v0;
    __VdlySet__ofmap_spad__v0 = 0;
    IData/*31:0*/ __VdlyVal__ofmap_spad__v4;
    __VdlyVal__ofmap_spad__v4 = 0;
    CData/*1:0*/ __VdlyDim0__ofmap_spad__v4;
    __VdlyDim0__ofmap_spad__v4 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v4;
    __VdlySet__ofmap_spad__v4 = 0;
    IData/*31:0*/ __VdlyVal__ofmap_spad__v5;
    __VdlyVal__ofmap_spad__v5 = 0;
    CData/*1:0*/ __VdlyDim0__ofmap_spad__v5;
    __VdlyDim0__ofmap_spad__v5 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v5;
    __VdlySet__ofmap_spad__v5 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v6;
    __VdlySet__ofmap_spad__v6 = 0;
    // Body
    __VdlySet__filter_spad__v0 = 0U;
    __VdlySet__filter_spad__v1 = 0U;
    __VdlySet__filter_spad__v2 = 0U;
    __VdlySet__filter_spad__v3 = 0U;
    __VdlySet__filter_spad__v4 = 0U;
    __VdlySet__ofmap_spad__v0 = 0U;
    __VdlySet__ofmap_spad__v4 = 0U;
    __VdlySet__ofmap_spad__v5 = 0U;
    __VdlySet__ofmap_spad__v6 = 0U;
    __Vdly__count_input_ch = vlSelfRef.__PVT__count_input_ch;
    __Vdly__count_filt_col = vlSelfRef.__PVT__count_filt_col;
    __VdlySet__ifmap_spad__v0 = 0U;
    __VdlySet__ifmap_spad__v1 = 0U;
    __VdlySet__ifmap_spad__v2 = 0U;
    __VdlySet__ifmap_spad__v3 = 0U;
    __VdlySet__ifmap_spad__v4 = 0U;
    __VdlySet__ifmap_spad__v16 = 0U;
    __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
    if ((1U & (~ (IData)(vlSymsp->TOP.ARESETn)))) {
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x18U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xcU;
    }
    if (vlSymsp->TOP.ARESETn) {
        if (((0U == (IData)(vlSelfRef.__PVT__cs)) | 
             (6U == (IData)(vlSelfRef.__PVT__cs)))) {
            vlSelfRef.__PVT__i = 4U;
            __VdlySet__ofmap_spad__v0 = 1U;
        } else if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            __VdlyVal__ofmap_spad__v4 = vlSelfRef.__PVT__add_res;
            __VdlyDim0__ofmap_spad__v4 = vlSelfRef.__PVT__count_ofmap_ch;
            __VdlySet__ofmap_spad__v4 = 1U;
        } else if (((4U == (IData)(vlSelfRef.__PVT__cs)) 
                    & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                               >> 2U)))) {
            __VdlyVal__ofmap_spad__v5 = vlSelfRef.__PVT__add_res;
            __VdlyDim0__ofmap_spad__v5 = vlSelfRef.__PVT__count_ofmap_ch;
            __VdlySet__ofmap_spad__v5 = 1U;
        }
        if (((1U == (IData)(vlSelfRef.__PVT__cs)) & 
             ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
              >> 2U))) {
            vlSelfRef.__Vlvbound_h652caa15__0 = (0xffU 
                                                 & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray);
            if ((0x2fU >= (IData)(vlSelfRef.__PVT__index_0))) {
                __VdlyVal__filter_spad__v0 = vlSelfRef.__Vlvbound_h652caa15__0;
                __VdlyDim0__filter_spad__v0 = vlSelfRef.__PVT__index_0;
                __VdlySet__filter_spad__v0 = 1U;
            }
            vlSelfRef.__Vlvbound_h94c06f97__0 = (0xffU 
                                                 & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                    >> 8U));
            if ((0x2fU >= (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v1 = vlSelfRef.__Vlvbound_h94c06f97__0;
                __VdlyDim0__filter_spad__v1 = (0x3fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v1 = 1U;
            }
            vlSelfRef.__Vlvbound_h3265d838__0 = (0xffU 
                                                 & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                    >> 0x10U));
            if ((0x2fU >= (0x3fU & ((IData)(2U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v2 = vlSelfRef.__Vlvbound_h3265d838__0;
                __VdlyDim0__filter_spad__v2 = (0x3fU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v2 = 1U;
            }
            vlSelfRef.__Vlvbound_h136a5f52__0 = (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                 >> 0x18U);
            if ((0x2fU >= (0x3fU & ((IData)(3U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v3 = vlSelfRef.__Vlvbound_h136a5f52__0;
                __VdlyDim0__filter_spad__v3 = (0x3fU 
                                               & ((IData)(3U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v3 = 1U;
            }
        }
        if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            __Vdly__count_input_ch = (((IData)(vlSelfRef.__PVT__count_input_ch) 
                                       == (IData)(vlSelfRef.__PVT__input_ch))
                                       ? 0U : (3U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__count_input_ch))));
        }
        if ((1U == (IData)(vlSelfRef.__PVT__cs))) {
            if ((4U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__cs))) {
            if ((4U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            if (((IData)(vlSelfRef.__PVT__count_input_ch) 
                 == (IData)(vlSelfRef.__PVT__input_ch))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else {
            __Vdly__count_filt_col = vlSelfRef.__PVT__count_filt_col;
        }
        if (((2U == (IData)(vlSelfRef.__PVT__cs)) & 
             ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
              >> 2U))) {
            vlSelfRef.__Vlvbound_h88de6bbc__0 = ((0x80U 
                                                  & ((~ 
                                                      (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                       >> 7U)) 
                                                     << 7U)) 
                                                 | (0x7fU 
                                                    & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray));
            if ((0xbU >= (0xfU & (IData)(vlSelfRef.__PVT__index_0)))) {
                __VdlyVal__ifmap_spad__v0 = vlSelfRef.__Vlvbound_h88de6bbc__0;
                __VdlyDim0__ifmap_spad__v0 = (0xfU 
                                              & (IData)(vlSelfRef.__PVT__index_0));
                __VdlySet__ifmap_spad__v0 = 1U;
            }
            vlSelfRef.__Vlvbound_h3953f0de__0 = ((1U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0xfU)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 8U))));
            if ((0xbU >= (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v1 = vlSelfRef.__Vlvbound_h3953f0de__0;
                __VdlyDim0__ifmap_spad__v1 = (0xfU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v1 = 1U;
            }
            vlSelfRef.__Vlvbound_h2357e037__0 = ((2U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x17U)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x10U))));
            if ((0xbU >= (0xfU & ((IData)(2U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v2 = vlSelfRef.__Vlvbound_h2357e037__0;
                __VdlyDim0__ifmap_spad__v2 = (0xfU 
                                              & ((IData)(2U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v2 = 1U;
            }
            vlSelfRef.__Vlvbound_hbb266322__0 = ((3U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x1fU)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x18U))));
            if ((0xbU >= (0xfU & ((IData)(3U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v3 = vlSelfRef.__Vlvbound_hbb266322__0;
                __VdlyDim0__ifmap_spad__v3 = (0xfU 
                                              & ((IData)(3U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v3 = 1U;
            }
        } else if (((6U == (IData)(vlSelfRef.__PVT__cs)) 
                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                       >> 2U))) {
            __VdlyVal__ifmap_spad__v4 = vlSelfRef.__PVT__ifmap_spad
                [4U];
            __VdlySet__ifmap_spad__v4 = 1U;
            __VdlyVal__ifmap_spad__v5 = vlSelfRef.__PVT__ifmap_spad
                [5U];
            __VdlyVal__ifmap_spad__v6 = vlSelfRef.__PVT__ifmap_spad
                [6U];
            __VdlyVal__ifmap_spad__v7 = vlSelfRef.__PVT__ifmap_spad
                [7U];
            __VdlyVal__ifmap_spad__v8 = vlSelfRef.__PVT__ifmap_spad
                [8U];
            __VdlyVal__ifmap_spad__v9 = vlSelfRef.__PVT__ifmap_spad
                [9U];
            __VdlyVal__ifmap_spad__v10 = vlSelfRef.__PVT__ifmap_spad
                [0xaU];
            __VdlyVal__ifmap_spad__v11 = vlSelfRef.__PVT__ifmap_spad
                [0xbU];
            __VdlyVal__ifmap_spad__v12 = ((0x80U & 
                                           ((~ (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                >> 7U)) 
                                            << 7U)) 
                                          | (0x7fU 
                                             & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray));
            __VdlyVal__ifmap_spad__v13 = ((1U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0xfU)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 8U))));
            __VdlyVal__ifmap_spad__v14 = ((2U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x17U)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x10U))));
            __VdlyVal__ifmap_spad__v15 = ((3U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x1fU)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x18U))));
        }
        if ((((5U == (IData)(vlSelfRef.__PVT__cs)) 
              & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                 == (IData)(vlSelfRef.__PVT__ofmap_ch))) 
             & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                        >> 2U)))) {
            vlSelfRef.__PVT__count_ofmap_col = (((IData)(vlSelfRef.__PVT__count_ofmap_col) 
                                                 == (IData)(vlSelfRef.__PVT__ofmap_col))
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__count_ofmap_col))));
        }
        if ((8U & (IData)(vlSelfRef.__PVT__cs))) {
            __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
        } else if ((4U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((2U & (IData)(vlSelfRef.__PVT__cs))) {
                __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
            } else if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
                if ((1U & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                   >> 2U)))) {
                    __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                               == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
                }
            } else if ((1U & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                      >> 2U)))) {
                __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                           == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
                if ((((IData)(vlSelfRef.__PVT__count_input_ch) 
                      == (IData)(vlSelfRef.__PVT__input_ch)) 
                     & (2U == (IData)(vlSelfRef.__PVT__count_filt_col)))) {
                    __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                               == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
                }
            } else {
                __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                  >> 2U) & (2U == (IData)(vlSelfRef.__PVT__count_filt_col)))) {
                __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                           == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
            }
        } else {
            __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
        }
        if (((0U == (IData)(vlSelfRef.__PVT__cs)) & (IData)(
                                                            (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                             >> 2U)))) {
            vlSelfRef.__PVT__operation_mode = (1U & 
                                               ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                                >> 9U));
            vlSelfRef.__PVT__ofmap_col = (0x1fU & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                                   >> 2U));
            vlSelfRef.__PVT__ofmap_ch = (3U & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                               >> 7U));
            vlSelfRef.__PVT__input_ch = (3U & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config));
        }
        vlSelfRef.__PVT__cs = vlSelfRef.__PVT__ns;
    } else {
        vlSelfRef.__PVT__i = 4U;
        __VdlySet__filter_spad__v4 = 1U;
        __VdlySet__ofmap_spad__v6 = 1U;
        __Vdly__count_input_ch = 0U;
        __Vdly__count_filt_col = 0U;
        __VdlySet__ifmap_spad__v16 = 1U;
        vlSelfRef.__PVT__count_ofmap_col = 0U;
        __Vdly__count_ofmap_ch = 0U;
        vlSelfRef.__PVT__operation_mode = 0U;
        vlSelfRef.__PVT__ofmap_col = 0U;
        vlSelfRef.__PVT__ofmap_ch = 0U;
        vlSelfRef.__PVT__input_ch = 0U;
        vlSelfRef.__PVT__cs = 0U;
    }
    if (__VdlySet__filter_spad__v0) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v0] 
            = __VdlyVal__filter_spad__v0;
    }
    if (__VdlySet__filter_spad__v1) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v1] 
            = __VdlyVal__filter_spad__v1;
    }
    if (__VdlySet__filter_spad__v2) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v2] 
            = __VdlyVal__filter_spad__v2;
    }
    if (__VdlySet__filter_spad__v3) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v3] 
            = __VdlyVal__filter_spad__v3;
    }
    if (__VdlySet__filter_spad__v4) {
        vlSelfRef.__PVT__filter_spad[0U] = 0U;
        vlSelfRef.__PVT__filter_spad[1U] = 0U;
        vlSelfRef.__PVT__filter_spad[2U] = 0U;
        vlSelfRef.__PVT__filter_spad[3U] = 0U;
        vlSelfRef.__PVT__filter_spad[4U] = 0U;
        vlSelfRef.__PVT__filter_spad[5U] = 0U;
        vlSelfRef.__PVT__filter_spad[6U] = 0U;
        vlSelfRef.__PVT__filter_spad[7U] = 0U;
        vlSelfRef.__PVT__filter_spad[8U] = 0U;
        vlSelfRef.__PVT__filter_spad[9U] = 0U;
        vlSelfRef.__PVT__filter_spad[0xaU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xbU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xcU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xdU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xeU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xfU] = 0U;
        vlSelfRef.__PVT__filter_spad[0x10U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x11U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x12U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x13U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x14U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x15U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x16U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x17U] = 0U;
    }
    if (__VdlySet__ofmap_spad__v0) {
        vlSelfRef.__PVT__ofmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[3U] = 0U;
    }
    if (__VdlySet__ofmap_spad__v4) {
        vlSelfRef.__PVT__ofmap_spad[__VdlyDim0__ofmap_spad__v4] 
            = __VdlyVal__ofmap_spad__v4;
    }
    if (__VdlySet__ofmap_spad__v5) {
        vlSelfRef.__PVT__ofmap_spad[__VdlyDim0__ofmap_spad__v5] 
            = __VdlyVal__ofmap_spad__v5;
    }
    if (__VdlySet__ofmap_spad__v6) {
        vlSelfRef.__PVT__ofmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[3U] = 0U;
    }
    if (__VdlySet__ifmap_spad__v0) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v0] 
            = __VdlyVal__ifmap_spad__v0;
    }
    if (__VdlySet__ifmap_spad__v1) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v1] 
            = __VdlyVal__ifmap_spad__v1;
    }
    if (__VdlySet__ifmap_spad__v2) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v2] 
            = __VdlyVal__ifmap_spad__v2;
    }
    if (__VdlySet__ifmap_spad__v3) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v3] 
            = __VdlyVal__ifmap_spad__v3;
    }
    if (__VdlySet__ifmap_spad__v4) {
        vlSelfRef.__PVT__ifmap_spad[0U] = __VdlyVal__ifmap_spad__v4;
        vlSelfRef.__PVT__ifmap_spad[1U] = __VdlyVal__ifmap_spad__v5;
        vlSelfRef.__PVT__ifmap_spad[2U] = __VdlyVal__ifmap_spad__v6;
        vlSelfRef.__PVT__ifmap_spad[3U] = __VdlyVal__ifmap_spad__v7;
        vlSelfRef.__PVT__ifmap_spad[4U] = __VdlyVal__ifmap_spad__v8;
        vlSelfRef.__PVT__ifmap_spad[5U] = __VdlyVal__ifmap_spad__v9;
        vlSelfRef.__PVT__ifmap_spad[6U] = __VdlyVal__ifmap_spad__v10;
        vlSelfRef.__PVT__ifmap_spad[7U] = __VdlyVal__ifmap_spad__v11;
        vlSelfRef.__PVT__ifmap_spad[8U] = __VdlyVal__ifmap_spad__v12;
        vlSelfRef.__PVT__ifmap_spad[9U] = __VdlyVal__ifmap_spad__v13;
        vlSelfRef.__PVT__ifmap_spad[0xaU] = __VdlyVal__ifmap_spad__v14;
        vlSelfRef.__PVT__ifmap_spad[0xbU] = __VdlyVal__ifmap_spad__v15;
    }
    if (__VdlySet__ifmap_spad__v16) {
        vlSelfRef.__PVT__ifmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[3U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[4U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[5U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[6U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[7U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[8U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[9U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[0xaU] = 0U;
        vlSelfRef.__PVT__ifmap_spad[0xbU] = 0U;
    }
    vlSelfRef.__PVT__count_filt_col = __Vdly__count_filt_col;
    vlSelfRef.__PVT__count_input_ch = __Vdly__count_input_ch;
    vlSelfRef.__PVT__count_ofmap_ch = __Vdly__count_ofmap_ch;
    vlSelfRef.__PVT__ifmap_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                     << 2U) | (IData)(vlSelfRef.__PVT__count_input_ch));
    vlSelfRef.__PVT__filter_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                      << 4U) | (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                 << 2U) 
                                                | (IData)(vlSelfRef.__PVT__count_input_ch)));
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
    vlSelfRef.__PVT__index_0 = ((1U == (IData)(vlSelfRef.__PVT__cs))
                                 ? (IData)(vlSelfRef.__PVT__filter_index)
                                 : (IData)(vlSelfRef.__PVT__ifmap_index));
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1\n"); );
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
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[2U]));
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__2\n"); );
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
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__count_filt_col;
    __Vdly__count_filt_col = 0;
    CData/*1:0*/ __Vdly__count_ofmap_ch;
    __Vdly__count_ofmap_ch = 0;
    CData/*1:0*/ __Vdly__count_input_ch;
    __Vdly__count_input_ch = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v0;
    __VdlyVal__filter_spad__v0 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v0;
    __VdlyDim0__filter_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v0;
    __VdlySet__filter_spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v1;
    __VdlyVal__filter_spad__v1 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v1;
    __VdlyDim0__filter_spad__v1 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v1;
    __VdlySet__filter_spad__v1 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v2;
    __VdlyVal__filter_spad__v2 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v2;
    __VdlyDim0__filter_spad__v2 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v2;
    __VdlySet__filter_spad__v2 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v3;
    __VdlyVal__filter_spad__v3 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v3;
    __VdlyDim0__filter_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v3;
    __VdlySet__filter_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v4;
    __VdlySet__filter_spad__v4 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v0;
    __VdlyVal__ifmap_spad__v0 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v0;
    __VdlyDim0__ifmap_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v0;
    __VdlySet__ifmap_spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v1;
    __VdlyVal__ifmap_spad__v1 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v1;
    __VdlyDim0__ifmap_spad__v1 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v1;
    __VdlySet__ifmap_spad__v1 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v2;
    __VdlyVal__ifmap_spad__v2 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v2;
    __VdlyDim0__ifmap_spad__v2 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v2;
    __VdlySet__ifmap_spad__v2 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v3;
    __VdlyVal__ifmap_spad__v3 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v3;
    __VdlyDim0__ifmap_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v3;
    __VdlySet__ifmap_spad__v3 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v4;
    __VdlyVal__ifmap_spad__v4 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v4;
    __VdlySet__ifmap_spad__v4 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v5;
    __VdlyVal__ifmap_spad__v5 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v6;
    __VdlyVal__ifmap_spad__v6 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v7;
    __VdlyVal__ifmap_spad__v7 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v8;
    __VdlyVal__ifmap_spad__v8 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v9;
    __VdlyVal__ifmap_spad__v9 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v10;
    __VdlyVal__ifmap_spad__v10 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v11;
    __VdlyVal__ifmap_spad__v11 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v12;
    __VdlyVal__ifmap_spad__v12 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v13;
    __VdlyVal__ifmap_spad__v13 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v14;
    __VdlyVal__ifmap_spad__v14 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v15;
    __VdlyVal__ifmap_spad__v15 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v16;
    __VdlySet__ifmap_spad__v16 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v0;
    __VdlySet__ofmap_spad__v0 = 0;
    IData/*31:0*/ __VdlyVal__ofmap_spad__v4;
    __VdlyVal__ofmap_spad__v4 = 0;
    CData/*1:0*/ __VdlyDim0__ofmap_spad__v4;
    __VdlyDim0__ofmap_spad__v4 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v4;
    __VdlySet__ofmap_spad__v4 = 0;
    IData/*31:0*/ __VdlyVal__ofmap_spad__v5;
    __VdlyVal__ofmap_spad__v5 = 0;
    CData/*1:0*/ __VdlyDim0__ofmap_spad__v5;
    __VdlyDim0__ofmap_spad__v5 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v5;
    __VdlySet__ofmap_spad__v5 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v6;
    __VdlySet__ofmap_spad__v6 = 0;
    // Body
    __VdlySet__filter_spad__v0 = 0U;
    __VdlySet__filter_spad__v1 = 0U;
    __VdlySet__filter_spad__v2 = 0U;
    __VdlySet__filter_spad__v3 = 0U;
    __VdlySet__filter_spad__v4 = 0U;
    __VdlySet__ofmap_spad__v0 = 0U;
    __VdlySet__ofmap_spad__v4 = 0U;
    __VdlySet__ofmap_spad__v5 = 0U;
    __VdlySet__ofmap_spad__v6 = 0U;
    __Vdly__count_input_ch = vlSelfRef.__PVT__count_input_ch;
    __Vdly__count_filt_col = vlSelfRef.__PVT__count_filt_col;
    __VdlySet__ifmap_spad__v0 = 0U;
    __VdlySet__ifmap_spad__v1 = 0U;
    __VdlySet__ifmap_spad__v2 = 0U;
    __VdlySet__ifmap_spad__v3 = 0U;
    __VdlySet__ifmap_spad__v4 = 0U;
    __VdlySet__ifmap_spad__v16 = 0U;
    __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
    if ((1U & (~ (IData)(vlSymsp->TOP.ARESETn)))) {
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x18U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xcU;
    }
    if (vlSymsp->TOP.ARESETn) {
        if (((0U == (IData)(vlSelfRef.__PVT__cs)) | 
             (6U == (IData)(vlSelfRef.__PVT__cs)))) {
            vlSelfRef.__PVT__i = 4U;
            __VdlySet__ofmap_spad__v0 = 1U;
        } else if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            __VdlyVal__ofmap_spad__v4 = vlSelfRef.__PVT__add_res;
            __VdlyDim0__ofmap_spad__v4 = vlSelfRef.__PVT__count_ofmap_ch;
            __VdlySet__ofmap_spad__v4 = 1U;
        } else if (((4U == (IData)(vlSelfRef.__PVT__cs)) 
                    & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                               >> 3U)))) {
            __VdlyVal__ofmap_spad__v5 = vlSelfRef.__PVT__add_res;
            __VdlyDim0__ofmap_spad__v5 = vlSelfRef.__PVT__count_ofmap_ch;
            __VdlySet__ofmap_spad__v5 = 1U;
        }
        if (((1U == (IData)(vlSelfRef.__PVT__cs)) & 
             ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
              >> 3U))) {
            vlSelfRef.__Vlvbound_h652caa15__0 = (0xffU 
                                                 & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray);
            if ((0x2fU >= (IData)(vlSelfRef.__PVT__index_0))) {
                __VdlyVal__filter_spad__v0 = vlSelfRef.__Vlvbound_h652caa15__0;
                __VdlyDim0__filter_spad__v0 = vlSelfRef.__PVT__index_0;
                __VdlySet__filter_spad__v0 = 1U;
            }
            vlSelfRef.__Vlvbound_h94c06f97__0 = (0xffU 
                                                 & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                    >> 8U));
            if ((0x2fU >= (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v1 = vlSelfRef.__Vlvbound_h94c06f97__0;
                __VdlyDim0__filter_spad__v1 = (0x3fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v1 = 1U;
            }
            vlSelfRef.__Vlvbound_h3265d838__0 = (0xffU 
                                                 & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                    >> 0x10U));
            if ((0x2fU >= (0x3fU & ((IData)(2U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v2 = vlSelfRef.__Vlvbound_h3265d838__0;
                __VdlyDim0__filter_spad__v2 = (0x3fU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v2 = 1U;
            }
            vlSelfRef.__Vlvbound_h136a5f52__0 = (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                 >> 0x18U);
            if ((0x2fU >= (0x3fU & ((IData)(3U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v3 = vlSelfRef.__Vlvbound_h136a5f52__0;
                __VdlyDim0__filter_spad__v3 = (0x3fU 
                                               & ((IData)(3U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v3 = 1U;
            }
        }
        if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            __Vdly__count_input_ch = (((IData)(vlSelfRef.__PVT__count_input_ch) 
                                       == (IData)(vlSelfRef.__PVT__input_ch))
                                       ? 0U : (3U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__count_input_ch))));
        }
        if ((1U == (IData)(vlSelfRef.__PVT__cs))) {
            if ((8U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__cs))) {
            if ((8U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            if (((IData)(vlSelfRef.__PVT__count_input_ch) 
                 == (IData)(vlSelfRef.__PVT__input_ch))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else {
            __Vdly__count_filt_col = vlSelfRef.__PVT__count_filt_col;
        }
        if (((2U == (IData)(vlSelfRef.__PVT__cs)) & 
             ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
              >> 3U))) {
            vlSelfRef.__Vlvbound_h88de6bbc__0 = ((0x80U 
                                                  & ((~ 
                                                      (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                       >> 7U)) 
                                                     << 7U)) 
                                                 | (0x7fU 
                                                    & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray));
            if ((0xbU >= (0xfU & (IData)(vlSelfRef.__PVT__index_0)))) {
                __VdlyVal__ifmap_spad__v0 = vlSelfRef.__Vlvbound_h88de6bbc__0;
                __VdlyDim0__ifmap_spad__v0 = (0xfU 
                                              & (IData)(vlSelfRef.__PVT__index_0));
                __VdlySet__ifmap_spad__v0 = 1U;
            }
            vlSelfRef.__Vlvbound_h3953f0de__0 = ((1U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0xfU)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 8U))));
            if ((0xbU >= (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v1 = vlSelfRef.__Vlvbound_h3953f0de__0;
                __VdlyDim0__ifmap_spad__v1 = (0xfU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v1 = 1U;
            }
            vlSelfRef.__Vlvbound_h2357e037__0 = ((2U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x17U)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x10U))));
            if ((0xbU >= (0xfU & ((IData)(2U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v2 = vlSelfRef.__Vlvbound_h2357e037__0;
                __VdlyDim0__ifmap_spad__v2 = (0xfU 
                                              & ((IData)(2U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v2 = 1U;
            }
            vlSelfRef.__Vlvbound_hbb266322__0 = ((3U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x1fU)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x18U))));
            if ((0xbU >= (0xfU & ((IData)(3U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v3 = vlSelfRef.__Vlvbound_hbb266322__0;
                __VdlyDim0__ifmap_spad__v3 = (0xfU 
                                              & ((IData)(3U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v3 = 1U;
            }
        } else if (((6U == (IData)(vlSelfRef.__PVT__cs)) 
                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                       >> 3U))) {
            __VdlyVal__ifmap_spad__v4 = vlSelfRef.__PVT__ifmap_spad
                [4U];
            __VdlySet__ifmap_spad__v4 = 1U;
            __VdlyVal__ifmap_spad__v5 = vlSelfRef.__PVT__ifmap_spad
                [5U];
            __VdlyVal__ifmap_spad__v6 = vlSelfRef.__PVT__ifmap_spad
                [6U];
            __VdlyVal__ifmap_spad__v7 = vlSelfRef.__PVT__ifmap_spad
                [7U];
            __VdlyVal__ifmap_spad__v8 = vlSelfRef.__PVT__ifmap_spad
                [8U];
            __VdlyVal__ifmap_spad__v9 = vlSelfRef.__PVT__ifmap_spad
                [9U];
            __VdlyVal__ifmap_spad__v10 = vlSelfRef.__PVT__ifmap_spad
                [0xaU];
            __VdlyVal__ifmap_spad__v11 = vlSelfRef.__PVT__ifmap_spad
                [0xbU];
            __VdlyVal__ifmap_spad__v12 = ((0x80U & 
                                           ((~ (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                >> 7U)) 
                                            << 7U)) 
                                          | (0x7fU 
                                             & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray));
            __VdlyVal__ifmap_spad__v13 = ((1U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0xfU)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 8U))));
            __VdlyVal__ifmap_spad__v14 = ((2U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x17U)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x10U))));
            __VdlyVal__ifmap_spad__v15 = ((3U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x1fU)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x18U))));
        }
        if ((((5U == (IData)(vlSelfRef.__PVT__cs)) 
              & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                 == (IData)(vlSelfRef.__PVT__ofmap_ch))) 
             & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                        >> 3U)))) {
            vlSelfRef.__PVT__count_ofmap_col = (((IData)(vlSelfRef.__PVT__count_ofmap_col) 
                                                 == (IData)(vlSelfRef.__PVT__ofmap_col))
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__count_ofmap_col))));
        }
        if ((8U & (IData)(vlSelfRef.__PVT__cs))) {
            __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
        } else if ((4U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((2U & (IData)(vlSelfRef.__PVT__cs))) {
                __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
            } else if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
                if ((1U & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                   >> 3U)))) {
                    __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                               == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
                }
            } else if ((1U & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                      >> 3U)))) {
                __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                           == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
                if ((((IData)(vlSelfRef.__PVT__count_input_ch) 
                      == (IData)(vlSelfRef.__PVT__input_ch)) 
                     & (2U == (IData)(vlSelfRef.__PVT__count_filt_col)))) {
                    __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                               == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
                }
            } else {
                __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                  >> 3U) & (2U == (IData)(vlSelfRef.__PVT__count_filt_col)))) {
                __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                           == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
            }
        } else {
            __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
        }
        if (((0U == (IData)(vlSelfRef.__PVT__cs)) & (IData)(
                                                            (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                             >> 3U)))) {
            vlSelfRef.__PVT__operation_mode = (1U & 
                                               ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                                >> 9U));
            vlSelfRef.__PVT__ofmap_col = (0x1fU & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                                   >> 2U));
            vlSelfRef.__PVT__ofmap_ch = (3U & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                               >> 7U));
            vlSelfRef.__PVT__input_ch = (3U & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config));
        }
        vlSelfRef.__PVT__cs = vlSelfRef.__PVT__ns;
    } else {
        vlSelfRef.__PVT__i = 4U;
        __VdlySet__filter_spad__v4 = 1U;
        __VdlySet__ofmap_spad__v6 = 1U;
        __Vdly__count_input_ch = 0U;
        __Vdly__count_filt_col = 0U;
        __VdlySet__ifmap_spad__v16 = 1U;
        vlSelfRef.__PVT__count_ofmap_col = 0U;
        __Vdly__count_ofmap_ch = 0U;
        vlSelfRef.__PVT__operation_mode = 0U;
        vlSelfRef.__PVT__ofmap_col = 0U;
        vlSelfRef.__PVT__ofmap_ch = 0U;
        vlSelfRef.__PVT__input_ch = 0U;
        vlSelfRef.__PVT__cs = 0U;
    }
    if (__VdlySet__filter_spad__v0) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v0] 
            = __VdlyVal__filter_spad__v0;
    }
    if (__VdlySet__filter_spad__v1) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v1] 
            = __VdlyVal__filter_spad__v1;
    }
    if (__VdlySet__filter_spad__v2) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v2] 
            = __VdlyVal__filter_spad__v2;
    }
    if (__VdlySet__filter_spad__v3) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v3] 
            = __VdlyVal__filter_spad__v3;
    }
    if (__VdlySet__filter_spad__v4) {
        vlSelfRef.__PVT__filter_spad[0U] = 0U;
        vlSelfRef.__PVT__filter_spad[1U] = 0U;
        vlSelfRef.__PVT__filter_spad[2U] = 0U;
        vlSelfRef.__PVT__filter_spad[3U] = 0U;
        vlSelfRef.__PVT__filter_spad[4U] = 0U;
        vlSelfRef.__PVT__filter_spad[5U] = 0U;
        vlSelfRef.__PVT__filter_spad[6U] = 0U;
        vlSelfRef.__PVT__filter_spad[7U] = 0U;
        vlSelfRef.__PVT__filter_spad[8U] = 0U;
        vlSelfRef.__PVT__filter_spad[9U] = 0U;
        vlSelfRef.__PVT__filter_spad[0xaU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xbU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xcU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xdU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xeU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xfU] = 0U;
        vlSelfRef.__PVT__filter_spad[0x10U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x11U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x12U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x13U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x14U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x15U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x16U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x17U] = 0U;
    }
    if (__VdlySet__ofmap_spad__v0) {
        vlSelfRef.__PVT__ofmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[3U] = 0U;
    }
    if (__VdlySet__ofmap_spad__v4) {
        vlSelfRef.__PVT__ofmap_spad[__VdlyDim0__ofmap_spad__v4] 
            = __VdlyVal__ofmap_spad__v4;
    }
    if (__VdlySet__ofmap_spad__v5) {
        vlSelfRef.__PVT__ofmap_spad[__VdlyDim0__ofmap_spad__v5] 
            = __VdlyVal__ofmap_spad__v5;
    }
    if (__VdlySet__ofmap_spad__v6) {
        vlSelfRef.__PVT__ofmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[3U] = 0U;
    }
    if (__VdlySet__ifmap_spad__v0) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v0] 
            = __VdlyVal__ifmap_spad__v0;
    }
    if (__VdlySet__ifmap_spad__v1) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v1] 
            = __VdlyVal__ifmap_spad__v1;
    }
    if (__VdlySet__ifmap_spad__v2) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v2] 
            = __VdlyVal__ifmap_spad__v2;
    }
    if (__VdlySet__ifmap_spad__v3) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v3] 
            = __VdlyVal__ifmap_spad__v3;
    }
    if (__VdlySet__ifmap_spad__v4) {
        vlSelfRef.__PVT__ifmap_spad[0U] = __VdlyVal__ifmap_spad__v4;
        vlSelfRef.__PVT__ifmap_spad[1U] = __VdlyVal__ifmap_spad__v5;
        vlSelfRef.__PVT__ifmap_spad[2U] = __VdlyVal__ifmap_spad__v6;
        vlSelfRef.__PVT__ifmap_spad[3U] = __VdlyVal__ifmap_spad__v7;
        vlSelfRef.__PVT__ifmap_spad[4U] = __VdlyVal__ifmap_spad__v8;
        vlSelfRef.__PVT__ifmap_spad[5U] = __VdlyVal__ifmap_spad__v9;
        vlSelfRef.__PVT__ifmap_spad[6U] = __VdlyVal__ifmap_spad__v10;
        vlSelfRef.__PVT__ifmap_spad[7U] = __VdlyVal__ifmap_spad__v11;
        vlSelfRef.__PVT__ifmap_spad[8U] = __VdlyVal__ifmap_spad__v12;
        vlSelfRef.__PVT__ifmap_spad[9U] = __VdlyVal__ifmap_spad__v13;
        vlSelfRef.__PVT__ifmap_spad[0xaU] = __VdlyVal__ifmap_spad__v14;
        vlSelfRef.__PVT__ifmap_spad[0xbU] = __VdlyVal__ifmap_spad__v15;
    }
    if (__VdlySet__ifmap_spad__v16) {
        vlSelfRef.__PVT__ifmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[3U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[4U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[5U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[6U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[7U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[8U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[9U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[0xaU] = 0U;
        vlSelfRef.__PVT__ifmap_spad[0xbU] = 0U;
    }
    vlSelfRef.__PVT__count_filt_col = __Vdly__count_filt_col;
    vlSelfRef.__PVT__count_input_ch = __Vdly__count_input_ch;
    vlSelfRef.__PVT__count_ofmap_ch = __Vdly__count_ofmap_ch;
    vlSelfRef.__PVT__ifmap_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                     << 2U) | (IData)(vlSelfRef.__PVT__count_input_ch));
    vlSelfRef.__PVT__filter_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                      << 4U) | (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                 << 2U) 
                                                | (IData)(vlSelfRef.__PVT__count_input_ch)));
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
    vlSelfRef.__PVT__index_0 = ((1U == (IData)(vlSelfRef.__PVT__cs))
                                 ? (IData)(vlSelfRef.__PVT__filter_index)
                                 : (IData)(vlSelfRef.__PVT__ifmap_index));
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__1\n"); );
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
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[3U]));
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__2\n"); );
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
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__count_filt_col;
    __Vdly__count_filt_col = 0;
    CData/*1:0*/ __Vdly__count_ofmap_ch;
    __Vdly__count_ofmap_ch = 0;
    CData/*1:0*/ __Vdly__count_input_ch;
    __Vdly__count_input_ch = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v0;
    __VdlyVal__filter_spad__v0 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v0;
    __VdlyDim0__filter_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v0;
    __VdlySet__filter_spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v1;
    __VdlyVal__filter_spad__v1 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v1;
    __VdlyDim0__filter_spad__v1 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v1;
    __VdlySet__filter_spad__v1 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v2;
    __VdlyVal__filter_spad__v2 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v2;
    __VdlyDim0__filter_spad__v2 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v2;
    __VdlySet__filter_spad__v2 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v3;
    __VdlyVal__filter_spad__v3 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v3;
    __VdlyDim0__filter_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v3;
    __VdlySet__filter_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v4;
    __VdlySet__filter_spad__v4 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v0;
    __VdlyVal__ifmap_spad__v0 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v0;
    __VdlyDim0__ifmap_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v0;
    __VdlySet__ifmap_spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v1;
    __VdlyVal__ifmap_spad__v1 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v1;
    __VdlyDim0__ifmap_spad__v1 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v1;
    __VdlySet__ifmap_spad__v1 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v2;
    __VdlyVal__ifmap_spad__v2 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v2;
    __VdlyDim0__ifmap_spad__v2 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v2;
    __VdlySet__ifmap_spad__v2 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v3;
    __VdlyVal__ifmap_spad__v3 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v3;
    __VdlyDim0__ifmap_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v3;
    __VdlySet__ifmap_spad__v3 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v4;
    __VdlyVal__ifmap_spad__v4 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v4;
    __VdlySet__ifmap_spad__v4 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v5;
    __VdlyVal__ifmap_spad__v5 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v6;
    __VdlyVal__ifmap_spad__v6 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v7;
    __VdlyVal__ifmap_spad__v7 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v8;
    __VdlyVal__ifmap_spad__v8 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v9;
    __VdlyVal__ifmap_spad__v9 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v10;
    __VdlyVal__ifmap_spad__v10 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v11;
    __VdlyVal__ifmap_spad__v11 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v12;
    __VdlyVal__ifmap_spad__v12 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v13;
    __VdlyVal__ifmap_spad__v13 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v14;
    __VdlyVal__ifmap_spad__v14 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v15;
    __VdlyVal__ifmap_spad__v15 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v16;
    __VdlySet__ifmap_spad__v16 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v0;
    __VdlySet__ofmap_spad__v0 = 0;
    IData/*31:0*/ __VdlyVal__ofmap_spad__v4;
    __VdlyVal__ofmap_spad__v4 = 0;
    CData/*1:0*/ __VdlyDim0__ofmap_spad__v4;
    __VdlyDim0__ofmap_spad__v4 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v4;
    __VdlySet__ofmap_spad__v4 = 0;
    IData/*31:0*/ __VdlyVal__ofmap_spad__v5;
    __VdlyVal__ofmap_spad__v5 = 0;
    CData/*1:0*/ __VdlyDim0__ofmap_spad__v5;
    __VdlyDim0__ofmap_spad__v5 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v5;
    __VdlySet__ofmap_spad__v5 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v6;
    __VdlySet__ofmap_spad__v6 = 0;
    // Body
    __VdlySet__filter_spad__v0 = 0U;
    __VdlySet__filter_spad__v1 = 0U;
    __VdlySet__filter_spad__v2 = 0U;
    __VdlySet__filter_spad__v3 = 0U;
    __VdlySet__filter_spad__v4 = 0U;
    __VdlySet__ofmap_spad__v0 = 0U;
    __VdlySet__ofmap_spad__v4 = 0U;
    __VdlySet__ofmap_spad__v5 = 0U;
    __VdlySet__ofmap_spad__v6 = 0U;
    __Vdly__count_input_ch = vlSelfRef.__PVT__count_input_ch;
    __Vdly__count_filt_col = vlSelfRef.__PVT__count_filt_col;
    __VdlySet__ifmap_spad__v0 = 0U;
    __VdlySet__ifmap_spad__v1 = 0U;
    __VdlySet__ifmap_spad__v2 = 0U;
    __VdlySet__ifmap_spad__v3 = 0U;
    __VdlySet__ifmap_spad__v4 = 0U;
    __VdlySet__ifmap_spad__v16 = 0U;
    __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
    if ((1U & (~ (IData)(vlSymsp->TOP.ARESETn)))) {
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x18U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xcU;
    }
    if (vlSymsp->TOP.ARESETn) {
        if (((0U == (IData)(vlSelfRef.__PVT__cs)) | 
             (6U == (IData)(vlSelfRef.__PVT__cs)))) {
            vlSelfRef.__PVT__i = 4U;
            __VdlySet__ofmap_spad__v0 = 1U;
        } else if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            __VdlyVal__ofmap_spad__v4 = vlSelfRef.__PVT__add_res;
            __VdlyDim0__ofmap_spad__v4 = vlSelfRef.__PVT__count_ofmap_ch;
            __VdlySet__ofmap_spad__v4 = 1U;
        } else if (((4U == (IData)(vlSelfRef.__PVT__cs)) 
                    & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                               >> 4U)))) {
            __VdlyVal__ofmap_spad__v5 = vlSelfRef.__PVT__add_res;
            __VdlyDim0__ofmap_spad__v5 = vlSelfRef.__PVT__count_ofmap_ch;
            __VdlySet__ofmap_spad__v5 = 1U;
        }
        if (((1U == (IData)(vlSelfRef.__PVT__cs)) & 
             ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
              >> 4U))) {
            vlSelfRef.__Vlvbound_h652caa15__0 = (0xffU 
                                                 & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray);
            if ((0x2fU >= (IData)(vlSelfRef.__PVT__index_0))) {
                __VdlyVal__filter_spad__v0 = vlSelfRef.__Vlvbound_h652caa15__0;
                __VdlyDim0__filter_spad__v0 = vlSelfRef.__PVT__index_0;
                __VdlySet__filter_spad__v0 = 1U;
            }
            vlSelfRef.__Vlvbound_h94c06f97__0 = (0xffU 
                                                 & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                    >> 8U));
            if ((0x2fU >= (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v1 = vlSelfRef.__Vlvbound_h94c06f97__0;
                __VdlyDim0__filter_spad__v1 = (0x3fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v1 = 1U;
            }
            vlSelfRef.__Vlvbound_h3265d838__0 = (0xffU 
                                                 & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                    >> 0x10U));
            if ((0x2fU >= (0x3fU & ((IData)(2U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v2 = vlSelfRef.__Vlvbound_h3265d838__0;
                __VdlyDim0__filter_spad__v2 = (0x3fU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v2 = 1U;
            }
            vlSelfRef.__Vlvbound_h136a5f52__0 = (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                 >> 0x18U);
            if ((0x2fU >= (0x3fU & ((IData)(3U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v3 = vlSelfRef.__Vlvbound_h136a5f52__0;
                __VdlyDim0__filter_spad__v3 = (0x3fU 
                                               & ((IData)(3U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v3 = 1U;
            }
        }
        if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            __Vdly__count_input_ch = (((IData)(vlSelfRef.__PVT__count_input_ch) 
                                       == (IData)(vlSelfRef.__PVT__input_ch))
                                       ? 0U : (3U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__count_input_ch))));
        }
        if ((1U == (IData)(vlSelfRef.__PVT__cs))) {
            if ((0x10U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__cs))) {
            if ((0x10U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            if (((IData)(vlSelfRef.__PVT__count_input_ch) 
                 == (IData)(vlSelfRef.__PVT__input_ch))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else {
            __Vdly__count_filt_col = vlSelfRef.__PVT__count_filt_col;
        }
        if (((2U == (IData)(vlSelfRef.__PVT__cs)) & 
             ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
              >> 4U))) {
            vlSelfRef.__Vlvbound_h88de6bbc__0 = ((0x80U 
                                                  & ((~ 
                                                      (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                       >> 7U)) 
                                                     << 7U)) 
                                                 | (0x7fU 
                                                    & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray));
            if ((0xbU >= (0xfU & (IData)(vlSelfRef.__PVT__index_0)))) {
                __VdlyVal__ifmap_spad__v0 = vlSelfRef.__Vlvbound_h88de6bbc__0;
                __VdlyDim0__ifmap_spad__v0 = (0xfU 
                                              & (IData)(vlSelfRef.__PVT__index_0));
                __VdlySet__ifmap_spad__v0 = 1U;
            }
            vlSelfRef.__Vlvbound_h3953f0de__0 = ((1U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0xfU)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 8U))));
            if ((0xbU >= (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v1 = vlSelfRef.__Vlvbound_h3953f0de__0;
                __VdlyDim0__ifmap_spad__v1 = (0xfU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v1 = 1U;
            }
            vlSelfRef.__Vlvbound_h2357e037__0 = ((2U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x17U)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x10U))));
            if ((0xbU >= (0xfU & ((IData)(2U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v2 = vlSelfRef.__Vlvbound_h2357e037__0;
                __VdlyDim0__ifmap_spad__v2 = (0xfU 
                                              & ((IData)(2U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v2 = 1U;
            }
            vlSelfRef.__Vlvbound_hbb266322__0 = ((3U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x1fU)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x18U))));
            if ((0xbU >= (0xfU & ((IData)(3U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v3 = vlSelfRef.__Vlvbound_hbb266322__0;
                __VdlyDim0__ifmap_spad__v3 = (0xfU 
                                              & ((IData)(3U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v3 = 1U;
            }
        } else if (((6U == (IData)(vlSelfRef.__PVT__cs)) 
                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                       >> 4U))) {
            __VdlyVal__ifmap_spad__v4 = vlSelfRef.__PVT__ifmap_spad
                [4U];
            __VdlySet__ifmap_spad__v4 = 1U;
            __VdlyVal__ifmap_spad__v5 = vlSelfRef.__PVT__ifmap_spad
                [5U];
            __VdlyVal__ifmap_spad__v6 = vlSelfRef.__PVT__ifmap_spad
                [6U];
            __VdlyVal__ifmap_spad__v7 = vlSelfRef.__PVT__ifmap_spad
                [7U];
            __VdlyVal__ifmap_spad__v8 = vlSelfRef.__PVT__ifmap_spad
                [8U];
            __VdlyVal__ifmap_spad__v9 = vlSelfRef.__PVT__ifmap_spad
                [9U];
            __VdlyVal__ifmap_spad__v10 = vlSelfRef.__PVT__ifmap_spad
                [0xaU];
            __VdlyVal__ifmap_spad__v11 = vlSelfRef.__PVT__ifmap_spad
                [0xbU];
            __VdlyVal__ifmap_spad__v12 = ((0x80U & 
                                           ((~ (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                >> 7U)) 
                                            << 7U)) 
                                          | (0x7fU 
                                             & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray));
            __VdlyVal__ifmap_spad__v13 = ((1U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0xfU)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 8U))));
            __VdlyVal__ifmap_spad__v14 = ((2U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x17U)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x10U))));
            __VdlyVal__ifmap_spad__v15 = ((3U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x1fU)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x18U))));
        }
        if ((((5U == (IData)(vlSelfRef.__PVT__cs)) 
              & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                 == (IData)(vlSelfRef.__PVT__ofmap_ch))) 
             & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                        >> 4U)))) {
            vlSelfRef.__PVT__count_ofmap_col = (((IData)(vlSelfRef.__PVT__count_ofmap_col) 
                                                 == (IData)(vlSelfRef.__PVT__ofmap_col))
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__count_ofmap_col))));
        }
        if ((8U & (IData)(vlSelfRef.__PVT__cs))) {
            __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
        } else if ((4U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((2U & (IData)(vlSelfRef.__PVT__cs))) {
                __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
            } else if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
                if ((1U & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                   >> 4U)))) {
                    __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                               == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
                }
            } else if ((1U & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                      >> 4U)))) {
                __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                           == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
                if ((((IData)(vlSelfRef.__PVT__count_input_ch) 
                      == (IData)(vlSelfRef.__PVT__input_ch)) 
                     & (2U == (IData)(vlSelfRef.__PVT__count_filt_col)))) {
                    __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                               == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
                }
            } else {
                __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                  >> 4U) & (2U == (IData)(vlSelfRef.__PVT__count_filt_col)))) {
                __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                           == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
            }
        } else {
            __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
        }
        if (((0U == (IData)(vlSelfRef.__PVT__cs)) & (IData)(
                                                            (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                             >> 4U)))) {
            vlSelfRef.__PVT__operation_mode = (1U & 
                                               ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                                >> 9U));
            vlSelfRef.__PVT__ofmap_col = (0x1fU & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                                   >> 2U));
            vlSelfRef.__PVT__ofmap_ch = (3U & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                               >> 7U));
            vlSelfRef.__PVT__input_ch = (3U & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config));
        }
        vlSelfRef.__PVT__cs = vlSelfRef.__PVT__ns;
    } else {
        vlSelfRef.__PVT__i = 4U;
        __VdlySet__filter_spad__v4 = 1U;
        __VdlySet__ofmap_spad__v6 = 1U;
        __Vdly__count_input_ch = 0U;
        __Vdly__count_filt_col = 0U;
        __VdlySet__ifmap_spad__v16 = 1U;
        vlSelfRef.__PVT__count_ofmap_col = 0U;
        __Vdly__count_ofmap_ch = 0U;
        vlSelfRef.__PVT__operation_mode = 0U;
        vlSelfRef.__PVT__ofmap_col = 0U;
        vlSelfRef.__PVT__ofmap_ch = 0U;
        vlSelfRef.__PVT__input_ch = 0U;
        vlSelfRef.__PVT__cs = 0U;
    }
    if (__VdlySet__filter_spad__v0) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v0] 
            = __VdlyVal__filter_spad__v0;
    }
    if (__VdlySet__filter_spad__v1) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v1] 
            = __VdlyVal__filter_spad__v1;
    }
    if (__VdlySet__filter_spad__v2) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v2] 
            = __VdlyVal__filter_spad__v2;
    }
    if (__VdlySet__filter_spad__v3) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v3] 
            = __VdlyVal__filter_spad__v3;
    }
    if (__VdlySet__filter_spad__v4) {
        vlSelfRef.__PVT__filter_spad[0U] = 0U;
        vlSelfRef.__PVT__filter_spad[1U] = 0U;
        vlSelfRef.__PVT__filter_spad[2U] = 0U;
        vlSelfRef.__PVT__filter_spad[3U] = 0U;
        vlSelfRef.__PVT__filter_spad[4U] = 0U;
        vlSelfRef.__PVT__filter_spad[5U] = 0U;
        vlSelfRef.__PVT__filter_spad[6U] = 0U;
        vlSelfRef.__PVT__filter_spad[7U] = 0U;
        vlSelfRef.__PVT__filter_spad[8U] = 0U;
        vlSelfRef.__PVT__filter_spad[9U] = 0U;
        vlSelfRef.__PVT__filter_spad[0xaU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xbU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xcU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xdU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xeU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xfU] = 0U;
        vlSelfRef.__PVT__filter_spad[0x10U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x11U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x12U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x13U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x14U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x15U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x16U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x17U] = 0U;
    }
    if (__VdlySet__ofmap_spad__v0) {
        vlSelfRef.__PVT__ofmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[3U] = 0U;
    }
    if (__VdlySet__ofmap_spad__v4) {
        vlSelfRef.__PVT__ofmap_spad[__VdlyDim0__ofmap_spad__v4] 
            = __VdlyVal__ofmap_spad__v4;
    }
    if (__VdlySet__ofmap_spad__v5) {
        vlSelfRef.__PVT__ofmap_spad[__VdlyDim0__ofmap_spad__v5] 
            = __VdlyVal__ofmap_spad__v5;
    }
    if (__VdlySet__ofmap_spad__v6) {
        vlSelfRef.__PVT__ofmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[3U] = 0U;
    }
    if (__VdlySet__ifmap_spad__v0) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v0] 
            = __VdlyVal__ifmap_spad__v0;
    }
    if (__VdlySet__ifmap_spad__v1) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v1] 
            = __VdlyVal__ifmap_spad__v1;
    }
    if (__VdlySet__ifmap_spad__v2) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v2] 
            = __VdlyVal__ifmap_spad__v2;
    }
    if (__VdlySet__ifmap_spad__v3) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v3] 
            = __VdlyVal__ifmap_spad__v3;
    }
    if (__VdlySet__ifmap_spad__v4) {
        vlSelfRef.__PVT__ifmap_spad[0U] = __VdlyVal__ifmap_spad__v4;
        vlSelfRef.__PVT__ifmap_spad[1U] = __VdlyVal__ifmap_spad__v5;
        vlSelfRef.__PVT__ifmap_spad[2U] = __VdlyVal__ifmap_spad__v6;
        vlSelfRef.__PVT__ifmap_spad[3U] = __VdlyVal__ifmap_spad__v7;
        vlSelfRef.__PVT__ifmap_spad[4U] = __VdlyVal__ifmap_spad__v8;
        vlSelfRef.__PVT__ifmap_spad[5U] = __VdlyVal__ifmap_spad__v9;
        vlSelfRef.__PVT__ifmap_spad[6U] = __VdlyVal__ifmap_spad__v10;
        vlSelfRef.__PVT__ifmap_spad[7U] = __VdlyVal__ifmap_spad__v11;
        vlSelfRef.__PVT__ifmap_spad[8U] = __VdlyVal__ifmap_spad__v12;
        vlSelfRef.__PVT__ifmap_spad[9U] = __VdlyVal__ifmap_spad__v13;
        vlSelfRef.__PVT__ifmap_spad[0xaU] = __VdlyVal__ifmap_spad__v14;
        vlSelfRef.__PVT__ifmap_spad[0xbU] = __VdlyVal__ifmap_spad__v15;
    }
    if (__VdlySet__ifmap_spad__v16) {
        vlSelfRef.__PVT__ifmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[3U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[4U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[5U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[6U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[7U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[8U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[9U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[0xaU] = 0U;
        vlSelfRef.__PVT__ifmap_spad[0xbU] = 0U;
    }
    vlSelfRef.__PVT__count_filt_col = __Vdly__count_filt_col;
    vlSelfRef.__PVT__count_input_ch = __Vdly__count_input_ch;
    vlSelfRef.__PVT__count_ofmap_ch = __Vdly__count_ofmap_ch;
    vlSelfRef.__PVT__ifmap_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                     << 2U) | (IData)(vlSelfRef.__PVT__count_input_ch));
    vlSelfRef.__PVT__filter_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                      << 4U) | (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                 << 2U) 
                                                | (IData)(vlSelfRef.__PVT__count_input_ch)));
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
    vlSelfRef.__PVT__index_0 = ((1U == (IData)(vlSelfRef.__PVT__cs))
                                 ? (IData)(vlSelfRef.__PVT__filter_index)
                                 : (IData)(vlSelfRef.__PVT__ifmap_index));
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__1\n"); );
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
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[4U]));
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__2\n"); );
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
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__count_filt_col;
    __Vdly__count_filt_col = 0;
    CData/*1:0*/ __Vdly__count_ofmap_ch;
    __Vdly__count_ofmap_ch = 0;
    CData/*1:0*/ __Vdly__count_input_ch;
    __Vdly__count_input_ch = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v0;
    __VdlyVal__filter_spad__v0 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v0;
    __VdlyDim0__filter_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v0;
    __VdlySet__filter_spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v1;
    __VdlyVal__filter_spad__v1 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v1;
    __VdlyDim0__filter_spad__v1 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v1;
    __VdlySet__filter_spad__v1 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v2;
    __VdlyVal__filter_spad__v2 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v2;
    __VdlyDim0__filter_spad__v2 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v2;
    __VdlySet__filter_spad__v2 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v3;
    __VdlyVal__filter_spad__v3 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v3;
    __VdlyDim0__filter_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v3;
    __VdlySet__filter_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v4;
    __VdlySet__filter_spad__v4 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v0;
    __VdlyVal__ifmap_spad__v0 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v0;
    __VdlyDim0__ifmap_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v0;
    __VdlySet__ifmap_spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v1;
    __VdlyVal__ifmap_spad__v1 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v1;
    __VdlyDim0__ifmap_spad__v1 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v1;
    __VdlySet__ifmap_spad__v1 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v2;
    __VdlyVal__ifmap_spad__v2 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v2;
    __VdlyDim0__ifmap_spad__v2 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v2;
    __VdlySet__ifmap_spad__v2 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v3;
    __VdlyVal__ifmap_spad__v3 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v3;
    __VdlyDim0__ifmap_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v3;
    __VdlySet__ifmap_spad__v3 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v4;
    __VdlyVal__ifmap_spad__v4 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v4;
    __VdlySet__ifmap_spad__v4 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v5;
    __VdlyVal__ifmap_spad__v5 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v6;
    __VdlyVal__ifmap_spad__v6 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v7;
    __VdlyVal__ifmap_spad__v7 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v8;
    __VdlyVal__ifmap_spad__v8 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v9;
    __VdlyVal__ifmap_spad__v9 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v10;
    __VdlyVal__ifmap_spad__v10 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v11;
    __VdlyVal__ifmap_spad__v11 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v12;
    __VdlyVal__ifmap_spad__v12 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v13;
    __VdlyVal__ifmap_spad__v13 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v14;
    __VdlyVal__ifmap_spad__v14 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v15;
    __VdlyVal__ifmap_spad__v15 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v16;
    __VdlySet__ifmap_spad__v16 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v0;
    __VdlySet__ofmap_spad__v0 = 0;
    IData/*31:0*/ __VdlyVal__ofmap_spad__v4;
    __VdlyVal__ofmap_spad__v4 = 0;
    CData/*1:0*/ __VdlyDim0__ofmap_spad__v4;
    __VdlyDim0__ofmap_spad__v4 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v4;
    __VdlySet__ofmap_spad__v4 = 0;
    IData/*31:0*/ __VdlyVal__ofmap_spad__v5;
    __VdlyVal__ofmap_spad__v5 = 0;
    CData/*1:0*/ __VdlyDim0__ofmap_spad__v5;
    __VdlyDim0__ofmap_spad__v5 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v5;
    __VdlySet__ofmap_spad__v5 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v6;
    __VdlySet__ofmap_spad__v6 = 0;
    // Body
    __VdlySet__filter_spad__v0 = 0U;
    __VdlySet__filter_spad__v1 = 0U;
    __VdlySet__filter_spad__v2 = 0U;
    __VdlySet__filter_spad__v3 = 0U;
    __VdlySet__filter_spad__v4 = 0U;
    __VdlySet__ofmap_spad__v0 = 0U;
    __VdlySet__ofmap_spad__v4 = 0U;
    __VdlySet__ofmap_spad__v5 = 0U;
    __VdlySet__ofmap_spad__v6 = 0U;
    __Vdly__count_input_ch = vlSelfRef.__PVT__count_input_ch;
    __Vdly__count_filt_col = vlSelfRef.__PVT__count_filt_col;
    __VdlySet__ifmap_spad__v0 = 0U;
    __VdlySet__ifmap_spad__v1 = 0U;
    __VdlySet__ifmap_spad__v2 = 0U;
    __VdlySet__ifmap_spad__v3 = 0U;
    __VdlySet__ifmap_spad__v4 = 0U;
    __VdlySet__ifmap_spad__v16 = 0U;
    __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
    if ((1U & (~ (IData)(vlSymsp->TOP.ARESETn)))) {
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x18U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xcU;
    }
    if (vlSymsp->TOP.ARESETn) {
        if (((0U == (IData)(vlSelfRef.__PVT__cs)) | 
             (6U == (IData)(vlSelfRef.__PVT__cs)))) {
            vlSelfRef.__PVT__i = 4U;
            __VdlySet__ofmap_spad__v0 = 1U;
        } else if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            __VdlyVal__ofmap_spad__v4 = vlSelfRef.__PVT__add_res;
            __VdlyDim0__ofmap_spad__v4 = vlSelfRef.__PVT__count_ofmap_ch;
            __VdlySet__ofmap_spad__v4 = 1U;
        } else if (((4U == (IData)(vlSelfRef.__PVT__cs)) 
                    & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                               >> 5U)))) {
            __VdlyVal__ofmap_spad__v5 = vlSelfRef.__PVT__add_res;
            __VdlyDim0__ofmap_spad__v5 = vlSelfRef.__PVT__count_ofmap_ch;
            __VdlySet__ofmap_spad__v5 = 1U;
        }
        if (((1U == (IData)(vlSelfRef.__PVT__cs)) & 
             ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
              >> 5U))) {
            vlSelfRef.__Vlvbound_h652caa15__0 = (0xffU 
                                                 & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray);
            if ((0x2fU >= (IData)(vlSelfRef.__PVT__index_0))) {
                __VdlyVal__filter_spad__v0 = vlSelfRef.__Vlvbound_h652caa15__0;
                __VdlyDim0__filter_spad__v0 = vlSelfRef.__PVT__index_0;
                __VdlySet__filter_spad__v0 = 1U;
            }
            vlSelfRef.__Vlvbound_h94c06f97__0 = (0xffU 
                                                 & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                    >> 8U));
            if ((0x2fU >= (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v1 = vlSelfRef.__Vlvbound_h94c06f97__0;
                __VdlyDim0__filter_spad__v1 = (0x3fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v1 = 1U;
            }
            vlSelfRef.__Vlvbound_h3265d838__0 = (0xffU 
                                                 & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                    >> 0x10U));
            if ((0x2fU >= (0x3fU & ((IData)(2U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v2 = vlSelfRef.__Vlvbound_h3265d838__0;
                __VdlyDim0__filter_spad__v2 = (0x3fU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v2 = 1U;
            }
            vlSelfRef.__Vlvbound_h136a5f52__0 = (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                 >> 0x18U);
            if ((0x2fU >= (0x3fU & ((IData)(3U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v3 = vlSelfRef.__Vlvbound_h136a5f52__0;
                __VdlyDim0__filter_spad__v3 = (0x3fU 
                                               & ((IData)(3U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v3 = 1U;
            }
        }
        if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            __Vdly__count_input_ch = (((IData)(vlSelfRef.__PVT__count_input_ch) 
                                       == (IData)(vlSelfRef.__PVT__input_ch))
                                       ? 0U : (3U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__count_input_ch))));
        }
        if ((1U == (IData)(vlSelfRef.__PVT__cs))) {
            if ((0x20U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__cs))) {
            if ((0x20U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            if (((IData)(vlSelfRef.__PVT__count_input_ch) 
                 == (IData)(vlSelfRef.__PVT__input_ch))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else {
            __Vdly__count_filt_col = vlSelfRef.__PVT__count_filt_col;
        }
        if (((2U == (IData)(vlSelfRef.__PVT__cs)) & 
             ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
              >> 5U))) {
            vlSelfRef.__Vlvbound_h88de6bbc__0 = ((0x80U 
                                                  & ((~ 
                                                      (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                       >> 7U)) 
                                                     << 7U)) 
                                                 | (0x7fU 
                                                    & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray));
            if ((0xbU >= (0xfU & (IData)(vlSelfRef.__PVT__index_0)))) {
                __VdlyVal__ifmap_spad__v0 = vlSelfRef.__Vlvbound_h88de6bbc__0;
                __VdlyDim0__ifmap_spad__v0 = (0xfU 
                                              & (IData)(vlSelfRef.__PVT__index_0));
                __VdlySet__ifmap_spad__v0 = 1U;
            }
            vlSelfRef.__Vlvbound_h3953f0de__0 = ((1U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0xfU)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 8U))));
            if ((0xbU >= (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v1 = vlSelfRef.__Vlvbound_h3953f0de__0;
                __VdlyDim0__ifmap_spad__v1 = (0xfU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v1 = 1U;
            }
            vlSelfRef.__Vlvbound_h2357e037__0 = ((2U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x17U)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x10U))));
            if ((0xbU >= (0xfU & ((IData)(2U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v2 = vlSelfRef.__Vlvbound_h2357e037__0;
                __VdlyDim0__ifmap_spad__v2 = (0xfU 
                                              & ((IData)(2U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v2 = 1U;
            }
            vlSelfRef.__Vlvbound_hbb266322__0 = ((3U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x1fU)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x18U))));
            if ((0xbU >= (0xfU & ((IData)(3U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v3 = vlSelfRef.__Vlvbound_hbb266322__0;
                __VdlyDim0__ifmap_spad__v3 = (0xfU 
                                              & ((IData)(3U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v3 = 1U;
            }
        } else if (((6U == (IData)(vlSelfRef.__PVT__cs)) 
                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                       >> 5U))) {
            __VdlyVal__ifmap_spad__v4 = vlSelfRef.__PVT__ifmap_spad
                [4U];
            __VdlySet__ifmap_spad__v4 = 1U;
            __VdlyVal__ifmap_spad__v5 = vlSelfRef.__PVT__ifmap_spad
                [5U];
            __VdlyVal__ifmap_spad__v6 = vlSelfRef.__PVT__ifmap_spad
                [6U];
            __VdlyVal__ifmap_spad__v7 = vlSelfRef.__PVT__ifmap_spad
                [7U];
            __VdlyVal__ifmap_spad__v8 = vlSelfRef.__PVT__ifmap_spad
                [8U];
            __VdlyVal__ifmap_spad__v9 = vlSelfRef.__PVT__ifmap_spad
                [9U];
            __VdlyVal__ifmap_spad__v10 = vlSelfRef.__PVT__ifmap_spad
                [0xaU];
            __VdlyVal__ifmap_spad__v11 = vlSelfRef.__PVT__ifmap_spad
                [0xbU];
            __VdlyVal__ifmap_spad__v12 = ((0x80U & 
                                           ((~ (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                >> 7U)) 
                                            << 7U)) 
                                          | (0x7fU 
                                             & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray));
            __VdlyVal__ifmap_spad__v13 = ((1U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0xfU)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 8U))));
            __VdlyVal__ifmap_spad__v14 = ((2U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x17U)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x10U))));
            __VdlyVal__ifmap_spad__v15 = ((3U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x1fU)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x18U))));
        }
        if ((((5U == (IData)(vlSelfRef.__PVT__cs)) 
              & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                 == (IData)(vlSelfRef.__PVT__ofmap_ch))) 
             & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                        >> 5U)))) {
            vlSelfRef.__PVT__count_ofmap_col = (((IData)(vlSelfRef.__PVT__count_ofmap_col) 
                                                 == (IData)(vlSelfRef.__PVT__ofmap_col))
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__count_ofmap_col))));
        }
        if ((8U & (IData)(vlSelfRef.__PVT__cs))) {
            __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
        } else if ((4U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((2U & (IData)(vlSelfRef.__PVT__cs))) {
                __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
            } else if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
                if ((1U & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                   >> 5U)))) {
                    __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                               == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
                }
            } else if ((1U & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                      >> 5U)))) {
                __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                           == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
                if ((((IData)(vlSelfRef.__PVT__count_input_ch) 
                      == (IData)(vlSelfRef.__PVT__input_ch)) 
                     & (2U == (IData)(vlSelfRef.__PVT__count_filt_col)))) {
                    __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                               == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
                }
            } else {
                __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                  >> 5U) & (2U == (IData)(vlSelfRef.__PVT__count_filt_col)))) {
                __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                           == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
            }
        } else {
            __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
        }
        if (((0U == (IData)(vlSelfRef.__PVT__cs)) & (IData)(
                                                            (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                             >> 5U)))) {
            vlSelfRef.__PVT__operation_mode = (1U & 
                                               ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                                >> 9U));
            vlSelfRef.__PVT__ofmap_col = (0x1fU & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                                   >> 2U));
            vlSelfRef.__PVT__ofmap_ch = (3U & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                               >> 7U));
            vlSelfRef.__PVT__input_ch = (3U & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config));
        }
        vlSelfRef.__PVT__cs = vlSelfRef.__PVT__ns;
    } else {
        vlSelfRef.__PVT__i = 4U;
        __VdlySet__filter_spad__v4 = 1U;
        __VdlySet__ofmap_spad__v6 = 1U;
        __Vdly__count_input_ch = 0U;
        __Vdly__count_filt_col = 0U;
        __VdlySet__ifmap_spad__v16 = 1U;
        vlSelfRef.__PVT__count_ofmap_col = 0U;
        __Vdly__count_ofmap_ch = 0U;
        vlSelfRef.__PVT__operation_mode = 0U;
        vlSelfRef.__PVT__ofmap_col = 0U;
        vlSelfRef.__PVT__ofmap_ch = 0U;
        vlSelfRef.__PVT__input_ch = 0U;
        vlSelfRef.__PVT__cs = 0U;
    }
    if (__VdlySet__filter_spad__v0) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v0] 
            = __VdlyVal__filter_spad__v0;
    }
    if (__VdlySet__filter_spad__v1) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v1] 
            = __VdlyVal__filter_spad__v1;
    }
    if (__VdlySet__filter_spad__v2) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v2] 
            = __VdlyVal__filter_spad__v2;
    }
    if (__VdlySet__filter_spad__v3) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v3] 
            = __VdlyVal__filter_spad__v3;
    }
    if (__VdlySet__filter_spad__v4) {
        vlSelfRef.__PVT__filter_spad[0U] = 0U;
        vlSelfRef.__PVT__filter_spad[1U] = 0U;
        vlSelfRef.__PVT__filter_spad[2U] = 0U;
        vlSelfRef.__PVT__filter_spad[3U] = 0U;
        vlSelfRef.__PVT__filter_spad[4U] = 0U;
        vlSelfRef.__PVT__filter_spad[5U] = 0U;
        vlSelfRef.__PVT__filter_spad[6U] = 0U;
        vlSelfRef.__PVT__filter_spad[7U] = 0U;
        vlSelfRef.__PVT__filter_spad[8U] = 0U;
        vlSelfRef.__PVT__filter_spad[9U] = 0U;
        vlSelfRef.__PVT__filter_spad[0xaU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xbU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xcU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xdU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xeU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xfU] = 0U;
        vlSelfRef.__PVT__filter_spad[0x10U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x11U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x12U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x13U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x14U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x15U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x16U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x17U] = 0U;
    }
    if (__VdlySet__ofmap_spad__v0) {
        vlSelfRef.__PVT__ofmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[3U] = 0U;
    }
    if (__VdlySet__ofmap_spad__v4) {
        vlSelfRef.__PVT__ofmap_spad[__VdlyDim0__ofmap_spad__v4] 
            = __VdlyVal__ofmap_spad__v4;
    }
    if (__VdlySet__ofmap_spad__v5) {
        vlSelfRef.__PVT__ofmap_spad[__VdlyDim0__ofmap_spad__v5] 
            = __VdlyVal__ofmap_spad__v5;
    }
    if (__VdlySet__ofmap_spad__v6) {
        vlSelfRef.__PVT__ofmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[3U] = 0U;
    }
    if (__VdlySet__ifmap_spad__v0) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v0] 
            = __VdlyVal__ifmap_spad__v0;
    }
    if (__VdlySet__ifmap_spad__v1) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v1] 
            = __VdlyVal__ifmap_spad__v1;
    }
    if (__VdlySet__ifmap_spad__v2) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v2] 
            = __VdlyVal__ifmap_spad__v2;
    }
    if (__VdlySet__ifmap_spad__v3) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v3] 
            = __VdlyVal__ifmap_spad__v3;
    }
    if (__VdlySet__ifmap_spad__v4) {
        vlSelfRef.__PVT__ifmap_spad[0U] = __VdlyVal__ifmap_spad__v4;
        vlSelfRef.__PVT__ifmap_spad[1U] = __VdlyVal__ifmap_spad__v5;
        vlSelfRef.__PVT__ifmap_spad[2U] = __VdlyVal__ifmap_spad__v6;
        vlSelfRef.__PVT__ifmap_spad[3U] = __VdlyVal__ifmap_spad__v7;
        vlSelfRef.__PVT__ifmap_spad[4U] = __VdlyVal__ifmap_spad__v8;
        vlSelfRef.__PVT__ifmap_spad[5U] = __VdlyVal__ifmap_spad__v9;
        vlSelfRef.__PVT__ifmap_spad[6U] = __VdlyVal__ifmap_spad__v10;
        vlSelfRef.__PVT__ifmap_spad[7U] = __VdlyVal__ifmap_spad__v11;
        vlSelfRef.__PVT__ifmap_spad[8U] = __VdlyVal__ifmap_spad__v12;
        vlSelfRef.__PVT__ifmap_spad[9U] = __VdlyVal__ifmap_spad__v13;
        vlSelfRef.__PVT__ifmap_spad[0xaU] = __VdlyVal__ifmap_spad__v14;
        vlSelfRef.__PVT__ifmap_spad[0xbU] = __VdlyVal__ifmap_spad__v15;
    }
    if (__VdlySet__ifmap_spad__v16) {
        vlSelfRef.__PVT__ifmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[3U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[4U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[5U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[6U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[7U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[8U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[9U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[0xaU] = 0U;
        vlSelfRef.__PVT__ifmap_spad[0xbU] = 0U;
    }
    vlSelfRef.__PVT__count_filt_col = __Vdly__count_filt_col;
    vlSelfRef.__PVT__count_input_ch = __Vdly__count_input_ch;
    vlSelfRef.__PVT__count_ofmap_ch = __Vdly__count_ofmap_ch;
    vlSelfRef.__PVT__ifmap_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                     << 2U) | (IData)(vlSelfRef.__PVT__count_input_ch));
    vlSelfRef.__PVT__filter_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                      << 4U) | (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                 << 2U) 
                                                | (IData)(vlSelfRef.__PVT__count_input_ch)));
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
    vlSelfRef.__PVT__index_0 = ((1U == (IData)(vlSelfRef.__PVT__cs))
                                 ? (IData)(vlSelfRef.__PVT__filter_index)
                                 : (IData)(vlSelfRef.__PVT__ifmap_index));
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__1\n"); );
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
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[5U]));
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__2\n"); );
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
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__count_filt_col;
    __Vdly__count_filt_col = 0;
    CData/*1:0*/ __Vdly__count_ofmap_ch;
    __Vdly__count_ofmap_ch = 0;
    CData/*1:0*/ __Vdly__count_input_ch;
    __Vdly__count_input_ch = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v0;
    __VdlyVal__filter_spad__v0 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v0;
    __VdlyDim0__filter_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v0;
    __VdlySet__filter_spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v1;
    __VdlyVal__filter_spad__v1 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v1;
    __VdlyDim0__filter_spad__v1 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v1;
    __VdlySet__filter_spad__v1 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v2;
    __VdlyVal__filter_spad__v2 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v2;
    __VdlyDim0__filter_spad__v2 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v2;
    __VdlySet__filter_spad__v2 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v3;
    __VdlyVal__filter_spad__v3 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v3;
    __VdlyDim0__filter_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v3;
    __VdlySet__filter_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v4;
    __VdlySet__filter_spad__v4 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v0;
    __VdlyVal__ifmap_spad__v0 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v0;
    __VdlyDim0__ifmap_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v0;
    __VdlySet__ifmap_spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v1;
    __VdlyVal__ifmap_spad__v1 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v1;
    __VdlyDim0__ifmap_spad__v1 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v1;
    __VdlySet__ifmap_spad__v1 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v2;
    __VdlyVal__ifmap_spad__v2 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v2;
    __VdlyDim0__ifmap_spad__v2 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v2;
    __VdlySet__ifmap_spad__v2 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v3;
    __VdlyVal__ifmap_spad__v3 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v3;
    __VdlyDim0__ifmap_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v3;
    __VdlySet__ifmap_spad__v3 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v4;
    __VdlyVal__ifmap_spad__v4 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v4;
    __VdlySet__ifmap_spad__v4 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v5;
    __VdlyVal__ifmap_spad__v5 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v6;
    __VdlyVal__ifmap_spad__v6 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v7;
    __VdlyVal__ifmap_spad__v7 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v8;
    __VdlyVal__ifmap_spad__v8 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v9;
    __VdlyVal__ifmap_spad__v9 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v10;
    __VdlyVal__ifmap_spad__v10 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v11;
    __VdlyVal__ifmap_spad__v11 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v12;
    __VdlyVal__ifmap_spad__v12 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v13;
    __VdlyVal__ifmap_spad__v13 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v14;
    __VdlyVal__ifmap_spad__v14 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v15;
    __VdlyVal__ifmap_spad__v15 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v16;
    __VdlySet__ifmap_spad__v16 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v0;
    __VdlySet__ofmap_spad__v0 = 0;
    IData/*31:0*/ __VdlyVal__ofmap_spad__v4;
    __VdlyVal__ofmap_spad__v4 = 0;
    CData/*1:0*/ __VdlyDim0__ofmap_spad__v4;
    __VdlyDim0__ofmap_spad__v4 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v4;
    __VdlySet__ofmap_spad__v4 = 0;
    IData/*31:0*/ __VdlyVal__ofmap_spad__v5;
    __VdlyVal__ofmap_spad__v5 = 0;
    CData/*1:0*/ __VdlyDim0__ofmap_spad__v5;
    __VdlyDim0__ofmap_spad__v5 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v5;
    __VdlySet__ofmap_spad__v5 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v6;
    __VdlySet__ofmap_spad__v6 = 0;
    // Body
    __VdlySet__filter_spad__v0 = 0U;
    __VdlySet__filter_spad__v1 = 0U;
    __VdlySet__filter_spad__v2 = 0U;
    __VdlySet__filter_spad__v3 = 0U;
    __VdlySet__filter_spad__v4 = 0U;
    __VdlySet__ofmap_spad__v0 = 0U;
    __VdlySet__ofmap_spad__v4 = 0U;
    __VdlySet__ofmap_spad__v5 = 0U;
    __VdlySet__ofmap_spad__v6 = 0U;
    __Vdly__count_input_ch = vlSelfRef.__PVT__count_input_ch;
    __Vdly__count_filt_col = vlSelfRef.__PVT__count_filt_col;
    __VdlySet__ifmap_spad__v0 = 0U;
    __VdlySet__ifmap_spad__v1 = 0U;
    __VdlySet__ifmap_spad__v2 = 0U;
    __VdlySet__ifmap_spad__v3 = 0U;
    __VdlySet__ifmap_spad__v4 = 0U;
    __VdlySet__ifmap_spad__v16 = 0U;
    __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
    if ((1U & (~ (IData)(vlSymsp->TOP.ARESETn)))) {
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x18U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xcU;
    }
    if (vlSymsp->TOP.ARESETn) {
        if (((0U == (IData)(vlSelfRef.__PVT__cs)) | 
             (6U == (IData)(vlSelfRef.__PVT__cs)))) {
            vlSelfRef.__PVT__i = 4U;
            __VdlySet__ofmap_spad__v0 = 1U;
        } else if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            __VdlyVal__ofmap_spad__v4 = vlSelfRef.__PVT__add_res;
            __VdlyDim0__ofmap_spad__v4 = vlSelfRef.__PVT__count_ofmap_ch;
            __VdlySet__ofmap_spad__v4 = 1U;
        } else if (((4U == (IData)(vlSelfRef.__PVT__cs)) 
                    & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                               >> 6U)))) {
            __VdlyVal__ofmap_spad__v5 = vlSelfRef.__PVT__add_res;
            __VdlyDim0__ofmap_spad__v5 = vlSelfRef.__PVT__count_ofmap_ch;
            __VdlySet__ofmap_spad__v5 = 1U;
        }
        if (((1U == (IData)(vlSelfRef.__PVT__cs)) & 
             ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
              >> 6U))) {
            vlSelfRef.__Vlvbound_h652caa15__0 = (0xffU 
                                                 & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray);
            if ((0x2fU >= (IData)(vlSelfRef.__PVT__index_0))) {
                __VdlyVal__filter_spad__v0 = vlSelfRef.__Vlvbound_h652caa15__0;
                __VdlyDim0__filter_spad__v0 = vlSelfRef.__PVT__index_0;
                __VdlySet__filter_spad__v0 = 1U;
            }
            vlSelfRef.__Vlvbound_h94c06f97__0 = (0xffU 
                                                 & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                    >> 8U));
            if ((0x2fU >= (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v1 = vlSelfRef.__Vlvbound_h94c06f97__0;
                __VdlyDim0__filter_spad__v1 = (0x3fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v1 = 1U;
            }
            vlSelfRef.__Vlvbound_h3265d838__0 = (0xffU 
                                                 & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                    >> 0x10U));
            if ((0x2fU >= (0x3fU & ((IData)(2U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v2 = vlSelfRef.__Vlvbound_h3265d838__0;
                __VdlyDim0__filter_spad__v2 = (0x3fU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v2 = 1U;
            }
            vlSelfRef.__Vlvbound_h136a5f52__0 = (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                 >> 0x18U);
            if ((0x2fU >= (0x3fU & ((IData)(3U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v3 = vlSelfRef.__Vlvbound_h136a5f52__0;
                __VdlyDim0__filter_spad__v3 = (0x3fU 
                                               & ((IData)(3U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v3 = 1U;
            }
        }
        if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            __Vdly__count_input_ch = (((IData)(vlSelfRef.__PVT__count_input_ch) 
                                       == (IData)(vlSelfRef.__PVT__input_ch))
                                       ? 0U : (3U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__count_input_ch))));
        }
        if ((1U == (IData)(vlSelfRef.__PVT__cs))) {
            if ((0x40U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__cs))) {
            if ((0x40U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            if (((IData)(vlSelfRef.__PVT__count_input_ch) 
                 == (IData)(vlSelfRef.__PVT__input_ch))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else {
            __Vdly__count_filt_col = vlSelfRef.__PVT__count_filt_col;
        }
        if (((2U == (IData)(vlSelfRef.__PVT__cs)) & 
             ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
              >> 6U))) {
            vlSelfRef.__Vlvbound_h88de6bbc__0 = ((0x80U 
                                                  & ((~ 
                                                      (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                       >> 7U)) 
                                                     << 7U)) 
                                                 | (0x7fU 
                                                    & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray));
            if ((0xbU >= (0xfU & (IData)(vlSelfRef.__PVT__index_0)))) {
                __VdlyVal__ifmap_spad__v0 = vlSelfRef.__Vlvbound_h88de6bbc__0;
                __VdlyDim0__ifmap_spad__v0 = (0xfU 
                                              & (IData)(vlSelfRef.__PVT__index_0));
                __VdlySet__ifmap_spad__v0 = 1U;
            }
            vlSelfRef.__Vlvbound_h3953f0de__0 = ((1U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0xfU)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 8U))));
            if ((0xbU >= (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v1 = vlSelfRef.__Vlvbound_h3953f0de__0;
                __VdlyDim0__ifmap_spad__v1 = (0xfU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v1 = 1U;
            }
            vlSelfRef.__Vlvbound_h2357e037__0 = ((2U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x17U)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x10U))));
            if ((0xbU >= (0xfU & ((IData)(2U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v2 = vlSelfRef.__Vlvbound_h2357e037__0;
                __VdlyDim0__ifmap_spad__v2 = (0xfU 
                                              & ((IData)(2U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v2 = 1U;
            }
            vlSelfRef.__Vlvbound_hbb266322__0 = ((3U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x1fU)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x18U))));
            if ((0xbU >= (0xfU & ((IData)(3U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v3 = vlSelfRef.__Vlvbound_hbb266322__0;
                __VdlyDim0__ifmap_spad__v3 = (0xfU 
                                              & ((IData)(3U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v3 = 1U;
            }
        } else if (((6U == (IData)(vlSelfRef.__PVT__cs)) 
                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                       >> 6U))) {
            __VdlyVal__ifmap_spad__v4 = vlSelfRef.__PVT__ifmap_spad
                [4U];
            __VdlySet__ifmap_spad__v4 = 1U;
            __VdlyVal__ifmap_spad__v5 = vlSelfRef.__PVT__ifmap_spad
                [5U];
            __VdlyVal__ifmap_spad__v6 = vlSelfRef.__PVT__ifmap_spad
                [6U];
            __VdlyVal__ifmap_spad__v7 = vlSelfRef.__PVT__ifmap_spad
                [7U];
            __VdlyVal__ifmap_spad__v8 = vlSelfRef.__PVT__ifmap_spad
                [8U];
            __VdlyVal__ifmap_spad__v9 = vlSelfRef.__PVT__ifmap_spad
                [9U];
            __VdlyVal__ifmap_spad__v10 = vlSelfRef.__PVT__ifmap_spad
                [0xaU];
            __VdlyVal__ifmap_spad__v11 = vlSelfRef.__PVT__ifmap_spad
                [0xbU];
            __VdlyVal__ifmap_spad__v12 = ((0x80U & 
                                           ((~ (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                >> 7U)) 
                                            << 7U)) 
                                          | (0x7fU 
                                             & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray));
            __VdlyVal__ifmap_spad__v13 = ((1U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0xfU)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 8U))));
            __VdlyVal__ifmap_spad__v14 = ((2U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x17U)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x10U))));
            __VdlyVal__ifmap_spad__v15 = ((3U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x1fU)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x18U))));
        }
        if ((((5U == (IData)(vlSelfRef.__PVT__cs)) 
              & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                 == (IData)(vlSelfRef.__PVT__ofmap_ch))) 
             & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                        >> 6U)))) {
            vlSelfRef.__PVT__count_ofmap_col = (((IData)(vlSelfRef.__PVT__count_ofmap_col) 
                                                 == (IData)(vlSelfRef.__PVT__ofmap_col))
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__count_ofmap_col))));
        }
        if ((8U & (IData)(vlSelfRef.__PVT__cs))) {
            __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
        } else if ((4U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((2U & (IData)(vlSelfRef.__PVT__cs))) {
                __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
            } else if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
                if ((1U & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                   >> 6U)))) {
                    __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                               == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
                }
            } else if ((1U & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                      >> 6U)))) {
                __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                           == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
                if ((((IData)(vlSelfRef.__PVT__count_input_ch) 
                      == (IData)(vlSelfRef.__PVT__input_ch)) 
                     & (2U == (IData)(vlSelfRef.__PVT__count_filt_col)))) {
                    __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                               == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
                }
            } else {
                __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                  >> 6U) & (2U == (IData)(vlSelfRef.__PVT__count_filt_col)))) {
                __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                           == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
            }
        } else {
            __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
        }
        if (((0U == (IData)(vlSelfRef.__PVT__cs)) & (IData)(
                                                            (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                             >> 6U)))) {
            vlSelfRef.__PVT__operation_mode = (1U & 
                                               ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                                >> 9U));
            vlSelfRef.__PVT__ofmap_col = (0x1fU & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                                   >> 2U));
            vlSelfRef.__PVT__ofmap_ch = (3U & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                               >> 7U));
            vlSelfRef.__PVT__input_ch = (3U & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config));
        }
        vlSelfRef.__PVT__cs = vlSelfRef.__PVT__ns;
    } else {
        vlSelfRef.__PVT__i = 4U;
        __VdlySet__filter_spad__v4 = 1U;
        __VdlySet__ofmap_spad__v6 = 1U;
        __Vdly__count_input_ch = 0U;
        __Vdly__count_filt_col = 0U;
        __VdlySet__ifmap_spad__v16 = 1U;
        vlSelfRef.__PVT__count_ofmap_col = 0U;
        __Vdly__count_ofmap_ch = 0U;
        vlSelfRef.__PVT__operation_mode = 0U;
        vlSelfRef.__PVT__ofmap_col = 0U;
        vlSelfRef.__PVT__ofmap_ch = 0U;
        vlSelfRef.__PVT__input_ch = 0U;
        vlSelfRef.__PVT__cs = 0U;
    }
    if (__VdlySet__filter_spad__v0) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v0] 
            = __VdlyVal__filter_spad__v0;
    }
    if (__VdlySet__filter_spad__v1) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v1] 
            = __VdlyVal__filter_spad__v1;
    }
    if (__VdlySet__filter_spad__v2) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v2] 
            = __VdlyVal__filter_spad__v2;
    }
    if (__VdlySet__filter_spad__v3) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v3] 
            = __VdlyVal__filter_spad__v3;
    }
    if (__VdlySet__filter_spad__v4) {
        vlSelfRef.__PVT__filter_spad[0U] = 0U;
        vlSelfRef.__PVT__filter_spad[1U] = 0U;
        vlSelfRef.__PVT__filter_spad[2U] = 0U;
        vlSelfRef.__PVT__filter_spad[3U] = 0U;
        vlSelfRef.__PVT__filter_spad[4U] = 0U;
        vlSelfRef.__PVT__filter_spad[5U] = 0U;
        vlSelfRef.__PVT__filter_spad[6U] = 0U;
        vlSelfRef.__PVT__filter_spad[7U] = 0U;
        vlSelfRef.__PVT__filter_spad[8U] = 0U;
        vlSelfRef.__PVT__filter_spad[9U] = 0U;
        vlSelfRef.__PVT__filter_spad[0xaU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xbU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xcU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xdU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xeU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xfU] = 0U;
        vlSelfRef.__PVT__filter_spad[0x10U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x11U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x12U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x13U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x14U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x15U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x16U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x17U] = 0U;
    }
    if (__VdlySet__ofmap_spad__v0) {
        vlSelfRef.__PVT__ofmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[3U] = 0U;
    }
    if (__VdlySet__ofmap_spad__v4) {
        vlSelfRef.__PVT__ofmap_spad[__VdlyDim0__ofmap_spad__v4] 
            = __VdlyVal__ofmap_spad__v4;
    }
    if (__VdlySet__ofmap_spad__v5) {
        vlSelfRef.__PVT__ofmap_spad[__VdlyDim0__ofmap_spad__v5] 
            = __VdlyVal__ofmap_spad__v5;
    }
    if (__VdlySet__ofmap_spad__v6) {
        vlSelfRef.__PVT__ofmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[3U] = 0U;
    }
    if (__VdlySet__ifmap_spad__v0) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v0] 
            = __VdlyVal__ifmap_spad__v0;
    }
    if (__VdlySet__ifmap_spad__v1) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v1] 
            = __VdlyVal__ifmap_spad__v1;
    }
    if (__VdlySet__ifmap_spad__v2) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v2] 
            = __VdlyVal__ifmap_spad__v2;
    }
    if (__VdlySet__ifmap_spad__v3) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v3] 
            = __VdlyVal__ifmap_spad__v3;
    }
    if (__VdlySet__ifmap_spad__v4) {
        vlSelfRef.__PVT__ifmap_spad[0U] = __VdlyVal__ifmap_spad__v4;
        vlSelfRef.__PVT__ifmap_spad[1U] = __VdlyVal__ifmap_spad__v5;
        vlSelfRef.__PVT__ifmap_spad[2U] = __VdlyVal__ifmap_spad__v6;
        vlSelfRef.__PVT__ifmap_spad[3U] = __VdlyVal__ifmap_spad__v7;
        vlSelfRef.__PVT__ifmap_spad[4U] = __VdlyVal__ifmap_spad__v8;
        vlSelfRef.__PVT__ifmap_spad[5U] = __VdlyVal__ifmap_spad__v9;
        vlSelfRef.__PVT__ifmap_spad[6U] = __VdlyVal__ifmap_spad__v10;
        vlSelfRef.__PVT__ifmap_spad[7U] = __VdlyVal__ifmap_spad__v11;
        vlSelfRef.__PVT__ifmap_spad[8U] = __VdlyVal__ifmap_spad__v12;
        vlSelfRef.__PVT__ifmap_spad[9U] = __VdlyVal__ifmap_spad__v13;
        vlSelfRef.__PVT__ifmap_spad[0xaU] = __VdlyVal__ifmap_spad__v14;
        vlSelfRef.__PVT__ifmap_spad[0xbU] = __VdlyVal__ifmap_spad__v15;
    }
    if (__VdlySet__ifmap_spad__v16) {
        vlSelfRef.__PVT__ifmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[3U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[4U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[5U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[6U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[7U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[8U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[9U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[0xaU] = 0U;
        vlSelfRef.__PVT__ifmap_spad[0xbU] = 0U;
    }
    vlSelfRef.__PVT__count_filt_col = __Vdly__count_filt_col;
    vlSelfRef.__PVT__count_input_ch = __Vdly__count_input_ch;
    vlSelfRef.__PVT__count_ofmap_ch = __Vdly__count_ofmap_ch;
    vlSelfRef.__PVT__ifmap_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                     << 2U) | (IData)(vlSelfRef.__PVT__count_input_ch));
    vlSelfRef.__PVT__filter_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                      << 4U) | (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                 << 2U) 
                                                | (IData)(vlSelfRef.__PVT__count_input_ch)));
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
    vlSelfRef.__PVT__index_0 = ((1U == (IData)(vlSelfRef.__PVT__cs))
                                 ? (IData)(vlSelfRef.__PVT__filter_index)
                                 : (IData)(vlSelfRef.__PVT__ifmap_index));
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__1\n"); );
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
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[6U]));
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__2\n"); );
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
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__count_filt_col;
    __Vdly__count_filt_col = 0;
    CData/*1:0*/ __Vdly__count_ofmap_ch;
    __Vdly__count_ofmap_ch = 0;
    CData/*1:0*/ __Vdly__count_input_ch;
    __Vdly__count_input_ch = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v0;
    __VdlyVal__filter_spad__v0 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v0;
    __VdlyDim0__filter_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v0;
    __VdlySet__filter_spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v1;
    __VdlyVal__filter_spad__v1 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v1;
    __VdlyDim0__filter_spad__v1 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v1;
    __VdlySet__filter_spad__v1 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v2;
    __VdlyVal__filter_spad__v2 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v2;
    __VdlyDim0__filter_spad__v2 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v2;
    __VdlySet__filter_spad__v2 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v3;
    __VdlyVal__filter_spad__v3 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v3;
    __VdlyDim0__filter_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v3;
    __VdlySet__filter_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v4;
    __VdlySet__filter_spad__v4 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v0;
    __VdlyVal__ifmap_spad__v0 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v0;
    __VdlyDim0__ifmap_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v0;
    __VdlySet__ifmap_spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v1;
    __VdlyVal__ifmap_spad__v1 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v1;
    __VdlyDim0__ifmap_spad__v1 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v1;
    __VdlySet__ifmap_spad__v1 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v2;
    __VdlyVal__ifmap_spad__v2 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v2;
    __VdlyDim0__ifmap_spad__v2 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v2;
    __VdlySet__ifmap_spad__v2 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v3;
    __VdlyVal__ifmap_spad__v3 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v3;
    __VdlyDim0__ifmap_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v3;
    __VdlySet__ifmap_spad__v3 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v4;
    __VdlyVal__ifmap_spad__v4 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v4;
    __VdlySet__ifmap_spad__v4 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v5;
    __VdlyVal__ifmap_spad__v5 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v6;
    __VdlyVal__ifmap_spad__v6 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v7;
    __VdlyVal__ifmap_spad__v7 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v8;
    __VdlyVal__ifmap_spad__v8 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v9;
    __VdlyVal__ifmap_spad__v9 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v10;
    __VdlyVal__ifmap_spad__v10 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v11;
    __VdlyVal__ifmap_spad__v11 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v12;
    __VdlyVal__ifmap_spad__v12 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v13;
    __VdlyVal__ifmap_spad__v13 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v14;
    __VdlyVal__ifmap_spad__v14 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v15;
    __VdlyVal__ifmap_spad__v15 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v16;
    __VdlySet__ifmap_spad__v16 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v0;
    __VdlySet__ofmap_spad__v0 = 0;
    IData/*31:0*/ __VdlyVal__ofmap_spad__v4;
    __VdlyVal__ofmap_spad__v4 = 0;
    CData/*1:0*/ __VdlyDim0__ofmap_spad__v4;
    __VdlyDim0__ofmap_spad__v4 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v4;
    __VdlySet__ofmap_spad__v4 = 0;
    IData/*31:0*/ __VdlyVal__ofmap_spad__v5;
    __VdlyVal__ofmap_spad__v5 = 0;
    CData/*1:0*/ __VdlyDim0__ofmap_spad__v5;
    __VdlyDim0__ofmap_spad__v5 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v5;
    __VdlySet__ofmap_spad__v5 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v6;
    __VdlySet__ofmap_spad__v6 = 0;
    // Body
    __VdlySet__filter_spad__v0 = 0U;
    __VdlySet__filter_spad__v1 = 0U;
    __VdlySet__filter_spad__v2 = 0U;
    __VdlySet__filter_spad__v3 = 0U;
    __VdlySet__filter_spad__v4 = 0U;
    __VdlySet__ofmap_spad__v0 = 0U;
    __VdlySet__ofmap_spad__v4 = 0U;
    __VdlySet__ofmap_spad__v5 = 0U;
    __VdlySet__ofmap_spad__v6 = 0U;
    __Vdly__count_input_ch = vlSelfRef.__PVT__count_input_ch;
    __Vdly__count_filt_col = vlSelfRef.__PVT__count_filt_col;
    __VdlySet__ifmap_spad__v0 = 0U;
    __VdlySet__ifmap_spad__v1 = 0U;
    __VdlySet__ifmap_spad__v2 = 0U;
    __VdlySet__ifmap_spad__v3 = 0U;
    __VdlySet__ifmap_spad__v4 = 0U;
    __VdlySet__ifmap_spad__v16 = 0U;
    __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
    if ((1U & (~ (IData)(vlSymsp->TOP.ARESETn)))) {
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x18U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xcU;
    }
    if (vlSymsp->TOP.ARESETn) {
        if (((0U == (IData)(vlSelfRef.__PVT__cs)) | 
             (6U == (IData)(vlSelfRef.__PVT__cs)))) {
            vlSelfRef.__PVT__i = 4U;
            __VdlySet__ofmap_spad__v0 = 1U;
        } else if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            __VdlyVal__ofmap_spad__v4 = vlSelfRef.__PVT__add_res;
            __VdlyDim0__ofmap_spad__v4 = vlSelfRef.__PVT__count_ofmap_ch;
            __VdlySet__ofmap_spad__v4 = 1U;
        } else if (((4U == (IData)(vlSelfRef.__PVT__cs)) 
                    & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                               >> 7U)))) {
            __VdlyVal__ofmap_spad__v5 = vlSelfRef.__PVT__add_res;
            __VdlyDim0__ofmap_spad__v5 = vlSelfRef.__PVT__count_ofmap_ch;
            __VdlySet__ofmap_spad__v5 = 1U;
        }
        if (((1U == (IData)(vlSelfRef.__PVT__cs)) & 
             ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
              >> 7U))) {
            vlSelfRef.__Vlvbound_h652caa15__0 = (0xffU 
                                                 & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray);
            if ((0x2fU >= (IData)(vlSelfRef.__PVT__index_0))) {
                __VdlyVal__filter_spad__v0 = vlSelfRef.__Vlvbound_h652caa15__0;
                __VdlyDim0__filter_spad__v0 = vlSelfRef.__PVT__index_0;
                __VdlySet__filter_spad__v0 = 1U;
            }
            vlSelfRef.__Vlvbound_h94c06f97__0 = (0xffU 
                                                 & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                    >> 8U));
            if ((0x2fU >= (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v1 = vlSelfRef.__Vlvbound_h94c06f97__0;
                __VdlyDim0__filter_spad__v1 = (0x3fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v1 = 1U;
            }
            vlSelfRef.__Vlvbound_h3265d838__0 = (0xffU 
                                                 & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                    >> 0x10U));
            if ((0x2fU >= (0x3fU & ((IData)(2U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v2 = vlSelfRef.__Vlvbound_h3265d838__0;
                __VdlyDim0__filter_spad__v2 = (0x3fU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v2 = 1U;
            }
            vlSelfRef.__Vlvbound_h136a5f52__0 = (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                 >> 0x18U);
            if ((0x2fU >= (0x3fU & ((IData)(3U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v3 = vlSelfRef.__Vlvbound_h136a5f52__0;
                __VdlyDim0__filter_spad__v3 = (0x3fU 
                                               & ((IData)(3U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v3 = 1U;
            }
        }
        if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            __Vdly__count_input_ch = (((IData)(vlSelfRef.__PVT__count_input_ch) 
                                       == (IData)(vlSelfRef.__PVT__input_ch))
                                       ? 0U : (3U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__count_input_ch))));
        }
        if ((1U == (IData)(vlSelfRef.__PVT__cs))) {
            if ((0x80U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__cs))) {
            if ((0x80U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            if (((IData)(vlSelfRef.__PVT__count_input_ch) 
                 == (IData)(vlSelfRef.__PVT__input_ch))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else {
            __Vdly__count_filt_col = vlSelfRef.__PVT__count_filt_col;
        }
        if (((2U == (IData)(vlSelfRef.__PVT__cs)) & 
             ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
              >> 7U))) {
            vlSelfRef.__Vlvbound_h88de6bbc__0 = ((0x80U 
                                                  & ((~ 
                                                      (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                       >> 7U)) 
                                                     << 7U)) 
                                                 | (0x7fU 
                                                    & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray));
            if ((0xbU >= (0xfU & (IData)(vlSelfRef.__PVT__index_0)))) {
                __VdlyVal__ifmap_spad__v0 = vlSelfRef.__Vlvbound_h88de6bbc__0;
                __VdlyDim0__ifmap_spad__v0 = (0xfU 
                                              & (IData)(vlSelfRef.__PVT__index_0));
                __VdlySet__ifmap_spad__v0 = 1U;
            }
            vlSelfRef.__Vlvbound_h3953f0de__0 = ((1U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0xfU)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 8U))));
            if ((0xbU >= (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v1 = vlSelfRef.__Vlvbound_h3953f0de__0;
                __VdlyDim0__ifmap_spad__v1 = (0xfU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v1 = 1U;
            }
            vlSelfRef.__Vlvbound_h2357e037__0 = ((2U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x17U)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x10U))));
            if ((0xbU >= (0xfU & ((IData)(2U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v2 = vlSelfRef.__Vlvbound_h2357e037__0;
                __VdlyDim0__ifmap_spad__v2 = (0xfU 
                                              & ((IData)(2U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v2 = 1U;
            }
            vlSelfRef.__Vlvbound_hbb266322__0 = ((3U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x1fU)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x18U))));
            if ((0xbU >= (0xfU & ((IData)(3U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v3 = vlSelfRef.__Vlvbound_hbb266322__0;
                __VdlyDim0__ifmap_spad__v3 = (0xfU 
                                              & ((IData)(3U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v3 = 1U;
            }
        } else if (((6U == (IData)(vlSelfRef.__PVT__cs)) 
                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                       >> 7U))) {
            __VdlyVal__ifmap_spad__v4 = vlSelfRef.__PVT__ifmap_spad
                [4U];
            __VdlySet__ifmap_spad__v4 = 1U;
            __VdlyVal__ifmap_spad__v5 = vlSelfRef.__PVT__ifmap_spad
                [5U];
            __VdlyVal__ifmap_spad__v6 = vlSelfRef.__PVT__ifmap_spad
                [6U];
            __VdlyVal__ifmap_spad__v7 = vlSelfRef.__PVT__ifmap_spad
                [7U];
            __VdlyVal__ifmap_spad__v8 = vlSelfRef.__PVT__ifmap_spad
                [8U];
            __VdlyVal__ifmap_spad__v9 = vlSelfRef.__PVT__ifmap_spad
                [9U];
            __VdlyVal__ifmap_spad__v10 = vlSelfRef.__PVT__ifmap_spad
                [0xaU];
            __VdlyVal__ifmap_spad__v11 = vlSelfRef.__PVT__ifmap_spad
                [0xbU];
            __VdlyVal__ifmap_spad__v12 = ((0x80U & 
                                           ((~ (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                >> 7U)) 
                                            << 7U)) 
                                          | (0x7fU 
                                             & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray));
            __VdlyVal__ifmap_spad__v13 = ((1U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0xfU)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 8U))));
            __VdlyVal__ifmap_spad__v14 = ((2U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x17U)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x10U))));
            __VdlyVal__ifmap_spad__v15 = ((3U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x1fU)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x18U))));
        }
        if ((((5U == (IData)(vlSelfRef.__PVT__cs)) 
              & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                 == (IData)(vlSelfRef.__PVT__ofmap_ch))) 
             & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                        >> 7U)))) {
            vlSelfRef.__PVT__count_ofmap_col = (((IData)(vlSelfRef.__PVT__count_ofmap_col) 
                                                 == (IData)(vlSelfRef.__PVT__ofmap_col))
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__count_ofmap_col))));
        }
        if ((8U & (IData)(vlSelfRef.__PVT__cs))) {
            __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
        } else if ((4U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((2U & (IData)(vlSelfRef.__PVT__cs))) {
                __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
            } else if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
                if ((1U & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                   >> 7U)))) {
                    __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                               == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
                }
            } else if ((1U & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                      >> 7U)))) {
                __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                           == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
                if ((((IData)(vlSelfRef.__PVT__count_input_ch) 
                      == (IData)(vlSelfRef.__PVT__input_ch)) 
                     & (2U == (IData)(vlSelfRef.__PVT__count_filt_col)))) {
                    __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                               == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
                }
            } else {
                __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                  >> 7U) & (2U == (IData)(vlSelfRef.__PVT__count_filt_col)))) {
                __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                           == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
            }
        } else {
            __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
        }
        if (((0U == (IData)(vlSelfRef.__PVT__cs)) & (IData)(
                                                            (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                             >> 7U)))) {
            vlSelfRef.__PVT__operation_mode = (1U & 
                                               ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                                >> 9U));
            vlSelfRef.__PVT__ofmap_col = (0x1fU & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                                   >> 2U));
            vlSelfRef.__PVT__ofmap_ch = (3U & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                               >> 7U));
            vlSelfRef.__PVT__input_ch = (3U & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config));
        }
        vlSelfRef.__PVT__cs = vlSelfRef.__PVT__ns;
    } else {
        vlSelfRef.__PVT__i = 4U;
        __VdlySet__filter_spad__v4 = 1U;
        __VdlySet__ofmap_spad__v6 = 1U;
        __Vdly__count_input_ch = 0U;
        __Vdly__count_filt_col = 0U;
        __VdlySet__ifmap_spad__v16 = 1U;
        vlSelfRef.__PVT__count_ofmap_col = 0U;
        __Vdly__count_ofmap_ch = 0U;
        vlSelfRef.__PVT__operation_mode = 0U;
        vlSelfRef.__PVT__ofmap_col = 0U;
        vlSelfRef.__PVT__ofmap_ch = 0U;
        vlSelfRef.__PVT__input_ch = 0U;
        vlSelfRef.__PVT__cs = 0U;
    }
    if (__VdlySet__filter_spad__v0) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v0] 
            = __VdlyVal__filter_spad__v0;
    }
    if (__VdlySet__filter_spad__v1) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v1] 
            = __VdlyVal__filter_spad__v1;
    }
    if (__VdlySet__filter_spad__v2) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v2] 
            = __VdlyVal__filter_spad__v2;
    }
    if (__VdlySet__filter_spad__v3) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v3] 
            = __VdlyVal__filter_spad__v3;
    }
    if (__VdlySet__filter_spad__v4) {
        vlSelfRef.__PVT__filter_spad[0U] = 0U;
        vlSelfRef.__PVT__filter_spad[1U] = 0U;
        vlSelfRef.__PVT__filter_spad[2U] = 0U;
        vlSelfRef.__PVT__filter_spad[3U] = 0U;
        vlSelfRef.__PVT__filter_spad[4U] = 0U;
        vlSelfRef.__PVT__filter_spad[5U] = 0U;
        vlSelfRef.__PVT__filter_spad[6U] = 0U;
        vlSelfRef.__PVT__filter_spad[7U] = 0U;
        vlSelfRef.__PVT__filter_spad[8U] = 0U;
        vlSelfRef.__PVT__filter_spad[9U] = 0U;
        vlSelfRef.__PVT__filter_spad[0xaU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xbU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xcU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xdU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xeU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xfU] = 0U;
        vlSelfRef.__PVT__filter_spad[0x10U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x11U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x12U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x13U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x14U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x15U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x16U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x17U] = 0U;
    }
    if (__VdlySet__ofmap_spad__v0) {
        vlSelfRef.__PVT__ofmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[3U] = 0U;
    }
    if (__VdlySet__ofmap_spad__v4) {
        vlSelfRef.__PVT__ofmap_spad[__VdlyDim0__ofmap_spad__v4] 
            = __VdlyVal__ofmap_spad__v4;
    }
    if (__VdlySet__ofmap_spad__v5) {
        vlSelfRef.__PVT__ofmap_spad[__VdlyDim0__ofmap_spad__v5] 
            = __VdlyVal__ofmap_spad__v5;
    }
    if (__VdlySet__ofmap_spad__v6) {
        vlSelfRef.__PVT__ofmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[3U] = 0U;
    }
    if (__VdlySet__ifmap_spad__v0) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v0] 
            = __VdlyVal__ifmap_spad__v0;
    }
    if (__VdlySet__ifmap_spad__v1) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v1] 
            = __VdlyVal__ifmap_spad__v1;
    }
    if (__VdlySet__ifmap_spad__v2) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v2] 
            = __VdlyVal__ifmap_spad__v2;
    }
    if (__VdlySet__ifmap_spad__v3) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v3] 
            = __VdlyVal__ifmap_spad__v3;
    }
    if (__VdlySet__ifmap_spad__v4) {
        vlSelfRef.__PVT__ifmap_spad[0U] = __VdlyVal__ifmap_spad__v4;
        vlSelfRef.__PVT__ifmap_spad[1U] = __VdlyVal__ifmap_spad__v5;
        vlSelfRef.__PVT__ifmap_spad[2U] = __VdlyVal__ifmap_spad__v6;
        vlSelfRef.__PVT__ifmap_spad[3U] = __VdlyVal__ifmap_spad__v7;
        vlSelfRef.__PVT__ifmap_spad[4U] = __VdlyVal__ifmap_spad__v8;
        vlSelfRef.__PVT__ifmap_spad[5U] = __VdlyVal__ifmap_spad__v9;
        vlSelfRef.__PVT__ifmap_spad[6U] = __VdlyVal__ifmap_spad__v10;
        vlSelfRef.__PVT__ifmap_spad[7U] = __VdlyVal__ifmap_spad__v11;
        vlSelfRef.__PVT__ifmap_spad[8U] = __VdlyVal__ifmap_spad__v12;
        vlSelfRef.__PVT__ifmap_spad[9U] = __VdlyVal__ifmap_spad__v13;
        vlSelfRef.__PVT__ifmap_spad[0xaU] = __VdlyVal__ifmap_spad__v14;
        vlSelfRef.__PVT__ifmap_spad[0xbU] = __VdlyVal__ifmap_spad__v15;
    }
    if (__VdlySet__ifmap_spad__v16) {
        vlSelfRef.__PVT__ifmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[3U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[4U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[5U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[6U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[7U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[8U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[9U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[0xaU] = 0U;
        vlSelfRef.__PVT__ifmap_spad[0xbU] = 0U;
    }
    vlSelfRef.__PVT__count_filt_col = __Vdly__count_filt_col;
    vlSelfRef.__PVT__count_input_ch = __Vdly__count_input_ch;
    vlSelfRef.__PVT__count_ofmap_ch = __Vdly__count_ofmap_ch;
    vlSelfRef.__PVT__ifmap_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                     << 2U) | (IData)(vlSelfRef.__PVT__count_input_ch));
    vlSelfRef.__PVT__filter_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                      << 4U) | (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                 << 2U) 
                                                | (IData)(vlSelfRef.__PVT__count_input_ch)));
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
    vlSelfRef.__PVT__index_0 = ((1U == (IData)(vlSelfRef.__PVT__cs))
                                 ? (IData)(vlSelfRef.__PVT__filter_index)
                                 : (IData)(vlSelfRef.__PVT__ifmap_index));
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1\n"); );
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
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[7U]));
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__2\n"); );
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
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__count_filt_col;
    __Vdly__count_filt_col = 0;
    CData/*1:0*/ __Vdly__count_ofmap_ch;
    __Vdly__count_ofmap_ch = 0;
    CData/*1:0*/ __Vdly__count_input_ch;
    __Vdly__count_input_ch = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v0;
    __VdlyVal__filter_spad__v0 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v0;
    __VdlyDim0__filter_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v0;
    __VdlySet__filter_spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v1;
    __VdlyVal__filter_spad__v1 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v1;
    __VdlyDim0__filter_spad__v1 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v1;
    __VdlySet__filter_spad__v1 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v2;
    __VdlyVal__filter_spad__v2 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v2;
    __VdlyDim0__filter_spad__v2 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v2;
    __VdlySet__filter_spad__v2 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v3;
    __VdlyVal__filter_spad__v3 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v3;
    __VdlyDim0__filter_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v3;
    __VdlySet__filter_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v4;
    __VdlySet__filter_spad__v4 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v0;
    __VdlyVal__ifmap_spad__v0 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v0;
    __VdlyDim0__ifmap_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v0;
    __VdlySet__ifmap_spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v1;
    __VdlyVal__ifmap_spad__v1 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v1;
    __VdlyDim0__ifmap_spad__v1 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v1;
    __VdlySet__ifmap_spad__v1 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v2;
    __VdlyVal__ifmap_spad__v2 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v2;
    __VdlyDim0__ifmap_spad__v2 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v2;
    __VdlySet__ifmap_spad__v2 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v3;
    __VdlyVal__ifmap_spad__v3 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v3;
    __VdlyDim0__ifmap_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v3;
    __VdlySet__ifmap_spad__v3 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v4;
    __VdlyVal__ifmap_spad__v4 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v4;
    __VdlySet__ifmap_spad__v4 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v5;
    __VdlyVal__ifmap_spad__v5 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v6;
    __VdlyVal__ifmap_spad__v6 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v7;
    __VdlyVal__ifmap_spad__v7 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v8;
    __VdlyVal__ifmap_spad__v8 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v9;
    __VdlyVal__ifmap_spad__v9 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v10;
    __VdlyVal__ifmap_spad__v10 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v11;
    __VdlyVal__ifmap_spad__v11 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v12;
    __VdlyVal__ifmap_spad__v12 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v13;
    __VdlyVal__ifmap_spad__v13 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v14;
    __VdlyVal__ifmap_spad__v14 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v15;
    __VdlyVal__ifmap_spad__v15 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v16;
    __VdlySet__ifmap_spad__v16 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v0;
    __VdlySet__ofmap_spad__v0 = 0;
    IData/*31:0*/ __VdlyVal__ofmap_spad__v4;
    __VdlyVal__ofmap_spad__v4 = 0;
    CData/*1:0*/ __VdlyDim0__ofmap_spad__v4;
    __VdlyDim0__ofmap_spad__v4 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v4;
    __VdlySet__ofmap_spad__v4 = 0;
    IData/*31:0*/ __VdlyVal__ofmap_spad__v5;
    __VdlyVal__ofmap_spad__v5 = 0;
    CData/*1:0*/ __VdlyDim0__ofmap_spad__v5;
    __VdlyDim0__ofmap_spad__v5 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v5;
    __VdlySet__ofmap_spad__v5 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v6;
    __VdlySet__ofmap_spad__v6 = 0;
    // Body
    __VdlySet__filter_spad__v0 = 0U;
    __VdlySet__filter_spad__v1 = 0U;
    __VdlySet__filter_spad__v2 = 0U;
    __VdlySet__filter_spad__v3 = 0U;
    __VdlySet__filter_spad__v4 = 0U;
    __VdlySet__ofmap_spad__v0 = 0U;
    __VdlySet__ofmap_spad__v4 = 0U;
    __VdlySet__ofmap_spad__v5 = 0U;
    __VdlySet__ofmap_spad__v6 = 0U;
    __Vdly__count_input_ch = vlSelfRef.__PVT__count_input_ch;
    __Vdly__count_filt_col = vlSelfRef.__PVT__count_filt_col;
    __VdlySet__ifmap_spad__v0 = 0U;
    __VdlySet__ifmap_spad__v1 = 0U;
    __VdlySet__ifmap_spad__v2 = 0U;
    __VdlySet__ifmap_spad__v3 = 0U;
    __VdlySet__ifmap_spad__v4 = 0U;
    __VdlySet__ifmap_spad__v16 = 0U;
    __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
    if ((1U & (~ (IData)(vlSymsp->TOP.ARESETn)))) {
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x18U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xcU;
    }
    if (vlSymsp->TOP.ARESETn) {
        if (((0U == (IData)(vlSelfRef.__PVT__cs)) | 
             (6U == (IData)(vlSelfRef.__PVT__cs)))) {
            vlSelfRef.__PVT__i = 4U;
            __VdlySet__ofmap_spad__v0 = 1U;
        } else if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            __VdlyVal__ofmap_spad__v4 = vlSelfRef.__PVT__add_res;
            __VdlyDim0__ofmap_spad__v4 = vlSelfRef.__PVT__count_ofmap_ch;
            __VdlySet__ofmap_spad__v4 = 1U;
        } else if (((4U == (IData)(vlSelfRef.__PVT__cs)) 
                    & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                               >> 8U)))) {
            __VdlyVal__ofmap_spad__v5 = vlSelfRef.__PVT__add_res;
            __VdlyDim0__ofmap_spad__v5 = vlSelfRef.__PVT__count_ofmap_ch;
            __VdlySet__ofmap_spad__v5 = 1U;
        }
        if (((1U == (IData)(vlSelfRef.__PVT__cs)) & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid))) {
            vlSelfRef.__Vlvbound_h652caa15__0 = (0xffU 
                                                 & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray);
            if ((0x2fU >= (IData)(vlSelfRef.__PVT__index_0))) {
                __VdlyVal__filter_spad__v0 = vlSelfRef.__Vlvbound_h652caa15__0;
                __VdlyDim0__filter_spad__v0 = vlSelfRef.__PVT__index_0;
                __VdlySet__filter_spad__v0 = 1U;
            }
            vlSelfRef.__Vlvbound_h94c06f97__0 = (0xffU 
                                                 & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                    >> 8U));
            if ((0x2fU >= (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v1 = vlSelfRef.__Vlvbound_h94c06f97__0;
                __VdlyDim0__filter_spad__v1 = (0x3fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v1 = 1U;
            }
            vlSelfRef.__Vlvbound_h3265d838__0 = (0xffU 
                                                 & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                    >> 0x10U));
            if ((0x2fU >= (0x3fU & ((IData)(2U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v2 = vlSelfRef.__Vlvbound_h3265d838__0;
                __VdlyDim0__filter_spad__v2 = (0x3fU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v2 = 1U;
            }
            vlSelfRef.__Vlvbound_h136a5f52__0 = (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                 >> 0x18U);
            if ((0x2fU >= (0x3fU & ((IData)(3U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v3 = vlSelfRef.__Vlvbound_h136a5f52__0;
                __VdlyDim0__filter_spad__v3 = (0x3fU 
                                               & ((IData)(3U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v3 = 1U;
            }
        }
        if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            __Vdly__count_input_ch = (((IData)(vlSelfRef.__PVT__count_input_ch) 
                                       == (IData)(vlSelfRef.__PVT__input_ch))
                                       ? 0U : (3U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__count_input_ch))));
        }
        if ((1U == (IData)(vlSelfRef.__PVT__cs))) {
            if ((1U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__cs))) {
            if ((1U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            if (((IData)(vlSelfRef.__PVT__count_input_ch) 
                 == (IData)(vlSelfRef.__PVT__input_ch))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else {
            __Vdly__count_filt_col = vlSelfRef.__PVT__count_filt_col;
        }
        if (((2U == (IData)(vlSelfRef.__PVT__cs)) & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid))) {
            vlSelfRef.__Vlvbound_h88de6bbc__0 = ((0x80U 
                                                  & ((~ 
                                                      (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                       >> 7U)) 
                                                     << 7U)) 
                                                 | (0x7fU 
                                                    & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray));
            if ((0xbU >= (0xfU & (IData)(vlSelfRef.__PVT__index_0)))) {
                __VdlyVal__ifmap_spad__v0 = vlSelfRef.__Vlvbound_h88de6bbc__0;
                __VdlyDim0__ifmap_spad__v0 = (0xfU 
                                              & (IData)(vlSelfRef.__PVT__index_0));
                __VdlySet__ifmap_spad__v0 = 1U;
            }
            vlSelfRef.__Vlvbound_h3953f0de__0 = ((1U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0xfU)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 8U))));
            if ((0xbU >= (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v1 = vlSelfRef.__Vlvbound_h3953f0de__0;
                __VdlyDim0__ifmap_spad__v1 = (0xfU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v1 = 1U;
            }
            vlSelfRef.__Vlvbound_h2357e037__0 = ((2U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x17U)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x10U))));
            if ((0xbU >= (0xfU & ((IData)(2U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v2 = vlSelfRef.__Vlvbound_h2357e037__0;
                __VdlyDim0__ifmap_spad__v2 = (0xfU 
                                              & ((IData)(2U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v2 = 1U;
            }
            vlSelfRef.__Vlvbound_hbb266322__0 = ((3U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x1fU)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x18U))));
            if ((0xbU >= (0xfU & ((IData)(3U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v3 = vlSelfRef.__Vlvbound_hbb266322__0;
                __VdlyDim0__ifmap_spad__v3 = (0xfU 
                                              & ((IData)(3U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v3 = 1U;
            }
        } else if (((6U == (IData)(vlSelfRef.__PVT__cs)) 
                    & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid))) {
            __VdlyVal__ifmap_spad__v4 = vlSelfRef.__PVT__ifmap_spad
                [4U];
            __VdlySet__ifmap_spad__v4 = 1U;
            __VdlyVal__ifmap_spad__v5 = vlSelfRef.__PVT__ifmap_spad
                [5U];
            __VdlyVal__ifmap_spad__v6 = vlSelfRef.__PVT__ifmap_spad
                [6U];
            __VdlyVal__ifmap_spad__v7 = vlSelfRef.__PVT__ifmap_spad
                [7U];
            __VdlyVal__ifmap_spad__v8 = vlSelfRef.__PVT__ifmap_spad
                [8U];
            __VdlyVal__ifmap_spad__v9 = vlSelfRef.__PVT__ifmap_spad
                [9U];
            __VdlyVal__ifmap_spad__v10 = vlSelfRef.__PVT__ifmap_spad
                [0xaU];
            __VdlyVal__ifmap_spad__v11 = vlSelfRef.__PVT__ifmap_spad
                [0xbU];
            __VdlyVal__ifmap_spad__v12 = ((0x80U & 
                                           ((~ (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                >> 7U)) 
                                            << 7U)) 
                                          | (0x7fU 
                                             & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray));
            __VdlyVal__ifmap_spad__v13 = ((1U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0xfU)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 8U))));
            __VdlyVal__ifmap_spad__v14 = ((2U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x17U)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x10U))));
            __VdlyVal__ifmap_spad__v15 = ((3U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x1fU)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x18U))));
        }
        if ((((5U == (IData)(vlSelfRef.__PVT__cs)) 
              & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                 == (IData)(vlSelfRef.__PVT__ofmap_ch))) 
             & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                        >> 8U)))) {
            vlSelfRef.__PVT__count_ofmap_col = (((IData)(vlSelfRef.__PVT__count_ofmap_col) 
                                                 == (IData)(vlSelfRef.__PVT__ofmap_col))
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__count_ofmap_col))));
        }
        if ((8U & (IData)(vlSelfRef.__PVT__cs))) {
            __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
        } else if ((4U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((2U & (IData)(vlSelfRef.__PVT__cs))) {
                __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
            } else if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
                if ((1U & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                   >> 8U)))) {
                    __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                               == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
                }
            } else if ((1U & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                      >> 8U)))) {
                __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                           == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
                if ((((IData)(vlSelfRef.__PVT__count_input_ch) 
                      == (IData)(vlSelfRef.__PVT__input_ch)) 
                     & (2U == (IData)(vlSelfRef.__PVT__count_filt_col)))) {
                    __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                               == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
                }
            } else {
                __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
            if (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                 & (2U == (IData)(vlSelfRef.__PVT__count_filt_col)))) {
                __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                           == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
            }
        } else {
            __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
        }
        if (((0U == (IData)(vlSelfRef.__PVT__cs)) & (IData)(
                                                            (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                             >> 8U)))) {
            vlSelfRef.__PVT__operation_mode = (1U & 
                                               ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                                >> 9U));
            vlSelfRef.__PVT__ofmap_col = (0x1fU & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                                   >> 2U));
            vlSelfRef.__PVT__ofmap_ch = (3U & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                               >> 7U));
            vlSelfRef.__PVT__input_ch = (3U & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config));
        }
        vlSelfRef.__PVT__cs = vlSelfRef.__PVT__ns;
    } else {
        vlSelfRef.__PVT__i = 4U;
        __VdlySet__filter_spad__v4 = 1U;
        __VdlySet__ofmap_spad__v6 = 1U;
        __Vdly__count_input_ch = 0U;
        __Vdly__count_filt_col = 0U;
        __VdlySet__ifmap_spad__v16 = 1U;
        vlSelfRef.__PVT__count_ofmap_col = 0U;
        __Vdly__count_ofmap_ch = 0U;
        vlSelfRef.__PVT__operation_mode = 0U;
        vlSelfRef.__PVT__ofmap_col = 0U;
        vlSelfRef.__PVT__ofmap_ch = 0U;
        vlSelfRef.__PVT__input_ch = 0U;
        vlSelfRef.__PVT__cs = 0U;
    }
    if (__VdlySet__filter_spad__v0) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v0] 
            = __VdlyVal__filter_spad__v0;
    }
    if (__VdlySet__filter_spad__v1) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v1] 
            = __VdlyVal__filter_spad__v1;
    }
    if (__VdlySet__filter_spad__v2) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v2] 
            = __VdlyVal__filter_spad__v2;
    }
    if (__VdlySet__filter_spad__v3) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v3] 
            = __VdlyVal__filter_spad__v3;
    }
    if (__VdlySet__filter_spad__v4) {
        vlSelfRef.__PVT__filter_spad[0U] = 0U;
        vlSelfRef.__PVT__filter_spad[1U] = 0U;
        vlSelfRef.__PVT__filter_spad[2U] = 0U;
        vlSelfRef.__PVT__filter_spad[3U] = 0U;
        vlSelfRef.__PVT__filter_spad[4U] = 0U;
        vlSelfRef.__PVT__filter_spad[5U] = 0U;
        vlSelfRef.__PVT__filter_spad[6U] = 0U;
        vlSelfRef.__PVT__filter_spad[7U] = 0U;
        vlSelfRef.__PVT__filter_spad[8U] = 0U;
        vlSelfRef.__PVT__filter_spad[9U] = 0U;
        vlSelfRef.__PVT__filter_spad[0xaU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xbU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xcU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xdU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xeU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xfU] = 0U;
        vlSelfRef.__PVT__filter_spad[0x10U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x11U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x12U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x13U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x14U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x15U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x16U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x17U] = 0U;
    }
    if (__VdlySet__ofmap_spad__v0) {
        vlSelfRef.__PVT__ofmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[3U] = 0U;
    }
    if (__VdlySet__ofmap_spad__v4) {
        vlSelfRef.__PVT__ofmap_spad[__VdlyDim0__ofmap_spad__v4] 
            = __VdlyVal__ofmap_spad__v4;
    }
    if (__VdlySet__ofmap_spad__v5) {
        vlSelfRef.__PVT__ofmap_spad[__VdlyDim0__ofmap_spad__v5] 
            = __VdlyVal__ofmap_spad__v5;
    }
    if (__VdlySet__ofmap_spad__v6) {
        vlSelfRef.__PVT__ofmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[3U] = 0U;
    }
    if (__VdlySet__ifmap_spad__v0) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v0] 
            = __VdlyVal__ifmap_spad__v0;
    }
    if (__VdlySet__ifmap_spad__v1) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v1] 
            = __VdlyVal__ifmap_spad__v1;
    }
    if (__VdlySet__ifmap_spad__v2) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v2] 
            = __VdlyVal__ifmap_spad__v2;
    }
    if (__VdlySet__ifmap_spad__v3) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v3] 
            = __VdlyVal__ifmap_spad__v3;
    }
    if (__VdlySet__ifmap_spad__v4) {
        vlSelfRef.__PVT__ifmap_spad[0U] = __VdlyVal__ifmap_spad__v4;
        vlSelfRef.__PVT__ifmap_spad[1U] = __VdlyVal__ifmap_spad__v5;
        vlSelfRef.__PVT__ifmap_spad[2U] = __VdlyVal__ifmap_spad__v6;
        vlSelfRef.__PVT__ifmap_spad[3U] = __VdlyVal__ifmap_spad__v7;
        vlSelfRef.__PVT__ifmap_spad[4U] = __VdlyVal__ifmap_spad__v8;
        vlSelfRef.__PVT__ifmap_spad[5U] = __VdlyVal__ifmap_spad__v9;
        vlSelfRef.__PVT__ifmap_spad[6U] = __VdlyVal__ifmap_spad__v10;
        vlSelfRef.__PVT__ifmap_spad[7U] = __VdlyVal__ifmap_spad__v11;
        vlSelfRef.__PVT__ifmap_spad[8U] = __VdlyVal__ifmap_spad__v12;
        vlSelfRef.__PVT__ifmap_spad[9U] = __VdlyVal__ifmap_spad__v13;
        vlSelfRef.__PVT__ifmap_spad[0xaU] = __VdlyVal__ifmap_spad__v14;
        vlSelfRef.__PVT__ifmap_spad[0xbU] = __VdlyVal__ifmap_spad__v15;
    }
    if (__VdlySet__ifmap_spad__v16) {
        vlSelfRef.__PVT__ifmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[3U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[4U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[5U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[6U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[7U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[8U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[9U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[0xaU] = 0U;
        vlSelfRef.__PVT__ifmap_spad[0xbU] = 0U;
    }
    vlSelfRef.__PVT__count_filt_col = __Vdly__count_filt_col;
    vlSelfRef.__PVT__count_input_ch = __Vdly__count_input_ch;
    vlSelfRef.__PVT__count_ofmap_ch = __Vdly__count_ofmap_ch;
    vlSelfRef.__PVT__ifmap_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                     << 2U) | (IData)(vlSelfRef.__PVT__count_input_ch));
    vlSelfRef.__PVT__filter_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                      << 4U) | (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                 << 2U) 
                                                | (IData)(vlSelfRef.__PVT__count_input_ch)));
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
    vlSelfRef.__PVT__index_0 = ((1U == (IData)(vlSelfRef.__PVT__cs))
                                 ? (IData)(vlSelfRef.__PVT__filter_index)
                                 : (IData)(vlSelfRef.__PVT__ifmap_index));
    vlSelfRef.ifmap_ready = ((2U == (IData)(vlSelfRef.__PVT__cs)) 
                             | (6U == (IData)(vlSelfRef.__PVT__cs)));
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1\n"); );
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
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[8U]));
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__2\n"); );
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
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__count_filt_col;
    __Vdly__count_filt_col = 0;
    CData/*1:0*/ __Vdly__count_ofmap_ch;
    __Vdly__count_ofmap_ch = 0;
    CData/*1:0*/ __Vdly__count_input_ch;
    __Vdly__count_input_ch = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v0;
    __VdlyVal__filter_spad__v0 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v0;
    __VdlyDim0__filter_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v0;
    __VdlySet__filter_spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v1;
    __VdlyVal__filter_spad__v1 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v1;
    __VdlyDim0__filter_spad__v1 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v1;
    __VdlySet__filter_spad__v1 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v2;
    __VdlyVal__filter_spad__v2 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v2;
    __VdlyDim0__filter_spad__v2 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v2;
    __VdlySet__filter_spad__v2 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v3;
    __VdlyVal__filter_spad__v3 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v3;
    __VdlyDim0__filter_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v3;
    __VdlySet__filter_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v4;
    __VdlySet__filter_spad__v4 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v0;
    __VdlyVal__ifmap_spad__v0 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v0;
    __VdlyDim0__ifmap_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v0;
    __VdlySet__ifmap_spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v1;
    __VdlyVal__ifmap_spad__v1 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v1;
    __VdlyDim0__ifmap_spad__v1 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v1;
    __VdlySet__ifmap_spad__v1 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v2;
    __VdlyVal__ifmap_spad__v2 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v2;
    __VdlyDim0__ifmap_spad__v2 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v2;
    __VdlySet__ifmap_spad__v2 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v3;
    __VdlyVal__ifmap_spad__v3 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v3;
    __VdlyDim0__ifmap_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v3;
    __VdlySet__ifmap_spad__v3 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v4;
    __VdlyVal__ifmap_spad__v4 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v4;
    __VdlySet__ifmap_spad__v4 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v5;
    __VdlyVal__ifmap_spad__v5 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v6;
    __VdlyVal__ifmap_spad__v6 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v7;
    __VdlyVal__ifmap_spad__v7 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v8;
    __VdlyVal__ifmap_spad__v8 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v9;
    __VdlyVal__ifmap_spad__v9 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v10;
    __VdlyVal__ifmap_spad__v10 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v11;
    __VdlyVal__ifmap_spad__v11 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v12;
    __VdlyVal__ifmap_spad__v12 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v13;
    __VdlyVal__ifmap_spad__v13 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v14;
    __VdlyVal__ifmap_spad__v14 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v15;
    __VdlyVal__ifmap_spad__v15 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v16;
    __VdlySet__ifmap_spad__v16 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v0;
    __VdlySet__ofmap_spad__v0 = 0;
    IData/*31:0*/ __VdlyVal__ofmap_spad__v4;
    __VdlyVal__ofmap_spad__v4 = 0;
    CData/*1:0*/ __VdlyDim0__ofmap_spad__v4;
    __VdlyDim0__ofmap_spad__v4 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v4;
    __VdlySet__ofmap_spad__v4 = 0;
    IData/*31:0*/ __VdlyVal__ofmap_spad__v5;
    __VdlyVal__ofmap_spad__v5 = 0;
    CData/*1:0*/ __VdlyDim0__ofmap_spad__v5;
    __VdlyDim0__ofmap_spad__v5 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v5;
    __VdlySet__ofmap_spad__v5 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v6;
    __VdlySet__ofmap_spad__v6 = 0;
    // Body
    __VdlySet__filter_spad__v0 = 0U;
    __VdlySet__filter_spad__v1 = 0U;
    __VdlySet__filter_spad__v2 = 0U;
    __VdlySet__filter_spad__v3 = 0U;
    __VdlySet__filter_spad__v4 = 0U;
    __VdlySet__ofmap_spad__v0 = 0U;
    __VdlySet__ofmap_spad__v4 = 0U;
    __VdlySet__ofmap_spad__v5 = 0U;
    __VdlySet__ofmap_spad__v6 = 0U;
    __Vdly__count_input_ch = vlSelfRef.__PVT__count_input_ch;
    __Vdly__count_filt_col = vlSelfRef.__PVT__count_filt_col;
    __VdlySet__ifmap_spad__v0 = 0U;
    __VdlySet__ifmap_spad__v1 = 0U;
    __VdlySet__ifmap_spad__v2 = 0U;
    __VdlySet__ifmap_spad__v3 = 0U;
    __VdlySet__ifmap_spad__v4 = 0U;
    __VdlySet__ifmap_spad__v16 = 0U;
    __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
    if ((1U & (~ (IData)(vlSymsp->TOP.ARESETn)))) {
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x18U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xcU;
    }
    if (vlSymsp->TOP.ARESETn) {
        if (((0U == (IData)(vlSelfRef.__PVT__cs)) | 
             (6U == (IData)(vlSelfRef.__PVT__cs)))) {
            vlSelfRef.__PVT__i = 4U;
            __VdlySet__ofmap_spad__v0 = 1U;
        } else if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            __VdlyVal__ofmap_spad__v4 = vlSelfRef.__PVT__add_res;
            __VdlyDim0__ofmap_spad__v4 = vlSelfRef.__PVT__count_ofmap_ch;
            __VdlySet__ofmap_spad__v4 = 1U;
        } else if (((4U == (IData)(vlSelfRef.__PVT__cs)) 
                    & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                               >> 9U)))) {
            __VdlyVal__ofmap_spad__v5 = vlSelfRef.__PVT__add_res;
            __VdlyDim0__ofmap_spad__v5 = vlSelfRef.__PVT__count_ofmap_ch;
            __VdlySet__ofmap_spad__v5 = 1U;
        }
        if (((1U == (IData)(vlSelfRef.__PVT__cs)) & 
             ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
              >> 1U))) {
            vlSelfRef.__Vlvbound_h652caa15__0 = (0xffU 
                                                 & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray);
            if ((0x2fU >= (IData)(vlSelfRef.__PVT__index_0))) {
                __VdlyVal__filter_spad__v0 = vlSelfRef.__Vlvbound_h652caa15__0;
                __VdlyDim0__filter_spad__v0 = vlSelfRef.__PVT__index_0;
                __VdlySet__filter_spad__v0 = 1U;
            }
            vlSelfRef.__Vlvbound_h94c06f97__0 = (0xffU 
                                                 & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                    >> 8U));
            if ((0x2fU >= (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v1 = vlSelfRef.__Vlvbound_h94c06f97__0;
                __VdlyDim0__filter_spad__v1 = (0x3fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v1 = 1U;
            }
            vlSelfRef.__Vlvbound_h3265d838__0 = (0xffU 
                                                 & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                    >> 0x10U));
            if ((0x2fU >= (0x3fU & ((IData)(2U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v2 = vlSelfRef.__Vlvbound_h3265d838__0;
                __VdlyDim0__filter_spad__v2 = (0x3fU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v2 = 1U;
            }
            vlSelfRef.__Vlvbound_h136a5f52__0 = (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                 >> 0x18U);
            if ((0x2fU >= (0x3fU & ((IData)(3U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v3 = vlSelfRef.__Vlvbound_h136a5f52__0;
                __VdlyDim0__filter_spad__v3 = (0x3fU 
                                               & ((IData)(3U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v3 = 1U;
            }
        }
        if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            __Vdly__count_input_ch = (((IData)(vlSelfRef.__PVT__count_input_ch) 
                                       == (IData)(vlSelfRef.__PVT__input_ch))
                                       ? 0U : (3U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__count_input_ch))));
        }
        if ((1U == (IData)(vlSelfRef.__PVT__cs))) {
            if ((2U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__cs))) {
            if ((2U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            if (((IData)(vlSelfRef.__PVT__count_input_ch) 
                 == (IData)(vlSelfRef.__PVT__input_ch))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else {
            __Vdly__count_filt_col = vlSelfRef.__PVT__count_filt_col;
        }
        if (((2U == (IData)(vlSelfRef.__PVT__cs)) & 
             ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
              >> 1U))) {
            vlSelfRef.__Vlvbound_h88de6bbc__0 = ((0x80U 
                                                  & ((~ 
                                                      (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                       >> 7U)) 
                                                     << 7U)) 
                                                 | (0x7fU 
                                                    & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray));
            if ((0xbU >= (0xfU & (IData)(vlSelfRef.__PVT__index_0)))) {
                __VdlyVal__ifmap_spad__v0 = vlSelfRef.__Vlvbound_h88de6bbc__0;
                __VdlyDim0__ifmap_spad__v0 = (0xfU 
                                              & (IData)(vlSelfRef.__PVT__index_0));
                __VdlySet__ifmap_spad__v0 = 1U;
            }
            vlSelfRef.__Vlvbound_h3953f0de__0 = ((1U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0xfU)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 8U))));
            if ((0xbU >= (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v1 = vlSelfRef.__Vlvbound_h3953f0de__0;
                __VdlyDim0__ifmap_spad__v1 = (0xfU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v1 = 1U;
            }
            vlSelfRef.__Vlvbound_h2357e037__0 = ((2U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x17U)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x10U))));
            if ((0xbU >= (0xfU & ((IData)(2U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v2 = vlSelfRef.__Vlvbound_h2357e037__0;
                __VdlyDim0__ifmap_spad__v2 = (0xfU 
                                              & ((IData)(2U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v2 = 1U;
            }
            vlSelfRef.__Vlvbound_hbb266322__0 = ((3U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x1fU)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x18U))));
            if ((0xbU >= (0xfU & ((IData)(3U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v3 = vlSelfRef.__Vlvbound_hbb266322__0;
                __VdlyDim0__ifmap_spad__v3 = (0xfU 
                                              & ((IData)(3U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v3 = 1U;
            }
        } else if (((6U == (IData)(vlSelfRef.__PVT__cs)) 
                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                       >> 1U))) {
            __VdlyVal__ifmap_spad__v4 = vlSelfRef.__PVT__ifmap_spad
                [4U];
            __VdlySet__ifmap_spad__v4 = 1U;
            __VdlyVal__ifmap_spad__v5 = vlSelfRef.__PVT__ifmap_spad
                [5U];
            __VdlyVal__ifmap_spad__v6 = vlSelfRef.__PVT__ifmap_spad
                [6U];
            __VdlyVal__ifmap_spad__v7 = vlSelfRef.__PVT__ifmap_spad
                [7U];
            __VdlyVal__ifmap_spad__v8 = vlSelfRef.__PVT__ifmap_spad
                [8U];
            __VdlyVal__ifmap_spad__v9 = vlSelfRef.__PVT__ifmap_spad
                [9U];
            __VdlyVal__ifmap_spad__v10 = vlSelfRef.__PVT__ifmap_spad
                [0xaU];
            __VdlyVal__ifmap_spad__v11 = vlSelfRef.__PVT__ifmap_spad
                [0xbU];
            __VdlyVal__ifmap_spad__v12 = ((0x80U & 
                                           ((~ (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                >> 7U)) 
                                            << 7U)) 
                                          | (0x7fU 
                                             & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray));
            __VdlyVal__ifmap_spad__v13 = ((1U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0xfU)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 8U))));
            __VdlyVal__ifmap_spad__v14 = ((2U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x17U)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x10U))));
            __VdlyVal__ifmap_spad__v15 = ((3U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x1fU)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x18U))));
        }
        if ((((5U == (IData)(vlSelfRef.__PVT__cs)) 
              & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                 == (IData)(vlSelfRef.__PVT__ofmap_ch))) 
             & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                        >> 9U)))) {
            vlSelfRef.__PVT__count_ofmap_col = (((IData)(vlSelfRef.__PVT__count_ofmap_col) 
                                                 == (IData)(vlSelfRef.__PVT__ofmap_col))
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__count_ofmap_col))));
        }
        if ((8U & (IData)(vlSelfRef.__PVT__cs))) {
            __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
        } else if ((4U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((2U & (IData)(vlSelfRef.__PVT__cs))) {
                __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
            } else if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
                if ((1U & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                   >> 9U)))) {
                    __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                               == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
                }
            } else if ((1U & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                      >> 9U)))) {
                __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                           == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
                if ((((IData)(vlSelfRef.__PVT__count_input_ch) 
                      == (IData)(vlSelfRef.__PVT__input_ch)) 
                     & (2U == (IData)(vlSelfRef.__PVT__count_filt_col)))) {
                    __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                               == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
                }
            } else {
                __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                  >> 1U) & (2U == (IData)(vlSelfRef.__PVT__count_filt_col)))) {
                __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                           == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
            }
        } else {
            __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
        }
        if (((0U == (IData)(vlSelfRef.__PVT__cs)) & (IData)(
                                                            (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                             >> 9U)))) {
            vlSelfRef.__PVT__operation_mode = (1U & 
                                               ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                                >> 9U));
            vlSelfRef.__PVT__ofmap_col = (0x1fU & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                                   >> 2U));
            vlSelfRef.__PVT__ofmap_ch = (3U & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                               >> 7U));
            vlSelfRef.__PVT__input_ch = (3U & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config));
        }
        vlSelfRef.__PVT__cs = vlSelfRef.__PVT__ns;
    } else {
        vlSelfRef.__PVT__i = 4U;
        __VdlySet__filter_spad__v4 = 1U;
        __VdlySet__ofmap_spad__v6 = 1U;
        __Vdly__count_input_ch = 0U;
        __Vdly__count_filt_col = 0U;
        __VdlySet__ifmap_spad__v16 = 1U;
        vlSelfRef.__PVT__count_ofmap_col = 0U;
        __Vdly__count_ofmap_ch = 0U;
        vlSelfRef.__PVT__operation_mode = 0U;
        vlSelfRef.__PVT__ofmap_col = 0U;
        vlSelfRef.__PVT__ofmap_ch = 0U;
        vlSelfRef.__PVT__input_ch = 0U;
        vlSelfRef.__PVT__cs = 0U;
    }
    if (__VdlySet__filter_spad__v0) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v0] 
            = __VdlyVal__filter_spad__v0;
    }
    if (__VdlySet__filter_spad__v1) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v1] 
            = __VdlyVal__filter_spad__v1;
    }
    if (__VdlySet__filter_spad__v2) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v2] 
            = __VdlyVal__filter_spad__v2;
    }
    if (__VdlySet__filter_spad__v3) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v3] 
            = __VdlyVal__filter_spad__v3;
    }
    if (__VdlySet__filter_spad__v4) {
        vlSelfRef.__PVT__filter_spad[0U] = 0U;
        vlSelfRef.__PVT__filter_spad[1U] = 0U;
        vlSelfRef.__PVT__filter_spad[2U] = 0U;
        vlSelfRef.__PVT__filter_spad[3U] = 0U;
        vlSelfRef.__PVT__filter_spad[4U] = 0U;
        vlSelfRef.__PVT__filter_spad[5U] = 0U;
        vlSelfRef.__PVT__filter_spad[6U] = 0U;
        vlSelfRef.__PVT__filter_spad[7U] = 0U;
        vlSelfRef.__PVT__filter_spad[8U] = 0U;
        vlSelfRef.__PVT__filter_spad[9U] = 0U;
        vlSelfRef.__PVT__filter_spad[0xaU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xbU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xcU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xdU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xeU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xfU] = 0U;
        vlSelfRef.__PVT__filter_spad[0x10U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x11U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x12U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x13U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x14U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x15U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x16U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x17U] = 0U;
    }
    if (__VdlySet__ofmap_spad__v0) {
        vlSelfRef.__PVT__ofmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[3U] = 0U;
    }
    if (__VdlySet__ofmap_spad__v4) {
        vlSelfRef.__PVT__ofmap_spad[__VdlyDim0__ofmap_spad__v4] 
            = __VdlyVal__ofmap_spad__v4;
    }
    if (__VdlySet__ofmap_spad__v5) {
        vlSelfRef.__PVT__ofmap_spad[__VdlyDim0__ofmap_spad__v5] 
            = __VdlyVal__ofmap_spad__v5;
    }
    if (__VdlySet__ofmap_spad__v6) {
        vlSelfRef.__PVT__ofmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[3U] = 0U;
    }
    if (__VdlySet__ifmap_spad__v0) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v0] 
            = __VdlyVal__ifmap_spad__v0;
    }
    if (__VdlySet__ifmap_spad__v1) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v1] 
            = __VdlyVal__ifmap_spad__v1;
    }
    if (__VdlySet__ifmap_spad__v2) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v2] 
            = __VdlyVal__ifmap_spad__v2;
    }
    if (__VdlySet__ifmap_spad__v3) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v3] 
            = __VdlyVal__ifmap_spad__v3;
    }
    if (__VdlySet__ifmap_spad__v4) {
        vlSelfRef.__PVT__ifmap_spad[0U] = __VdlyVal__ifmap_spad__v4;
        vlSelfRef.__PVT__ifmap_spad[1U] = __VdlyVal__ifmap_spad__v5;
        vlSelfRef.__PVT__ifmap_spad[2U] = __VdlyVal__ifmap_spad__v6;
        vlSelfRef.__PVT__ifmap_spad[3U] = __VdlyVal__ifmap_spad__v7;
        vlSelfRef.__PVT__ifmap_spad[4U] = __VdlyVal__ifmap_spad__v8;
        vlSelfRef.__PVT__ifmap_spad[5U] = __VdlyVal__ifmap_spad__v9;
        vlSelfRef.__PVT__ifmap_spad[6U] = __VdlyVal__ifmap_spad__v10;
        vlSelfRef.__PVT__ifmap_spad[7U] = __VdlyVal__ifmap_spad__v11;
        vlSelfRef.__PVT__ifmap_spad[8U] = __VdlyVal__ifmap_spad__v12;
        vlSelfRef.__PVT__ifmap_spad[9U] = __VdlyVal__ifmap_spad__v13;
        vlSelfRef.__PVT__ifmap_spad[0xaU] = __VdlyVal__ifmap_spad__v14;
        vlSelfRef.__PVT__ifmap_spad[0xbU] = __VdlyVal__ifmap_spad__v15;
    }
    if (__VdlySet__ifmap_spad__v16) {
        vlSelfRef.__PVT__ifmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[3U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[4U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[5U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[6U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[7U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[8U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[9U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[0xaU] = 0U;
        vlSelfRef.__PVT__ifmap_spad[0xbU] = 0U;
    }
    vlSelfRef.__PVT__count_filt_col = __Vdly__count_filt_col;
    vlSelfRef.__PVT__count_input_ch = __Vdly__count_input_ch;
    vlSelfRef.__PVT__count_ofmap_ch = __Vdly__count_ofmap_ch;
    vlSelfRef.__PVT__ifmap_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                     << 2U) | (IData)(vlSelfRef.__PVT__count_input_ch));
    vlSelfRef.__PVT__filter_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                      << 4U) | (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                 << 2U) 
                                                | (IData)(vlSelfRef.__PVT__count_input_ch)));
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
    vlSelfRef.__PVT__index_0 = ((1U == (IData)(vlSelfRef.__PVT__cs))
                                 ? (IData)(vlSelfRef.__PVT__filter_index)
                                 : (IData)(vlSelfRef.__PVT__ifmap_index));
    vlSelfRef.ifmap_ready = ((2U == (IData)(vlSelfRef.__PVT__cs)) 
                             | (6U == (IData)(vlSelfRef.__PVT__cs)));
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1\n"); );
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
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[9U]));
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__2\n"); );
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
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__count_filt_col;
    __Vdly__count_filt_col = 0;
    CData/*1:0*/ __Vdly__count_ofmap_ch;
    __Vdly__count_ofmap_ch = 0;
    CData/*1:0*/ __Vdly__count_input_ch;
    __Vdly__count_input_ch = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v0;
    __VdlyVal__filter_spad__v0 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v0;
    __VdlyDim0__filter_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v0;
    __VdlySet__filter_spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v1;
    __VdlyVal__filter_spad__v1 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v1;
    __VdlyDim0__filter_spad__v1 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v1;
    __VdlySet__filter_spad__v1 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v2;
    __VdlyVal__filter_spad__v2 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v2;
    __VdlyDim0__filter_spad__v2 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v2;
    __VdlySet__filter_spad__v2 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v3;
    __VdlyVal__filter_spad__v3 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v3;
    __VdlyDim0__filter_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v3;
    __VdlySet__filter_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v4;
    __VdlySet__filter_spad__v4 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v0;
    __VdlyVal__ifmap_spad__v0 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v0;
    __VdlyDim0__ifmap_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v0;
    __VdlySet__ifmap_spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v1;
    __VdlyVal__ifmap_spad__v1 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v1;
    __VdlyDim0__ifmap_spad__v1 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v1;
    __VdlySet__ifmap_spad__v1 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v2;
    __VdlyVal__ifmap_spad__v2 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v2;
    __VdlyDim0__ifmap_spad__v2 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v2;
    __VdlySet__ifmap_spad__v2 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v3;
    __VdlyVal__ifmap_spad__v3 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v3;
    __VdlyDim0__ifmap_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v3;
    __VdlySet__ifmap_spad__v3 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v4;
    __VdlyVal__ifmap_spad__v4 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v4;
    __VdlySet__ifmap_spad__v4 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v5;
    __VdlyVal__ifmap_spad__v5 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v6;
    __VdlyVal__ifmap_spad__v6 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v7;
    __VdlyVal__ifmap_spad__v7 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v8;
    __VdlyVal__ifmap_spad__v8 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v9;
    __VdlyVal__ifmap_spad__v9 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v10;
    __VdlyVal__ifmap_spad__v10 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v11;
    __VdlyVal__ifmap_spad__v11 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v12;
    __VdlyVal__ifmap_spad__v12 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v13;
    __VdlyVal__ifmap_spad__v13 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v14;
    __VdlyVal__ifmap_spad__v14 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v15;
    __VdlyVal__ifmap_spad__v15 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v16;
    __VdlySet__ifmap_spad__v16 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v0;
    __VdlySet__ofmap_spad__v0 = 0;
    IData/*31:0*/ __VdlyVal__ofmap_spad__v4;
    __VdlyVal__ofmap_spad__v4 = 0;
    CData/*1:0*/ __VdlyDim0__ofmap_spad__v4;
    __VdlyDim0__ofmap_spad__v4 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v4;
    __VdlySet__ofmap_spad__v4 = 0;
    IData/*31:0*/ __VdlyVal__ofmap_spad__v5;
    __VdlyVal__ofmap_spad__v5 = 0;
    CData/*1:0*/ __VdlyDim0__ofmap_spad__v5;
    __VdlyDim0__ofmap_spad__v5 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v5;
    __VdlySet__ofmap_spad__v5 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v6;
    __VdlySet__ofmap_spad__v6 = 0;
    // Body
    __VdlySet__filter_spad__v0 = 0U;
    __VdlySet__filter_spad__v1 = 0U;
    __VdlySet__filter_spad__v2 = 0U;
    __VdlySet__filter_spad__v3 = 0U;
    __VdlySet__filter_spad__v4 = 0U;
    __VdlySet__ofmap_spad__v0 = 0U;
    __VdlySet__ofmap_spad__v4 = 0U;
    __VdlySet__ofmap_spad__v5 = 0U;
    __VdlySet__ofmap_spad__v6 = 0U;
    __Vdly__count_input_ch = vlSelfRef.__PVT__count_input_ch;
    __Vdly__count_filt_col = vlSelfRef.__PVT__count_filt_col;
    __VdlySet__ifmap_spad__v0 = 0U;
    __VdlySet__ifmap_spad__v1 = 0U;
    __VdlySet__ifmap_spad__v2 = 0U;
    __VdlySet__ifmap_spad__v3 = 0U;
    __VdlySet__ifmap_spad__v4 = 0U;
    __VdlySet__ifmap_spad__v16 = 0U;
    __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
    if ((1U & (~ (IData)(vlSymsp->TOP.ARESETn)))) {
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x18U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xcU;
    }
    if (vlSymsp->TOP.ARESETn) {
        if (((0U == (IData)(vlSelfRef.__PVT__cs)) | 
             (6U == (IData)(vlSelfRef.__PVT__cs)))) {
            vlSelfRef.__PVT__i = 4U;
            __VdlySet__ofmap_spad__v0 = 1U;
        } else if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            __VdlyVal__ofmap_spad__v4 = vlSelfRef.__PVT__add_res;
            __VdlyDim0__ofmap_spad__v4 = vlSelfRef.__PVT__count_ofmap_ch;
            __VdlySet__ofmap_spad__v4 = 1U;
        } else if (((4U == (IData)(vlSelfRef.__PVT__cs)) 
                    & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                               >> 0xaU)))) {
            __VdlyVal__ofmap_spad__v5 = vlSelfRef.__PVT__add_res;
            __VdlyDim0__ofmap_spad__v5 = vlSelfRef.__PVT__count_ofmap_ch;
            __VdlySet__ofmap_spad__v5 = 1U;
        }
        if (((1U == (IData)(vlSelfRef.__PVT__cs)) & 
             ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
              >> 2U))) {
            vlSelfRef.__Vlvbound_h652caa15__0 = (0xffU 
                                                 & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray);
            if ((0x2fU >= (IData)(vlSelfRef.__PVT__index_0))) {
                __VdlyVal__filter_spad__v0 = vlSelfRef.__Vlvbound_h652caa15__0;
                __VdlyDim0__filter_spad__v0 = vlSelfRef.__PVT__index_0;
                __VdlySet__filter_spad__v0 = 1U;
            }
            vlSelfRef.__Vlvbound_h94c06f97__0 = (0xffU 
                                                 & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                    >> 8U));
            if ((0x2fU >= (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v1 = vlSelfRef.__Vlvbound_h94c06f97__0;
                __VdlyDim0__filter_spad__v1 = (0x3fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v1 = 1U;
            }
            vlSelfRef.__Vlvbound_h3265d838__0 = (0xffU 
                                                 & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                    >> 0x10U));
            if ((0x2fU >= (0x3fU & ((IData)(2U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v2 = vlSelfRef.__Vlvbound_h3265d838__0;
                __VdlyDim0__filter_spad__v2 = (0x3fU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v2 = 1U;
            }
            vlSelfRef.__Vlvbound_h136a5f52__0 = (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                 >> 0x18U);
            if ((0x2fU >= (0x3fU & ((IData)(3U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v3 = vlSelfRef.__Vlvbound_h136a5f52__0;
                __VdlyDim0__filter_spad__v3 = (0x3fU 
                                               & ((IData)(3U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v3 = 1U;
            }
        }
        if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            __Vdly__count_input_ch = (((IData)(vlSelfRef.__PVT__count_input_ch) 
                                       == (IData)(vlSelfRef.__PVT__input_ch))
                                       ? 0U : (3U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__count_input_ch))));
        }
        if ((1U == (IData)(vlSelfRef.__PVT__cs))) {
            if ((4U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__cs))) {
            if ((4U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            if (((IData)(vlSelfRef.__PVT__count_input_ch) 
                 == (IData)(vlSelfRef.__PVT__input_ch))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else {
            __Vdly__count_filt_col = vlSelfRef.__PVT__count_filt_col;
        }
        if (((2U == (IData)(vlSelfRef.__PVT__cs)) & 
             ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
              >> 2U))) {
            vlSelfRef.__Vlvbound_h88de6bbc__0 = ((0x80U 
                                                  & ((~ 
                                                      (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                       >> 7U)) 
                                                     << 7U)) 
                                                 | (0x7fU 
                                                    & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray));
            if ((0xbU >= (0xfU & (IData)(vlSelfRef.__PVT__index_0)))) {
                __VdlyVal__ifmap_spad__v0 = vlSelfRef.__Vlvbound_h88de6bbc__0;
                __VdlyDim0__ifmap_spad__v0 = (0xfU 
                                              & (IData)(vlSelfRef.__PVT__index_0));
                __VdlySet__ifmap_spad__v0 = 1U;
            }
            vlSelfRef.__Vlvbound_h3953f0de__0 = ((1U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0xfU)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 8U))));
            if ((0xbU >= (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v1 = vlSelfRef.__Vlvbound_h3953f0de__0;
                __VdlyDim0__ifmap_spad__v1 = (0xfU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v1 = 1U;
            }
            vlSelfRef.__Vlvbound_h2357e037__0 = ((2U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x17U)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x10U))));
            if ((0xbU >= (0xfU & ((IData)(2U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v2 = vlSelfRef.__Vlvbound_h2357e037__0;
                __VdlyDim0__ifmap_spad__v2 = (0xfU 
                                              & ((IData)(2U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v2 = 1U;
            }
            vlSelfRef.__Vlvbound_hbb266322__0 = ((3U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x1fU)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x18U))));
            if ((0xbU >= (0xfU & ((IData)(3U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v3 = vlSelfRef.__Vlvbound_hbb266322__0;
                __VdlyDim0__ifmap_spad__v3 = (0xfU 
                                              & ((IData)(3U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v3 = 1U;
            }
        } else if (((6U == (IData)(vlSelfRef.__PVT__cs)) 
                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                       >> 2U))) {
            __VdlyVal__ifmap_spad__v4 = vlSelfRef.__PVT__ifmap_spad
                [4U];
            __VdlySet__ifmap_spad__v4 = 1U;
            __VdlyVal__ifmap_spad__v5 = vlSelfRef.__PVT__ifmap_spad
                [5U];
            __VdlyVal__ifmap_spad__v6 = vlSelfRef.__PVT__ifmap_spad
                [6U];
            __VdlyVal__ifmap_spad__v7 = vlSelfRef.__PVT__ifmap_spad
                [7U];
            __VdlyVal__ifmap_spad__v8 = vlSelfRef.__PVT__ifmap_spad
                [8U];
            __VdlyVal__ifmap_spad__v9 = vlSelfRef.__PVT__ifmap_spad
                [9U];
            __VdlyVal__ifmap_spad__v10 = vlSelfRef.__PVT__ifmap_spad
                [0xaU];
            __VdlyVal__ifmap_spad__v11 = vlSelfRef.__PVT__ifmap_spad
                [0xbU];
            __VdlyVal__ifmap_spad__v12 = ((0x80U & 
                                           ((~ (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                >> 7U)) 
                                            << 7U)) 
                                          | (0x7fU 
                                             & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray));
            __VdlyVal__ifmap_spad__v13 = ((1U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0xfU)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 8U))));
            __VdlyVal__ifmap_spad__v14 = ((2U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x17U)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x10U))));
            __VdlyVal__ifmap_spad__v15 = ((3U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x1fU)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x18U))));
        }
        if ((((5U == (IData)(vlSelfRef.__PVT__cs)) 
              & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                 == (IData)(vlSelfRef.__PVT__ofmap_ch))) 
             & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                        >> 0xaU)))) {
            vlSelfRef.__PVT__count_ofmap_col = (((IData)(vlSelfRef.__PVT__count_ofmap_col) 
                                                 == (IData)(vlSelfRef.__PVT__ofmap_col))
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__count_ofmap_col))));
        }
        if ((8U & (IData)(vlSelfRef.__PVT__cs))) {
            __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
        } else if ((4U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((2U & (IData)(vlSelfRef.__PVT__cs))) {
                __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
            } else if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
                if ((1U & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                   >> 0xaU)))) {
                    __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                               == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
                }
            } else if ((1U & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                      >> 0xaU)))) {
                __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                           == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
                if ((((IData)(vlSelfRef.__PVT__count_input_ch) 
                      == (IData)(vlSelfRef.__PVT__input_ch)) 
                     & (2U == (IData)(vlSelfRef.__PVT__count_filt_col)))) {
                    __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                               == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
                }
            } else {
                __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                  >> 2U) & (2U == (IData)(vlSelfRef.__PVT__count_filt_col)))) {
                __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                           == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
            }
        } else {
            __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
        }
        if (((0U == (IData)(vlSelfRef.__PVT__cs)) & (IData)(
                                                            (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                             >> 0xaU)))) {
            vlSelfRef.__PVT__operation_mode = (1U & 
                                               ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                                >> 9U));
            vlSelfRef.__PVT__ofmap_col = (0x1fU & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                                   >> 2U));
            vlSelfRef.__PVT__ofmap_ch = (3U & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                               >> 7U));
            vlSelfRef.__PVT__input_ch = (3U & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config));
        }
        vlSelfRef.__PVT__cs = vlSelfRef.__PVT__ns;
    } else {
        vlSelfRef.__PVT__i = 4U;
        __VdlySet__filter_spad__v4 = 1U;
        __VdlySet__ofmap_spad__v6 = 1U;
        __Vdly__count_input_ch = 0U;
        __Vdly__count_filt_col = 0U;
        __VdlySet__ifmap_spad__v16 = 1U;
        vlSelfRef.__PVT__count_ofmap_col = 0U;
        __Vdly__count_ofmap_ch = 0U;
        vlSelfRef.__PVT__operation_mode = 0U;
        vlSelfRef.__PVT__ofmap_col = 0U;
        vlSelfRef.__PVT__ofmap_ch = 0U;
        vlSelfRef.__PVT__input_ch = 0U;
        vlSelfRef.__PVT__cs = 0U;
    }
    if (__VdlySet__filter_spad__v0) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v0] 
            = __VdlyVal__filter_spad__v0;
    }
    if (__VdlySet__filter_spad__v1) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v1] 
            = __VdlyVal__filter_spad__v1;
    }
    if (__VdlySet__filter_spad__v2) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v2] 
            = __VdlyVal__filter_spad__v2;
    }
    if (__VdlySet__filter_spad__v3) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v3] 
            = __VdlyVal__filter_spad__v3;
    }
    if (__VdlySet__filter_spad__v4) {
        vlSelfRef.__PVT__filter_spad[0U] = 0U;
        vlSelfRef.__PVT__filter_spad[1U] = 0U;
        vlSelfRef.__PVT__filter_spad[2U] = 0U;
        vlSelfRef.__PVT__filter_spad[3U] = 0U;
        vlSelfRef.__PVT__filter_spad[4U] = 0U;
        vlSelfRef.__PVT__filter_spad[5U] = 0U;
        vlSelfRef.__PVT__filter_spad[6U] = 0U;
        vlSelfRef.__PVT__filter_spad[7U] = 0U;
        vlSelfRef.__PVT__filter_spad[8U] = 0U;
        vlSelfRef.__PVT__filter_spad[9U] = 0U;
        vlSelfRef.__PVT__filter_spad[0xaU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xbU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xcU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xdU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xeU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xfU] = 0U;
        vlSelfRef.__PVT__filter_spad[0x10U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x11U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x12U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x13U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x14U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x15U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x16U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x17U] = 0U;
    }
    if (__VdlySet__ofmap_spad__v0) {
        vlSelfRef.__PVT__ofmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[3U] = 0U;
    }
    if (__VdlySet__ofmap_spad__v4) {
        vlSelfRef.__PVT__ofmap_spad[__VdlyDim0__ofmap_spad__v4] 
            = __VdlyVal__ofmap_spad__v4;
    }
    if (__VdlySet__ofmap_spad__v5) {
        vlSelfRef.__PVT__ofmap_spad[__VdlyDim0__ofmap_spad__v5] 
            = __VdlyVal__ofmap_spad__v5;
    }
    if (__VdlySet__ofmap_spad__v6) {
        vlSelfRef.__PVT__ofmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[3U] = 0U;
    }
    if (__VdlySet__ifmap_spad__v0) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v0] 
            = __VdlyVal__ifmap_spad__v0;
    }
    if (__VdlySet__ifmap_spad__v1) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v1] 
            = __VdlyVal__ifmap_spad__v1;
    }
    if (__VdlySet__ifmap_spad__v2) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v2] 
            = __VdlyVal__ifmap_spad__v2;
    }
    if (__VdlySet__ifmap_spad__v3) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v3] 
            = __VdlyVal__ifmap_spad__v3;
    }
    if (__VdlySet__ifmap_spad__v4) {
        vlSelfRef.__PVT__ifmap_spad[0U] = __VdlyVal__ifmap_spad__v4;
        vlSelfRef.__PVT__ifmap_spad[1U] = __VdlyVal__ifmap_spad__v5;
        vlSelfRef.__PVT__ifmap_spad[2U] = __VdlyVal__ifmap_spad__v6;
        vlSelfRef.__PVT__ifmap_spad[3U] = __VdlyVal__ifmap_spad__v7;
        vlSelfRef.__PVT__ifmap_spad[4U] = __VdlyVal__ifmap_spad__v8;
        vlSelfRef.__PVT__ifmap_spad[5U] = __VdlyVal__ifmap_spad__v9;
        vlSelfRef.__PVT__ifmap_spad[6U] = __VdlyVal__ifmap_spad__v10;
        vlSelfRef.__PVT__ifmap_spad[7U] = __VdlyVal__ifmap_spad__v11;
        vlSelfRef.__PVT__ifmap_spad[8U] = __VdlyVal__ifmap_spad__v12;
        vlSelfRef.__PVT__ifmap_spad[9U] = __VdlyVal__ifmap_spad__v13;
        vlSelfRef.__PVT__ifmap_spad[0xaU] = __VdlyVal__ifmap_spad__v14;
        vlSelfRef.__PVT__ifmap_spad[0xbU] = __VdlyVal__ifmap_spad__v15;
    }
    if (__VdlySet__ifmap_spad__v16) {
        vlSelfRef.__PVT__ifmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[3U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[4U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[5U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[6U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[7U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[8U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[9U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[0xaU] = 0U;
        vlSelfRef.__PVT__ifmap_spad[0xbU] = 0U;
    }
    vlSelfRef.__PVT__count_filt_col = __Vdly__count_filt_col;
    vlSelfRef.__PVT__count_input_ch = __Vdly__count_input_ch;
    vlSelfRef.__PVT__count_ofmap_ch = __Vdly__count_ofmap_ch;
    vlSelfRef.__PVT__ifmap_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                     << 2U) | (IData)(vlSelfRef.__PVT__count_input_ch));
    vlSelfRef.__PVT__filter_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                      << 4U) | (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                 << 2U) 
                                                | (IData)(vlSelfRef.__PVT__count_input_ch)));
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
    vlSelfRef.__PVT__index_0 = ((1U == (IData)(vlSelfRef.__PVT__cs))
                                 ? (IData)(vlSelfRef.__PVT__filter_index)
                                 : (IData)(vlSelfRef.__PVT__ifmap_index));
    vlSelfRef.ifmap_ready = ((2U == (IData)(vlSelfRef.__PVT__cs)) 
                             | (6U == (IData)(vlSelfRef.__PVT__cs)));
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1\n"); );
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
                                    : vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xaU]));
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__2\n"); );
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
}

VL_INLINE_OPT void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__count_filt_col;
    __Vdly__count_filt_col = 0;
    CData/*1:0*/ __Vdly__count_ofmap_ch;
    __Vdly__count_ofmap_ch = 0;
    CData/*1:0*/ __Vdly__count_input_ch;
    __Vdly__count_input_ch = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v0;
    __VdlyVal__filter_spad__v0 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v0;
    __VdlyDim0__filter_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v0;
    __VdlySet__filter_spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v1;
    __VdlyVal__filter_spad__v1 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v1;
    __VdlyDim0__filter_spad__v1 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v1;
    __VdlySet__filter_spad__v1 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v2;
    __VdlyVal__filter_spad__v2 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v2;
    __VdlyDim0__filter_spad__v2 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v2;
    __VdlySet__filter_spad__v2 = 0;
    CData/*7:0*/ __VdlyVal__filter_spad__v3;
    __VdlyVal__filter_spad__v3 = 0;
    CData/*5:0*/ __VdlyDim0__filter_spad__v3;
    __VdlyDim0__filter_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v3;
    __VdlySet__filter_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__filter_spad__v4;
    __VdlySet__filter_spad__v4 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v0;
    __VdlyVal__ifmap_spad__v0 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v0;
    __VdlyDim0__ifmap_spad__v0 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v0;
    __VdlySet__ifmap_spad__v0 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v1;
    __VdlyVal__ifmap_spad__v1 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v1;
    __VdlyDim0__ifmap_spad__v1 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v1;
    __VdlySet__ifmap_spad__v1 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v2;
    __VdlyVal__ifmap_spad__v2 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v2;
    __VdlyDim0__ifmap_spad__v2 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v2;
    __VdlySet__ifmap_spad__v2 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v3;
    __VdlyVal__ifmap_spad__v3 = 0;
    CData/*3:0*/ __VdlyDim0__ifmap_spad__v3;
    __VdlyDim0__ifmap_spad__v3 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v3;
    __VdlySet__ifmap_spad__v3 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v4;
    __VdlyVal__ifmap_spad__v4 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v4;
    __VdlySet__ifmap_spad__v4 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v5;
    __VdlyVal__ifmap_spad__v5 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v6;
    __VdlyVal__ifmap_spad__v6 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v7;
    __VdlyVal__ifmap_spad__v7 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v8;
    __VdlyVal__ifmap_spad__v8 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v9;
    __VdlyVal__ifmap_spad__v9 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v10;
    __VdlyVal__ifmap_spad__v10 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v11;
    __VdlyVal__ifmap_spad__v11 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v12;
    __VdlyVal__ifmap_spad__v12 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v13;
    __VdlyVal__ifmap_spad__v13 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v14;
    __VdlyVal__ifmap_spad__v14 = 0;
    CData/*7:0*/ __VdlyVal__ifmap_spad__v15;
    __VdlyVal__ifmap_spad__v15 = 0;
    CData/*0:0*/ __VdlySet__ifmap_spad__v16;
    __VdlySet__ifmap_spad__v16 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v0;
    __VdlySet__ofmap_spad__v0 = 0;
    IData/*31:0*/ __VdlyVal__ofmap_spad__v4;
    __VdlyVal__ofmap_spad__v4 = 0;
    CData/*1:0*/ __VdlyDim0__ofmap_spad__v4;
    __VdlyDim0__ofmap_spad__v4 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v4;
    __VdlySet__ofmap_spad__v4 = 0;
    IData/*31:0*/ __VdlyVal__ofmap_spad__v5;
    __VdlyVal__ofmap_spad__v5 = 0;
    CData/*1:0*/ __VdlyDim0__ofmap_spad__v5;
    __VdlyDim0__ofmap_spad__v5 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v5;
    __VdlySet__ofmap_spad__v5 = 0;
    CData/*0:0*/ __VdlySet__ofmap_spad__v6;
    __VdlySet__ofmap_spad__v6 = 0;
    // Body
    __VdlySet__filter_spad__v0 = 0U;
    __VdlySet__filter_spad__v1 = 0U;
    __VdlySet__filter_spad__v2 = 0U;
    __VdlySet__filter_spad__v3 = 0U;
    __VdlySet__filter_spad__v4 = 0U;
    __VdlySet__ofmap_spad__v0 = 0U;
    __VdlySet__ofmap_spad__v4 = 0U;
    __VdlySet__ofmap_spad__v5 = 0U;
    __VdlySet__ofmap_spad__v6 = 0U;
    __Vdly__count_input_ch = vlSelfRef.__PVT__count_input_ch;
    __Vdly__count_filt_col = vlSelfRef.__PVT__count_filt_col;
    __VdlySet__ifmap_spad__v0 = 0U;
    __VdlySet__ifmap_spad__v1 = 0U;
    __VdlySet__ifmap_spad__v2 = 0U;
    __VdlySet__ifmap_spad__v3 = 0U;
    __VdlySet__ifmap_spad__v4 = 0U;
    __VdlySet__ifmap_spad__v16 = 0U;
    __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
    if ((1U & (~ (IData)(vlSymsp->TOP.ARESETn)))) {
        vlSelfRef.__PVT__unnamedblk1__DOT__i = 0x18U;
        vlSelfRef.__PVT__unnamedblk2__DOT__i = 0xcU;
    }
    if (vlSymsp->TOP.ARESETn) {
        if (((0U == (IData)(vlSelfRef.__PVT__cs)) | 
             (6U == (IData)(vlSelfRef.__PVT__cs)))) {
            vlSelfRef.__PVT__i = 4U;
            __VdlySet__ofmap_spad__v0 = 1U;
        } else if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            __VdlyVal__ofmap_spad__v4 = vlSelfRef.__PVT__add_res;
            __VdlyDim0__ofmap_spad__v4 = vlSelfRef.__PVT__count_ofmap_ch;
            __VdlySet__ofmap_spad__v4 = 1U;
        } else if (((4U == (IData)(vlSelfRef.__PVT__cs)) 
                    & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                               >> 0xbU)))) {
            __VdlyVal__ofmap_spad__v5 = vlSelfRef.__PVT__add_res;
            __VdlyDim0__ofmap_spad__v5 = vlSelfRef.__PVT__count_ofmap_ch;
            __VdlySet__ofmap_spad__v5 = 1U;
        }
        if (((1U == (IData)(vlSelfRef.__PVT__cs)) & 
             ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
              >> 3U))) {
            vlSelfRef.__Vlvbound_h652caa15__0 = (0xffU 
                                                 & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray);
            if ((0x2fU >= (IData)(vlSelfRef.__PVT__index_0))) {
                __VdlyVal__filter_spad__v0 = vlSelfRef.__Vlvbound_h652caa15__0;
                __VdlyDim0__filter_spad__v0 = vlSelfRef.__PVT__index_0;
                __VdlySet__filter_spad__v0 = 1U;
            }
            vlSelfRef.__Vlvbound_h94c06f97__0 = (0xffU 
                                                 & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                    >> 8U));
            if ((0x2fU >= (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v1 = vlSelfRef.__Vlvbound_h94c06f97__0;
                __VdlyDim0__filter_spad__v1 = (0x3fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v1 = 1U;
            }
            vlSelfRef.__Vlvbound_h3265d838__0 = (0xffU 
                                                 & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                    >> 0x10U));
            if ((0x2fU >= (0x3fU & ((IData)(2U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v2 = vlSelfRef.__Vlvbound_h3265d838__0;
                __VdlyDim0__filter_spad__v2 = (0x3fU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v2 = 1U;
            }
            vlSelfRef.__Vlvbound_h136a5f52__0 = (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                 >> 0x18U);
            if ((0x2fU >= (0x3fU & ((IData)(3U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__filter_spad__v3 = vlSelfRef.__Vlvbound_h136a5f52__0;
                __VdlyDim0__filter_spad__v3 = (0x3fU 
                                               & ((IData)(3U) 
                                                  + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__filter_spad__v3 = 1U;
            }
        }
        if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            __Vdly__count_input_ch = (((IData)(vlSelfRef.__PVT__count_input_ch) 
                                       == (IData)(vlSelfRef.__PVT__input_ch))
                                       ? 0U : (3U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__count_input_ch))));
        }
        if ((1U == (IData)(vlSelfRef.__PVT__cs))) {
            if ((8U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__cs))) {
            if ((8U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else if ((3U == (IData)(vlSelfRef.__PVT__cs))) {
            if (((IData)(vlSelfRef.__PVT__count_input_ch) 
                 == (IData)(vlSelfRef.__PVT__input_ch))) {
                __Vdly__count_filt_col = ((2U == (IData)(vlSelfRef.__PVT__count_filt_col))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_filt_col))));
            }
        } else {
            __Vdly__count_filt_col = vlSelfRef.__PVT__count_filt_col;
        }
        if (((2U == (IData)(vlSelfRef.__PVT__cs)) & 
             ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
              >> 3U))) {
            vlSelfRef.__Vlvbound_h88de6bbc__0 = ((0x80U 
                                                  & ((~ 
                                                      (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                       >> 7U)) 
                                                     << 7U)) 
                                                 | (0x7fU 
                                                    & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray));
            if ((0xbU >= (0xfU & (IData)(vlSelfRef.__PVT__index_0)))) {
                __VdlyVal__ifmap_spad__v0 = vlSelfRef.__Vlvbound_h88de6bbc__0;
                __VdlyDim0__ifmap_spad__v0 = (0xfU 
                                              & (IData)(vlSelfRef.__PVT__index_0));
                __VdlySet__ifmap_spad__v0 = 1U;
            }
            vlSelfRef.__Vlvbound_h3953f0de__0 = ((1U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0xfU)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 8U))));
            if ((0xbU >= (0xfU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v1 = vlSelfRef.__Vlvbound_h3953f0de__0;
                __VdlyDim0__ifmap_spad__v1 = (0xfU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v1 = 1U;
            }
            vlSelfRef.__Vlvbound_h2357e037__0 = ((2U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x17U)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x10U))));
            if ((0xbU >= (0xfU & ((IData)(2U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v2 = vlSelfRef.__Vlvbound_h2357e037__0;
                __VdlyDim0__ifmap_spad__v2 = (0xfU 
                                              & ((IData)(2U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v2 = 1U;
            }
            vlSelfRef.__Vlvbound_hbb266322__0 = ((3U 
                                                  > (IData)(vlSelfRef.__PVT__input_ch))
                                                  ? 0U
                                                  : 
                                                 ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x1fU)) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                        >> 0x18U))));
            if ((0xbU >= (0xfU & ((IData)(3U) + (IData)(vlSelfRef.__PVT__index_0))))) {
                __VdlyVal__ifmap_spad__v3 = vlSelfRef.__Vlvbound_hbb266322__0;
                __VdlyDim0__ifmap_spad__v3 = (0xfU 
                                              & ((IData)(3U) 
                                                 + (IData)(vlSelfRef.__PVT__index_0)));
                __VdlySet__ifmap_spad__v3 = 1U;
            }
        } else if (((6U == (IData)(vlSelfRef.__PVT__cs)) 
                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                       >> 3U))) {
            __VdlyVal__ifmap_spad__v4 = vlSelfRef.__PVT__ifmap_spad
                [4U];
            __VdlySet__ifmap_spad__v4 = 1U;
            __VdlyVal__ifmap_spad__v5 = vlSelfRef.__PVT__ifmap_spad
                [5U];
            __VdlyVal__ifmap_spad__v6 = vlSelfRef.__PVT__ifmap_spad
                [6U];
            __VdlyVal__ifmap_spad__v7 = vlSelfRef.__PVT__ifmap_spad
                [7U];
            __VdlyVal__ifmap_spad__v8 = vlSelfRef.__PVT__ifmap_spad
                [8U];
            __VdlyVal__ifmap_spad__v9 = vlSelfRef.__PVT__ifmap_spad
                [9U];
            __VdlyVal__ifmap_spad__v10 = vlSelfRef.__PVT__ifmap_spad
                [0xaU];
            __VdlyVal__ifmap_spad__v11 = vlSelfRef.__PVT__ifmap_spad
                [0xbU];
            __VdlyVal__ifmap_spad__v12 = ((0x80U & 
                                           ((~ (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                >> 7U)) 
                                            << 7U)) 
                                          | (0x7fU 
                                             & vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray));
            __VdlyVal__ifmap_spad__v13 = ((1U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0xfU)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 8U))));
            __VdlyVal__ifmap_spad__v14 = ((2U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x17U)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x10U))));
            __VdlyVal__ifmap_spad__v15 = ((3U > (IData)(vlSelfRef.__PVT__input_ch))
                                           ? 0U : (
                                                   (0x80U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x1fU)) 
                                                       << 7U)) 
                                                   | (0x7fU 
                                                      & (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
                                                         >> 0x18U))));
        }
        if ((((5U == (IData)(vlSelfRef.__PVT__cs)) 
              & ((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                 == (IData)(vlSelfRef.__PVT__ofmap_ch))) 
             & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                        >> 0xbU)))) {
            vlSelfRef.__PVT__count_ofmap_col = (((IData)(vlSelfRef.__PVT__count_ofmap_col) 
                                                 == (IData)(vlSelfRef.__PVT__ofmap_col))
                                                 ? 0U
                                                 : 
                                                (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.__PVT__count_ofmap_col))));
        }
        if ((8U & (IData)(vlSelfRef.__PVT__cs))) {
            __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
        } else if ((4U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((2U & (IData)(vlSelfRef.__PVT__cs))) {
                __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
            } else if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
                if ((1U & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                   >> 0xbU)))) {
                    __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                               == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
                }
            } else if ((1U & (IData)((vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                      >> 0xbU)))) {
                __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                           == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
                if ((((IData)(vlSelfRef.__PVT__count_input_ch) 
                      == (IData)(vlSelfRef.__PVT__input_ch)) 
                     & (2U == (IData)(vlSelfRef.__PVT__count_filt_col)))) {
                    __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                               == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                               ? 0U
                                               : (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
                }
            } else {
                __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__cs))) {
            if ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                  >> 3U) & (2U == (IData)(vlSelfRef.__PVT__count_filt_col)))) {
                __Vdly__count_ofmap_ch = (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                           == (IData)(vlSelfRef.__PVT__ofmap_ch))
                                           ? 0U : (3U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__count_ofmap_ch))));
            }
        } else {
            __Vdly__count_ofmap_ch = vlSelfRef.__PVT__count_ofmap_ch;
        }
        if (((0U == (IData)(vlSelfRef.__PVT__cs)) & (IData)(
                                                            (vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                                             >> 0xbU)))) {
            vlSelfRef.__PVT__operation_mode = (1U & 
                                               ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                                >> 9U));
            vlSelfRef.__PVT__ofmap_col = (0x1fU & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                                   >> 2U));
            vlSelfRef.__PVT__ofmap_ch = (3U & ((IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config) 
                                               >> 7U));
            vlSelfRef.__PVT__input_ch = (3U & (IData)(vlSymsp->TOP.asic_wrapper__DOT__asic_0__DOT__PE_config));
        }
        vlSelfRef.__PVT__cs = vlSelfRef.__PVT__ns;
    } else {
        vlSelfRef.__PVT__i = 4U;
        __VdlySet__filter_spad__v4 = 1U;
        __VdlySet__ofmap_spad__v6 = 1U;
        __Vdly__count_input_ch = 0U;
        __Vdly__count_filt_col = 0U;
        __VdlySet__ifmap_spad__v16 = 1U;
        vlSelfRef.__PVT__count_ofmap_col = 0U;
        __Vdly__count_ofmap_ch = 0U;
        vlSelfRef.__PVT__operation_mode = 0U;
        vlSelfRef.__PVT__ofmap_col = 0U;
        vlSelfRef.__PVT__ofmap_ch = 0U;
        vlSelfRef.__PVT__input_ch = 0U;
        vlSelfRef.__PVT__cs = 0U;
    }
    if (__VdlySet__filter_spad__v0) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v0] 
            = __VdlyVal__filter_spad__v0;
    }
    if (__VdlySet__filter_spad__v1) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v1] 
            = __VdlyVal__filter_spad__v1;
    }
    if (__VdlySet__filter_spad__v2) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v2] 
            = __VdlyVal__filter_spad__v2;
    }
    if (__VdlySet__filter_spad__v3) {
        vlSelfRef.__PVT__filter_spad[__VdlyDim0__filter_spad__v3] 
            = __VdlyVal__filter_spad__v3;
    }
    if (__VdlySet__filter_spad__v4) {
        vlSelfRef.__PVT__filter_spad[0U] = 0U;
        vlSelfRef.__PVT__filter_spad[1U] = 0U;
        vlSelfRef.__PVT__filter_spad[2U] = 0U;
        vlSelfRef.__PVT__filter_spad[3U] = 0U;
        vlSelfRef.__PVT__filter_spad[4U] = 0U;
        vlSelfRef.__PVT__filter_spad[5U] = 0U;
        vlSelfRef.__PVT__filter_spad[6U] = 0U;
        vlSelfRef.__PVT__filter_spad[7U] = 0U;
        vlSelfRef.__PVT__filter_spad[8U] = 0U;
        vlSelfRef.__PVT__filter_spad[9U] = 0U;
        vlSelfRef.__PVT__filter_spad[0xaU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xbU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xcU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xdU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xeU] = 0U;
        vlSelfRef.__PVT__filter_spad[0xfU] = 0U;
        vlSelfRef.__PVT__filter_spad[0x10U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x11U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x12U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x13U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x14U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x15U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x16U] = 0U;
        vlSelfRef.__PVT__filter_spad[0x17U] = 0U;
    }
    if (__VdlySet__ofmap_spad__v0) {
        vlSelfRef.__PVT__ofmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[3U] = 0U;
    }
    if (__VdlySet__ofmap_spad__v4) {
        vlSelfRef.__PVT__ofmap_spad[__VdlyDim0__ofmap_spad__v4] 
            = __VdlyVal__ofmap_spad__v4;
    }
    if (__VdlySet__ofmap_spad__v5) {
        vlSelfRef.__PVT__ofmap_spad[__VdlyDim0__ofmap_spad__v5] 
            = __VdlyVal__ofmap_spad__v5;
    }
    if (__VdlySet__ofmap_spad__v6) {
        vlSelfRef.__PVT__ofmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ofmap_spad[3U] = 0U;
    }
    if (__VdlySet__ifmap_spad__v0) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v0] 
            = __VdlyVal__ifmap_spad__v0;
    }
    if (__VdlySet__ifmap_spad__v1) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v1] 
            = __VdlyVal__ifmap_spad__v1;
    }
    if (__VdlySet__ifmap_spad__v2) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v2] 
            = __VdlyVal__ifmap_spad__v2;
    }
    if (__VdlySet__ifmap_spad__v3) {
        vlSelfRef.__PVT__ifmap_spad[__VdlyDim0__ifmap_spad__v3] 
            = __VdlyVal__ifmap_spad__v3;
    }
    if (__VdlySet__ifmap_spad__v4) {
        vlSelfRef.__PVT__ifmap_spad[0U] = __VdlyVal__ifmap_spad__v4;
        vlSelfRef.__PVT__ifmap_spad[1U] = __VdlyVal__ifmap_spad__v5;
        vlSelfRef.__PVT__ifmap_spad[2U] = __VdlyVal__ifmap_spad__v6;
        vlSelfRef.__PVT__ifmap_spad[3U] = __VdlyVal__ifmap_spad__v7;
        vlSelfRef.__PVT__ifmap_spad[4U] = __VdlyVal__ifmap_spad__v8;
        vlSelfRef.__PVT__ifmap_spad[5U] = __VdlyVal__ifmap_spad__v9;
        vlSelfRef.__PVT__ifmap_spad[6U] = __VdlyVal__ifmap_spad__v10;
        vlSelfRef.__PVT__ifmap_spad[7U] = __VdlyVal__ifmap_spad__v11;
        vlSelfRef.__PVT__ifmap_spad[8U] = __VdlyVal__ifmap_spad__v12;
        vlSelfRef.__PVT__ifmap_spad[9U] = __VdlyVal__ifmap_spad__v13;
        vlSelfRef.__PVT__ifmap_spad[0xaU] = __VdlyVal__ifmap_spad__v14;
        vlSelfRef.__PVT__ifmap_spad[0xbU] = __VdlyVal__ifmap_spad__v15;
    }
    if (__VdlySet__ifmap_spad__v16) {
        vlSelfRef.__PVT__ifmap_spad[0U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[1U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[2U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[3U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[4U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[5U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[6U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[7U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[8U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[9U] = 0U;
        vlSelfRef.__PVT__ifmap_spad[0xaU] = 0U;
        vlSelfRef.__PVT__ifmap_spad[0xbU] = 0U;
    }
    vlSelfRef.__PVT__count_filt_col = __Vdly__count_filt_col;
    vlSelfRef.__PVT__count_input_ch = __Vdly__count_input_ch;
    vlSelfRef.__PVT__count_ofmap_ch = __Vdly__count_ofmap_ch;
    vlSelfRef.__PVT__ifmap_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                     << 2U) | (IData)(vlSelfRef.__PVT__count_input_ch));
    vlSelfRef.__PVT__filter_index = (((IData)(vlSelfRef.__PVT__count_filt_col) 
                                      << 4U) | (((IData)(vlSelfRef.__PVT__count_ofmap_ch) 
                                                 << 2U) 
                                                | (IData)(vlSelfRef.__PVT__count_input_ch)));
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
    vlSelfRef.__PVT__index_0 = ((1U == (IData)(vlSelfRef.__PVT__cs))
                                 ? (IData)(vlSelfRef.__PVT__filter_index)
                                 : (IData)(vlSelfRef.__PVT__ifmap_index));
    vlSelfRef.ifmap_ready = ((2U == (IData)(vlSelfRef.__PVT__cs)) 
                             | (6U == (IData)(vlSelfRef.__PVT__cs)));
}
