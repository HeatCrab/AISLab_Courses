// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vasic_wrapper.h for the primary calling header

#include "Vasic_wrapper__pch.h"
#include "Vasic_wrapper___024root.h"

void Vasic_wrapper___024root___ico_sequent__TOP__0(Vasic_wrapper___024root* vlSelf);

void Vasic_wrapper___024root___eval_ico(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_ico\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vasic_wrapper___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vasic_wrapper___024root___ico_sequent__TOP__0(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___ico_sequent__TOP__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.AWREADY_S = 0U;
    vlSelfRef.ARREADY_S = 0U;
    vlSelfRef.RREADY_M = 0U;
    vlSelfRef.asic_wrapper__DOT__write_error_next = vlSelfRef.asic_wrapper__DOT__write_error;
    vlSelfRef.asic_wrapper__DOT__ASIC_GLB_OFMAP_ADDR_next 
        = vlSelfRef.asic_wrapper__DOT__ASIC_GLB_OFMAP_ADDR;
    vlSelfRef.asic_wrapper__DOT__ASIC_GLB_BIAS_ADDR_next 
        = vlSelfRef.asic_wrapper__DOT__ASIC_GLB_BIAS_ADDR;
    vlSelfRef.asic_wrapper__DOT__ASIC_GLB_FILTER_ADDR_next 
        = vlSelfRef.asic_wrapper__DOT__ASIC_GLB_FILTER_ADDR;
    vlSelfRef.asic_wrapper__DOT__ASIC_OPSUM_ADDR_next 
        = vlSelfRef.asic_wrapper__DOT__ASIC_OPSUM_ADDR;
    vlSelfRef.asic_wrapper__DOT__ASIC_BIAS_ADDR_next 
        = vlSelfRef.asic_wrapper__DOT__ASIC_BIAS_ADDR;
    vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE_next = vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE;
    vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM_next 
        = vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM;
    vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM1_next 
        = vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM1;
    vlSelfRef.asic_wrapper__DOT__ASIC_IFMAP_ADDR_next 
        = vlSelfRef.asic_wrapper__DOT__ASIC_IFMAP_ADDR;
    vlSelfRef.asic_wrapper__DOT__ASIC_IFMAP_LEN_next 
        = vlSelfRef.asic_wrapper__DOT__ASIC_IFMAP_LEN;
    vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2_next 
        = vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2;
    vlSelfRef.asic_wrapper__DOT__ASIC_OFMAP_LEN_next 
        = vlSelfRef.asic_wrapper__DOT__ASIC_OFMAP_LEN;
    vlSelfRef.asic_wrapper__DOT__ASIC_FILTER_ADDR_next 
        = vlSelfRef.asic_wrapper__DOT__ASIC_FILTER_ADDR;
    vlSelfRef.asic_wrapper__DOT__BID_S_next = vlSelfRef.BID_S;
    vlSelfRef.asic_wrapper__DOT__addr_S_reg_next = vlSelfRef.asic_wrapper__DOT__addr_S_reg;
    if ((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__cs_slave) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__cs_slave) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave)))) {
                if (vlSelfRef.AWVALID_S) {
                    vlSelfRef.AWREADY_S = 1U;
                    vlSelfRef.asic_wrapper__DOT__addr_S_reg_next 
                        = vlSelfRef.AWADDR_S;
                } else if (vlSelfRef.ARVALID_S) {
                    vlSelfRef.asic_wrapper__DOT__addr_S_reg_next 
                        = vlSelfRef.ARADDR_S;
                }
                if ((1U & (~ (IData)(vlSelfRef.AWVALID_S)))) {
                    if (vlSelfRef.ARVALID_S) {
                        vlSelfRef.ARREADY_S = 1U;
                    }
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
            if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
                vlSelfRef.asic_wrapper__DOT__write_error_next = 0U;
                if (vlSelfRef.BREADY_S) {
                    vlSelfRef.asic_wrapper__DOT__BID_S_next = 0U;
                }
            } else if (vlSelfRef.WVALID_S) {
                if ((0x10040000U != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                    if ((0x10040004U != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                        if ((0x10040008U != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                            if ((0x1004000cU != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                if ((0x10040010U != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                    if ((0x10040014U 
                                         != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                        if ((0x10040018U 
                                             != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                            if ((0x1004001cU 
                                                 != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                if (
                                                    (0x10040020U 
                                                     != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                    if (
                                                        (0x10040024U 
                                                         != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                        if (
                                                            (0x10040028U 
                                                             != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                            if (
                                                                (0x1004002cU 
                                                                 != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                                if (
                                                                    (0x10040030U 
                                                                     != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                                    vlSelfRef.asic_wrapper__DOT__write_error_next = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave)))) {
                if (vlSelfRef.WVALID_S) {
                    if ((0x10040000U != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                        if ((0x10040004U != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                            if ((0x10040008U != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                if ((0x1004000cU != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                    if ((0x10040010U 
                                         != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                        if ((0x10040014U 
                                             != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                            if ((0x10040018U 
                                                 != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                if (
                                                    (0x1004001cU 
                                                     != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                    if (
                                                        (0x10040020U 
                                                         != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                        if (
                                                            (0x10040024U 
                                                             == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                            vlSelfRef.asic_wrapper__DOT__ASIC_GLB_OFMAP_ADDR_next 
                                                                = vlSelfRef.WDATA_S;
                                                        }
                                                        if (
                                                            (0x10040024U 
                                                             != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                            if (
                                                                (0x10040028U 
                                                                 == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                                vlSelfRef.asic_wrapper__DOT__ASIC_GLB_BIAS_ADDR_next 
                                                                    = vlSelfRef.WDATA_S;
                                                            }
                                                            if (
                                                                (0x10040028U 
                                                                 != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                                if (
                                                                    (0x1004002cU 
                                                                     == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                                    vlSelfRef.asic_wrapper__DOT__ASIC_IFMAP_LEN_next 
                                                                        = vlSelfRef.WDATA_S;
                                                                }
                                                                if (
                                                                    (0x1004002cU 
                                                                     != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                                    if (
                                                                        (0x10040030U 
                                                                         == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                                        vlSelfRef.asic_wrapper__DOT__ASIC_OFMAP_LEN_next 
                                                                            = vlSelfRef.WDATA_S;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                    if (
                                                        (0x10040020U 
                                                         == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                        vlSelfRef.asic_wrapper__DOT__ASIC_GLB_FILTER_ADDR_next 
                                                            = vlSelfRef.WDATA_S;
                                                    }
                                                }
                                                if (
                                                    (0x1004001cU 
                                                     == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                    vlSelfRef.asic_wrapper__DOT__ASIC_OPSUM_ADDR_next 
                                                        = vlSelfRef.WDATA_S;
                                                }
                                            }
                                            if ((0x10040018U 
                                                 == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                vlSelfRef.asic_wrapper__DOT__ASIC_BIAS_ADDR_next 
                                                    = vlSelfRef.WDATA_S;
                                            }
                                        }
                                        if ((0x10040014U 
                                             == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                            vlSelfRef.asic_wrapper__DOT__ASIC_FILTER_ADDR_next 
                                                = vlSelfRef.WDATA_S;
                                        }
                                    }
                                    if ((0x10040010U 
                                         == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                        vlSelfRef.asic_wrapper__DOT__ASIC_IFMAP_ADDR_next 
                                            = vlSelfRef.WDATA_S;
                                    }
                                }
                                if ((0x1004000cU == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                    vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2_next 
                                        = vlSelfRef.WDATA_S;
                                }
                            }
                            if ((0x10040008U == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM1_next 
                                    = vlSelfRef.WDATA_S;
                            }
                        }
                        if ((0x10040004U == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                            vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM_next 
                                = vlSelfRef.WDATA_S;
                        }
                    }
                    if ((0x10040000U == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                        vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE_next 
                            = vlSelfRef.WDATA_S;
                    }
                }
            }
        } else if ((1U & (~ (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave)))) {
            if (vlSelfRef.AWVALID_S) {
                vlSelfRef.asic_wrapper__DOT__BID_S_next 
                    = vlSelfRef.AWID_S;
            }
        }
    }
    vlSelfRef.asic_wrapper__DOT__RID_S_next = vlSelfRef.RID_S;
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_count_next 
        = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_count;
    vlSelfRef.asic_wrapper__DOT__cs_slave_next = vlSelfRef.asic_wrapper__DOT__cs_slave;
    if ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
        if ((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__cs_slave) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
                if (vlSelfRef.RREADY_S) {
                    vlSelfRef.asic_wrapper__DOT__RID_S_next = 0U;
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
            vlSelfRef.asic_wrapper__DOT__cs_slave_next = 0U;
        } else if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
            if (vlSelfRef.RREADY_S) {
                vlSelfRef.asic_wrapper__DOT__cs_slave_next = 0U;
            }
        } else {
            vlSelfRef.asic_wrapper__DOT__cs_slave_next = 0U;
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__cs_slave) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave)))) {
                if ((1U & (~ (IData)(vlSelfRef.AWVALID_S)))) {
                    if (vlSelfRef.ARVALID_S) {
                        vlSelfRef.asic_wrapper__DOT__RID_S_next 
                            = vlSelfRef.ARID_S;
                    }
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
            if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
                if (vlSelfRef.BREADY_S) {
                    vlSelfRef.asic_wrapper__DOT__cs_slave_next = 0U;
                }
            } else if (vlSelfRef.WVALID_S) {
                if (vlSelfRef.WLAST_S) {
                    vlSelfRef.asic_wrapper__DOT__cs_slave_next = 3U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
            vlSelfRef.asic_wrapper__DOT__cs_slave_next = 0U;
        } else if (vlSelfRef.AWVALID_S) {
            vlSelfRef.asic_wrapper__DOT__cs_slave_next = 2U;
        } else if (vlSelfRef.ARVALID_S) {
            vlSelfRef.asic_wrapper__DOT__cs_slave_next = 5U;
        }
    }
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R_next 
        = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R;
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_push_i_R = 0U;
    if ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R))) {
        if ((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R))) {
                if (((IData)(vlSelfRef.RVALID_M) & 
                     (0x40U != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count)))) {
                    vlSelfRef.RREADY_M = 1U;
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_push_i_R = 1U;
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R))) {
            if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R))) {
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R_next = 0U;
            } else if ((6U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R))) {
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R_next = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R))) {
            if (((IData)(vlSelfRef.RVALID_M) & (0x40U 
                                                != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count)))) {
                if (vlSelfRef.RLAST_M) {
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R_next = 6U;
                }
            }
        } else if (vlSelfRef.ARREADY_M) {
            vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R_next = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R))) {
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R_next = 0U;
    } else if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R))) {
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R_next = 0U;
    } else if (((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__AXI_enable) 
                & (~ (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMADIR)))) {
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R_next = 4U;
    }
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_pop_i_W = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W))) {
            if ((1U & (~ (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W)))) {
                if (((IData)(vlSelfRef.WREADY_M) & 
                     (0U != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count)))) {
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_count_next 
                        = (((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_count) 
                            == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_len))
                            ? 0U : (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_count))));
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_pop_i_W = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W))) {
            if (vlSelfRef.AWREADY_M) {
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_count_next = 0U;
            }
        }
    }
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W_next 
        = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W;
    if ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W))) {
        if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W))) {
            if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W))) {
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W_next = 0U;
            } else if ((6U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W))) {
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W_next = 0U;
            }
        } else {
            vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W_next = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W))) {
        if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W))) {
            if (((IData)(vlSelfRef.BVALID_M) & (0U 
                                                == (IData)(vlSelfRef.BRESP_M)))) {
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W_next = 6U;
            }
        } else if (((IData)(vlSelfRef.WREADY_M) & (0U 
                                                   != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count)))) {
            if (((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_count) 
                 == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_len))) {
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W_next = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W))) {
        if (vlSelfRef.AWREADY_M) {
            vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W_next = 2U;
        }
    } else if (((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__AXI_enable) 
                & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMADIR))) {
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W_next = 1U;
    }
    if (vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMADIR) {
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT____Vcellinp__DMA_FIFO_0__push_i 
            = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_push_i_G;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT____Vcellinp__DMA_FIFO_0__pop_i 
            = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_pop_i_W;
    } else {
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT____Vcellinp__DMA_FIFO_0__push_i 
            = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_push_i_R;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT____Vcellinp__DMA_FIFO_0__pop_i 
            = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_pop_i_G;
    }
}

void Vasic_wrapper___024root___eval_triggers__ico(Vasic_wrapper___024root* vlSelf);

bool Vasic_wrapper___024root___eval_phase__ico(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_phase__ico\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vasic_wrapper___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vasic_wrapper___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

VL_INLINE_OPT void Vasic_wrapper___024root___act_comb__TOP__0(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___act_comb__TOP__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data[1U] 
        = ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__mc_valid))
            ? (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data
               [0U] | vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XBus_data[0U])
            : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data
           [0U]);
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data[2U] 
        = ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__mc_valid))
            ? (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data
               [1U] | vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XBus_data[1U])
            : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data
           [1U]);
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data[3U] 
        = ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__mc_valid))
            ? (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data
               [2U] | vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XBus_data[2U])
            : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data
           [2U]);
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data[4U] 
        = ((8U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__mc_valid))
            ? (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data
               [3U] | vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XBus_data[3U])
            : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data
           [3U]);
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data[5U] 
        = ((0x10U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__mc_valid))
            ? (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data
               [4U] | vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XBus_data[4U])
            : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data
           [4U]);
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data[6U] 
        = ((0x20U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__mc_valid))
            ? (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data
               [5U] | vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XBus_data[5U])
            : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data
           [5U]);
    vlSelfRef.asic_wrapper__DOT__GLB_DI = ((IData)(vlSelfRef.asic_wrapper__DOT__glb_mux)
                                            ? ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_MODE_dma)
                                                ? vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_data_o
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_R))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_R))
                                                     ? 
                                                    (vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_data_o 
                                                     >> 0x18U)
                                                     : 
                                                    (0xffU 
                                                     & (vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_data_o 
                                                        >> 0x10U)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_R))
                                                     ? 
                                                    (0xffU 
                                                     & (vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_data_o 
                                                        >> 8U))
                                                     : 
                                                    (0xffU 
                                                     & vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_data_o))))
                                            : ((0xcU 
                                                != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                ? (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ppu_data_out)
                                                : (
                                                   (0U 
                                                    != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__mc_valid))
                                                    ? 
                                                   vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data
                                                   [6U]
                                                    : 0U)));
    vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
        = ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_MODE)
            ? vlSelfRef.asic_wrapper__DOT__GLB_DI : 
           ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__GLB_A))
             ? ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__GLB_A))
                 ? (vlSelfRef.asic_wrapper__DOT__GLB_DI 
                    << 0x18U) : (0xff0000U & (vlSelfRef.asic_wrapper__DOT__GLB_DI 
                                              << 0x10U)))
             : ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__GLB_A))
                 ? (0xff00U & (vlSelfRef.asic_wrapper__DOT__GLB_DI 
                               << 8U)) : (0xffU & vlSelfRef.asic_wrapper__DOT__GLB_DI))));
}

VL_INLINE_OPT void Vasic_wrapper___024root___nba_sequent__TOP__0(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___nba_sequent__TOP__0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__asic_wrapper__DOT__DMA_0__DOT__DMADIR;
    __Vdly__asic_wrapper__DOT__DMA_0__DOT__DMADIR = 0;
    CData/*5:0*/ __Vdly__asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__write_ptr;
    __Vdly__asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__write_ptr = 0;
    CData/*6:0*/ __Vdly__asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count;
    __Vdly__asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count = 0;
    CData/*3:0*/ __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_filt;
    __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_filt = 0;
    CData/*2:0*/ __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt;
    __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt = 0;
    CData/*7:0*/ __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W;
    __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W = 0;
    SData/*9:0*/ __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_M;
    __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_M = 0;
    CData/*2:0*/ __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e;
    __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e = 0;
    CData/*0:0*/ __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y2;
    __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y2 = 0;
    CData/*1:0*/ __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y1;
    __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y1 = 0;
    CData/*2:0*/ __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_x;
    __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_x = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v0;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v0 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v0;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v0 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v0;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v0 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v0;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v0 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v1;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v1 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v1;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v1 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v1;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v1 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v1;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v1 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v2;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v2 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v2;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v2 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v2;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v2 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v2;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v2 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v3;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v3 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v3;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v3 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v3;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v3 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v3;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v3 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v4;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v4 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v4;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v4 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v4;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v4 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v4;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v4 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v5;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v5 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v5;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v5 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v5;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v5 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v5;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v5 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v6;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v6 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v6;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v6 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v6;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v6 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v6;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v6 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v7;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v7 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v7;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v7 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v7;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v7 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v7;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v7 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v8;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v8 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v8;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v8 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v8;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v8 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v8;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v8 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v9;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v9 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v9;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v9 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v9;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v9 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v9;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v9 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v10;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v10 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v10;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v10 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v10;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v10 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v10;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v10 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v11;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v11 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v11;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v11 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v11;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v11 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v11;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v11 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v12;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v12 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v12;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v12 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v12;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v12 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v12;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v12 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v13;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v13 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v13;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v13 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v13;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v13 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v13;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v13 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v14;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v14 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v14;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v14 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v14;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v14 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v14;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v14 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v15;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v15 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v15;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v15 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v15;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v15 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v15;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v15 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v16;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v16 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v16;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v16 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v16;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v16 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v16;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v16 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v17;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v17 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v17;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v17 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v17;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v17 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v17;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v17 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v18;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v18 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v18;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v18 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v18;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v18 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v18;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v18 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v19;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v19 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v19;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v19 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v19;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v19 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v19;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v19 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v20;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v20 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v20;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v20 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v20;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v20 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v20;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v20 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v21;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v21 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v21;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v21 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v21;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v21 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v21;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v21 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v22;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v22 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v22;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v22 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v22;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v22 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v22;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v22 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v23;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v23 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v23;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v23 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v23;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v23 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v23;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v23 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v24;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v24 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v24;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v24 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v24;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v24 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v24;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v24 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v25;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v25 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v25;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v25 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v25;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v25 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v25;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v25 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v26;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v26 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v26;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v26 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v26;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v26 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v26;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v26 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v27;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v27 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v27;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v27 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v27;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v27 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v27;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v27 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v28;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v28 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v28;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v28 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v28;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v28 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v28;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v28 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v29;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v29 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v29;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v29 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v29;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v29 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v29;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v29 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v30;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v30 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v30;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v30 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v30;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v30 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v30;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v30 = 0;
    CData/*0:0*/ __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v31;
    __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v31 = 0;
    CData/*4:0*/ __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v31;
    __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v31 = 0;
    SData/*8:0*/ __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v31;
    __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v31 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v31;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v31 = 0;
    IData/*31:0*/ __VdlyVal__asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_mem__v0;
    __VdlyVal__asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_mem__v0;
    __VdlyDim0__asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_mem__v0;
    __VdlySet__asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_mem__v0 = 0;
    IData/*31:0*/ __Vtemp_9;
    SData/*31:0*/ __Vtemp_13;
    // Body
    __Vdly__asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count 
        = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count;
    __Vdly__asic_wrapper__DOT__DMA_0__DOT__DMADIR = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMADIR;
    __Vdly__asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__write_ptr 
        = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__write_ptr;
    __VdlySet__asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_mem__v0 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v0 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v1 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v2 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v3 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v4 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v5 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v6 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v7 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v8 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v9 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v10 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v11 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v12 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v13 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v14 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v15 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v16 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v17 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v18 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v19 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v20 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v21 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v22 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v23 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v24 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v25 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v26 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v27 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v28 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v29 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v30 = 0U;
    __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v31 = 0U;
    __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y2 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y2;
    __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y1 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y1;
    __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_x 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_x;
    __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_filt 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_filt;
    __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W;
    __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_M 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_M;
    __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt;
    __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e;
    __Vdly__asic_wrapper__DOT__DMA_0__DOT__DMADIR = 
        ((IData)(vlSelfRef.ARESETn) && ((IData)(vlSelfRef.asic_wrapper__DOT__glb_mux)
                                         ? (3U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_MODE))
                                         : (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMADIR)));
    if ((1U & (~ (IData)(vlSelfRef.asic_wrapper__DOT__GLB_EN)))) {
        if ((1U & (~ (IData)(vlSelfRef.asic_wrapper__DOT__GLB_WEB)))) {
            if ((1U & (~ vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v0 
                    = (1U & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI);
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v0 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v0 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v0 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 1U)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v1 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 1U));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v1 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v1 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v1 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 2U)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v2 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 2U));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v2 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v2 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v2 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 3U)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v3 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 3U));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v3 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v3 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v3 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 4U)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v4 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 4U));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v4 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v4 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v4 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 5U)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v5 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 5U));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v5 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v5 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v5 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 6U)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v6 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 6U));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v6 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v6 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v6 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 7U)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v7 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 7U));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v7 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v7 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v7 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 8U)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v8 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 8U));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v8 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v8 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v8 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 9U)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v9 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 9U));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v9 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v9 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v9 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 0xaU)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v10 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 0xaU));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v10 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v10 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v10 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 0xbU)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v11 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 0xbU));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v11 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v11 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v11 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 0xcU)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v12 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 0xcU));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v12 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v12 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v12 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 0xdU)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v13 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 0xdU));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v13 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v13 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v13 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 0xeU)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v14 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 0xeU));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v14 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v14 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v14 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 0xfU)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v15 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 0xfU));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v15 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v15 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v15 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 0x10U)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v16 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 0x10U));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v16 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v16 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v16 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 0x11U)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v17 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 0x11U));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v17 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v17 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v17 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 0x12U)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v18 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 0x12U));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v18 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v18 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v18 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 0x13U)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v19 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 0x13U));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v19 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v19 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v19 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 0x14U)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v20 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 0x14U));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v20 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v20 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v20 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 0x15U)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v21 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 0x15U));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v21 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v21 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v21 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 0x16U)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v22 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 0x16U));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v22 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v22 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v22 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 0x17U)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v23 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 0x17U));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v23 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v23 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v23 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 0x18U)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v24 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 0x18U));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v24 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v24 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v24 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 0x19U)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v25 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 0x19U));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v25 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v25 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v25 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 0x1aU)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v26 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 0x1aU));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v26 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v26 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v26 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 0x1bU)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v27 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 0x1bU));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v27 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v27 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v27 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 0x1cU)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v28 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 0x1cU));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v28 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v28 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v28 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 0x1dU)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v29 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 0x1dU));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v29 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v29 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v29 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 0x1eU)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v30 
                    = (1U & (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                             >> 0x1eU));
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v30 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v30 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v30 = 1U;
            }
            if ((1U & (~ (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB 
                          >> 0x1fU)))) {
                __VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v31 
                    = (vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI 
                       >> 0x1fU);
                __VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v31 
                    = (0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                >> 2U));
                __VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v31 
                    = (0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                 >> 7U));
                __VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v31 = 1U;
            }
        }
        if (vlSelfRef.asic_wrapper__DOT__GLB_WEB) {
            vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__latched_DO 
                = vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [(0x1ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                            >> 7U))][(0x1fU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                               >> 2U))];
        }
    }
    if (vlSelfRef.ARESETn) {
        if ((1U & (~ ((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                      & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PEA_ifmap_ready))))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__j = 6U;
        }
        if ((1U & (~ ((7U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                      & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PEA_filter_ready))))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__j = 6U;
        }
        if ((1U & (~ ((0xbU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                      & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PEA_ipsum_ready))))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__j = 6U;
        }
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__read_ptr 
            = (0x3fU & (((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT____Vcellinp__DMA_FIFO_0__pop_i) 
                         & (0U != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count)))
                         ? ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__read_ptr))
                         : (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__read_ptr)));
        __Vdly__asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count 
            = (0x7fU & ((2U == ((((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT____Vcellinp__DMA_FIFO_0__push_i) 
                                  & (~ (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_full))) 
                                 << 1U) | ((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT____Vcellinp__DMA_FIFO_0__pop_i) 
                                           & (~ (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_empty)))))
                         ? ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count))
                         : ((1U == ((((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT____Vcellinp__DMA_FIFO_0__push_i) 
                                      & (~ (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_full))) 
                                     << 1U) | ((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT____Vcellinp__DMA_FIFO_0__pop_i) 
                                               & (~ (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_empty)))))
                             ? ((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count) 
                                - (IData)(1U)) : (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count))));
        if (vlSelfRef.asic_wrapper__DOT__glb_mux) {
            vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAMODE 
                = vlSelfRef.asic_wrapper__DOT__DMA_MODE;
            vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMABYTE_BIAS 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_c;
            if ((0x10U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
                if ((8U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
                    __Vtemp_9 = 0U;
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAGLB_ADDR 
                        = (0xffffU & 0U);
                    __Vtemp_13 = (0xffffU & 0U);
                } else if ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
                    __Vtemp_9 = 0U;
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAGLB_ADDR 
                        = (0xffffU & 0U);
                    __Vtemp_13 = (0xffffU & 0U);
                } else if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
                    __Vtemp_9 = 0U;
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAGLB_ADDR 
                        = (0xffffU & 0U);
                    __Vtemp_13 = (0xffffU & 0U);
                } else if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
                    __Vtemp_9 = 0U;
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAGLB_ADDR 
                        = (0xffffU & 0U);
                    __Vtemp_13 = (0xffffU & 0U);
                } else {
                    __Vtemp_9 = ((vlSelfRef.asic_wrapper__DOT__ASIC_OPSUM_ADDR 
                                  + vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_res) 
                                 + vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_res);
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAGLB_ADDR 
                        = (0xffffU & (vlSelfRef.asic_wrapper__DOT__ASIC_GLB_OFMAP_ADDR 
                                      + vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul3_res));
                    __Vtemp_13 = (0xffffU & ((2U & vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE)
                                              ? (0xffU 
                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__eF) 
                                                    >> 4U))
                                              : (0x3ffU 
                                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__eF) 
                                                    >> 2U))));
                }
            } else if ((8U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
                __Vtemp_9 = 0U;
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAGLB_ADDR 
                    = (0xffffU & 0U);
                __Vtemp_13 = (0xffffU & 0U);
            } else if ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
                if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
                    __Vtemp_9 = 0U;
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAGLB_ADDR 
                        = (0xffffU & 0U);
                    __Vtemp_13 = (0xffffU & 0U);
                } else if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
                    __Vtemp_9 = 0U;
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAGLB_ADDR 
                        = (0xffffU & 0U);
                    __Vtemp_13 = (0xffffU & 0U);
                } else {
                    __Vtemp_9 = ((vlSelfRef.asic_wrapper__DOT__ASIC_FILTER_ADDR 
                                  + vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_res) 
                                 + vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_res);
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAGLB_ADDR 
                        = (0xffffU & (vlSelfRef.asic_wrapper__DOT__ASIC_GLB_FILTER_ADDR 
                                      + (0xfffcU & 
                                         (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul3_res 
                                          << 2U))));
                    __Vtemp_13 = (0xffffU & 9U);
                }
            } else if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
                if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
                    __Vtemp_9 = ((vlSelfRef.asic_wrapper__DOT__ASIC_IFMAP_ADDR 
                                  + vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_res) 
                                 + vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_res);
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAGLB_ADDR 
                        = (0xffffU & 0U);
                    __Vtemp_13 = (0xffffU & (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul3_res 
                                             >> 2U));
                } else {
                    __Vtemp_9 = (vlSelfRef.asic_wrapper__DOT__ASIC_BIAS_ADDR 
                                 + ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_M) 
                                    << 2U));
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAGLB_ADDR 
                        = (0xffffU & vlSelfRef.asic_wrapper__DOT__ASIC_GLB_BIAS_ADDR);
                    __Vtemp_13 = (0xffffU & (0x3ffU 
                                             & (vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM 
                                                >> 0x10U)));
                }
            } else {
                __Vtemp_9 = 0U;
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAGLB_ADDR 
                    = (0xffffU & 0U);
                __Vtemp_13 = (0xffffU & 0U);
            }
        } else {
            vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAMODE 
                = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAMODE;
            vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMABYTE_BIAS 
                = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMABYTE_BIAS;
            __Vtemp_9 = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMADRAM_ADDR;
            vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAGLB_ADDR 
                = (0xffffU & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAGLB_ADDR));
            __Vtemp_13 = (0xffffU & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_WORD_LEN));
        }
        if (((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT____Vcellinp__DMA_FIFO_0__push_i) 
             & (0x40U != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count)))) {
            __VdlyVal__asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_mem__v0 
                = ((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMADIR)
                    ? ((IData)(vlSelfRef.asic_wrapper__DOT__glb_mux)
                        ? vlSelfRef.asic_wrapper__DOT__GLB_DO
                        : 0U) : vlSelfRef.RDATA_M);
            __VdlyDim0__asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_mem__v0 
                = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__write_ptr;
            __VdlySet__asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_mem__v0 = 1U;
            __Vdly__asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__write_ptr 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__write_ptr)));
        } else {
            __Vdly__asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__write_ptr 
                = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__write_ptr;
        }
        if ((1U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            if ((7U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_x))) {
                if ((2U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y1))) {
                    __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y2 
                        = (1U & (~ (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y2)));
                    __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y1 = 0U;
                } else {
                    __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y1 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y1)));
                }
                __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_x = 0U;
            } else {
                __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_x 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_x)));
            }
        }
        if (((3U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
             & (3U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state)))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_c 
                = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_c_reset)
                    ? 0U : (3U & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_c))));
        }
        if (((7U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
             & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PEA_filter_ready))) {
            __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_filt 
                = ((8U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_filt))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_filt))));
        }
        if ((0xeU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PPU 
                = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PPU_reset)
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PPU))));
        }
        if (((0xdU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
             & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_m_reset))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_C 
                = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_C_reset)
                    ? 0U : (0x3ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_C) 
                                      + (0x3fU & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_9)))));
        }
        if ((((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
              & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PEA_ifmap_ready)) 
             & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_h_reset))) {
            if ((2U > (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W))) {
                __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W)));
            }
        }
        if (((((0xcU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
               & (0U != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__mc_valid))) 
              & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt_reset)) 
             & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e_reset))) {
            __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W 
                = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_F_reset)
                    ? 0U : (0xffU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W))));
        } else if ((0xfU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W 
                = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_F_reset)
                    ? 0U : (0xffU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W))));
        }
        if (((((0xdU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
               & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_m_reset)) 
              & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_C_reset)) 
             & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_E_reset))) {
            __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_M 
                = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_M_reset)
                    ? 0U : (0x3ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_M) 
                                      + (vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM 
                                         >> 0x10U))));
        }
        if ((0xdU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_m 
                = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_m_reset)
                    ? 0U : (0x3ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_m) 
                                      + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__PP_filt))));
        }
        if ((((0xdU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
              & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_m_reset)) 
             & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_C_reset))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_H 
                = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_H_reset)
                    ? 0U : (0xffU & ((0U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_H))
                                      ? (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_H) 
                                          + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__valid_e)) 
                                         - (IData)(1U))
                                      : ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_H) 
                                         + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__valid_e)))));
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_E 
                = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_E_reset)
                    ? 0U : (0xffU & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_E) 
                                     + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__valid_e))));
        }
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMADRAM_ADDR 
            = __Vtemp_9;
        if (((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
             & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PEA_ifmap_ready))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_h 
                = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_h_reset)
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_h))));
        }
        if (((4U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
             & (3U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state)))) {
            __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt 
                = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt_reset)
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt))));
        } else if (((7U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                    & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PEA_filter_ready))) {
            if ((8U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_filt))) {
                __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt 
                    = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt_reset)
                        ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt))));
            }
        } else if (((0xbU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                    & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PEA_ipsum_ready))) {
            __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt 
                = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt_reset)
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt))));
        } else if (((0xcU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                    & (0U != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__mc_valid)))) {
            __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt 
                = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt_reset)
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt))));
        } else if ((((0xfU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                     & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e_reset)) 
                    & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_F_reset))) {
            __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt 
                = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt_reset)
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt))));
        } else if (((0x10U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                    & (3U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state)))) {
            __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt 
                = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt_reset)
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt))));
        }
        if ((((0xbU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
              & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PEA_ipsum_ready)) 
             & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt_reset))) {
            __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e 
                = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e_reset)
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e))));
        } else if ((((0xcU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                     & (0U != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__mc_valid))) 
                    & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt_reset))) {
            __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e 
                = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e_reset)
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e))));
        } else if (((0xfU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                    & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_F_reset))) {
            __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e 
                = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e_reset)
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e))));
        }
    } else {
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__read_ptr = 0U;
        __Vdly__asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count = 0U;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAMODE = 0U;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMABYTE_BIAS = 0U;
        __Vdly__asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__write_ptr = 0U;
        __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y1 = 0U;
        __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y2 = 0U;
        __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_x = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_c = 0U;
        __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_filt = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PPU = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_C = 0U;
        __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W = 0U;
        __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_M = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_m = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_H = 0U;
        __Vtemp_9 = 0U;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMADRAM_ADDR 
            = __Vtemp_9;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_h = 0U;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAGLB_ADDR = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_E = 0U;
        __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt = 0U;
        __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e = 0U;
        __Vtemp_13 = 0U;
    }
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_WORD_LEN 
        = __Vtemp_13;
    vlSelfRef.asic_wrapper__DOT__write_error = ((IData)(vlSelfRef.ARESETn) 
                                                && (IData)(vlSelfRef.asic_wrapper__DOT__write_error_next));
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAEN 
        = ((IData)(vlSelfRef.ARESETn) && ((3U != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state)) 
                                          & (IData)(vlSelfRef.asic_wrapper__DOT__glb_mux)));
    if (vlSelfRef.ARESETn) {
        vlSelfRef.BID_S = vlSelfRef.asic_wrapper__DOT__BID_S_next;
        vlSelfRef.RID_S = vlSelfRef.asic_wrapper__DOT__RID_S_next;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__dram_addr 
            = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__dram_addr_next;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT____Vcellout__DMA_controller_0__glb_addr 
            = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__glb_addr_next;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__word_len_reg 
            = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__word_len_reg_next;
        vlSelfRef.asic_wrapper__DOT__ASIC_IFMAP_LEN 
            = vlSelfRef.asic_wrapper__DOT__ASIC_IFMAP_LEN_next;
        vlSelfRef.asic_wrapper__DOT__ASIC_OFMAP_LEN 
            = vlSelfRef.asic_wrapper__DOT__ASIC_OFMAP_LEN_next;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_count 
            = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_count_next;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__pq_data_out_reg 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__pq_data_out;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__Comparator_Qint8_0__DOT__data_max 
            = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__Comparator_Qint8_0__DOT__data_max_next;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_W 
            = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_W_next;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_len 
            = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__burst_len_next;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_R 
            = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_R_next;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R 
            = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R_next;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W 
            = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W_next;
        vlSelfRef.asic_wrapper__DOT__addr_S_reg = vlSelfRef.asic_wrapper__DOT__addr_S_reg_next;
        vlSelfRef.asic_wrapper__DOT__cs_slave = vlSelfRef.asic_wrapper__DOT__cs_slave_next;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_word 
            = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_word_next;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_bias 
            = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_bias_next;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb 
            = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb_next;
        vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM1 
            = vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM1_next;
        if (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__set_YID) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_YID_scan_in;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y2;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__opsum_YID_scan_in;
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id 
                = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_YID_scan_in;
        }
        vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
            = vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2_next;
        if (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__set_YID) 
             & ((~ (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y2)) 
                & (0U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y1))))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config 
                = ((2U == (7U & (vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM 
                                 >> 3U))) ? 0x1fU : 0x1bU);
        }
        if (((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
             & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PEA_ifmap_ready))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__valid_mask = 0U;
        } else {
            if ((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__mc_valid) 
                       & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__mc_ready)))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__valid_mask 
                    = (1U | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__valid_mask));
            }
            if ((2U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__mc_valid) 
                       & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__mc_ready)))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__valid_mask 
                    = (2U | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__valid_mask));
            }
            if ((4U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__mc_valid) 
                       & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__mc_ready)))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__valid_mask 
                    = (4U | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__valid_mask));
            }
            if ((8U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__mc_valid) 
                       & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__mc_ready)))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__valid_mask 
                    = (8U | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__valid_mask));
            }
            if ((0x10U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__mc_valid) 
                          & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__mc_ready)))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__valid_mask 
                    = (0x10U | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__valid_mask));
            }
            if ((0x20U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__mc_valid) 
                          & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__mc_ready)))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__valid_mask 
                    = (0x20U | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__valid_mask));
            }
        }
        if (((7U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
             & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PEA_filter_ready))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__valid_mask = 0U;
        } else {
            if ((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__mc_valid) 
                       & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__mc_ready)))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__valid_mask 
                    = (1U | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__valid_mask));
            }
            if ((2U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__mc_valid) 
                       & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__mc_ready)))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__valid_mask 
                    = (2U | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__valid_mask));
            }
            if ((4U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__mc_valid) 
                       & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__mc_ready)))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__valid_mask 
                    = (4U | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__valid_mask));
            }
            if ((8U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__mc_valid) 
                       & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__mc_ready)))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__valid_mask 
                    = (8U | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__valid_mask));
            }
            if ((0x10U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__mc_valid) 
                          & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__mc_ready)))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__valid_mask 
                    = (0x10U | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__valid_mask));
            }
            if ((0x20U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__mc_valid) 
                          & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__mc_ready)))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__valid_mask 
                    = (0x20U | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__valid_mask));
            }
        }
        if ((0U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__C9 
                = (0x3fffU & vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_res);
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__EF 
                = (0xffffU & vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_res);
        }
        if (((0xbU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
             & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PEA_ipsum_ready))) {
            vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__valid_mask = 0U;
        } else {
            if ((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__mc_valid) 
                       & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__mc_ready)))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__valid_mask 
                    = (1U | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__valid_mask));
            }
            if ((2U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__mc_valid) 
                       & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__mc_ready)))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__valid_mask 
                    = (2U | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__valid_mask));
            }
            if ((4U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__mc_valid) 
                       & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__mc_ready)))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__valid_mask 
                    = (4U | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__valid_mask));
            }
            if ((8U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__mc_valid) 
                       & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__mc_ready)))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__valid_mask 
                    = (8U | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__valid_mask));
            }
            if ((0x10U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__mc_valid) 
                          & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__mc_ready)))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__valid_mask 
                    = (0x10U | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__valid_mask));
            }
            if ((0x20U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__mc_valid) 
                          & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__mc_ready)))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__valid_mask 
                    = (0x20U | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__valid_mask));
            }
        }
        vlSelfRef.asic_wrapper__DOT__ASIC_OPSUM_ADDR 
            = vlSelfRef.asic_wrapper__DOT__ASIC_OPSUM_ADDR_next;
        vlSelfRef.asic_wrapper__DOT__ASIC_FILTER_ADDR 
            = vlSelfRef.asic_wrapper__DOT__ASIC_FILTER_ADDR_next;
        vlSelfRef.asic_wrapper__DOT__ASIC_IFMAP_ADDR 
            = vlSelfRef.asic_wrapper__DOT__ASIC_IFMAP_ADDR_next;
        vlSelfRef.asic_wrapper__DOT__ASIC_BIAS_ADDR 
            = vlSelfRef.asic_wrapper__DOT__ASIC_BIAS_ADDR_next;
        vlSelfRef.asic_wrapper__DOT__ASIC_GLB_OFMAP_ADDR 
            = vlSelfRef.asic_wrapper__DOT__ASIC_GLB_OFMAP_ADDR_next;
        vlSelfRef.asic_wrapper__DOT__ASIC_GLB_FILTER_ADDR 
            = vlSelfRef.asic_wrapper__DOT__ASIC_GLB_FILTER_ADDR_next;
        vlSelfRef.asic_wrapper__DOT__ASIC_GLB_BIAS_ADDR 
            = vlSelfRef.asic_wrapper__DOT__ASIC_GLB_BIAS_ADDR_next;
        vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE = vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE_next;
        if ((0U != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
            if ((5U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))) {
                vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__eF 
                    = (0xfffU & vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_res);
            }
        }
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state 
            = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state_next;
        vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM 
            = vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM_next;
    } else {
        vlSelfRef.BID_S = 0U;
        vlSelfRef.RID_S = 0U;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__dram_addr = 0U;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT____Vcellout__DMA_controller_0__glb_addr = 0U;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__word_len_reg = 0U;
        vlSelfRef.asic_wrapper__DOT__ASIC_IFMAP_LEN = 0U;
        vlSelfRef.asic_wrapper__DOT__ASIC_OFMAP_LEN = 0U;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_count = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__pq_data_out_reg = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__Comparator_Qint8_0__DOT__data_max = 0U;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_W = 0U;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_len = 0U;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_R = 0U;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R = 0U;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W = 0U;
        vlSelfRef.asic_wrapper__DOT__addr_S_reg = 0U;
        vlSelfRef.asic_wrapper__DOT__cs_slave = 0U;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_word = 0U;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_bias = 0U;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb = 0U;
        vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM1 = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id = 0U;
        vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__valid_mask = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__valid_mask = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__C9 = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__EF = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__valid_mask = 0U;
        vlSelfRef.asic_wrapper__DOT__ASIC_OPSUM_ADDR = 0U;
        vlSelfRef.asic_wrapper__DOT__ASIC_FILTER_ADDR = 0U;
        vlSelfRef.asic_wrapper__DOT__ASIC_IFMAP_ADDR = 0U;
        vlSelfRef.asic_wrapper__DOT__ASIC_BIAS_ADDR = 0U;
        vlSelfRef.asic_wrapper__DOT__ASIC_GLB_OFMAP_ADDR = 0U;
        vlSelfRef.asic_wrapper__DOT__ASIC_GLB_FILTER_ADDR = 0U;
        vlSelfRef.asic_wrapper__DOT__ASIC_GLB_BIAS_ADDR = 0U;
        vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__eF = 0U;
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id = 0U;
        vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id = 0U;
        vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id = 0U;
    }
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__write_ptr 
        = __Vdly__asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__write_ptr;
    if (__VdlySet__asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_mem__v0) {
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_mem[__VdlyDim0__asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_mem__v0] 
            = __VdlyVal__asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_mem__v0;
    }
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMADIR 
        = __Vdly__asic_wrapper__DOT__DMA_0__DOT__DMADIR;
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count 
        = __Vdly__asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_x 
        = __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_x;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W 
        = __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_M 
        = __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_M;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_filt 
        = __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_filt;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt 
        = __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e 
        = __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e;
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v0) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v0][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v0] 
            = ((0xfffffffeU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v0]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v0]) 
               | (IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v0));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v1) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v1][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v1] 
            = ((0xfffffffdU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v1]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v1]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v1) 
                  << 1U));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v2) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v2][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v2] 
            = ((0xfffffffbU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v2]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v2]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v2) 
                  << 2U));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v3) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v3][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v3] 
            = ((0xfffffff7U & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v3]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v3]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v3) 
                  << 3U));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v4) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v4][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v4] 
            = ((0xffffffefU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v4]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v4]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v4) 
                  << 4U));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v5) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v5][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v5] 
            = ((0xffffffdfU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v5]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v5]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v5) 
                  << 5U));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v6) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v6][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v6] 
            = ((0xffffffbfU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v6]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v6]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v6) 
                  << 6U));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v7) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v7][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v7] 
            = ((0xffffff7fU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v7]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v7]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v7) 
                  << 7U));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v8) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v8][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v8] 
            = ((0xfffffeffU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v8]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v8]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v8) 
                  << 8U));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v9) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v9][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v9] 
            = ((0xfffffdffU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v9]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v9]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v9) 
                  << 9U));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v10) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v10][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v10] 
            = ((0xfffffbffU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v10]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v10]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v10) 
                  << 0xaU));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v11) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v11][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v11] 
            = ((0xfffff7ffU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v11]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v11]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v11) 
                  << 0xbU));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v12) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v12][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v12] 
            = ((0xffffefffU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v12]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v12]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v12) 
                  << 0xcU));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v13) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v13][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v13] 
            = ((0xffffdfffU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v13]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v13]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v13) 
                  << 0xdU));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v14) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v14][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v14] 
            = ((0xffffbfffU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v14]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v14]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v14) 
                  << 0xeU));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v15) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v15][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v15] 
            = ((0xffff7fffU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v15]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v15]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v15) 
                  << 0xfU));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v16) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v16][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v16] 
            = ((0xfffeffffU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v16]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v16]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v16) 
                  << 0x10U));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v17) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v17][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v17] 
            = ((0xfffdffffU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v17]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v17]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v17) 
                  << 0x11U));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v18) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v18][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v18] 
            = ((0xfffbffffU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v18]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v18]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v18) 
                  << 0x12U));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v19) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v19][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v19] 
            = ((0xfff7ffffU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v19]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v19]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v19) 
                  << 0x13U));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v20) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v20][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v20] 
            = ((0xffefffffU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v20]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v20]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v20) 
                  << 0x14U));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v21) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v21][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v21] 
            = ((0xffdfffffU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v21]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v21]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v21) 
                  << 0x15U));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v22) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v22][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v22] 
            = ((0xffbfffffU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v22]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v22]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v22) 
                  << 0x16U));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v23) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v23][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v23] 
            = ((0xff7fffffU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v23]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v23]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v23) 
                  << 0x17U));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v24) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v24][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v24] 
            = ((0xfeffffffU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v24]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v24]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v24) 
                  << 0x18U));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v25) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v25][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v25] 
            = ((0xfdffffffU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v25]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v25]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v25) 
                  << 0x19U));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v26) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v26][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v26] 
            = ((0xfbffffffU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v26]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v26]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v26) 
                  << 0x1aU));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v27) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v27][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v27] 
            = ((0xf7ffffffU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v27]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v27]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v27) 
                  << 0x1bU));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v28) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v28][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v28] 
            = ((0xefffffffU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v28]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v28]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v28) 
                  << 0x1cU));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v29) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v29][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v29] 
            = ((0xdfffffffU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v29]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v29]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v29) 
                  << 0x1dU));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v30) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v30][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v30] 
            = ((0xbfffffffU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v30]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v30]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v30) 
                  << 0x1eU));
    }
    if (__VdlySet__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v31) {
        vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY[__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v31][__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v31] 
            = ((0x7fffffffU & vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY
                [__VdlyDim1__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v31]
                [__VdlyDim0__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v31]) 
               | ((IData)(__VdlyVal__asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__MEMORY__v31) 
                  << 0x1fU));
    }
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y1 
        = __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y1;
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_data_o 
        = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_mem
        [vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__read_ptr];
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_full 
        = (0x40U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count));
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_empty 
        = (0U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count));
    vlSelfRef.ARADDR_M = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__dram_addr;
    vlSelfRef.AWADDR_M = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__dram_addr;
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__glb_addr 
        = ((0xffff0000U & vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__glb_addr) 
           | (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT____Vcellout__DMA_controller_0__glb_addr));
    vlSelfRef.ARLEN_M = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_len;
    vlSelfRef.AWLEN_M = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_len;
    vlSelfRef.ARVALID_M = 0U;
    vlSelfRef.RREADY_M = 0U;
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_push_i_R = 0U;
    vlSelfRef.BREADY_M = 0U;
    vlSelfRef.AWVALID_M = 0U;
    vlSelfRef.WVALID_M = 0U;
    vlSelfRef.WLAST_M = 0U;
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_count_next 
        = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_count;
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_pop_i_W = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W))) {
            if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W))) {
                vlSelfRef.BREADY_M = 1U;
            }
            if ((1U & (~ (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W)))) {
                vlSelfRef.WVALID_M = (0U != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count));
                vlSelfRef.WLAST_M = ((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_count) 
                                     == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_len));
                if (((IData)(vlSelfRef.WREADY_M) & 
                     (0U != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count)))) {
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_count_next 
                        = (((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_count) 
                            == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_len))
                            ? 0U : (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_count))));
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_pop_i_W = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W))) {
            if (vlSelfRef.AWREADY_M) {
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_count_next = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W))) {
                vlSelfRef.AWVALID_M = 1U;
            }
        }
    }
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT____Vcellinp__DMA_controller_0__AXI_done 
        = ((6U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R)) 
           | (6U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W)));
    vlSelfRef.RVALID_S = 0U;
    vlSelfRef.RLAST_S = 0U;
    vlSelfRef.WREADY_S = 0U;
    vlSelfRef.BVALID_S = 0U;
    vlSelfRef.RRESP_S = 0U;
    vlSelfRef.BRESP_S = 0U;
    vlSelfRef.AWREADY_S = 0U;
    vlSelfRef.ARREADY_S = 0U;
    vlSelfRef.asic_wrapper__DOT__write_error_next = vlSelfRef.asic_wrapper__DOT__write_error;
    vlSelfRef.asic_wrapper__DOT__ASIC_IFMAP_LEN_next 
        = vlSelfRef.asic_wrapper__DOT__ASIC_IFMAP_LEN;
    vlSelfRef.asic_wrapper__DOT__ASIC_OFMAP_LEN_next 
        = vlSelfRef.asic_wrapper__DOT__ASIC_OFMAP_LEN;
    vlSelfRef.asic_wrapper__DOT__BID_S_next = vlSelfRef.BID_S;
    vlSelfRef.asic_wrapper__DOT__addr_S_reg_next = vlSelfRef.asic_wrapper__DOT__addr_S_reg;
    vlSelfRef.asic_wrapper__DOT__RID_S_next = vlSelfRef.RID_S;
    vlSelfRef.asic_wrapper__DOT__cs_slave_next = vlSelfRef.asic_wrapper__DOT__cs_slave;
    vlSelfRef.asic_wrapper__DOT__GLB_WEB_dma = 1U;
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_push_i_G = 0U;
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_pop_i_G = 0U;
    vlSelfRef.asic_wrapper__DOT__GLB_EN_dma = 1U;
    vlSelfRef.asic_wrapper__DOT__GLB_MODE_dma = 1U;
    vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM1_next 
        = vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM1;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__ID_scan_chain[0U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__ID_scan_chain[0U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2_next 
        = vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_14 
        = ((0xffU & ((IData)(8U) + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_E))) 
           > (0xffU & ((vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                        >> 8U) - (IData)(2U))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_15 
        = (0xffU & (((vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                      >> 8U) - (IData)(2U)) - (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_E)));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__ID_scan_chain[0U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__ID_scan_chain[0U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id;
    vlSelfRef.WDATA_M = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_data_o;
    if ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R))) {
        if ((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R)))) {
                vlSelfRef.ARVALID_M = 1U;
            }
            if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R))) {
                if (((IData)(vlSelfRef.RVALID_M) & 
                     (0x40U != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count)))) {
                    vlSelfRef.RREADY_M = 1U;
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_push_i_R = 1U;
                }
            }
        }
    }
    if ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb))) {
        if ((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb))) {
                if ((0x40U != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count))) {
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_push_i_G = 1U;
                }
            }
        }
    }
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT____Vcellinp__DMA_FIFO_0__push_i 
        = ((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMADIR)
            ? (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_push_i_G)
            : (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_push_i_R));
    if ((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb))) {
            if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb))) {
                if ((0U != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count))) {
                    vlSelfRef.asic_wrapper__DOT__GLB_WEB_dma = 0U;
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_pop_i_G = 1U;
                }
            } else if ((0U != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count))) {
                vlSelfRef.asic_wrapper__DOT__GLB_WEB_dma = 0U;
                if ((3U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_R))) {
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_pop_i_G = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb))) {
            if ((0U != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count))) {
                vlSelfRef.asic_wrapper__DOT__GLB_WEB_dma = 0U;
                if ((3U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_R))) {
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_pop_i_G = 1U;
                }
            }
        }
    }
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT____Vcellinp__DMA_FIFO_0__pop_i 
        = ((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMADIR)
            ? (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_pop_i_W)
            : (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_pop_i_G));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__valid_e 
        = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_14)
            ? (0xfU & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_15))
            : 8U);
    vlSelfRef.asic_wrapper__DOT__ASIC_OPSUM_ADDR_next 
        = vlSelfRef.asic_wrapper__DOT__ASIC_OPSUM_ADDR;
    vlSelfRef.asic_wrapper__DOT__ASIC_FILTER_ADDR_next 
        = vlSelfRef.asic_wrapper__DOT__ASIC_FILTER_ADDR;
    vlSelfRef.asic_wrapper__DOT__ASIC_IFMAP_ADDR_next 
        = vlSelfRef.asic_wrapper__DOT__ASIC_IFMAP_ADDR;
    vlSelfRef.asic_wrapper__DOT__ASIC_BIAS_ADDR_next 
        = vlSelfRef.asic_wrapper__DOT__ASIC_BIAS_ADDR;
    vlSelfRef.asic_wrapper__DOT__ASIC_GLB_OFMAP_ADDR_next 
        = vlSelfRef.asic_wrapper__DOT__ASIC_GLB_OFMAP_ADDR;
    vlSelfRef.asic_wrapper__DOT__ASIC_GLB_FILTER_ADDR_next 
        = vlSelfRef.asic_wrapper__DOT__ASIC_GLB_FILTER_ADDR;
    vlSelfRef.asic_wrapper__DOT__ASIC_GLB_BIAS_ADDR_next 
        = vlSelfRef.asic_wrapper__DOT__ASIC_GLB_BIAS_ADDR;
    vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE_next = vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PPU_reset 
        = ((2U & vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE)
            ? (4U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PPU))
            : (1U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PPU)));
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__glb_addr_next 
        = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT____Vcellout__DMA_controller_0__glb_addr;
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__dram_addr_next 
        = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__dram_addr;
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__word_len_reg_next 
        = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__word_len_reg;
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state_next 
        = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state;
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__burst_len_next 
        = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_len;
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__AXI_enable = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state)))) {
            if (vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAEN) {
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__glb_addr_next 
                    = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAGLB_ADDR;
            }
        }
        if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state))) {
            if (vlSelfRef.asic_wrapper__DOT__DMA_0__DOT____Vcellinp__DMA_controller_0__AXI_done) {
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__dram_addr_next 
                    = ((IData)(0x100U) + vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__dram_addr_next);
                if ((0U != vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__word_len_reg)) {
                    if ((0x40U > vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__word_len_reg)) {
                        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__word_len_reg_next = 0U;
                        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__burst_len_next 
                            = (0xffU & (vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__word_len_reg 
                                        - (IData)(1U)));
                    } else {
                        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__word_len_reg_next 
                            = (vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__word_len_reg 
                               - (IData)(0x40U));
                        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__burst_len_next = 0x3fU;
                    }
                }
            }
            vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__AXI_enable = 1U;
        } else if (vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAEN) {
            vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__dram_addr_next 
                = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMADRAM_ADDR;
            if ((0x40U > (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_WORD_LEN))) {
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__word_len_reg_next = 0U;
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__burst_len_next 
                    = (0xffU & ((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_WORD_LEN) 
                                - (IData)(1U)));
            } else {
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__word_len_reg_next 
                    = ((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_WORD_LEN) 
                       - (IData)(0x40U));
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__burst_len_next = 0x3fU;
            }
        }
    }
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_enable = 0U;
    if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state))) {
        if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state))) {
            vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state_next = 0U;
        } else if ((6U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb))) {
            vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state_next = 3U;
        }
        if ((1U & (~ (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state)))) {
            vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_enable = 1U;
        }
    } else if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state))) {
        if (vlSelfRef.asic_wrapper__DOT__DMA_0__DOT____Vcellinp__DMA_controller_0__AXI_done) {
            if ((0U == vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__word_len_reg)) {
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state_next = 2U;
            }
        }
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_enable = 1U;
    } else if (vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAEN) {
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state_next = 1U;
    }
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__ID_scan_chain[1U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__ID_scan_chain[1U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_H_reset 
        = ((0xffU & ((IData)(1U) + ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_H) 
                                    + (0xfU & ((IData)(2U) 
                                               + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__valid_e)))))) 
           >= (0xffU & vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_h_reset 
        = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_h) 
           == ((0xfU & ((IData)(2U) + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__valid_e))) 
               - (IData)(1U)));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_E_reset 
        = ((0xffU & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_E) 
                     + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__valid_e))) 
           == (0xffU & ((vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                         >> 8U) - (IData)(2U))));
    vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM_next 
        = vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM;
    if ((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__cs_slave) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
            if ((1U & (~ (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave)))) {
                vlSelfRef.WREADY_S = 1U;
                if (vlSelfRef.WVALID_S) {
                    if ((0x10040000U != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                        if ((0x10040004U != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                            if ((0x10040008U != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                if ((0x1004000cU != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                    if ((0x10040010U 
                                         != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                        if ((0x10040014U 
                                             != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                            if ((0x10040018U 
                                                 != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                if (
                                                    (0x1004001cU 
                                                     != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                    if (
                                                        (0x10040020U 
                                                         != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                        if (
                                                            (0x10040024U 
                                                             != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                            if (
                                                                (0x10040028U 
                                                                 != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                                if (
                                                                    (0x1004002cU 
                                                                     == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                                    vlSelfRef.asic_wrapper__DOT__ASIC_IFMAP_LEN_next 
                                                                        = vlSelfRef.WDATA_S;
                                                                }
                                                                if (
                                                                    (0x1004002cU 
                                                                     != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                                    if (
                                                                        (0x10040030U 
                                                                         == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                                        vlSelfRef.asic_wrapper__DOT__ASIC_OFMAP_LEN_next 
                                                                            = vlSelfRef.WDATA_S;
                                                                    }
                                                                }
                                                            }
                                                            if (
                                                                (0x10040028U 
                                                                 == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                                vlSelfRef.asic_wrapper__DOT__ASIC_GLB_BIAS_ADDR_next 
                                                                    = vlSelfRef.WDATA_S;
                                                            }
                                                        }
                                                        if (
                                                            (0x10040024U 
                                                             == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                            vlSelfRef.asic_wrapper__DOT__ASIC_GLB_OFMAP_ADDR_next 
                                                                = vlSelfRef.WDATA_S;
                                                        }
                                                    }
                                                    if (
                                                        (0x10040020U 
                                                         == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                        vlSelfRef.asic_wrapper__DOT__ASIC_GLB_FILTER_ADDR_next 
                                                            = vlSelfRef.WDATA_S;
                                                    }
                                                }
                                                if (
                                                    (0x1004001cU 
                                                     == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                    vlSelfRef.asic_wrapper__DOT__ASIC_OPSUM_ADDR_next 
                                                        = vlSelfRef.WDATA_S;
                                                }
                                            }
                                            if ((0x10040018U 
                                                 == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                vlSelfRef.asic_wrapper__DOT__ASIC_BIAS_ADDR_next 
                                                    = vlSelfRef.WDATA_S;
                                            }
                                        }
                                        if ((0x10040014U 
                                             == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                            vlSelfRef.asic_wrapper__DOT__ASIC_FILTER_ADDR_next 
                                                = vlSelfRef.WDATA_S;
                                        }
                                    }
                                    if ((0x10040010U 
                                         == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                        vlSelfRef.asic_wrapper__DOT__ASIC_IFMAP_ADDR_next 
                                            = vlSelfRef.WDATA_S;
                                    }
                                }
                                if ((0x1004000cU == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                    vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2_next 
                                        = vlSelfRef.WDATA_S;
                                }
                            }
                            if ((0x10040008U == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM1_next 
                                    = vlSelfRef.WDATA_S;
                            }
                        }
                        if ((0x10040004U == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                            vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM_next 
                                = vlSelfRef.WDATA_S;
                        }
                    }
                    if ((0x10040000U == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                        vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE_next 
                            = vlSelfRef.WDATA_S;
                    }
                }
            }
            if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
                vlSelfRef.BVALID_S = 1U;
                vlSelfRef.BRESP_S = ((IData)(vlSelfRef.asic_wrapper__DOT__write_error)
                                      ? 2U : 0U);
                vlSelfRef.asic_wrapper__DOT__write_error_next = 0U;
                if (vlSelfRef.BREADY_S) {
                    vlSelfRef.asic_wrapper__DOT__BID_S_next = 0U;
                }
            } else if (vlSelfRef.WVALID_S) {
                if ((0x10040000U != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                    if ((0x10040004U != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                        if ((0x10040008U != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                            if ((0x1004000cU != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                if ((0x10040010U != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                    if ((0x10040014U 
                                         != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                        if ((0x10040018U 
                                             != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                            if ((0x1004001cU 
                                                 != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                if (
                                                    (0x10040020U 
                                                     != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                    if (
                                                        (0x10040024U 
                                                         != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                        if (
                                                            (0x10040028U 
                                                             != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                            if (
                                                                (0x1004002cU 
                                                                 != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                                if (
                                                                    (0x10040030U 
                                                                     != vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                                                                    vlSelfRef.asic_wrapper__DOT__write_error_next = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave)))) {
            if (vlSelfRef.AWVALID_S) {
                vlSelfRef.asic_wrapper__DOT__BID_S_next 
                    = vlSelfRef.AWID_S;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__cs_slave) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave)))) {
                if (vlSelfRef.AWVALID_S) {
                    vlSelfRef.AWREADY_S = 1U;
                    vlSelfRef.asic_wrapper__DOT__addr_S_reg_next 
                        = vlSelfRef.AWADDR_S;
                } else if (vlSelfRef.ARVALID_S) {
                    vlSelfRef.asic_wrapper__DOT__addr_S_reg_next 
                        = vlSelfRef.ARADDR_S;
                }
                if ((1U & (~ (IData)(vlSelfRef.AWVALID_S)))) {
                    if (vlSelfRef.ARVALID_S) {
                        vlSelfRef.ARREADY_S = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.RDATA_S = 0U;
    if ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
        if ((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__cs_slave) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
                vlSelfRef.RVALID_S = 1U;
                vlSelfRef.RLAST_S = 1U;
                if (((((((((0x10040000U == vlSelfRef.asic_wrapper__DOT__addr_S_reg) 
                           | (0x10040004U == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) 
                          | (0x10040008U == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) 
                         | (0x1004000cU == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) 
                        | (0x10040010U == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) 
                       | (0x10040014U == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) 
                      | (0x10040018U == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) 
                     | (0x1004001cU == vlSelfRef.asic_wrapper__DOT__addr_S_reg))) {
                    vlSelfRef.RRESP_S = 0U;
                    vlSelfRef.RDATA_S = ((0x10040000U 
                                          == vlSelfRef.asic_wrapper__DOT__addr_S_reg)
                                          ? vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE
                                          : ((0x10040004U 
                                              == vlSelfRef.asic_wrapper__DOT__addr_S_reg)
                                              ? vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM
                                              : ((0x10040008U 
                                                  == vlSelfRef.asic_wrapper__DOT__addr_S_reg)
                                                  ? vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM1
                                                  : 
                                                 ((0x1004000cU 
                                                   == vlSelfRef.asic_wrapper__DOT__addr_S_reg)
                                                   ? vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2
                                                   : 
                                                  ((0x10040010U 
                                                    == vlSelfRef.asic_wrapper__DOT__addr_S_reg)
                                                    ? vlSelfRef.asic_wrapper__DOT__ASIC_IFMAP_ADDR
                                                    : 
                                                   ((0x10040014U 
                                                     == vlSelfRef.asic_wrapper__DOT__addr_S_reg)
                                                     ? vlSelfRef.asic_wrapper__DOT__ASIC_FILTER_ADDR
                                                     : 
                                                    ((0x10040018U 
                                                      == vlSelfRef.asic_wrapper__DOT__addr_S_reg)
                                                      ? vlSelfRef.asic_wrapper__DOT__ASIC_BIAS_ADDR
                                                      : vlSelfRef.asic_wrapper__DOT__ASIC_OPSUM_ADDR)))))));
                } else if ((0x10040020U == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                    vlSelfRef.RRESP_S = 0U;
                    vlSelfRef.RDATA_S = vlSelfRef.asic_wrapper__DOT__ASIC_GLB_FILTER_ADDR;
                } else if ((0x10040024U == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                    vlSelfRef.RRESP_S = 0U;
                    vlSelfRef.RDATA_S = vlSelfRef.asic_wrapper__DOT__ASIC_GLB_OFMAP_ADDR;
                } else if ((0x10040028U == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                    vlSelfRef.RRESP_S = 0U;
                    vlSelfRef.RDATA_S = vlSelfRef.asic_wrapper__DOT__ASIC_GLB_BIAS_ADDR;
                } else if ((0x1004002cU == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                    vlSelfRef.RRESP_S = 0U;
                    vlSelfRef.RDATA_S = vlSelfRef.asic_wrapper__DOT__ASIC_IFMAP_LEN;
                } else if ((0x10040030U == vlSelfRef.asic_wrapper__DOT__addr_S_reg)) {
                    vlSelfRef.RRESP_S = 0U;
                    vlSelfRef.RDATA_S = vlSelfRef.asic_wrapper__DOT__ASIC_OFMAP_LEN;
                } else {
                    vlSelfRef.RRESP_S = 2U;
                    vlSelfRef.RDATA_S = 0U;
                }
                if (vlSelfRef.RREADY_S) {
                    vlSelfRef.asic_wrapper__DOT__RID_S_next = 0U;
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
            vlSelfRef.asic_wrapper__DOT__cs_slave_next = 0U;
        } else if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
            if (vlSelfRef.RREADY_S) {
                vlSelfRef.asic_wrapper__DOT__cs_slave_next = 0U;
            }
        } else {
            vlSelfRef.asic_wrapper__DOT__cs_slave_next = 0U;
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__cs_slave) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave)))) {
                if ((1U & (~ (IData)(vlSelfRef.AWVALID_S)))) {
                    if (vlSelfRef.ARVALID_S) {
                        vlSelfRef.asic_wrapper__DOT__RID_S_next 
                            = vlSelfRef.ARID_S;
                    }
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
            if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
                if (vlSelfRef.BREADY_S) {
                    vlSelfRef.asic_wrapper__DOT__cs_slave_next = 0U;
                }
            } else if (vlSelfRef.WVALID_S) {
                if (vlSelfRef.WLAST_S) {
                    vlSelfRef.asic_wrapper__DOT__cs_slave_next = 3U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__cs_slave))) {
            vlSelfRef.asic_wrapper__DOT__cs_slave_next = 0U;
        } else if (vlSelfRef.AWVALID_S) {
            vlSelfRef.asic_wrapper__DOT__cs_slave_next = 2U;
        } else if (vlSelfRef.ARVALID_S) {
            vlSelfRef.asic_wrapper__DOT__cs_slave_next = 5U;
        }
    }
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_M_reset 
        = ((0x3ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_M) 
                      + (vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM 
                         >> 0x10U))) == (0x3ffU & vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM1));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__PP_filt 
        = (0x3fU & ((7U & (vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM 
                           >> 9U)) * (7U & vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM)));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_9 
        = (0x3ffU & ((4U > (0x3ffU & (vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM1 
                                      >> 0xaU))) ? 
                     (vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM1 
                      >> 0xaU) : ((7U & (vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM 
                                         >> 6U)) * 
                                  (7U & (vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM 
                                         >> 3U)))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_10 
        = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_x) 
           < (0xfU & (vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM 
                      >> 0xcU)));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__ID_scan_chain[1U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__ID_scan_chain[1U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R_next 
        = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R;
    if ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R))) {
        if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R))) {
            if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R))) {
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R_next = 0U;
            } else if ((6U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R))) {
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R_next = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R))) {
            if (((IData)(vlSelfRef.RVALID_M) & (0x40U 
                                                != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count)))) {
                if (vlSelfRef.RLAST_M) {
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R_next = 6U;
                }
            }
        } else if (vlSelfRef.ARREADY_M) {
            vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R_next = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R))) {
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R_next = 0U;
    } else if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R))) {
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R_next = 0U;
    } else if (((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__AXI_enable) 
                & (~ (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMADIR)))) {
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R_next = 4U;
    }
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W_next 
        = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W;
    if ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W))) {
        if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W))) {
            if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W))) {
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W_next = 0U;
            } else if ((6U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W))) {
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W_next = 0U;
            }
        } else {
            vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W_next = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W))) {
        if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W))) {
            if (((IData)(vlSelfRef.BVALID_M) & (0U 
                                                == (IData)(vlSelfRef.BRESP_M)))) {
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W_next = 6U;
            }
        } else if (((IData)(vlSelfRef.WREADY_M) & (0U 
                                                   != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count)))) {
            if (((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_count) 
                 == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_len))) {
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W_next = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W))) {
        if (vlSelfRef.AWREADY_M) {
            vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W_next = 2U;
        }
    } else if (((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__AXI_enable) 
                & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMADIR))) {
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W_next = 1U;
    }
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_R_next 
        = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_R;
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_W_next 
        = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_W;
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_bias_next 
        = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_bias;
    if ((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb))) {
            if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb))) {
                if ((0U != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count))) {
                    if (((0xffffU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_W))) 
                         != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_WORD_LEN))) {
                        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_W_next 
                            = (0x3fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_W)));
                    }
                }
            } else if ((0U != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count))) {
                if (((0xffffU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_W))) 
                     != (0xfffcU & ((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_WORD_LEN) 
                                    << 2U)))) {
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_W_next 
                        = (0x3fffU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_W)));
                }
            }
        } else if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb))) {
            if ((0U != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count))) {
                if (((0xffffU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_W))) 
                     == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_WORD_LEN))) {
                    if ((3U != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_bias))) {
                        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_W_next = 0U;
                    }
                } else {
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_W_next 
                        = (0x3fffU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_W)));
                }
            }
        } else if (vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_enable) {
            vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_W_next = 0U;
        }
        if ((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb))) {
                if ((0U != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count))) {
                    if (((0xffffU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_W))) 
                         == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_WORD_LEN))) {
                        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_bias_next 
                            = ((3U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_bias))
                                ? 0U : (3U & ((IData)(1U) 
                                              + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_bias))));
                    }
                }
            } else if (vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_enable) {
                if ((0U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAMODE))) {
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_bias_next 
                        = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMABYTE_BIAS;
                } else if ((1U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAMODE))) {
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_bias_next = 0U;
                } else if ((2U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAMODE))) {
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_bias_next = 0U;
                } else if ((3U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAMODE))) {
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_bias_next = 0U;
                }
            }
        }
    }
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb_next 
        = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb;
    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_word_next 
        = vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_word;
    if ((4U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb))) {
        if ((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb) 
                      >> 1U)))) {
            vlSelfRef.asic_wrapper__DOT__GLB_EN_dma = 0U;
            vlSelfRef.asic_wrapper__DOT__GLB_MODE_dma = 1U;
            if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb))) {
                if ((0x40U != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count))) {
                    if (((0xffffU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_R))) 
                         != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_WORD_LEN))) {
                        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_R_next 
                            = (0x3fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_R)));
                        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_word_next 
                            = (0x3fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_word)));
                    }
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb))) {
            if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb))) {
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb_next = 0U;
            } else if ((1U & (~ (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_enable)))) {
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb_next = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb))) {
            if ((0x40U != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count))) {
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb_next 
                    = (((0xffffU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_R))) 
                        == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_WORD_LEN))
                        ? 6U : 4U);
            }
        } else {
            vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb_next = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb))) {
        vlSelfRef.asic_wrapper__DOT__GLB_EN_dma = 0U;
        vlSelfRef.asic_wrapper__DOT__GLB_MODE_dma = 
            (1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb));
        if ((1U & (~ (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb)))) {
            if ((0U != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count))) {
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_R_next 
                    = ((3U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_R))
                        ? 0U : (0x3fffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_R))));
            }
        }
        if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb))) {
            if ((0U != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count))) {
                if (((0xffffU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_W))) 
                     == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_WORD_LEN))) {
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb_next = 6U;
                }
                if (((0xffffU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_W))) 
                     != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_WORD_LEN))) {
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_word_next 
                        = (0x3fffU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_word)));
                }
            }
        } else if ((0U != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count))) {
            if (((0xffffU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_W))) 
                 == (0xfffcU & ((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_WORD_LEN) 
                                << 2U)))) {
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb_next = 6U;
            }
            if (((0xffffU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_W))) 
                 != (0xfffcU & ((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_WORD_LEN) 
                                << 2U)))) {
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_word_next 
                    = (0x3fffU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_word)));
            }
        }
    } else if ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb))) {
        vlSelfRef.asic_wrapper__DOT__GLB_EN_dma = 0U;
        vlSelfRef.asic_wrapper__DOT__GLB_MODE_dma = 0U;
        if ((0U != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count))) {
            vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_R_next 
                = ((3U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_R))
                    ? 0U : (0x3fffU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_R))));
            if (((0xffffU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_W))) 
                 == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_WORD_LEN))) {
                if ((3U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_bias))) {
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb_next = 6U;
                }
                if ((3U != (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_bias))) {
                    vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_word_next 
                        = (0x3fffU & (vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__glb_addr 
                                      >> 2U));
                }
            } else {
                vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_word_next 
                    = (0x3fffU & ((IData)(1U) + (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_word)));
            }
        }
    } else if (vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_enable) {
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_R_next = 0U;
        if ((0U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAMODE))) {
            vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb_next = 2U;
        } else if ((1U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAMODE))) {
            vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb_next = 1U;
        } else if ((2U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAMODE))) {
            vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb_next = 3U;
        } else if ((3U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAMODE))) {
            vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb_next = 4U;
        }
        vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_word_next 
            = (0x3fffU & (vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__glb_addr 
                          >> 2U));
    }
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt_reset 
        = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt) 
           == (0x3fU & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__PP_filt) 
                        - (IData)(1U))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_m_reset 
        = ((0x3ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_m) 
                      + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__PP_filt))) 
           == (0x3ffU & (vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM 
                         >> 0x10U)));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_c_reset 
        = ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_c) 
           == (0x3fU & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_9) 
                        - (IData)(1U))));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_C_reset 
        = ((0x3ffU & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_C) 
                      + (0x3fU & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_9)))) 
           == (0x3ffU & (vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM1 
                         >> 0xaU)));
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__ID_scan_chain[2U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__ID_scan_chain[2U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__ID_scan_chain[2U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__ID_scan_chain[2U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__ID_scan_chain[3U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__ID_scan_chain[3U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__ID_scan_chain[3U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__ID_scan_chain[3U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__ID_scan_chain[4U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__ID_scan_chain[4U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__ID_scan_chain[4U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__ID_scan_chain[4U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y2 
        = __Vdly__asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y2;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__ID_scan_chain[5U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__ID_scan_chain[6U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y2;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_YID_scan_in 
        = ((2U == (7U & (vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM 
                         >> 3U))) ? (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y2)
            : 0U);
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_YID_scan_in 
        = ((0U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y1))
            ? (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y2)
            : 7U);
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__opsum_YID_scan_in 
        = ((2U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y1))
            ? (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y2)
            : 7U);
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__ID_scan_chain[5U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__ID_scan_chain[5U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__ID_scan_chain[5U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__ID_scan_chain[6U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_YID_scan_in;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__ID_scan_chain[6U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_YID_scan_in;
    vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__ID_scan_chain[6U] 
        = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__opsum_YID_scan_in;
}

void Vasic_wrapper___024root___eval_triggers__act(Vasic_wrapper___024root* vlSelf);
void Vasic_wrapper___024root___eval_act(Vasic_wrapper___024root* vlSelf);

bool Vasic_wrapper___024root___eval_phase__act(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_phase__act\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<8> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vasic_wrapper___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vasic_wrapper___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vasic_wrapper___024root___eval_nba(Vasic_wrapper___024root* vlSelf);

bool Vasic_wrapper___024root___eval_phase__nba(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_phase__nba\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vasic_wrapper___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vasic_wrapper___024root___dump_triggers__ico(Vasic_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vasic_wrapper___024root___dump_triggers__nba(Vasic_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vasic_wrapper___024root___dump_triggers__act(Vasic_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

void Vasic_wrapper___024root___eval(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vasic_wrapper___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("ASIC/asic_wrapper.sv", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vasic_wrapper___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vasic_wrapper___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("ASIC/asic_wrapper.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vasic_wrapper___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("ASIC/asic_wrapper.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vasic_wrapper___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vasic_wrapper___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vasic_wrapper___024root___eval_debug_assertions(Vasic_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root___eval_debug_assertions\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.ACLK & 0xfeU)))) {
        Verilated::overWidthError("ACLK");}
    if (VL_UNLIKELY(((vlSelfRef.ARESETn & 0xfeU)))) {
        Verilated::overWidthError("ARESETn");}
    if (VL_UNLIKELY(((vlSelfRef.AWSIZE_S & 0xf8U)))) {
        Verilated::overWidthError("AWSIZE_S");}
    if (VL_UNLIKELY(((vlSelfRef.AWBURST_S & 0xfcU)))) {
        Verilated::overWidthError("AWBURST_S");}
    if (VL_UNLIKELY(((vlSelfRef.AWVALID_S & 0xfeU)))) {
        Verilated::overWidthError("AWVALID_S");}
    if (VL_UNLIKELY(((vlSelfRef.WSTRB_S & 0xf0U)))) {
        Verilated::overWidthError("WSTRB_S");}
    if (VL_UNLIKELY(((vlSelfRef.WLAST_S & 0xfeU)))) {
        Verilated::overWidthError("WLAST_S");}
    if (VL_UNLIKELY(((vlSelfRef.WVALID_S & 0xfeU)))) {
        Verilated::overWidthError("WVALID_S");}
    if (VL_UNLIKELY(((vlSelfRef.BREADY_S & 0xfeU)))) {
        Verilated::overWidthError("BREADY_S");}
    if (VL_UNLIKELY(((vlSelfRef.ARSIZE_S & 0xf8U)))) {
        Verilated::overWidthError("ARSIZE_S");}
    if (VL_UNLIKELY(((vlSelfRef.ARBURST_S & 0xfcU)))) {
        Verilated::overWidthError("ARBURST_S");}
    if (VL_UNLIKELY(((vlSelfRef.ARVALID_S & 0xfeU)))) {
        Verilated::overWidthError("ARVALID_S");}
    if (VL_UNLIKELY(((vlSelfRef.RREADY_S & 0xfeU)))) {
        Verilated::overWidthError("RREADY_S");}
    if (VL_UNLIKELY(((vlSelfRef.AWREADY_M & 0xfeU)))) {
        Verilated::overWidthError("AWREADY_M");}
    if (VL_UNLIKELY(((vlSelfRef.WREADY_M & 0xfeU)))) {
        Verilated::overWidthError("WREADY_M");}
    if (VL_UNLIKELY(((vlSelfRef.BID_M & 0xf0U)))) {
        Verilated::overWidthError("BID_M");}
    if (VL_UNLIKELY(((vlSelfRef.BRESP_M & 0xfcU)))) {
        Verilated::overWidthError("BRESP_M");}
    if (VL_UNLIKELY(((vlSelfRef.BVALID_M & 0xfeU)))) {
        Verilated::overWidthError("BVALID_M");}
    if (VL_UNLIKELY(((vlSelfRef.ARREADY_M & 0xfeU)))) {
        Verilated::overWidthError("ARREADY_M");}
    if (VL_UNLIKELY(((vlSelfRef.RID_M & 0xf0U)))) {
        Verilated::overWidthError("RID_M");}
    if (VL_UNLIKELY(((vlSelfRef.RRESP_M & 0xfcU)))) {
        Verilated::overWidthError("RRESP_M");}
    if (VL_UNLIKELY(((vlSelfRef.RLAST_M & 0xfeU)))) {
        Verilated::overWidthError("RLAST_M");}
    if (VL_UNLIKELY(((vlSelfRef.RVALID_M & 0xfeU)))) {
        Verilated::overWidthError("RVALID_M");}
}
#endif  // VL_DEBUG
