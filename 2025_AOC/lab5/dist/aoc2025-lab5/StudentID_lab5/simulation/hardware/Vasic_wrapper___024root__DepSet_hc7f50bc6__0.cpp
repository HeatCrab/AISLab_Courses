// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasic_wrapper.h for the primary calling header

#include "Vasic_wrapper__pch.h"
#include "Vasic_wrapper__Syms.h"
#include "Vasic_wrapper___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasic_wrapper___024root___dump_triggers__ico(Vasic_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

void Vasic_wrapper___024root___eval_triggers__ico(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_triggers__ico\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vasic_wrapper___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasic_wrapper___024root___dump_triggers__act(Vasic_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

void Vasic_wrapper___024root___eval_triggers__act(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_triggers__act\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data__1.neq(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus____PVT__select_data__1.neq(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__select_data));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus____PVT__select_data__1.neq(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__select_data));
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus____PVT__select_data__1.neq(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__select_data));
    vlSelfRef.__VactTriggered.set(4U, vlSelfRef.__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus____PVT__select_data__1.neq(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__select_data));
    vlSelfRef.__VactTriggered.set(5U, vlSelfRef.__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus____PVT__select_data__1.neq(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__select_data));
    vlSelfRef.__VactTriggered.set(6U, vlSelfRef.__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus____PVT__select_data__1.neq(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__select_data));
    vlSelfRef.__VactTriggered.set(7U, ((IData)(vlSelfRef.ACLK) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ACLK__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data__1.assign(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data);
    vlSelfRef.__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus____PVT__select_data__1.assign(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__select_data);
    vlSelfRef.__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus____PVT__select_data__1.assign(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__select_data);
    vlSelfRef.__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus____PVT__select_data__1.assign(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__select_data);
    vlSelfRef.__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus____PVT__select_data__1.assign(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__select_data);
    vlSelfRef.__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus____PVT__select_data__1.assign(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__select_data);
    vlSelfRef.__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus____PVT__select_data__1.assign(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__select_data);
    vlSelfRef.__Vtrigprevexpr___TOP__ACLK__0 = vlSelfRef.ACLK;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(2U, 1U);
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
        vlSelfRef.__VactTriggered.set(5U, 1U);
        vlSelfRef.__VactTriggered.set(6U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vasic_wrapper___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vasic_wrapper_GON_Bus__T4___act_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus__0(Vasic_wrapper_GON_Bus__T4* vlSelf);
void Vasic_wrapper_GON_Bus__T4___act_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus__0(Vasic_wrapper_GON_Bus__T4* vlSelf);
void Vasic_wrapper_GON_Bus__T4___act_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus__0(Vasic_wrapper_GON_Bus__T4* vlSelf);
void Vasic_wrapper_GON_Bus__T4___act_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus__0(Vasic_wrapper_GON_Bus__T4* vlSelf);
void Vasic_wrapper_GON_Bus__T4___act_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus__0(Vasic_wrapper_GON_Bus__T4* vlSelf);
void Vasic_wrapper_GON_Bus__T4___act_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus__0(Vasic_wrapper_GON_Bus__T4* vlSelf);
void Vasic_wrapper___024root___act_sequent__TOP__0(Vasic_wrapper___024root* vlSelf);
void Vasic_wrapper___024root___act_comb__TOP__0(Vasic_wrapper___024root* vlSelf);

void Vasic_wrapper___024root___eval_act(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_act\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vasic_wrapper_GON_Bus__T4___act_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus));
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vasic_wrapper_GON_Bus__T4___act_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus));
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vasic_wrapper_GON_Bus__T4___act_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus));
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vasic_wrapper_GON_Bus__T4___act_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus));
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vasic_wrapper_GON_Bus__T4___act_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus));
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vasic_wrapper_GON_Bus__T4___act_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus));
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((0x7eULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vasic_wrapper___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((0x7fULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vasic_wrapper___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
}

VL_INLINE_OPT void Vasic_wrapper___024root___act_sequent__TOP__0(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___act_sequent__TOP__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XBus_data[0U] 
        = (IData)((((QData)((IData)(((0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__mc_valid))
                                      ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__select_data
                                     [8U] : 0U))) << 0x20U) 
                   | (QData)((IData)(((0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__mc_valid))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__select_data
                                      [8U] : 0U)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XBus_data[1U] 
        = (IData)(((((QData)((IData)(((0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__mc_valid))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__select_data
                                      [8U] : 0U))) 
                     << 0x20U) | (QData)((IData)(((0U 
                                                   != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__mc_valid))
                                                   ? 
                                                  vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__select_data
                                                  [8U]
                                                   : 0U)))) 
                   >> 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XBus_data[2U] 
        = (IData)((((QData)((IData)(((0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__mc_valid))
                                      ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__select_data
                                     [8U] : 0U))) << 0x20U) 
                   | (QData)((IData)(((0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__mc_valid))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__select_data
                                      [8U] : 0U)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XBus_data[3U] 
        = (IData)(((((QData)((IData)(((0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__mc_valid))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__select_data
                                      [8U] : 0U))) 
                     << 0x20U) | (QData)((IData)(((0U 
                                                   != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__mc_valid))
                                                   ? 
                                                  vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__select_data
                                                  [8U]
                                                   : 0U)))) 
                   >> 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XBus_data[4U] 
        = (IData)((((QData)((IData)(((0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__mc_valid))
                                      ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__select_data
                                     [8U] : 0U))) << 0x20U) 
                   | (QData)((IData)(((0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__mc_valid))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__select_data
                                      [8U] : 0U)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XBus_data[5U] 
        = (IData)(((((QData)((IData)(((0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__mc_valid))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__select_data
                                      [8U] : 0U))) 
                     << 0x20U) | (QData)((IData)(((0U 
                                                   != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__mc_valid))
                                                   ? 
                                                  vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__select_data
                                                  [8U]
                                                   : 0U)))) 
                   >> 0x20U));
}

void Vasic_wrapper___024root___nba_sequent__TOP__0(Vasic_wrapper___024root* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__0(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__0(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus__0(Vasic_wrapper_GON_Bus__T4* vlSelf);
void Vasic_wrapper___024root___nba_sequent__TOP__1(Vasic_wrapper___024root* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus__0(Vasic_wrapper_GON_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__1(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper___024root___nba_sequent__TOP__2(Vasic_wrapper___024root* vlSelf);
void Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus__1(Vasic_wrapper_GON_Bus__T4* vlSelf);
void Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus__0(Vasic_wrapper_GON_Bus__T4* vlSelf);
void Vasic_wrapper___024root___nba_sequent__TOP__3(Vasic_wrapper___024root* vlSelf);
void Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus__1(Vasic_wrapper_GON_Bus__T4* vlSelf);
void Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus__0(Vasic_wrapper_GON_Bus__T4* vlSelf);
void Vasic_wrapper___024root___nba_sequent__TOP__4(Vasic_wrapper___024root* vlSelf);
void Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus__1(Vasic_wrapper_GON_Bus__T4* vlSelf);
void Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus__0(Vasic_wrapper_GON_Bus__T4* vlSelf);
void Vasic_wrapper___024root___nba_sequent__TOP__5(Vasic_wrapper___024root* vlSelf);
void Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus__1(Vasic_wrapper_GON_Bus__T4* vlSelf);
void Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus__0(Vasic_wrapper_GON_Bus__T4* vlSelf);
void Vasic_wrapper___024root___nba_sequent__TOP__6(Vasic_wrapper___024root* vlSelf);
void Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus__1(Vasic_wrapper_GON_Bus__T4* vlSelf);
void Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus__1(Vasic_wrapper_GON_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__2(Vasic_wrapper_GIN_Bus__T4* vlSelf);
void Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus__2(Vasic_wrapper_GON_Bus__T4* vlSelf);
void Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus__2(Vasic_wrapper_GON_Bus__T4* vlSelf);
void Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus__2(Vasic_wrapper_GON_Bus__T4* vlSelf);
void Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus__2(Vasic_wrapper_GON_Bus__T4* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper___024root___nba_sequent__TOP__7(Vasic_wrapper___024root* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);
void Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__2(Vasic_wrapper_PE* vlSelf);

void Vasic_wrapper___024root___eval_nba(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_nba\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vasic_wrapper___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus));
        Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus));
        Vasic_wrapper___024root___nba_sequent__TOP__1(vlSelf);
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus));
        Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus));
        Vasic_wrapper___024root___nba_sequent__TOP__2(vlSelf);
        Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus));
        Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus));
        Vasic_wrapper___024root___nba_sequent__TOP__3(vlSelf);
        Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus));
        Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus));
        Vasic_wrapper___024root___nba_sequent__TOP__4(vlSelf);
        Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus));
        Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus));
        Vasic_wrapper___024root___nba_sequent__TOP__5(vlSelf);
        Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus));
        Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus));
        Vasic_wrapper___024root___nba_sequent__TOP__6(vlSelf);
        Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus));
        Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus));
        Vasic_wrapper_GIN_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus));
        Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus));
        Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus));
        Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus));
        Vasic_wrapper_GON_Bus__T4___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__1((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE));
        Vasic_wrapper___024root___nba_sequent__TOP__7(vlSelf);
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE));
        Vasic_wrapper_PE___nba_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE__2((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE));
    }
    if ((0x84ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vasic_wrapper_GON_Bus__T4___act_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus));
        vlSelfRef.__Vm_traceActivity[0xbU] = 1U;
    }
    if ((0x82ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vasic_wrapper_GON_Bus__T4___act_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus));
        vlSelfRef.__Vm_traceActivity[0xcU] = 1U;
    }
    if ((0xc0ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vasic_wrapper_GON_Bus__T4___act_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus));
        vlSelfRef.__Vm_traceActivity[0xdU] = 1U;
    }
    if ((0xa0ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vasic_wrapper_GON_Bus__T4___act_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus));
        vlSelfRef.__Vm_traceActivity[0xeU] = 1U;
    }
    if ((0x90ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vasic_wrapper_GON_Bus__T4___act_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus));
        vlSelfRef.__Vm_traceActivity[0xfU] = 1U;
    }
    if ((0x88ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vasic_wrapper_GON_Bus__T4___act_sequent__TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus__0((&vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus));
        vlSelfRef.__Vm_traceActivity[0x10U] = 1U;
    }
    if ((0xfeULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vasic_wrapper___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x11U] = 1U;
    }
    if ((0xffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vasic_wrapper___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x12U] = 1U;
    }
}

extern const VlWide<8>/*255:0*/ Vasic_wrapper__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vasic_wrapper___024root___nba_sequent__TOP__1(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___nba_sequent__TOP__1\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready 
        = ((((((2U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
               | (6U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))) 
              << 7U) | (((2U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                         | (6U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))) 
                        << 6U)) | ((((2U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                     | (6U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))) 
                                    << 5U) | (((2U 
                                                == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                               | (6U 
                                                  == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))) 
                                              << 4U))) 
           | (((((2U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                 | (6U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))) 
                << 3U) | (((2U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                           | (6U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))) 
                          << 2U)) | ((((2U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                       | (6U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))) 
                                      << 1U) | ((2U 
                                                 == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)) 
                                                | (6U 
                                                   == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready 
        = (((((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
              << 7U) | ((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                        << 6U)) | (((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                    << 5U) | ((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                              << 4U))) 
           | ((((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                << 3U) | ((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                          << 2U)) | (((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                      << 1U) | (1U 
                                                == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready 
        = (((((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
              << 7U) | ((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                        << 6U)) | (((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                    << 5U) | ((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                              << 4U))) 
           | ((((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                << 3U) | ((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                          << 2U)) | (((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                      << 1U) | (4U 
                                                == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready 
        = (((((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
              << 7U) | ((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                        << 6U)) | (((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                    << 5U) | ((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                              << 4U))) 
           | ((((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                << 3U) | ((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                          << 2U)) | (((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                      << 1U) | (1U 
                                                == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready 
        = (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.ifmap_ready) 
              << 7U) | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.ifmap_ready) 
                        << 6U)) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.ifmap_ready) 
                                    << 5U) | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.ifmap_ready) 
                                              << 4U))) 
           | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.ifmap_ready) 
                << 3U) | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.ifmap_ready) 
                          << 2U)) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.ifmap_ready) 
                                      << 1U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.ifmap_ready))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready 
        = (((((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
              << 7U) | ((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                        << 6U)) | (((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                    << 5U) | ((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                              << 4U))) 
           | ((((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                << 3U) | ((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                          << 2U)) | (((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                      << 1U) | (1U 
                                                == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready 
        = (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.ifmap_ready) 
              << 7U) | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.ifmap_ready) 
                        << 6U)) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.ifmap_ready) 
                                    << 5U) | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.ifmap_ready) 
                                              << 4U))) 
           | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.ifmap_ready) 
                << 3U) | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.ifmap_ready) 
                          << 2U)) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.ifmap_ready) 
                                      << 1U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.ifmap_ready))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready 
        = (((((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
              << 7U) | ((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                        << 6U)) | (((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                    << 5U) | ((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                              << 4U))) 
           | ((((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                << 3U) | ((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                          << 2U)) | (((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                      << 1U) | (1U 
                                                == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready 
        = (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.ifmap_ready) 
              << 7U) | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.ifmap_ready) 
                        << 6U)) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.ifmap_ready) 
                                    << 5U) | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.ifmap_ready) 
                                              << 4U))) 
           | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.ifmap_ready) 
                << 3U) | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.ifmap_ready) 
                          << 2U)) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.ifmap_ready) 
                                      << 1U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.ifmap_ready))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready 
        = (((((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
              << 7U) | ((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                        << 6U)) | (((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                    << 5U) | ((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                              << 4U))) 
           | ((((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                << 3U) | ((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                          << 2U)) | (((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                      << 1U) | (1U 
                                                == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready 
        = (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.ifmap_ready) 
              << 7U) | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.ifmap_ready) 
                        << 6U)) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.ifmap_ready) 
                                    << 5U) | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.ifmap_ready) 
                                              << 4U))) 
           | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.ifmap_ready) 
                << 3U) | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.ifmap_ready) 
                          << 2U)) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.ifmap_ready) 
                                      << 1U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.ifmap_ready))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready 
        = (((((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
              << 7U) | ((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                        << 6U)) | (((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                    << 5U) | ((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                              << 4U))) 
           | ((((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                << 3U) | ((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                          << 2U)) | (((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                      << 1U) | (1U 
                                                == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
        = ((0xffffffffffULL & vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid) 
           | ((QData)((IData)((((((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
                                  << 7U) | ((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                                            << 6U)) 
                                | (((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                    << 5U) | ((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                              << 4U))) 
                               | ((((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                                    << 3U) | ((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                                              << 2U)) 
                                  | (((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                      << 1U) | (5U 
                                                == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))))))) 
              << 0x28U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_valid 
        = (((QData)((IData)((((((((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
                                  << 0x1fU) | ((5U 
                                                == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                                               << 0x1eU)) 
                                | (((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                    << 0x1dU) | ((5U 
                                                  == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                                 << 0x1cU))) 
                               | ((((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                                    << 0x1bU) | ((5U 
                                                  == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                                                 << 0x1aU)) 
                                  | (((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                      << 0x19U) | (
                                                   (5U 
                                                    == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)) 
                                                   << 0x18U)))) 
                              | (((((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
                                    << 0x17U) | ((5U 
                                                  == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                                                 << 0x16U)) 
                                  | (((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                      << 0x15U) | (
                                                   (5U 
                                                    == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                                   << 0x14U))) 
                                 | ((((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                                      << 0x13U) | (
                                                   (5U 
                                                    == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                                                   << 0x12U)) 
                                    | (((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                        << 0x11U) | 
                                       ((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)) 
                                        << 0x10U))))) 
                             | ((((((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
                                    << 0xfU) | ((5U 
                                                 == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                                                << 0xeU)) 
                                  | (((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                      << 0xdU) | ((5U 
                                                   == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                                  << 0xcU))) 
                                 | ((((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                                      << 0xbU) | ((5U 
                                                   == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                                                  << 0xaU)) 
                                    | (((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                        << 9U) | ((5U 
                                                   == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)) 
                                                  << 8U)))) 
                                | (((((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
                                      << 7U) | ((5U 
                                                 == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                                                << 6U)) 
                                    | (((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                        << 5U) | ((5U 
                                                   == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                                  << 4U))) 
                                   | ((((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                                        << 3U) | ((5U 
                                                   == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                                                  << 2U)) 
                                      | (((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                          << 1U) | 
                                         (5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))))))))) 
            << 0x10U) | (QData)((IData)(((((((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
                                             << 0xfU) 
                                            | ((5U 
                                                == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                                               << 0xeU)) 
                                           | (((5U 
                                                == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                               << 0xdU) 
                                              | ((5U 
                                                  == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                                 << 0xcU))) 
                                          | ((((5U 
                                                == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                                               << 0xbU) 
                                              | ((5U 
                                                  == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                                                 << 0xaU)) 
                                             | (((5U 
                                                  == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                                 << 9U) 
                                                | ((5U 
                                                    == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)) 
                                                   << 8U)))) 
                                         | (((((5U 
                                                == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
                                               << 7U) 
                                              | ((5U 
                                                  == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                                                 << 6U)) 
                                             | (((5U 
                                                  == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                                 << 5U) 
                                                | ((5U 
                                                    == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                                   << 4U))) 
                                            | ((((5U 
                                                  == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                                                 << 3U) 
                                                | ((5U 
                                                    == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                                                   << 2U)) 
                                               | (((5U 
                                                    == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                                   << 1U) 
                                                  | (5U 
                                                     == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)))))))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready 
        = (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.ifmap_ready) 
              << 7U) | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.ifmap_ready) 
                        << 6U)) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.ifmap_ready) 
                                    << 5U) | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.ifmap_ready) 
                                              << 4U))) 
           | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.ifmap_ready) 
                << 3U) | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.ifmap_ready) 
                          << 2U)) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.ifmap_ready) 
                                      << 1U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.ifmap_ready))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x28U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.opsum;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x29U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.opsum;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x2aU] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.opsum)) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.opsum))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x2bU] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.opsum)) 
                     << 0x20U) | (QData)((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.opsum))) 
                   >> 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x2cU] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.opsum;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x2dU] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.opsum;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x2eU] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.opsum)) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.opsum))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x2fU] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.opsum)) 
                     << 0x20U) | (QData)((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.opsum))) 
                   >> 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0U] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))
                                      ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad
                                     [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch]
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[1U] 
        = (IData)(((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))
                                        ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad
                                       [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch]
                                        : 0U)))) >> 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[2U] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))
                                      ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad
                                     [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch]
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[3U] 
        = (IData)(((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))
                                        ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad
                                       [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch]
                                        : 0U)))) >> 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[4U] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))
                                      ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad
                                     [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch]
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[5U] 
        = (IData)(((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))
                                        ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad
                                       [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch]
                                        : 0U)))) >> 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[6U] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))
                                      ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad
                                     [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch]
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[7U] 
        = (IData)(((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))
                                        ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad
                                       [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch]
                                        : 0U)))) >> 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[8U] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))
                                      ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad
                                     [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch]
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[9U] 
        = (IData)(((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))
                                        ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad
                                       [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch]
                                        : 0U)))) >> 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0xaU] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))
                                      ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad
                                     [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch]
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0xbU] 
        = (IData)(((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))
                                        ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad
                                       [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch]
                                        : 0U)))) >> 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0xcU] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))
                                      ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad
                                     [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch]
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0xdU] 
        = (IData)(((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))
                                        ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad
                                       [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch]
                                        : 0U)))) >> 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0xeU] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))
                                      ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad
                                     [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch]
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0xfU] 
        = (IData)(((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))
                                        ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad
                                       [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch]
                                        : 0U)))) >> 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x10U] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))
                                      ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad
                                     [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch]
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x11U] 
        = (IData)(((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))
                                        ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad
                                       [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch]
                                        : 0U)))) >> 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x12U] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))
                                      ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad
                                     [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch]
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x13U] 
        = (IData)(((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))
                                        ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad
                                       [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch]
                                        : 0U)))) >> 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x14U] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))
                                      ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad
                                     [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch]
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x15U] 
        = (IData)(((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))
                                        ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad
                                       [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch]
                                        : 0U)))) >> 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x16U] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))
                                      ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad
                                     [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch]
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x17U] 
        = (IData)(((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))
                                        ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad
                                       [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch]
                                        : 0U)))) >> 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x18U] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))
                                      ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad
                                     [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch]
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x19U] 
        = (IData)(((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))
                                        ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad
                                       [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch]
                                        : 0U)))) >> 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x1aU] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))
                                      ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad
                                     [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch]
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x1bU] 
        = (IData)(((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))
                                        ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad
                                       [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch]
                                        : 0U)))) >> 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x1cU] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))
                                      ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad
                                     [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch]
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x1dU] 
        = (IData)(((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))
                                        ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad
                                       [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch]
                                        : 0U)))) >> 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x1eU] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))
                                      ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad
                                     [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch]
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x1fU] 
        = (IData)(((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))
                                        ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad
                                       [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch]
                                        : 0U)))) >> 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x20U] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))
                                      ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad
                                     [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch]
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x21U] 
        = (IData)(((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))
                                        ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad
                                       [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch]
                                        : 0U)))) >> 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x22U] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))
                                      ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad
                                     [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch]
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x23U] 
        = (IData)(((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))
                                        ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad
                                       [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch]
                                        : 0U)))) >> 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x24U] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))
                                      ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad
                                     [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch]
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x25U] 
        = (IData)(((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))
                                        ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad
                                       [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch]
                                        : 0U)))) >> 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x26U] 
        = (IData)((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))
                                      ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad
                                     [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch]
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x27U] 
        = (IData)(((((QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))
                                       ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad
                                      [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch]
                                       : 0U))) << 0x20U) 
                    | (QData)((IData)(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))
                                        ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad
                                       [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch]
                                        : 0U)))) >> 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x28U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.opsum;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x29U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.opsum;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x2aU] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.opsum)) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.opsum))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x2bU] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.opsum)) 
                     << 0x20U) | (QData)((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.opsum))) 
                   >> 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x2cU] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.opsum;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x2dU] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.opsum;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x2eU] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.opsum)) 
                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.opsum))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x2fU] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.opsum)) 
                     << 0x20U) | (QData)((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.opsum))) 
                   >> 0x20U));
    if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config))) {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[1U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[2U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[3U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[4U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[5U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[6U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[7U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[7U];
    } else {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready 
            = (((((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
                  << 7U) | ((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                            << 6U)) | (((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                        << 5U) | ((4U 
                                                   == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                                  << 4U))) 
               | ((((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                    << 3U) | ((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                              << 2U)) | (((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                          << 1U) | 
                                         (4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)))));
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[1U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[1U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[2U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[2U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[3U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[3U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[4U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[4U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[5U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[5U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[6U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[6U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[7U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[7U];
    }
    if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config))) {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[8U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[9U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0xaU] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0xbU] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0xcU] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0xdU] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0xeU] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0xfU] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[7U];
    } else {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready 
            = (((((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
                  << 7U) | ((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                            << 6U)) | (((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                        << 5U) | ((4U 
                                                   == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                                  << 4U))) 
               | ((((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                    << 3U) | ((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                              << 2U)) | (((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                          << 1U) | 
                                         (4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)))));
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[8U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[8U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[9U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[9U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0xaU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0xaU];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0xbU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0xbU];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0xcU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0xcU];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0xdU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0xdU];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0xeU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0xeU];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0xfU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0xfU];
    }
    if ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config))) {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x10U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x11U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x12U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x13U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x14U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x15U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x16U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x17U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[7U];
    } else {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready 
            = (((((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
                  << 7U) | ((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                            << 6U)) | (((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                        << 5U) | ((4U 
                                                   == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                                  << 4U))) 
               | ((((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                    << 3U) | ((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                              << 2U)) | (((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                          << 1U) | 
                                         (4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)))));
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x10U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x10U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x11U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x11U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x12U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x12U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x13U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x13U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x14U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x14U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x15U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x15U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x16U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x16U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x17U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x17U];
    }
    if ((8U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config))) {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x18U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x19U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x1aU] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x1bU] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x1cU] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x1dU] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x1eU] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x1fU] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[7U];
    } else {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready 
            = (((((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
                  << 7U) | ((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                            << 6U)) | (((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                        << 5U) | ((4U 
                                                   == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                                  << 4U))) 
               | ((((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                    << 3U) | ((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                              << 2U)) | (((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                          << 1U) | 
                                         (4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)))));
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x18U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x18U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x19U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x19U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x1aU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x1aU];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x1bU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x1bU];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x1cU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x1cU];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x1dU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x1dU];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x1eU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x1eU];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x1fU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x1fU];
    }
    if ((0x10U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config))) {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x20U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x21U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x22U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x23U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x24U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x25U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x26U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x27U] 
            = Vasic_wrapper__ConstPool__CONST_h9e67c271_0[7U];
    } else {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready 
            = (((((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
                  << 7U) | ((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                            << 6U)) | (((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                        << 5U) | ((4U 
                                                   == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                                  << 4U))) 
               | ((((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                    << 3U) | ((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                              << 2U)) | (((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                          << 1U) | 
                                         (4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)))));
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x20U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x20U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x21U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x21U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x22U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x22U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x23U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x23U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x24U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x24U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x25U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x25U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x26U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x26U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x27U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x27U];
    }
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__scan_chain[0U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__scan_chain[1U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__scan_chain[2U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__scan_chain[3U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__scan_chain[4U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__scan_chain[5U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    if (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_10) {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_XID_scan_in 
            = (0xfU & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_x) 
                       + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y1)));
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_XID_scan_in 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y1;
    } else {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_XID_scan_in = 0xfU;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_XID_scan_in = 0xfU;
    }
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__scan_chain[0U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__scan_chain[1U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__scan_chain[2U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__scan_chain[3U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__scan_chain[4U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__scan_chain[5U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__scan_chain[0U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__scan_chain[1U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__scan_chain[2U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__scan_chain[3U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__scan_chain[4U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__scan_chain[5U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_XID_scan_in 
        = (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_10) 
            & (0U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y1)))
            ? (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_x)
            : 0xfU);
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XID_scan_chain[0U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_filter_ready 
        = (((QData)((IData)((((((((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
                                  << 0x1fU) | ((1U 
                                                == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                                               << 0x1eU)) 
                                | (((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                    << 0x1dU) | ((1U 
                                                  == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                                 << 0x1cU))) 
                               | ((((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                                    << 0x1bU) | ((1U 
                                                  == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                                                 << 0x1aU)) 
                                  | (((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                      << 0x19U) | (
                                                   (1U 
                                                    == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)) 
                                                   << 0x18U)))) 
                              | (((((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
                                    << 0x17U) | ((1U 
                                                  == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                                                 << 0x16U)) 
                                  | (((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                      << 0x15U) | (
                                                   (1U 
                                                    == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                                   << 0x14U))) 
                                 | ((((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                                      << 0x13U) | (
                                                   (1U 
                                                    == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                                                   << 0x12U)) 
                                    | (((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                        << 0x11U) | 
                                       ((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)) 
                                        << 0x10U))))) 
                             | ((((((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
                                    << 0xfU) | ((1U 
                                                 == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                                                << 0xeU)) 
                                  | (((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                      << 0xdU) | ((1U 
                                                   == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                                  << 0xcU))) 
                                 | ((((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                                      << 0xbU) | ((1U 
                                                   == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                                                  << 0xaU)) 
                                    | (((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                        << 9U) | ((1U 
                                                   == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)) 
                                                  << 8U)))) 
                                | (((((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
                                      << 7U) | ((1U 
                                                 == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                                                << 6U)) 
                                    | (((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                        << 5U) | ((1U 
                                                   == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                                  << 4U))) 
                                   | ((((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                                        << 3U) | ((1U 
                                                   == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                                                  << 2U)) 
                                      | (((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                          << 1U) | 
                                         (1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))))))))) 
            << 0x10U) | (QData)((IData)((((((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
                                            << 0xfU) 
                                           | ((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                                              << 0xeU)) 
                                          | (((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                              << 0xdU) 
                                             | ((1U 
                                                 == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                                << 0xcU))) 
                                         | ((((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                                              << 0xbU) 
                                             | ((1U 
                                                 == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                                                << 0xaU)) 
                                            | (((1U 
                                                 == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                                << 9U) 
                                               | (((1U 
                                                    == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready))))))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_ready 
        = (((QData)((IData)((((((((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
                                  << 0x1fU) | ((4U 
                                                == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                                               << 0x1eU)) 
                                | (((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                    << 0x1dU) | ((4U 
                                                  == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                                 << 0x1cU))) 
                               | ((((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                                    << 0x1bU) | ((4U 
                                                  == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                                                 << 0x1aU)) 
                                  | (((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                      << 0x19U) | (
                                                   (4U 
                                                    == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)) 
                                                   << 0x18U)))) 
                              | (((((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
                                    << 0x17U) | ((4U 
                                                  == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                                                 << 0x16U)) 
                                  | (((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                      << 0x15U) | (
                                                   (4U 
                                                    == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                                   << 0x14U))) 
                                 | ((((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                                      << 0x13U) | (
                                                   (4U 
                                                    == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                                                   << 0x12U)) 
                                    | (((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                        << 0x11U) | 
                                       ((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)) 
                                        << 0x10U))))) 
                             | ((((((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
                                    << 0xfU) | ((4U 
                                                 == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                                                << 0xeU)) 
                                  | (((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                      << 0xdU) | ((4U 
                                                   == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                                  << 0xcU))) 
                                 | ((((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                                      << 0xbU) | ((4U 
                                                   == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                                                  << 0xaU)) 
                                    | (((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                        << 9U) | ((4U 
                                                   == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)) 
                                                  << 8U)))) 
                                | (((((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
                                      << 7U) | ((4U 
                                                 == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                                                << 6U)) 
                                    | (((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                        << 5U) | ((4U 
                                                   == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                                  << 4U))) 
                                   | ((((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                                        << 3U) | ((4U 
                                                   == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                                                  << 2U)) 
                                      | (((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                          << 1U) | 
                                         (4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))))))))) 
            << 0x10U) | (QData)((IData)((((((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
                                            << 0xfU) 
                                           | ((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                                              << 0xeU)) 
                                          | (((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                              << 0xdU) 
                                             | ((4U 
                                                 == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                                << 0xcU))) 
                                         | ((((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                                              << 0xbU) 
                                             | ((4U 
                                                 == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                                                << 0xaU)) 
                                            | (((4U 
                                                 == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                                << 9U) 
                                               | (((4U 
                                                    == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready))))))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
        = ((0xffffffff0000ULL & vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid) 
           | (IData)((IData)(((((2U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config))
                                 ? 0U : (0xffU & (IData)(
                                                         (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_valid 
                                                          >> 8U)))) 
                               << 8U) | ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config))
                                          ? 0U : (0xffU 
                                                  & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_valid)))))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
        = ((0xffff0000ffffULL & vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid) 
           | ((QData)((IData)(((((8U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config))
                                  ? 0U : (0xffU & (IData)(
                                                          (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_valid 
                                                           >> 0x18U)))) 
                                << 8U) | ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config))
                                           ? 0U : (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_valid 
                                                              >> 0x10U))))))) 
              << 0x10U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
        = ((0xff00ffffffffULL & vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid) 
           | ((QData)((IData)(((0x10U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config))
                                ? 0U : (0xffU & (IData)(
                                                        (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_valid 
                                                         >> 0x20U)))))) 
              << 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__scan_chain[6U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_XID_scan_in;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__scan_chain[6U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_XID_scan_in;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__scan_chain[6U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_XID_scan_in;
}

VL_INLINE_OPT void Vasic_wrapper___024root___nba_sequent__TOP__2(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___nba_sequent__TOP__2\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XID_scan_chain[1U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id;
}

VL_INLINE_OPT void Vasic_wrapper___024root___nba_sequent__TOP__3(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___nba_sequent__TOP__3\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XID_scan_chain[2U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id;
}

VL_INLINE_OPT void Vasic_wrapper___024root___nba_sequent__TOP__4(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___nba_sequent__TOP__4\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XID_scan_chain[3U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id;
}

VL_INLINE_OPT void Vasic_wrapper___024root___nba_sequent__TOP__5(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___nba_sequent__TOP__5\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XID_scan_chain[4U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id;
}

extern const VlUnpacked<QData/*47:0*/, 512> Vasic_wrapper__ConstPool__TABLE_h154a7054_0;

VL_INLINE_OPT void Vasic_wrapper___024root___nba_sequent__TOP__6(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___nba_sequent__TOP__6\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XID_scan_chain[5U] 
        = vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__opsum_XID_scan_in 
        = (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_10) 
            & (2U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y1)))
            ? (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_x)
            : 0xfU);
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XID_scan_chain[6U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__opsum_XID_scan_in;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs 
        = ((IData)(vlSelfRef.ARESETn) ? (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__ns)
            : 0U);
    vlSelfRef.ASIC_interrupt = (0x11U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs));
    vlSelfRef.asic_wrapper__DOT__DMA_MODE = ((3U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                              ? 0U : 
                                             ((4U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                               ? 1U
                                               : ((2U 
                                                   == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                   ? 2U
                                                   : 
                                                  ((0x10U 
                                                    == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                    ? 3U
                                                    : 0U))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__set_YID 
        = ((1U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
           & (0U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_x)));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_config 
        = ((5U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
            ? (0x180U | ((0x7cU & (((vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                                     - (IData)(2U)) 
                                    - (IData)(1U)) 
                                   << 2U)) | (3U & 
                                              ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_9) 
                                               - (IData)(1U)))))
            : 0U);
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul3_res 
        = (((3U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
             ? (0xffU & (vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                         - (IData)(2U))) : ((4U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                             ? 9U : 
                                            ((0x10U 
                                              == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                              ? ((2U 
                                                  & vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE)
                                                  ? 
                                                 (0x3ffU 
                                                  & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__eF) 
                                                     >> 2U))
                                                  : (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__eF))
                                              : 0U))) 
           * ((3U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
               ? (((0xfU & ((IData)(2U) + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__valid_e))) 
                   - (0U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_H))) 
                  - (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_H_reset))
               : ((4U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                   ? (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt)
                   : ((0x10U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                       ? ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_m) 
                          + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt))
                       : 0U))));
    if ((0xfU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_F_reset 
            = ((2U & vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE)
                ? ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W) 
                   == (0xffU & (VL_SHIFTR_III(8,8,32, 
                                              (0xffU 
                                               & (vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                                                  - (IData)(2U))), 1U) 
                                - (IData)(1U)))) : 
               ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W) 
                == ((0xffU & (vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                              - (IData)(2U))) - (IData)(1U))));
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__relu_sel 
            = (1U & (vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE 
                     >> 1U));
    } else {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_F_reset 
            = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W) 
               == ((0xffU & (vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                             >> 8U)) - (IData)(1U)));
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__relu_sel = 0U;
    }
    __Vtableidx1 = (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__valid_e) 
                     << 5U) | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
        = Vasic_wrapper__ConstPool__TABLE_h154a7054_0
        [__Vtableidx1];
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__mc_valid 
        = ((((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
               == ((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                    ? 0U : 7U)) & (9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
             << 5U) | (((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                          == ((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                               ? 0U : 7U)) & (9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
                        << 4U) | ((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                    == ((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                         ? 0U : 7U)) 
                                   & (9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
                                  << 3U))) | (((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                                 == 
                                                 ((9U 
                                                   == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                   ? 0U
                                                   : 7U)) 
                                                & (9U 
                                                   == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
                                               << 2U) 
                                              | (((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                                    == 
                                                    ((9U 
                                                      == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                      ? 0U
                                                      : 7U)) 
                                                   & (9U 
                                                      == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
                                                  << 1U) 
                                                 | (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                                     == 
                                                     ((9U 
                                                       == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                       ? 0U
                                                       : 7U)) 
                                                    & (9U 
                                                       == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))))));
    if ((7U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y 
            = ((3U < (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt))
                ? 1U : 0U);
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X 
            = ((3U > (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_filt))
                ? 0U : ((6U > (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_filt))
                         ? 1U : 2U));
    } else {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y = 7U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X = 0xfU;
    }
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X 
        = ((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
            ? (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_h)
            : 0xfU);
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_2 
        = ((3U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
           | (4U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)));
    if ((0xbU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y 
            = ((3U < (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt))
                ? 1U : 0U);
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e;
    } else {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y = 7U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X = 0xfU;
    }
    if ((0xcU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__opsum_tag_Y 
            = ((3U < (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt))
                ? 1U : 0U);
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e;
    } else {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__opsum_tag_Y = 7U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X = 0xfU;
    }
    if (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__relu_sel) {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__relu_data_in 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__Comparator_Qint8_0__DOT__data_max;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e_reset 
            = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e) 
               == (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_14)
                     ? (7U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_15) 
                              >> 1U)) : 4U) - (IData)(1U)));
    } else {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__relu_data_in 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__pq_data_out_reg;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e_reset 
            = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e) 
               == ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__valid_e) 
                   - (IData)(1U)));
    }
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid 
        = ((~ (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__valid_mask)) 
           & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__mc_valid));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__mc_valid 
        = ((((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
               == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y)) 
              & (7U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
             << 5U) | (((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                          == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y)) 
                         & (7U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
                        << 4U) | ((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                    == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y)) 
                                   & (7U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
                                  << 3U))) | (((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                                 == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y)) 
                                                & (7U 
                                                   == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
                                               << 2U) 
                                              | (((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                                    == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y)) 
                                                   & (7U 
                                                      == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
                                                  << 1U) 
                                                 | (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                                     == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y)) 
                                                    & (7U 
                                                       == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))))));
    if ((0x10U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
        if ((8U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src1 = 0U;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_src1 = 0U;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src2 = 0U;
        } else if ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src1 = 0U;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_src1 = 0U;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src2 = 0U;
        } else if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src1 = 0U;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_src1 = 0U;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src2 = 0U;
        } else if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src1 = 0U;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_src1 = 0U;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src2 = 0U;
        } else if ((2U & vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE)) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src1 
                = (0x7fU & ((vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                             - (IData)(2U)) >> 1U));
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_src1 
                = (0x3ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__EF) 
                             >> 2U));
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src2 
                = (0x7fU & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_E) 
                            >> 1U));
        } else {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src1 
                = (0xffU & (vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                            - (IData)(2U)));
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_src1 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__EF;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src2 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_E;
        }
    } else if ((8U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
        if ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
                if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
                    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src1 
                        = ((2U & vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE)
                            ? (0x3ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__eF) 
                                         >> 2U)) : (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__eF));
                    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_src1 
                        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e;
                } else {
                    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src1 
                        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__eF;
                    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_src1 
                        = ((2U & vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE)
                            ? ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PPU))
                                ? 0U : ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PPU))
                                         ? ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PPU))
                                             ? (1U 
                                                | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e) 
                                                   << 1U))
                                             : (1U 
                                                | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e) 
                                                   << 1U)))
                                         : ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PPU))
                                             ? ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e) 
                                                << 1U)
                                             : ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e) 
                                                << 1U))))
                            : (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e));
                }
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src2 
                    = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_m) 
                       + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt));
            } else if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src1 = 0U;
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_src1 = 0U;
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src2 = 0U;
            } else {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src1 
                    = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__eF;
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_src1 
                    = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e;
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src2 
                    = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_m) 
                       + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt));
            }
        } else if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src1 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__eF;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_src1 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src2 
                = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_m) 
                   + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt));
        } else {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src1 = 0U;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_src1 
                = (0xffU & (vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                            - (IData)(2U)));
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src2 = 0U;
        }
    } else if ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
        if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src1 = 0U;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_src1 = 9U;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src2 = 0U;
        } else if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src1 = 0U;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_src1 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__valid_e;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src2 = 0U;
        } else {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src1 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__C9;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_src1 = 9U;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src2 
                = (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_M) 
                    + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_m)) 
                   + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt));
        }
    } else if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
        if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src1 
                = (0xffU & (vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                            - (IData)(2U)));
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_src1 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__EF;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src2 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_H;
        } else {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src1 = 0U;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_src1 = 0U;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src2 = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src1 = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_src1 = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src2 = 0U;
    } else {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src1 = 9U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_src1 
            = (0xffU & ((vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                         >> 8U) - (IData)(2U)));
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src2 
            = ((4U > (0x3ffU & (vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM1 
                                >> 0xaU))) ? 4U : (0x3ffU 
                                                   & (vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM1 
                                                      >> 0xaU)));
    }
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_res 
        = (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src1 
           * vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src2);
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_src2 
        = ((0x10U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
            ? ((8U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                ? 0U : ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                         ? 0U : ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                  ? 0U : ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                           ? 0U : (
                                                   ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_M) 
                                                    + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_m)) 
                                                   + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt))))))
            : ((8U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                ? ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                    ? ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                        ? ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                            ? ((2U & vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE)
                                ? (0x7fU & ((vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                                             - (IData)(2U)) 
                                            >> 1U))
                                : (0xffU & (vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                                            - (IData)(2U))))
                            : (0xffU & (vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                                        - (IData)(2U))))
                        : ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                            ? 0U : (0xffU & (vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                                             - (IData)(2U)))))
                    : ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                        ? (0xffU & (vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                                    - (IData)(2U)))
                        : ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_h) 
                           - (0U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_H)))))
                : ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                    ? ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                        ? (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt)
                        : ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                            ? (0xffU & (vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                                        - (IData)(2U)))
                            : (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_C)))
                    : ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                        ? ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                            ? ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_C) 
                               + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_c))
                            : 0U) : ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                      ? 0U : (0xffU 
                                              & (vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                                                 - (IData)(2U))))))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_res 
        = (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_src1 
           * vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_src2);
    vlSelfRef.asic_wrapper__DOT__glb_mux = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_2) 
                                            | ((2U 
                                                == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                                               | (0x10U 
                                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__mc_valid 
        = ((((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
               == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y)) 
              & (0xbU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
             << 5U) | (((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                          == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y)) 
                         & (0xbU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
                        << 4U) | ((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                    == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y)) 
                                   & (0xbU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
                                  << 3U))) | (((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                                 == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y)) 
                                                & (0xbU 
                                                   == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
                                               << 2U) 
                                              | (((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                                    == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y)) 
                                                   & (0xbU 
                                                      == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
                                                  << 1U) 
                                                 | (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                                     == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y)) 
                                                    & (0xbU 
                                                       == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0 
        = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id) 
           == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__opsum_tag_Y));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0 
        = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id) 
           == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__opsum_tag_Y));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0 
        = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id) 
           == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__opsum_tag_Y));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0 
        = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id) 
           == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__opsum_tag_Y));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0 
        = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id) 
           == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__opsum_tag_Y));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0 
        = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id) 
           == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__opsum_tag_Y));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__ReLU_Qint8_0__DOT__relu_out 
        = ((0x80U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__relu_data_in))
            ? (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__relu_data_in)
            : 0x80U);
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ppu_data_out 
        = ((4U & vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE)
            ? (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__ReLU_Qint8_0__DOT__relu_out)
            : (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__relu_data_in));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid 
        = ((~ (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__valid_mask)) 
           & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__mc_valid));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__PPU_count_F 
        = ((2U & vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE)
            ? ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PPU))
                ? 0U : ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PPU))
                         ? ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PPU))
                             ? (1U | (0xfeU & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W) 
                                               << 1U)))
                             : (0xfeU & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W) 
                                         << 1U))) : 
                        ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PPU))
                          ? (1U | (0xfeU & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W) 
                                            << 1U)))
                          : (0xfeU & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W) 
                                      << 1U))))) : (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W));
    vlSelfRef.asic_wrapper__DOT__GLB_A_asic = ((0x10U 
                                                & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                ? 0U
                                                : (0xffffU 
                                                   & ((8U 
                                                       & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                          ? 
                                                         (vlSelfRef.asic_wrapper__DOT__ASIC_GLB_OFMAP_ADDR 
                                                          + 
                                                          (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W) 
                                                            + vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_res) 
                                                           + vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_res))
                                                          : 
                                                         (vlSelfRef.asic_wrapper__DOT__ASIC_GLB_OFMAP_ADDR 
                                                          + 
                                                          (0xfffcU 
                                                           & ((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__PPU_count_F) 
                                                                + vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_res) 
                                                               + vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_res) 
                                                              << 2U))))
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                          ? 0U
                                                          : 
                                                         (vlSelfRef.asic_wrapper__DOT__ASIC_GLB_OFMAP_ADDR 
                                                          + 
                                                          (0xfffcU 
                                                           & ((((0xffU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W) 
                                                                    - (IData)(2U))) 
                                                                + vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_res) 
                                                               + vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_res) 
                                                              << 2U)))))
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                         ? 
                                                        ((0U 
                                                          == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_C))
                                                          ? 
                                                         (vlSelfRef.asic_wrapper__DOT__ASIC_GLB_BIAS_ADDR 
                                                          + 
                                                          (0xffcU 
                                                           & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_m) 
                                                               + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt)) 
                                                              << 2U)))
                                                          : 
                                                         (vlSelfRef.asic_wrapper__DOT__ASIC_GLB_OFMAP_ADDR 
                                                          + 
                                                          (0xfffcU 
                                                           & ((((0xffU 
                                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W) 
                                                                    - (IData)(2U))) 
                                                                + vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_res) 
                                                               + vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_res) 
                                                              << 2U))))
                                                         : 
                                                        (0xfffcU 
                                                         & ((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W) 
                                                              - (IData)(1U)) 
                                                             + vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_res) 
                                                            << 2U))))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                         ? 
                                                        (vlSelfRef.asic_wrapper__DOT__ASIC_GLB_FILTER_ADDR 
                                                         + 
                                                         (0xfffcU 
                                                          & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_filt) 
                                                              + vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_res) 
                                                             << 2U)))
                                                         : 0U)
                                                        : 0U))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid 
        = ((~ (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__valid_mask)) 
           & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__mc_valid));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out 
        = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0) 
           & (0xcU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out 
        = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0) 
           & (0xcU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__ready_out 
        = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0) 
           & (0xcU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out 
        = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0) 
           & (0xcU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out 
        = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0) 
           & (0xcU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__ready_out 
        = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0) 
           & (0xcU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)));
    if (vlSelfRef.asic_wrapper__DOT__glb_mux) {
        vlSelfRef.asic_wrapper__DOT__GLB_WEB = (1U 
                                                & (IData)(vlSelfRef.asic_wrapper__DOT__GLB_WEB_dma));
        vlSelfRef.asic_wrapper__DOT__GLB_EN = (1U & (IData)(vlSelfRef.asic_wrapper__DOT__GLB_EN_dma));
        vlSelfRef.asic_wrapper__DOT__GLB_MODE = (1U 
                                                 & (IData)(vlSelfRef.asic_wrapper__DOT__GLB_MODE_dma));
        vlSelfRef.asic_wrapper__DOT__GLB_A = (((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_word) 
                                               << 2U) 
                                              | (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_bias));
    } else {
        vlSelfRef.asic_wrapper__DOT__GLB_WEB = (1U 
                                                & (~ 
                                                   ((0xcU 
                                                     == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                                                    | (0xfU 
                                                       == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)))));
        vlSelfRef.asic_wrapper__DOT__GLB_EN = (1U & 
                                               (~ (
                                                   (8U 
                                                    == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                                                   | ((9U 
                                                       == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                                                      | ((6U 
                                                          == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                                                         | ((7U 
                                                             == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                                                            | ((0xaU 
                                                                == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                                                               | ((0xbU 
                                                                   == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                                                                  | ((0xcU 
                                                                      == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                                                                     | ((0xeU 
                                                                         == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                                                                        | (0xfU 
                                                                           == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))))))))))));
        vlSelfRef.asic_wrapper__DOT__GLB_MODE = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_2) 
                                                     | (0xfU 
                                                        == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)))));
        vlSelfRef.asic_wrapper__DOT__GLB_A = vlSelfRef.asic_wrapper__DOT__GLB_A_asic;
    }
    vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB = 
        ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_EN)
          ? 0xffffffffU : ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_MODE)
                            ? 0U : ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__GLB_A))
                                     ? ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__GLB_A))
                                         ? 0xffffffU
                                         : 0xff00ffffU)
                                     : ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__GLB_A))
                                         ? 0xffff00ffU
                                         : 0xffffff00U))));
    vlSelfRef.asic_wrapper__DOT__GLB_DO = ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_MODE)
                                            ? vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__latched_DO
                                            : ((2U 
                                                & (IData)(vlSelfRef.asic_wrapper__DOT__GLB_A))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.asic_wrapper__DOT__GLB_A))
                                                    ? 
                                                   (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__latched_DO 
                                                    >> 0x18U)
                                                    : 
                                                   (0xffU 
                                                    & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__latched_DO 
                                                       >> 0x10U)))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.asic_wrapper__DOT__GLB_A))
                                                    ? 
                                                   (0xffU 
                                                    & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__latched_DO 
                                                       >> 8U))
                                                    : 
                                                   (0xffU 
                                                    & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__latched_DO))));
    vlSelfRef.asic_wrapper__DOT__GLB_DO_asic = ((IData)(vlSelfRef.asic_wrapper__DOT__glb_mux)
                                                 ? 0U
                                                 : vlSelfRef.asic_wrapper__DOT__GLB_DO);
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__post_quant_0__DOT__data_shifted 
        = VL_SHIFTRS_III(32,32,6, vlSelfRef.asic_wrapper__DOT__GLB_DO_asic, 
                         (0x3fU & (vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE 
                                   >> 4U)));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__post_quant_0__DOT__overflow_pos 
        = ((~ (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__post_quant_0__DOT__data_shifted 
               >> 0x1fU)) & (0U != (0xffffffU & (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__post_quant_0__DOT__data_shifted 
                                                 >> 7U))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__post_quant_0__DOT__overflow_neg 
        = ((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__post_quant_0__DOT__data_shifted 
            >> 0x1fU) & (~ (IData)((0xffffffU == (0xffffffU 
                                                  & (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__post_quant_0__DOT__data_shifted 
                                                     >> 7U))))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__pq_data_out 
        = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__post_quant_0__DOT__overflow_pos)
            ? 0xffU : ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__post_quant_0__DOT__overflow_neg)
                        ? 0U : ((0x80U & ((~ (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__post_quant_0__DOT__data_shifted 
                                              >> 7U)) 
                                          << 7U)) | 
                                (0x7fU & vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__post_quant_0__DOT__data_shifted))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray 
        = (((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
            & ((0U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W)) 
               | (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W) 
                   == (0xffU & ((vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                                 >> 8U) - (IData)(1U)))) 
                  | (((0U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_E)) 
                      & (0U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_h))) 
                     | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_E_reset) 
                        & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_h_reset))))))
            ? 0x80808080U : vlSelfRef.asic_wrapper__DOT__GLB_DO_asic);
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__Comparator_Qint8_0__DOT__bigger 
        = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__Comparator_Qint8_0__DOT__data_max) 
           < (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__pq_data_out));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__Comparator_Qint8_0__DOT__data_max_next 
        = (((0xeU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
            & ((0U != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PPU)) 
               & (vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE 
                  >> 1U))) ? (((0xeU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                               & ((1U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PPU)) 
                                  & (vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE 
                                     >> 1U))) ? (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__pq_data_out)
                               : ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__Comparator_Qint8_0__DOT__bigger)
                                   ? (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__pq_data_out)
                                   : (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__Comparator_Qint8_0__DOT__data_max)))
            : (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__Comparator_Qint8_0__DOT__data_max));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[1U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[2U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[3U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[4U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[5U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[6U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[7U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
    if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config))) {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[8U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[9U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[1U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xaU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[2U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xbU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[3U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xcU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[4U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xdU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[5U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xeU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[6U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xfU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[7U];
    } else {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[8U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[9U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xaU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xbU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xcU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xdU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xeU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xfU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
    }
    if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config))) {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x10U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[8U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x11U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[9U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x12U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0xaU];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x13U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0xbU];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x14U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0xcU];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x15U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0xdU];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x16U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0xeU];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x17U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0xfU];
    } else {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x10U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x11U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x12U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x13U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x14U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x15U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x16U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x17U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
    }
    if ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config))) {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x18U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x10U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x19U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x11U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1aU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x12U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1bU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x13U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1cU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x14U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1dU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x15U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1eU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x16U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1fU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x17U];
    } else {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x18U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x19U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1aU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1bU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1cU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1dU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1eU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1fU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
    }
    if ((8U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config))) {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x20U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x18U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x21U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x19U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x22U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x1aU];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x23U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x1bU];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x24U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x1cU];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x25U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x1dU];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x26U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x1eU];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x27U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x1fU];
    } else {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x20U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x21U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x22U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x23U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x24U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x25U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x26U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x27U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
    }
    if ((0x10U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config))) {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x28U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x20U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x29U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x21U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2aU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x22U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2bU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x23U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2cU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x24U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2dU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x25U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2eU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x26U];
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2fU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum[0x27U];
    } else {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x28U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x29U] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2aU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2bU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2cU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2dU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2eU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2fU] 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
    }
}

VL_INLINE_OPT void Vasic_wrapper___024root___nba_sequent__TOP__7(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___nba_sequent__TOP__7\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
        = ((0xffffffffffULL & vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready) 
           | ((QData)((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.master_ready)) 
              << 0x28U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__mc_ready 
        = (((((((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                 ? 0U : 7U) != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
              | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.master_ready)) 
             << 5U) | ((((((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                            ? 0U : 7U) != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                         | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.master_ready)) 
                        << 4U) | (((((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                      ? 0U : 7U) != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                   | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.master_ready)) 
                                  << 3U))) | ((((((9U 
                                                   == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                   ? 0U
                                                   : 7U) 
                                                 != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.master_ready)) 
                                               << 2U) 
                                              | ((((((9U 
                                                      == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                      ? 0U
                                                      : 7U) 
                                                    != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                                   | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.master_ready)) 
                                                  << 1U) 
                                                 | ((((9U 
                                                       == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                       ? 0U
                                                       : 7U) 
                                                     != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                                    | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.master_ready)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__mc_ready 
        = ((((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y) 
               != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
              | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.master_ready)) 
             << 5U) | (((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y) 
                          != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                         | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.master_ready)) 
                        << 4U) | ((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y) 
                                    != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                   | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.master_ready)) 
                                  << 3U))) | (((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y) 
                                                 != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.master_ready)) 
                                               << 2U) 
                                              | (((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y) 
                                                    != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                                   | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.master_ready)) 
                                                  << 1U) 
                                                 | (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y) 
                                                     != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                                    | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.master_ready)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
        = ((0xffffffffff00ULL & vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid) 
           | (IData)((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid)));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_ipsum_valid 
        = (((QData)((IData)((((((~ (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__valid_mask)) 
                                & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__mc_valid)) 
                               << 0x18U) | (((~ (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__valid_mask)) 
                                             & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__mc_valid)) 
                                            << 0x10U)) 
                             | ((((~ (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__valid_mask)) 
                                  & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__mc_valid)) 
                                 << 8U) | ((~ (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__valid_mask)) 
                                           & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__mc_valid)))))) 
            << 0x10U) | (QData)((IData)(((((~ (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__valid_mask)) 
                                           & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__mc_valid)) 
                                          << 8U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__mc_ready 
        = ((((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y) 
               != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
              | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.master_ready)) 
             << 5U) | (((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y) 
                          != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                         | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.master_ready)) 
                        << 4U) | ((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y) 
                                    != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                   | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.master_ready)) 
                                  << 3U))) | (((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y) 
                                                 != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.master_ready)) 
                                               << 2U) 
                                              | (((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y) 
                                                    != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                                   | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.master_ready)) 
                                                  << 1U) 
                                                 | (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y) 
                                                     != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                                    | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.master_ready)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_ready 
        = (((QData)((IData)(((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.master_ready) 
                               << 0x18U) | ((((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out)) 
                                               << 0x17U) 
                                              | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                  & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out)) 
                                                 << 0x16U)) 
                                             | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                  & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out)) 
                                                 << 0x15U) 
                                                | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                    & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out)) 
                                                   << 0x14U))) 
                                            | (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                  & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out)) 
                                                 << 0x13U) 
                                                | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                    & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out)) 
                                                   << 0x12U)) 
                                               | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                    & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out)) 
                                                   << 0x11U) 
                                                  | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                      & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out)) 
                                                     << 0x10U))))) 
                             | (((((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                     & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out)) 
                                    << 0xfU) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out)) 
                                                << 0xeU)) 
                                  | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                       & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out)) 
                                      << 0xdU) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                   & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out)) 
                                                  << 0xcU))) 
                                 | (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                       & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out)) 
                                      << 0xbU) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                   & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out)) 
                                                  << 0xaU)) 
                                    | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                         & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out)) 
                                        << 9U) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                   & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out)) 
                                                  << 8U)))) 
                                | ((((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                       & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__ready_out)) 
                                      << 7U) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__ready_out)) 
                                                << 6U)) 
                                    | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                         & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__ready_out)) 
                                        << 5U) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                   & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__ready_out)) 
                                                  << 4U))) 
                                   | (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                         & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__ready_out)) 
                                        << 3U) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                   & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__ready_out)) 
                                                  << 2U)) 
                                      | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                           & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__ready_out)) 
                                          << 1U) | 
                                         ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                          & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__ready_out))))))))) 
            << 0x10U) | (QData)((IData)((((((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                              & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out)) 
                                             << 0xfU) 
                                            | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out)) 
                                               << 0xeU)) 
                                           | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out)) 
                                               << 0xdU) 
                                              | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                  & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out)) 
                                                 << 0xcU))) 
                                          | (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out)) 
                                               << 0xbU) 
                                              | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                  & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out)) 
                                                 << 0xaU)) 
                                             | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                  & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out)) 
                                                 << 9U) 
                                                | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                    & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out)) 
                                                   << 8U)))) 
                                         | ((((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out)) 
                                               << 7U) 
                                              | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                  & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out)) 
                                                 << 6U)) 
                                             | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                  & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out)) 
                                                 << 5U) 
                                                | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                    & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out)) 
                                                   << 4U))) 
                                            | (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                  & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                    & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out)) 
                                                   << 2U)) 
                                               | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                    & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out)) 
                                                   << 1U) 
                                                  | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                     & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out)))))))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__mc_valid 
        = (((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0) 
              & (0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__mc_valid))) 
             << 5U) | ((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0) 
                         & (0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__mc_valid))) 
                        << 4U) | (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0) 
                                   & (0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__mc_valid))) 
                                  << 3U))) | ((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0) 
                                                & (0U 
                                                   != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__mc_valid))) 
                                               << 2U) 
                                              | ((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0) 
                                                   & (0U 
                                                      != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__mc_valid))) 
                                                  << 1U) 
                                                 | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0) 
                                                    & (0U 
                                                       != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__mc_valid))))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PEA_ifmap_ready 
        = (0x3fU == ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__mc_ready) 
                     | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__valid_mask)));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PEA_filter_ready 
        = (0x3fU == ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__mc_ready) 
                     | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__valid_mask)));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
        = ((0xffffff0000ffULL & vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid) 
           | ((QData)((IData)(((0xff00U & (((2U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config))
                                             ? (IData)(
                                                       (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_valid 
                                                        >> 8U))
                                             : (IData)(
                                                       (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_ipsum_valid 
                                                        >> 0x10U))) 
                                           << 8U)) 
                               | (0xffU & ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config))
                                            ? (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_valid)
                                            : (IData)(
                                                      (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_ipsum_valid 
                                                       >> 8U))))))) 
              << 8U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
        = ((0xff0000ffffffULL & vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid) 
           | ((QData)((IData)(((0xff00U & (((8U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config))
                                             ? (IData)(
                                                       (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_valid 
                                                        >> 0x18U))
                                             : (IData)(
                                                       (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_ipsum_valid 
                                                        >> 0x20U))) 
                                           << 8U)) 
                               | (0xffU & ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config))
                                            ? (IData)(
                                                      (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_valid 
                                                       >> 0x10U))
                                            : (IData)(
                                                      (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_ipsum_valid 
                                                       >> 0x18U))))))) 
              << 0x18U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
        = ((0xffffffffffULL & vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid) 
           | ((QData)((IData)((0xffU & ((0x10U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config))
                                         ? (IData)(
                                                   (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_valid 
                                                    >> 0x20U))
                                         : (IData)(
                                                   (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_ipsum_valid 
                                                    >> 0x28U)))))) 
              << 0x28U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PEA_ipsum_ready 
        = (0x3fU == ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__mc_ready) 
                     | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__valid_mask)));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
        = ((0xffffffff0000ULL & vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready) 
           | (IData)((IData)(((0xff00U & (((2U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config))
                                            ? (IData)(
                                                      (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_ready 
                                                       >> 0x10U))
                                            : (IData)(
                                                      (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_ready 
                                                       >> 8U))) 
                                          << 8U)) | 
                              (0xffU & ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config))
                                         ? (IData)(
                                                   (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_ready 
                                                    >> 8U))
                                         : (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_ready)))))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
        = ((0xffff0000ffffULL & vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready) 
           | ((QData)((IData)(((0xff00U & (((8U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config))
                                             ? (IData)(
                                                       (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_ready 
                                                        >> 0x20U))
                                             : (IData)(
                                                       (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_ready 
                                                        >> 0x18U))) 
                                           << 8U)) 
                               | (0xffU & ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config))
                                            ? (IData)(
                                                      (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_ready 
                                                       >> 0x18U))
                                            : (IData)(
                                                      (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_ready 
                                                       >> 0x10U))))))) 
              << 0x10U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
        = ((0xff00ffffffffULL & vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready) 
           | ((QData)((IData)((0xffU & ((0x10U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config))
                                         ? (IData)(
                                                   (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_ready 
                                                    >> 0x28U))
                                         : (IData)(
                                                   (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_ready 
                                                    >> 0x20U)))))) 
              << 0x20U));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__ns 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs;
    if (((((((((0U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
               | (1U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
              | (2U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
             | (3U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
            | (4U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
           | (5U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
          | (6U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
         | (7U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)))) {
        if ((0U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            if ((1U & vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE)) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__ns = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            if ((((7U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_x)) 
                  & (2U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y1))) 
                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y2))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__ns = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            if ((3U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__ns = 3U;
            }
        } else if ((3U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            if (((3U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state)) 
                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_c_reset))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__ns = 4U;
            }
        } else if ((4U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            if (((3U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state)) 
                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt_reset))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__ns = 5U;
            }
        } else if ((5U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__ns = 6U;
        } else if ((6U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__ns = 7U;
        } else if ((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PEA_filter_ready) 
                     & (8U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_filt))) 
                    & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt_reset))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__ns = 8U;
        } else if (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PEA_filter_ready) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__ns = 6U;
        }
    } else if (((((((((8U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                      | (9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
                     | (0xaU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
                    | (0xbU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
                   | (0xcU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
                  | (0xeU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
                 | (0xfU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) 
                | (0x10U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)))) {
        if ((8U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__ns = 9U;
        } else if ((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            if ((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PEA_ifmap_ready) 
                  & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_h_reset)) 
                 & (1U < (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W)))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__ns = 0xaU;
            } else if (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PEA_ifmap_ready) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__ns = 8U;
            }
        } else if ((0xaU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__ns = 0xbU;
        } else if ((0xbU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            if ((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PEA_ipsum_ready) 
                  & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt_reset)) 
                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e_reset))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__ns = 0xcU;
            } else if (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PEA_ipsum_ready) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__ns = 0xaU;
            }
        } else if ((0xcU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            if ((((0U != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__mc_valid)) 
                  & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt_reset)) 
                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e_reset))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__ns 
                    = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_F_reset)
                        ? ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_C_reset)
                            ? 0xeU : 0xdU) : 8U);
            }
        } else if ((0xeU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            if (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PPU_reset) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__ns = 0xfU;
            }
        } else if ((0xfU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__ns 
                = (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_F_reset) 
                    & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e_reset) 
                       & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt_reset)))
                    ? 0x10U : 0xeU);
        } else if (((3U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state)) 
                    & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt_reset))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__ns = 0xdU;
        }
    } else if ((0xdU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__ns 
            = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_m_reset)
                ? (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_C_reset) 
                    & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_E_reset))
                    ? ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_M_reset)
                        ? 0x11U : 2U) : 3U) : 4U);
    } else if ((0x11U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
        if ((1U & (~ vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__ns = 0U;
        }
    }
}
