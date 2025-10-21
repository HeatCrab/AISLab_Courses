// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasic_wrapper.h for the primary calling header

#include "Vasic_wrapper__pch.h"
#include "Vasic_wrapper___024root.h"

VL_ATTR_COLD void Vasic_wrapper___024root___eval_static(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_static\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vasic_wrapper___024root___eval_initial__TOP(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_initial__TOP\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ARBURST_M = 1U;
    vlSelfRef.ARSIZE_M = 2U;
    vlSelfRef.ARID_M = 0U;
    vlSelfRef.WSTRB_M = 0xfU;
    vlSelfRef.AWID_M = 0U;
    vlSelfRef.AWBURST_M = 1U;
    vlSelfRef.AWSIZE_M = 2U;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data[0U] = 0U;
}

VL_ATTR_COLD void Vasic_wrapper___024root___eval_final(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_final\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasic_wrapper___024root___dump_triggers__stl(Vasic_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vasic_wrapper___024root___eval_phase__stl(Vasic_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vasic_wrapper___024root___eval_settle(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_settle\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vasic_wrapper___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("ASIC/asic_wrapper.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vasic_wrapper___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasic_wrapper___024root___dump_triggers__stl(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___dump_triggers__stl\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] asic_wrapper.asic_0.PE_array.GON.Y_Bus.select_data)\n");
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] asic_wrapper.asic_0.PE_array.GON.GON_XBUS[5].XBus.select_data)\n");
    }
    if ((8ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] asic_wrapper.asic_0.PE_array.GON.GON_XBUS[4].XBus.select_data)\n");
    }
    if ((0x10ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] asic_wrapper.asic_0.PE_array.GON.GON_XBUS[3].XBus.select_data)\n");
    }
    if ((0x20ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] asic_wrapper.asic_0.PE_array.GON.GON_XBUS[2].XBus.select_data)\n");
    }
    if ((0x40ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] asic_wrapper.asic_0.PE_array.GON.GON_XBUS[1].XBus.select_data)\n");
    }
    if ((0x80ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] asic_wrapper.asic_0.PE_array.GON.GON_XBUS[0].XBus.select_data)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vasic_wrapper___024root___eval_triggers__stl(Vasic_wrapper___024root* vlSelf);
VL_ATTR_COLD void Vasic_wrapper___024root___eval_stl(Vasic_wrapper___024root* vlSelf);

VL_ATTR_COLD bool Vasic_wrapper___024root___eval_phase__stl(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_phase__stl\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vasic_wrapper___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vasic_wrapper___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasic_wrapper___024root___dump_triggers__ico(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___dump_triggers__ico\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasic_wrapper___024root___dump_triggers__act(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___dump_triggers__act\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] asic_wrapper.asic_0.PE_array.GON.Y_Bus.select_data)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] asic_wrapper.asic_0.PE_array.GON.GON_XBUS[5].XBus.select_data)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] asic_wrapper.asic_0.PE_array.GON.GON_XBUS[4].XBus.select_data)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] asic_wrapper.asic_0.PE_array.GON.GON_XBUS[3].XBus.select_data)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] asic_wrapper.asic_0.PE_array.GON.GON_XBUS[2].XBus.select_data)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] asic_wrapper.asic_0.PE_array.GON.GON_XBUS[1].XBus.select_data)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] asic_wrapper.asic_0.PE_array.GON.GON_XBUS[0].XBus.select_data)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(posedge ACLK)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasic_wrapper___024root___dump_triggers__nba(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___dump_triggers__nba\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] asic_wrapper.asic_0.PE_array.GON.Y_Bus.select_data)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] asic_wrapper.asic_0.PE_array.GON.GON_XBUS[5].XBus.select_data)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] asic_wrapper.asic_0.PE_array.GON.GON_XBUS[4].XBus.select_data)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] asic_wrapper.asic_0.PE_array.GON.GON_XBUS[3].XBus.select_data)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] asic_wrapper.asic_0.PE_array.GON.GON_XBUS[2].XBus.select_data)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] asic_wrapper.asic_0.PE_array.GON.GON_XBUS[1].XBus.select_data)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] asic_wrapper.asic_0.PE_array.GON.GON_XBUS[0].XBus.select_data)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(posedge ACLK)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vasic_wrapper___024root____Vm_traceActivitySetAll(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root____Vm_traceActivitySetAll\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
    vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xbU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xcU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xdU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xeU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xfU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x10U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x11U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x12U] = 1U;
}

VL_ATTR_COLD void Vasic_wrapper___024root___ctor_var_reset(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___ctor_var_reset\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->ACLK = VL_RAND_RESET_I(1);
    vlSelf->ARESETn = VL_RAND_RESET_I(1);
    vlSelf->ASIC_interrupt = VL_RAND_RESET_I(1);
    vlSelf->AWID_S = VL_RAND_RESET_I(8);
    vlSelf->AWADDR_S = VL_RAND_RESET_I(32);
    vlSelf->AWLEN_S = VL_RAND_RESET_I(8);
    vlSelf->AWSIZE_S = VL_RAND_RESET_I(3);
    vlSelf->AWBURST_S = VL_RAND_RESET_I(2);
    vlSelf->AWVALID_S = VL_RAND_RESET_I(1);
    vlSelf->AWREADY_S = VL_RAND_RESET_I(1);
    vlSelf->WDATA_S = VL_RAND_RESET_I(32);
    vlSelf->WSTRB_S = VL_RAND_RESET_I(4);
    vlSelf->WLAST_S = VL_RAND_RESET_I(1);
    vlSelf->WVALID_S = VL_RAND_RESET_I(1);
    vlSelf->WREADY_S = VL_RAND_RESET_I(1);
    vlSelf->BID_S = VL_RAND_RESET_I(8);
    vlSelf->BRESP_S = VL_RAND_RESET_I(2);
    vlSelf->BVALID_S = VL_RAND_RESET_I(1);
    vlSelf->BREADY_S = VL_RAND_RESET_I(1);
    vlSelf->ARID_S = VL_RAND_RESET_I(8);
    vlSelf->ARADDR_S = VL_RAND_RESET_I(32);
    vlSelf->ARLEN_S = VL_RAND_RESET_I(8);
    vlSelf->ARSIZE_S = VL_RAND_RESET_I(3);
    vlSelf->ARBURST_S = VL_RAND_RESET_I(2);
    vlSelf->ARVALID_S = VL_RAND_RESET_I(1);
    vlSelf->ARREADY_S = VL_RAND_RESET_I(1);
    vlSelf->RID_S = VL_RAND_RESET_I(8);
    vlSelf->RDATA_S = VL_RAND_RESET_I(32);
    vlSelf->RRESP_S = VL_RAND_RESET_I(2);
    vlSelf->RLAST_S = VL_RAND_RESET_I(1);
    vlSelf->RVALID_S = VL_RAND_RESET_I(1);
    vlSelf->RREADY_S = VL_RAND_RESET_I(1);
    vlSelf->AWID_M = VL_RAND_RESET_I(4);
    vlSelf->AWADDR_M = VL_RAND_RESET_I(32);
    vlSelf->AWLEN_M = VL_RAND_RESET_I(8);
    vlSelf->AWSIZE_M = VL_RAND_RESET_I(3);
    vlSelf->AWBURST_M = VL_RAND_RESET_I(2);
    vlSelf->AWVALID_M = VL_RAND_RESET_I(1);
    vlSelf->AWREADY_M = VL_RAND_RESET_I(1);
    vlSelf->WDATA_M = VL_RAND_RESET_I(32);
    vlSelf->WSTRB_M = VL_RAND_RESET_I(4);
    vlSelf->WLAST_M = VL_RAND_RESET_I(1);
    vlSelf->WVALID_M = VL_RAND_RESET_I(1);
    vlSelf->WREADY_M = VL_RAND_RESET_I(1);
    vlSelf->BID_M = VL_RAND_RESET_I(4);
    vlSelf->BRESP_M = VL_RAND_RESET_I(2);
    vlSelf->BVALID_M = VL_RAND_RESET_I(1);
    vlSelf->BREADY_M = VL_RAND_RESET_I(1);
    vlSelf->ARID_M = VL_RAND_RESET_I(4);
    vlSelf->ARADDR_M = VL_RAND_RESET_I(32);
    vlSelf->ARLEN_M = VL_RAND_RESET_I(8);
    vlSelf->ARSIZE_M = VL_RAND_RESET_I(3);
    vlSelf->ARBURST_M = VL_RAND_RESET_I(2);
    vlSelf->ARVALID_M = VL_RAND_RESET_I(1);
    vlSelf->ARREADY_M = VL_RAND_RESET_I(1);
    vlSelf->RID_M = VL_RAND_RESET_I(4);
    vlSelf->RDATA_M = VL_RAND_RESET_I(32);
    vlSelf->RRESP_M = VL_RAND_RESET_I(2);
    vlSelf->RLAST_M = VL_RAND_RESET_I(1);
    vlSelf->RVALID_M = VL_RAND_RESET_I(1);
    vlSelf->RREADY_M = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__GLB_EN = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__GLB_EN_dma = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__GLB_WEB = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__GLB_WEB_dma = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__GLB_MODE = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__GLB_MODE_dma = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__GLB_A = VL_RAND_RESET_I(16);
    vlSelf->asic_wrapper__DOT__GLB_A_asic = VL_RAND_RESET_I(16);
    vlSelf->asic_wrapper__DOT__GLB_DI = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__GLB_DO = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__GLB_DO_asic = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__glb_mux = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__DMA_MODE = VL_RAND_RESET_I(2);
    vlSelf->asic_wrapper__DOT__cs_slave = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__cs_slave_next = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__addr_S_reg = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__addr_S_reg_next = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__BID_S_next = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__RID_S_next = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__write_error = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__write_error_next = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__ASIC_ENABLE = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_ENABLE_next = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_MAPPING_PARAM = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_MAPPING_PARAM_next = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_SHAPE_PARAM1 = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_SHAPE_PARAM1_next = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_SHAPE_PARAM2 = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_SHAPE_PARAM2_next = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_IFMAP_ADDR = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_IFMAP_ADDR_next = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_FILTER_ADDR = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_FILTER_ADDR_next = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_BIAS_ADDR = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_BIAS_ADDR_next = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_OPSUM_ADDR = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_OPSUM_ADDR_next = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_GLB_FILTER_ADDR = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_GLB_FILTER_ADDR_next = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_GLB_OFMAP_ADDR = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_GLB_OFMAP_ADDR_next = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_GLB_BIAS_ADDR = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_GLB_BIAS_ADDR_next = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_IFMAP_LEN = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_IFMAP_LEN_next = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_OFMAP_LEN = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__ASIC_OFMAP_LEN_next = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__GLB_0__DOT__BWEB = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__GLB_0__DOT__SRAM_DI = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    vlSelf->asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__latched_DO = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__DMAEN = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__DMAGLB_ADDR = VL_RAND_RESET_I(16);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__DMADRAM_ADDR = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__DMA_WORD_LEN = VL_RAND_RESET_I(16);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__DMABYTE_BIAS = VL_RAND_RESET_I(2);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__DMAMODE = VL_RAND_RESET_I(2);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__DMADIR = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__dram_addr = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__burst_len = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__AXI_enable = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__glb_addr = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__GLB_enable = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT____Vcellout__DMA_controller_0__glb_addr = VL_RAND_RESET_I(16);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT____Vcellinp__DMA_controller_0__AXI_done = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__FIFO_push_i_R = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__FIFO_pop_i_G = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__FIFO_push_i_G = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__FIFO_pop_i_W = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__FIFO_data_o = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__FIFO_full = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__FIFO_empty = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT____Vcellinp__DMA_FIFO_0__pop_i = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT____Vcellinp__DMA_FIFO_0__push_i = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__cs_master_R = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__cs_master_R_next = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__cs_master_W = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__cs_master_W_next = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__cs_glb = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__cs_glb_next = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__burst_count = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__burst_count_next = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__GLB_A_word = VL_RAND_RESET_I(14);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__GLB_A_word_next = VL_RAND_RESET_I(14);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__GLB_A_bias = VL_RAND_RESET_I(2);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__GLB_A_bias_next = VL_RAND_RESET_I(2);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__counter_R = VL_RAND_RESET_I(14);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__counter_W = VL_RAND_RESET_I(14);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__counter_R_next = VL_RAND_RESET_I(14);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__counter_W_next = VL_RAND_RESET_I(14);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state = VL_RAND_RESET_I(2);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state_next = VL_RAND_RESET_I(2);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__word_len_reg = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__dram_addr_next = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__word_len_reg_next = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__glb_addr_next = VL_RAND_RESET_I(16);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__burst_len_next = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__write_ptr = VL_RAND_RESET_I(6);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__read_ptr = VL_RAND_RESET_I(6);
    vlSelf->asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count = VL_RAND_RESET_I(7);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__ifmap_XID_scan_in = VL_RAND_RESET_I(4);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__filter_XID_scan_in = VL_RAND_RESET_I(4);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__ipsum_XID_scan_in = VL_RAND_RESET_I(4);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__opsum_XID_scan_in = VL_RAND_RESET_I(4);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__set_YID = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__ifmap_YID_scan_in = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__ipsum_YID_scan_in = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__opsum_YID_scan_in = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_en = VL_RAND_RESET_Q(48);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_config = VL_RAND_RESET_I(11);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PEA_ifmap_ready = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X = VL_RAND_RESET_I(4);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PEA_filter_ready = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__filter_tag_X = VL_RAND_RESET_I(4);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__filter_tag_Y = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PEA_ipsum_ready = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X = VL_RAND_RESET_I(4);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__opsum_tag_X = VL_RAND_RESET_I(4);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__opsum_tag_Y = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__ppu_data_out = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__relu_sel = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_filter_ready = VL_RAND_RESET_Q(48);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_ipsum_valid = VL_RAND_RESET_Q(48);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid = VL_RAND_RESET_Q(48);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_ready = VL_RAND_RESET_Q(48);
    VL_RAND_RESET_W(1536, vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_ipsum_valid = VL_RAND_RESET_Q(48);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_ipsum_ready = VL_RAND_RESET_Q(48);
    VL_RAND_RESET_W(1536, vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_ipsum);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid = VL_RAND_RESET_Q(48);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_ready = VL_RAND_RESET_Q(48);
    VL_RAND_RESET_W(1536, vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_valid = VL_RAND_RESET_Q(48);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready = VL_RAND_RESET_Q(48);
    VL_RAND_RESET_W(1536, vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config = VL_RAND_RESET_I(5);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__scan_chain[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__valid_mask = VL_RAND_RESET_I(6);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__mc_valid = VL_RAND_RESET_I(6);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__mc_ready = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__ID_scan_chain[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__scan_chain[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__valid_mask = VL_RAND_RESET_I(6);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__mc_valid = VL_RAND_RESET_I(6);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__mc_ready = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__ID_scan_chain[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__scan_chain[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__valid_mask = VL_RAND_RESET_I(6);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__mc_valid = VL_RAND_RESET_I(6);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__mc_ready = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__ID_scan_chain[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(192, vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XBus_data);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XID_scan_chain[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__mc_valid = VL_RAND_RESET_I(6);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_valid = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__ID_scan_chain[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__ready_out = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__ready_out = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0 = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0 = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0 = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0 = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0 = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0 = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PPU__DOT__pq_data_out = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PPU__DOT__pq_data_out_reg = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PPU__DOT__relu_data_in = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PPU__DOT__post_quant_0__DOT__data_shifted = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PPU__DOT__post_quant_0__DOT__overflow_pos = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PPU__DOT__post_quant_0__DOT__overflow_neg = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PPU__DOT__Comparator_Qint8_0__DOT__data_max = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PPU__DOT__Comparator_Qint8_0__DOT__data_max_next = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PPU__DOT__Comparator_Qint8_0__DOT__bigger = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__PPU__DOT__ReLU_Qint8_0__DOT__relu_out = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs = VL_RAND_RESET_I(5);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__ns = VL_RAND_RESET_I(5);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_x = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y1 = VL_RAND_RESET_I(2);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y2 = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_c = VL_RAND_RESET_I(2);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_filt = VL_RAND_RESET_I(4);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__PPU_count_F = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_h = VL_RAND_RESET_I(4);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_H = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_m = VL_RAND_RESET_I(10);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_C = VL_RAND_RESET_I(10);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_E = VL_RAND_RESET_I(8);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_M = VL_RAND_RESET_I(10);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PPU = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt_reset = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_h_reset = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e_reset = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_F_reset = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_C_reset = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PPU_reset = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_m_reset = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_E_reset = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_M_reset = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_H_reset = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_c_reset = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__valid_e = VL_RAND_RESET_I(4);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_src1 = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_src2 = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_res = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src1 = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src2 = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_res = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul3_res = VL_RAND_RESET_I(32);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_str_m = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_str_f = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_str_e = VL_RAND_RESET_I(3);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__PP_filt = VL_RAND_RESET_I(6);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__eF = VL_RAND_RESET_I(12);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__EF = VL_RAND_RESET_I(16);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__C9 = VL_RAND_RESET_I(14);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_2 = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_9 = VL_RAND_RESET_I(10);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_10 = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_14 = VL_RAND_RESET_I(1);
    vlSelf->asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_15 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data__0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus____PVT__select_data__0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus____PVT__select_data__0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus____PVT__select_data__0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus____PVT__select_data__0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus____PVT__select_data__0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus____PVT__select_data__0[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data__1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus____PVT__select_data__1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus____PVT__select_data__1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus____PVT__select_data__1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus____PVT__select_data__1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus____PVT__select_data__1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus____PVT__select_data__1[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__ACLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 19; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
