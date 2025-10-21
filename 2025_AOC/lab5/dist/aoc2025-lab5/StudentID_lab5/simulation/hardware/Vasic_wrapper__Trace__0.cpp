// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vasic_wrapper__Syms.h"


void Vasic_wrapper___024root__trace_chg_0_sub_0(Vasic_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vasic_wrapper___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root__trace_chg_0\n"); );
    // Init
    Vasic_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vasic_wrapper___024root*>(voidSelf);
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vasic_wrapper___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vasic_wrapper___024root__trace_chg_0_sub_0(Vasic_wrapper___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root__trace_chg_0_sub_0\n"); );
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<48>/*1535:0*/ __Vtemp_1;
    VlWide<6>/*191:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_3;
    VlWide<8>/*255:0*/ __Vtemp_4;
    VlWide<8>/*255:0*/ __Vtemp_5;
    VlWide<8>/*255:0*/ __Vtemp_6;
    VlWide<8>/*255:0*/ __Vtemp_7;
    VlWide<8>/*255:0*/ __Vtemp_8;
    VlWide<8>/*255:0*/ __Vtemp_9;
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xaU])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.asic_wrapper__DOT__cs_slave_next),3);
        bufp->chgIData(oldp+1,(vlSelfRef.asic_wrapper__DOT__addr_S_reg_next),32);
        bufp->chgCData(oldp+2,(vlSelfRef.asic_wrapper__DOT__BID_S_next),8);
        bufp->chgCData(oldp+3,(vlSelfRef.asic_wrapper__DOT__RID_S_next),8);
        bufp->chgBit(oldp+4,(vlSelfRef.asic_wrapper__DOT__write_error_next));
        bufp->chgIData(oldp+5,(vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE_next),32);
        bufp->chgIData(oldp+6,(vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM_next),32);
        bufp->chgIData(oldp+7,(vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM1_next),32);
        bufp->chgIData(oldp+8,(vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2_next),32);
        bufp->chgIData(oldp+9,(vlSelfRef.asic_wrapper__DOT__ASIC_IFMAP_ADDR_next),32);
        bufp->chgIData(oldp+10,(vlSelfRef.asic_wrapper__DOT__ASIC_FILTER_ADDR_next),32);
        bufp->chgIData(oldp+11,(vlSelfRef.asic_wrapper__DOT__ASIC_BIAS_ADDR_next),32);
        bufp->chgIData(oldp+12,(vlSelfRef.asic_wrapper__DOT__ASIC_OPSUM_ADDR_next),32);
        bufp->chgIData(oldp+13,(vlSelfRef.asic_wrapper__DOT__ASIC_GLB_FILTER_ADDR_next),32);
        bufp->chgIData(oldp+14,(vlSelfRef.asic_wrapper__DOT__ASIC_GLB_OFMAP_ADDR_next),32);
        bufp->chgIData(oldp+15,(vlSelfRef.asic_wrapper__DOT__ASIC_GLB_BIAS_ADDR_next),32);
        bufp->chgIData(oldp+16,(vlSelfRef.asic_wrapper__DOT__ASIC_IFMAP_LEN_next),32);
        bufp->chgIData(oldp+17,(vlSelfRef.asic_wrapper__DOT__ASIC_OFMAP_LEN_next),32);
        bufp->chgBit(oldp+18,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_push_i_R));
        bufp->chgBit(oldp+19,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_pop_i_W));
        bufp->chgCData(oldp+20,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R_next),3);
        bufp->chgCData(oldp+21,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W_next),3);
        bufp->chgCData(oldp+22,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_count_next),8);
        bufp->chgBit(oldp+23,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT____Vcellinp__DMA_FIFO_0__push_i));
        bufp->chgBit(oldp+24,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT____Vcellinp__DMA_FIFO_0__pop_i));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xcU])))) {
        bufp->chgIData(oldp+25,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__select_data[0]),32);
        bufp->chgIData(oldp+26,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__select_data[1]),32);
        bufp->chgIData(oldp+27,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__select_data[2]),32);
        bufp->chgIData(oldp+28,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__select_data[3]),32);
        bufp->chgIData(oldp+29,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__select_data[4]),32);
        bufp->chgIData(oldp+30,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__select_data[5]),32);
        bufp->chgIData(oldp+31,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__select_data[6]),32);
        bufp->chgIData(oldp+32,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__select_data[7]),32);
        bufp->chgIData(oldp+33,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__select_data[8]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xbU])))) {
        bufp->chgIData(oldp+34,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__select_data[0]),32);
        bufp->chgIData(oldp+35,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__select_data[1]),32);
        bufp->chgIData(oldp+36,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__select_data[2]),32);
        bufp->chgIData(oldp+37,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__select_data[3]),32);
        bufp->chgIData(oldp+38,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__select_data[4]),32);
        bufp->chgIData(oldp+39,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__select_data[5]),32);
        bufp->chgIData(oldp+40,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__select_data[6]),32);
        bufp->chgIData(oldp+41,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__select_data[7]),32);
        bufp->chgIData(oldp+42,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__select_data[8]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x10U])))) {
        bufp->chgIData(oldp+43,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__select_data[0]),32);
        bufp->chgIData(oldp+44,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__select_data[1]),32);
        bufp->chgIData(oldp+45,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__select_data[2]),32);
        bufp->chgIData(oldp+46,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__select_data[3]),32);
        bufp->chgIData(oldp+47,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__select_data[4]),32);
        bufp->chgIData(oldp+48,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__select_data[5]),32);
        bufp->chgIData(oldp+49,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__select_data[6]),32);
        bufp->chgIData(oldp+50,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__select_data[7]),32);
        bufp->chgIData(oldp+51,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__select_data[8]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[5U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xfU])))) {
        bufp->chgIData(oldp+52,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__select_data[0]),32);
        bufp->chgIData(oldp+53,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__select_data[1]),32);
        bufp->chgIData(oldp+54,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__select_data[2]),32);
        bufp->chgIData(oldp+55,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__select_data[3]),32);
        bufp->chgIData(oldp+56,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__select_data[4]),32);
        bufp->chgIData(oldp+57,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__select_data[5]),32);
        bufp->chgIData(oldp+58,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__select_data[6]),32);
        bufp->chgIData(oldp+59,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__select_data[7]),32);
        bufp->chgIData(oldp+60,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__select_data[8]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[6U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xeU])))) {
        bufp->chgIData(oldp+61,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__select_data[0]),32);
        bufp->chgIData(oldp+62,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__select_data[1]),32);
        bufp->chgIData(oldp+63,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__select_data[2]),32);
        bufp->chgIData(oldp+64,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__select_data[3]),32);
        bufp->chgIData(oldp+65,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__select_data[4]),32);
        bufp->chgIData(oldp+66,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__select_data[5]),32);
        bufp->chgIData(oldp+67,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__select_data[6]),32);
        bufp->chgIData(oldp+68,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__select_data[7]),32);
        bufp->chgIData(oldp+69,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__select_data[8]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[7U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xdU])))) {
        bufp->chgIData(oldp+70,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__select_data[0]),32);
        bufp->chgIData(oldp+71,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__select_data[1]),32);
        bufp->chgIData(oldp+72,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__select_data[2]),32);
        bufp->chgIData(oldp+73,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__select_data[3]),32);
        bufp->chgIData(oldp+74,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__select_data[4]),32);
        bufp->chgIData(oldp+75,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__select_data[5]),32);
        bufp->chgIData(oldp+76,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__select_data[6]),32);
        bufp->chgIData(oldp+77,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__select_data[7]),32);
        bufp->chgIData(oldp+78,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__select_data[8]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[8U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x11U])))) {
        bufp->chgWData(oldp+79,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XBus_data),192);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[9U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0x12U])))) {
        bufp->chgIData(oldp+85,(vlSelfRef.asic_wrapper__DOT__GLB_DI),32);
        bufp->chgIData(oldp+86,(vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__SRAM_DI),32);
        bufp->chgIData(oldp+87,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data[0]),32);
        bufp->chgIData(oldp+88,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data[1]),32);
        bufp->chgIData(oldp+89,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data[2]),32);
        bufp->chgIData(oldp+90,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data[3]),32);
        bufp->chgIData(oldp+91,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data[4]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data[5]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data[6]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xaU]))) {
        bufp->chgBit(oldp+94,(vlSelfRef.asic_wrapper__DOT__GLB_EN));
        bufp->chgBit(oldp+95,(vlSelfRef.asic_wrapper__DOT__GLB_EN_dma));
        bufp->chgBit(oldp+96,((1U & (~ ((8U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                                        | ((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                                           | ((6U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
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
                                                                == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))))))))))))));
        bufp->chgBit(oldp+97,(vlSelfRef.asic_wrapper__DOT__GLB_WEB));
        bufp->chgBit(oldp+98,(vlSelfRef.asic_wrapper__DOT__GLB_WEB_dma));
        bufp->chgBit(oldp+99,((1U & (~ ((0xcU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                                        | (0xfU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)))))));
        bufp->chgBit(oldp+100,(vlSelfRef.asic_wrapper__DOT__GLB_MODE));
        bufp->chgBit(oldp+101,(vlSelfRef.asic_wrapper__DOT__GLB_MODE_dma));
        bufp->chgBit(oldp+102,((1U & (~ ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_2) 
                                         | (0xfU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)))))));
        bufp->chgSData(oldp+103,(vlSelfRef.asic_wrapper__DOT__GLB_A),16);
        bufp->chgSData(oldp+104,((((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_word) 
                                   << 2U) | (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_bias))),16);
        bufp->chgSData(oldp+105,(vlSelfRef.asic_wrapper__DOT__GLB_A_asic),16);
        bufp->chgIData(oldp+106,(((IData)(vlSelfRef.asic_wrapper__DOT__GLB_MODE_dma)
                                   ? vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_data_o
                                   : ((2U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_R))
                                       ? ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_R))
                                           ? (vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_data_o 
                                              >> 0x18U)
                                           : (0xffU 
                                              & (vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_data_o 
                                                 >> 0x10U)))
                                       : ((1U & (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_R))
                                           ? (0xffU 
                                              & (vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_data_o 
                                                 >> 8U))
                                           : (0xffU 
                                              & vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_data_o))))),32);
        bufp->chgIData(oldp+107,(vlSelfRef.asic_wrapper__DOT__GLB_DO),32);
        bufp->chgIData(oldp+108,(((IData)(vlSelfRef.asic_wrapper__DOT__glb_mux)
                                   ? vlSelfRef.asic_wrapper__DOT__GLB_DO
                                   : 0U)),32);
        bufp->chgIData(oldp+109,(vlSelfRef.asic_wrapper__DOT__GLB_DO_asic),32);
        bufp->chgBit(oldp+110,(vlSelfRef.asic_wrapper__DOT__glb_mux));
        bufp->chgCData(oldp+111,(vlSelfRef.asic_wrapper__DOT__DMA_MODE),2);
        bufp->chgCData(oldp+112,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_c),2);
        bufp->chgBit(oldp+113,((3U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state))));
        bufp->chgIData(oldp+114,(((0x10U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                   ? ((8U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                       ? 0U : ((4U 
                                                & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                ? 0U
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                     ? 0U
                                                     : 
                                                    ((vlSelfRef.asic_wrapper__DOT__ASIC_OPSUM_ADDR 
                                                      + vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_res) 
                                                     + vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_res)))))
                                   : ((8U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                       ? 0U : ((4U 
                                                & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                     ? 0U
                                                     : 
                                                    ((vlSelfRef.asic_wrapper__DOT__ASIC_FILTER_ADDR 
                                                      + vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_res) 
                                                     + vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_res)))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                     ? 
                                                    ((vlSelfRef.asic_wrapper__DOT__ASIC_IFMAP_ADDR 
                                                      + vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_res) 
                                                     + vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_res)
                                                     : 
                                                    (vlSelfRef.asic_wrapper__DOT__ASIC_BIAS_ADDR 
                                                     + 
                                                     ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_M) 
                                                      << 2U)))
                                                    : 0U))))),32);
        bufp->chgSData(oldp+115,((0xffffU & ((0x10U 
                                              & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                              ? ((8U 
                                                  & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                     ? 0U
                                                     : 
                                                    (vlSelfRef.asic_wrapper__DOT__ASIC_GLB_OFMAP_ADDR 
                                                     + vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul3_res)))))
                                              : ((8U 
                                                  & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                     ? 0U
                                                     : 
                                                    (vlSelfRef.asic_wrapper__DOT__ASIC_GLB_FILTER_ADDR 
                                                     + 
                                                     (0xfffcU 
                                                      & (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul3_res 
                                                         << 2U)))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                     ? 0U
                                                     : vlSelfRef.asic_wrapper__DOT__ASIC_GLB_BIAS_ADDR)
                                                    : 0U)))))),16);
        bufp->chgSData(oldp+116,((0xffffU & ((0x10U 
                                              & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                              ? ((8U 
                                                  & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE)
                                                      ? 
                                                     (0xffU 
                                                      & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__eF) 
                                                         >> 4U))
                                                      : 
                                                     (0x3ffU 
                                                      & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__eF) 
                                                         >> 2U)))))))
                                              : ((8U 
                                                  & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                     ? 0U
                                                     : 9U))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                     ? 
                                                    (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul3_res 
                                                     >> 2U)
                                                     : 
                                                    (0x3ffU 
                                                     & (vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM 
                                                        >> 0x10U)))
                                                    : 0U)))))),16);
        bufp->chgCData(oldp+117,(vlSelfRef.asic_wrapper__DOT__cs_slave),3);
        bufp->chgIData(oldp+118,(vlSelfRef.asic_wrapper__DOT__addr_S_reg),32);
        bufp->chgBit(oldp+119,(vlSelfRef.asic_wrapper__DOT__write_error));
        bufp->chgIData(oldp+120,(vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE),32);
        bufp->chgIData(oldp+121,(vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM),32);
        bufp->chgIData(oldp+122,(vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM1),32);
        bufp->chgIData(oldp+123,(vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2),32);
        bufp->chgIData(oldp+124,(vlSelfRef.asic_wrapper__DOT__ASIC_IFMAP_ADDR),32);
        bufp->chgIData(oldp+125,(vlSelfRef.asic_wrapper__DOT__ASIC_FILTER_ADDR),32);
        bufp->chgIData(oldp+126,(vlSelfRef.asic_wrapper__DOT__ASIC_BIAS_ADDR),32);
        bufp->chgIData(oldp+127,(vlSelfRef.asic_wrapper__DOT__ASIC_OPSUM_ADDR),32);
        bufp->chgIData(oldp+128,(vlSelfRef.asic_wrapper__DOT__ASIC_GLB_FILTER_ADDR),32);
        bufp->chgIData(oldp+129,(vlSelfRef.asic_wrapper__DOT__ASIC_GLB_OFMAP_ADDR),32);
        bufp->chgIData(oldp+130,(vlSelfRef.asic_wrapper__DOT__ASIC_GLB_BIAS_ADDR),32);
        bufp->chgIData(oldp+131,(vlSelfRef.asic_wrapper__DOT__ASIC_IFMAP_LEN),32);
        bufp->chgIData(oldp+132,(vlSelfRef.asic_wrapper__DOT__ASIC_OFMAP_LEN),32);
        bufp->chgBit(oldp+133,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAEN));
        bufp->chgSData(oldp+134,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAGLB_ADDR),16);
        bufp->chgIData(oldp+135,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMADRAM_ADDR),32);
        bufp->chgSData(oldp+136,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_WORD_LEN),16);
        bufp->chgCData(oldp+137,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMABYTE_BIAS),2);
        bufp->chgCData(oldp+138,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMAMODE),2);
        bufp->chgBit(oldp+139,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMADIR));
        bufp->chgIData(oldp+140,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__dram_addr),32);
        bufp->chgCData(oldp+141,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_len),8);
        bufp->chgBit(oldp+142,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__AXI_enable));
        bufp->chgBit(oldp+143,((6U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R))));
        bufp->chgBit(oldp+144,((6U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W))));
        bufp->chgIData(oldp+145,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__glb_addr),32);
        bufp->chgBit(oldp+146,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_enable));
        bufp->chgBit(oldp+147,((6U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb))));
        bufp->chgBit(oldp+148,((3U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_MODE))));
        bufp->chgBit(oldp+149,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_pop_i_G));
        bufp->chgBit(oldp+150,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_push_i_G));
        bufp->chgIData(oldp+151,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__FIFO_data_o),32);
        bufp->chgBit(oldp+152,((0x40U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count))));
        bufp->chgBit(oldp+153,((0U == (IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count))));
        bufp->chgCData(oldp+154,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_R),3);
        bufp->chgCData(oldp+155,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_master_W),3);
        bufp->chgCData(oldp+156,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb),3);
        bufp->chgCData(oldp+157,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__cs_glb_next),3);
        bufp->chgCData(oldp+158,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__burst_count),8);
        bufp->chgSData(oldp+159,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_word),14);
        bufp->chgSData(oldp+160,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_word_next),14);
        bufp->chgCData(oldp+161,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_bias),2);
        bufp->chgCData(oldp+162,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__GLB_A_bias_next),2);
        bufp->chgSData(oldp+163,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_R),14);
        bufp->chgSData(oldp+164,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_W),14);
        bufp->chgSData(oldp+165,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_R_next),14);
        bufp->chgSData(oldp+166,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__counter_W_next),14);
        bufp->chgCData(oldp+167,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__write_ptr),6);
        bufp->chgCData(oldp+168,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__read_ptr),6);
        bufp->chgCData(oldp+169,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_FIFO_0__DOT__fifo_count),7);
        bufp->chgIData(oldp+170,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_WORD_LEN),32);
        bufp->chgBit(oldp+171,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT____Vcellinp__DMA_controller_0__AXI_done));
        bufp->chgSData(oldp+172,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT____Vcellout__DMA_controller_0__glb_addr),16);
        bufp->chgCData(oldp+173,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state),2);
        bufp->chgCData(oldp+174,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__DMA_state_next),2);
        bufp->chgIData(oldp+175,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__word_len_reg),32);
        bufp->chgIData(oldp+176,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__dram_addr_next),32);
        bufp->chgIData(oldp+177,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__word_len_reg_next),32);
        bufp->chgSData(oldp+178,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__glb_addr_next),16);
        bufp->chgCData(oldp+179,(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMA_controller_0__DOT__burst_len_next),8);
        bufp->chgIData(oldp+180,(vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__BWEB),32);
        bufp->chgIData(oldp+181,(vlSelfRef.asic_wrapper__DOT__GLB_0__DOT__i_SRAM__DOT__latched_DO),32);
        bufp->chgSData(oldp+182,((0x3fffU & ((IData)(vlSelfRef.asic_wrapper__DOT__GLB_A) 
                                             >> 2U))),14);
        bufp->chgBit(oldp+183,((1U & vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE)));
        bufp->chgBit(oldp+184,((1U & (vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE 
                                      >> 1U))));
        bufp->chgBit(oldp+185,((1U & (vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE 
                                      >> 2U))));
        bufp->chgBit(oldp+186,((1U & (vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE 
                                      >> 3U))));
        bufp->chgCData(oldp+187,((0x3fU & (vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE 
                                           >> 4U))),6);
        bufp->chgSData(oldp+188,((0x3ffU & (vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM 
                                            >> 0x10U))),10);
        bufp->chgCData(oldp+189,((0xfU & (vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+190,((7U & (vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM 
                                        >> 9U))),3);
        bufp->chgCData(oldp+191,((7U & (vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM 
                                        >> 6U))),3);
        bufp->chgCData(oldp+192,((7U & (vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM 
                                        >> 3U))),3);
        bufp->chgCData(oldp+193,((7U & vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM)),3);
        bufp->chgSData(oldp+194,((0x3ffU & (vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM1 
                                            >> 0xaU))),10);
        bufp->chgSData(oldp+195,((0x3ffU & vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM1)),10);
        bufp->chgCData(oldp+196,((0xffU & (vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                                           >> 8U))),8);
        bufp->chgCData(oldp+197,((0xffU & vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2)),8);
        bufp->chgSData(oldp+198,((0xffffU & vlSelfRef.asic_wrapper__DOT__ASIC_GLB_FILTER_ADDR)),16);
        bufp->chgSData(oldp+199,((0xffffU & vlSelfRef.asic_wrapper__DOT__ASIC_GLB_BIAS_ADDR)),16);
        bufp->chgSData(oldp+200,((0xffffU & vlSelfRef.asic_wrapper__DOT__ASIC_GLB_OFMAP_ADDR)),16);
        bufp->chgIData(oldp+201,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray),32);
        bufp->chgBit(oldp+202,((1U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))));
        bufp->chgCData(oldp+203,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_XID_scan_in),4);
        bufp->chgCData(oldp+204,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_XID_scan_in),4);
        bufp->chgCData(oldp+205,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_XID_scan_in),4);
        bufp->chgCData(oldp+206,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__opsum_XID_scan_in),4);
        bufp->chgBit(oldp+207,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__set_YID));
        bufp->chgCData(oldp+208,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_YID_scan_in),3);
        bufp->chgCData(oldp+209,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y2),3);
        bufp->chgCData(oldp+210,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_YID_scan_in),3);
        bufp->chgCData(oldp+211,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__opsum_YID_scan_in),3);
        bufp->chgBit(oldp+212,(((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__set_YID) 
                                & ((~ (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y2)) 
                                   & (0U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y1))))));
        bufp->chgCData(oldp+213,(((2U == (7U & (vlSelfRef.asic_wrapper__DOT__ASIC_MAPPING_PARAM 
                                                >> 3U)))
                                   ? 0x1fU : 0x1bU)),5);
        bufp->chgQData(oldp+214,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en),48);
        bufp->chgSData(oldp+216,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_config),11);
        bufp->chgBit(oldp+217,((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))));
        bufp->chgBit(oldp+218,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PEA_ifmap_ready));
        bufp->chgCData(oldp+219,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X),4);
        bufp->chgCData(oldp+220,(((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                   ? 0U : 7U)),3);
        bufp->chgBit(oldp+221,((7U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))));
        bufp->chgBit(oldp+222,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PEA_filter_ready));
        bufp->chgCData(oldp+223,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X),4);
        bufp->chgCData(oldp+224,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y),3);
        bufp->chgBit(oldp+225,((0xbU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))));
        bufp->chgBit(oldp+226,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PEA_ipsum_ready));
        bufp->chgCData(oldp+227,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X),4);
        bufp->chgCData(oldp+228,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y),3);
        bufp->chgBit(oldp+229,((0U != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__mc_valid))));
        bufp->chgBit(oldp+230,((0xcU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))));
        bufp->chgCData(oldp+231,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__opsum_tag_X),4);
        bufp->chgCData(oldp+232,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__opsum_tag_Y),3);
        bufp->chgBit(oldp+233,((0xcU != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))));
        bufp->chgBit(oldp+234,(((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                                & ((0U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W)) 
                                   | (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W) 
                                       == (0xffU & 
                                           ((vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                                             >> 8U) 
                                            - (IData)(1U)))) 
                                      | (((0U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_E)) 
                                          & (0U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_h))) 
                                         | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_E_reset) 
                                            & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_h_reset))))))));
        bufp->chgCData(oldp+235,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ppu_data_out),8);
        bufp->chgBit(oldp+236,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__relu_sel));
        bufp->chgBit(oldp+237,(((0xeU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                                & ((0U != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PPU)) 
                                   & (vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE 
                                      >> 1U)))));
        bufp->chgBit(oldp+238,(((0xeU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)) 
                                & ((1U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PPU)) 
                                   & (vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE 
                                      >> 1U)))));
        bufp->chgQData(oldp+239,((((QData)((IData)(
                                                   ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid) 
                                                      << 0x18U) 
                                                     | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                                        << 0x10U)) 
                                                    | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                                        << 8U) 
                                                       | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid)))))),48);
        bufp->chgQData(oldp+241,((((QData)((IData)(
                                                   (((((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.ifmap_ready) 
                                                         << 0x1fU) 
                                                        | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.ifmap_ready) 
                                                           << 0x1eU)) 
                                                       | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.ifmap_ready) 
                                                           << 0x1dU) 
                                                          | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.ifmap_ready) 
                                                             << 0x1cU))) 
                                                      | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.ifmap_ready) 
                                                           << 0x1bU) 
                                                          | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.ifmap_ready) 
                                                             << 0x1aU)) 
                                                         | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.ifmap_ready) 
                                                             << 0x19U) 
                                                            | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.ifmap_ready) 
                                                               << 0x18U)))) 
                                                     | (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.ifmap_ready) 
                                                           << 0x17U) 
                                                          | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.ifmap_ready) 
                                                             << 0x16U)) 
                                                         | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.ifmap_ready) 
                                                             << 0x15U) 
                                                            | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.ifmap_ready) 
                                                               << 0x14U))) 
                                                        | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.ifmap_ready) 
                                                             << 0x13U) 
                                                            | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.ifmap_ready) 
                                                               << 0x12U)) 
                                                           | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.ifmap_ready) 
                                                               << 0x11U) 
                                                              | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.ifmap_ready) 
                                                                 << 0x10U))))) 
                                                    | ((((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.ifmap_ready) 
                                                           << 0xfU) 
                                                          | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.ifmap_ready) 
                                                             << 0xeU)) 
                                                         | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.ifmap_ready) 
                                                             << 0xdU) 
                                                            | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.ifmap_ready) 
                                                               << 0xcU))) 
                                                        | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.ifmap_ready) 
                                                             << 0xbU) 
                                                            | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.ifmap_ready) 
                                                               << 0xaU)) 
                                                           | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.ifmap_ready) 
                                                               << 9U) 
                                                              | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.ifmap_ready) 
                                                                 << 8U)))) 
                                                       | (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.ifmap_ready) 
                                                             << 7U) 
                                                            | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.ifmap_ready) 
                                                               << 6U)) 
                                                           | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.ifmap_ready) 
                                                               << 5U) 
                                                              | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.ifmap_ready) 
                                                                 << 4U))) 
                                                          | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.ifmap_ready) 
                                                               << 3U) 
                                                              | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.ifmap_ready) 
                                                                 << 2U)) 
                                                             | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.ifmap_ready) 
                                                                 << 1U) 
                                                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.ifmap_ready)))))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.ifmap_ready) 
                                                                   << 0xfU) 
                                                                  | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.ifmap_ready) 
                                                                     << 0xeU)) 
                                                                 | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.ifmap_ready) 
                                                                     << 0xdU) 
                                                                    | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.ifmap_ready) 
                                                                       << 0xcU))) 
                                                                | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.ifmap_ready) 
                                                                     << 0xbU) 
                                                                    | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.ifmap_ready) 
                                                                       << 0xaU)) 
                                                                   | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.ifmap_ready) 
                                                                       << 9U) 
                                                                      | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.ifmap_ready) 
                                                                          << 8U) 
                                                                         | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready))))))))),48);
        __Vtemp_1[0U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[1U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[2U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[3U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[4U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[5U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[6U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[7U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[8U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[9U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0xaU] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0xbU] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0xcU] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0xdU] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0xeU] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0xfU] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x10U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x11U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x12U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x13U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x14U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x15U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x16U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x17U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x18U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x19U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x1aU] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x1bU] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x1cU] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x1dU] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x1eU] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x1fU] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x20U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x21U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x22U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x23U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x24U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x25U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x26U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x27U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x28U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x29U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x2aU] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x2bU] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x2cU] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x2dU] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x2eU] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_1[0x2fU] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        bufp->chgWData(oldp+243,(__Vtemp_1),1536);
        bufp->chgQData(oldp+291,((((QData)((IData)(
                                                   ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid) 
                                                      << 0x18U) 
                                                     | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                                        << 0x10U)) 
                                                    | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                                        << 8U) 
                                                       | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                                                 << 8U) 
                                                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid)))))),48);
        bufp->chgQData(oldp+293,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_filter_ready),48);
        bufp->chgQData(oldp+295,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_ipsum_valid),48);
        bufp->chgQData(oldp+297,((((QData)((IData)(
                                                   ((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                                      << 0x18U) 
                                                     | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                                        << 0x10U)) 
                                                    | (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                                        << 8U) 
                                                       | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                                                 << 8U) 
                                                                | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready)))))),48);
        bufp->chgQData(oldp+299,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid),48);
        bufp->chgQData(oldp+301,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_ready),48);
        bufp->chgWData(oldp+303,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum),1536);
        bufp->chgQData(oldp+351,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid),48);
        bufp->chgQData(oldp+353,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_ready),48);
        bufp->chgWData(oldp+355,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum),1536);
        bufp->chgQData(oldp+403,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_valid),48);
        bufp->chgQData(oldp+405,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready),48);
        bufp->chgWData(oldp+407,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum),1536);
        bufp->chgCData(oldp+455,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__LN_config),5);
        bufp->chgCData(oldp+456,(((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.master_ready) 
                                    << 5U) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.master_ready) 
                                               << 4U) 
                                              | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.master_ready) 
                                                 << 3U))) 
                                  | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.master_ready) 
                                      << 2U) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.master_ready) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.master_ready))))),6);
        bufp->chgCData(oldp+457,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid),6);
        __Vtemp_2[0U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_2[1U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_2[2U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_2[3U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_2[4U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_2[5U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        bufp->chgWData(oldp+458,(__Vtemp_2),192);
        bufp->chgCData(oldp+464,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__scan_chain[0]),4);
        bufp->chgCData(oldp+465,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__scan_chain[1]),4);
        bufp->chgCData(oldp+466,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__scan_chain[2]),4);
        bufp->chgCData(oldp+467,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__scan_chain[3]),4);
        bufp->chgCData(oldp+468,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__scan_chain[4]),4);
        bufp->chgCData(oldp+469,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__scan_chain[5]),4);
        bufp->chgCData(oldp+470,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__scan_chain[6]),4);
        bufp->chgCData(oldp+471,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id),3);
        bufp->chgCData(oldp+472,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__valid_mask),6);
        bufp->chgCData(oldp+473,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__mc_valid),6);
        bufp->chgCData(oldp+474,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__mc_ready),6);
        bufp->chgCData(oldp+475,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__ID_scan_chain[0]),3);
        bufp->chgCData(oldp+476,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__ID_scan_chain[1]),3);
        bufp->chgCData(oldp+477,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__ID_scan_chain[2]),3);
        bufp->chgCData(oldp+478,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__ID_scan_chain[3]),3);
        bufp->chgCData(oldp+479,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__ID_scan_chain[4]),3);
        bufp->chgCData(oldp+480,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__ID_scan_chain[5]),3);
        bufp->chgCData(oldp+481,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__ID_scan_chain[6]),3);
        bufp->chgIData(oldp+482,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT__j),32);
        bufp->chgCData(oldp+483,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id),3);
        bufp->chgBit(oldp+484,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                 == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y)) 
                                & (7U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)))));
        bufp->chgBit(oldp+485,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.master_ready));
        bufp->chgBit(oldp+486,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y) 
                                 != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.master_ready))));
        bufp->chgCData(oldp+487,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id),3);
        bufp->chgBit(oldp+488,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                 == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y)) 
                                & (7U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)))));
        bufp->chgBit(oldp+489,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.master_ready));
        bufp->chgBit(oldp+490,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y) 
                                 != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.master_ready))));
        bufp->chgCData(oldp+491,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id),3);
        bufp->chgBit(oldp+492,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                 == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y)) 
                                & (7U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)))));
        bufp->chgBit(oldp+493,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.master_ready));
        bufp->chgBit(oldp+494,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y) 
                                 != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.master_ready))));
        bufp->chgCData(oldp+495,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id),3);
        bufp->chgBit(oldp+496,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                 == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y)) 
                                & (7U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)))));
        bufp->chgBit(oldp+497,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.master_ready));
        bufp->chgBit(oldp+498,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y) 
                                 != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.master_ready))));
        bufp->chgCData(oldp+499,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id),3);
        bufp->chgBit(oldp+500,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                 == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y)) 
                                & (7U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)))));
        bufp->chgBit(oldp+501,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.master_ready));
        bufp->chgBit(oldp+502,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y) 
                                 != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.master_ready))));
        bufp->chgBit(oldp+503,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                 == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y)) 
                                & (7U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)))));
        bufp->chgBit(oldp+504,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.master_ready));
        bufp->chgBit(oldp+505,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_Y) 
                                 != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.master_ready))));
        bufp->chgCData(oldp+506,(((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.master_ready) 
                                    << 5U) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.master_ready) 
                                               << 4U) 
                                              | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.master_ready) 
                                                 << 3U))) 
                                  | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.master_ready) 
                                      << 2U) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.master_ready) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.master_ready))))),6);
        bufp->chgCData(oldp+507,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid),6);
        bufp->chgCData(oldp+508,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__scan_chain[0]),4);
        bufp->chgCData(oldp+509,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__scan_chain[1]),4);
        bufp->chgCData(oldp+510,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__scan_chain[2]),4);
        bufp->chgCData(oldp+511,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__scan_chain[3]),4);
        bufp->chgCData(oldp+512,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__scan_chain[4]),4);
        bufp->chgCData(oldp+513,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__scan_chain[5]),4);
        bufp->chgCData(oldp+514,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__scan_chain[6]),4);
        bufp->chgCData(oldp+515,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id),3);
        bufp->chgCData(oldp+516,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__valid_mask),6);
        bufp->chgCData(oldp+517,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__mc_valid),6);
        bufp->chgCData(oldp+518,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__mc_ready),6);
        bufp->chgCData(oldp+519,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__ID_scan_chain[0]),3);
        bufp->chgCData(oldp+520,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__ID_scan_chain[1]),3);
        bufp->chgCData(oldp+521,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__ID_scan_chain[2]),3);
        bufp->chgCData(oldp+522,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__ID_scan_chain[3]),3);
        bufp->chgCData(oldp+523,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__ID_scan_chain[4]),3);
        bufp->chgCData(oldp+524,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__ID_scan_chain[5]),3);
        bufp->chgCData(oldp+525,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__ID_scan_chain[6]),3);
        bufp->chgIData(oldp+526,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT__j),32);
        bufp->chgCData(oldp+527,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id),3);
        bufp->chgBit(oldp+528,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                 == ((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                      ? 0U : 7U)) & 
                                (9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)))));
        bufp->chgBit(oldp+529,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.master_ready));
        bufp->chgBit(oldp+530,(((((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                   ? 0U : 7U) != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.master_ready))));
        bufp->chgCData(oldp+531,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id),3);
        bufp->chgBit(oldp+532,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                 == ((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                      ? 0U : 7U)) & 
                                (9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)))));
        bufp->chgBit(oldp+533,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.master_ready));
        bufp->chgBit(oldp+534,(((((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                   ? 0U : 7U) != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.master_ready))));
        bufp->chgCData(oldp+535,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id),3);
        bufp->chgBit(oldp+536,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                 == ((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                      ? 0U : 7U)) & 
                                (9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)))));
        bufp->chgBit(oldp+537,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.master_ready));
        bufp->chgBit(oldp+538,(((((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                   ? 0U : 7U) != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.master_ready))));
        bufp->chgCData(oldp+539,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id),3);
        bufp->chgBit(oldp+540,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                 == ((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                      ? 0U : 7U)) & 
                                (9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)))));
        bufp->chgBit(oldp+541,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.master_ready));
        bufp->chgBit(oldp+542,(((((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                   ? 0U : 7U) != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.master_ready))));
        bufp->chgCData(oldp+543,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id),3);
        bufp->chgBit(oldp+544,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                 == ((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                      ? 0U : 7U)) & 
                                (9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)))));
        bufp->chgBit(oldp+545,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.master_ready));
        bufp->chgBit(oldp+546,(((((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                   ? 0U : 7U) != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.master_ready))));
        bufp->chgBit(oldp+547,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                 == ((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                      ? 0U : 7U)) & 
                                (9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)))));
        bufp->chgBit(oldp+548,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.master_ready));
        bufp->chgBit(oldp+549,(((((9U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                   ? 0U : 7U) != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.master_ready))));
        bufp->chgCData(oldp+550,(((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.master_ready) 
                                    << 5U) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.master_ready) 
                                               << 4U) 
                                              | ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.master_ready) 
                                                 << 3U))) 
                                  | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.master_ready) 
                                      << 2U) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.master_ready) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.master_ready))))),6);
        bufp->chgCData(oldp+551,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid),6);
        bufp->chgCData(oldp+552,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__scan_chain[0]),4);
        bufp->chgCData(oldp+553,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__scan_chain[1]),4);
        bufp->chgCData(oldp+554,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__scan_chain[2]),4);
        bufp->chgCData(oldp+555,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__scan_chain[3]),4);
        bufp->chgCData(oldp+556,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__scan_chain[4]),4);
        bufp->chgCData(oldp+557,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__scan_chain[5]),4);
        bufp->chgCData(oldp+558,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__scan_chain[6]),4);
        bufp->chgCData(oldp+559,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id),3);
        bufp->chgCData(oldp+560,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__valid_mask),6);
        bufp->chgCData(oldp+561,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__mc_valid),6);
        bufp->chgCData(oldp+562,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__mc_ready),6);
        bufp->chgCData(oldp+563,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__ID_scan_chain[0]),3);
        bufp->chgCData(oldp+564,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__ID_scan_chain[1]),3);
        bufp->chgCData(oldp+565,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__ID_scan_chain[2]),3);
        bufp->chgCData(oldp+566,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__ID_scan_chain[3]),3);
        bufp->chgCData(oldp+567,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__ID_scan_chain[4]),3);
        bufp->chgCData(oldp+568,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__ID_scan_chain[5]),3);
        bufp->chgCData(oldp+569,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__ID_scan_chain[6]),3);
        bufp->chgIData(oldp+570,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT__j),32);
        bufp->chgCData(oldp+571,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id),3);
        bufp->chgBit(oldp+572,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                 == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y)) 
                                & (0xbU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)))));
        bufp->chgBit(oldp+573,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.master_ready));
        bufp->chgBit(oldp+574,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y) 
                                 != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.master_ready))));
        bufp->chgCData(oldp+575,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id),3);
        bufp->chgBit(oldp+576,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                 == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y)) 
                                & (0xbU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)))));
        bufp->chgBit(oldp+577,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.master_ready));
        bufp->chgBit(oldp+578,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y) 
                                 != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.master_ready))));
        bufp->chgCData(oldp+579,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id),3);
        bufp->chgBit(oldp+580,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                 == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y)) 
                                & (0xbU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)))));
        bufp->chgBit(oldp+581,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.master_ready));
        bufp->chgBit(oldp+582,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y) 
                                 != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.master_ready))));
        bufp->chgCData(oldp+583,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id),3);
        bufp->chgBit(oldp+584,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                 == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y)) 
                                & (0xbU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)))));
        bufp->chgBit(oldp+585,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.master_ready));
        bufp->chgBit(oldp+586,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y) 
                                 != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.master_ready))));
        bufp->chgCData(oldp+587,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id),3);
        bufp->chgBit(oldp+588,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                 == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y)) 
                                & (0xbU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)))));
        bufp->chgBit(oldp+589,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.master_ready));
        bufp->chgBit(oldp+590,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y) 
                                 != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.master_ready))));
        bufp->chgBit(oldp+591,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                 == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y)) 
                                & (0xbU == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs)))));
        bufp->chgBit(oldp+592,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.master_ready));
        bufp->chgBit(oldp+593,((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_Y) 
                                 != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__YBus__DOT____Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.master_ready))));
        bufp->chgCData(oldp+594,((((((IData)((0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__mc_valid))) 
                                     << 2U) | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__mc_valid))) 
                                                << 1U) 
                                               | (0U 
                                                  != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__mc_valid)))) 
                                   << 3U) | (((IData)(
                                                      (0U 
                                                       != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__mc_valid))) 
                                              << 2U) 
                                             | (((IData)(
                                                         (0U 
                                                          != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__mc_valid))) 
                                                 << 1U) 
                                                | (0U 
                                                   != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__mc_valid)))))),6);
        bufp->chgCData(oldp+595,(((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__ready_out) 
                                    << 5U) | (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out) 
                                               << 4U) 
                                              | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out) 
                                                 << 3U))) 
                                  | (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__ready_out) 
                                      << 2U) | (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out))))),6);
        bufp->chgCData(oldp+596,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XID_scan_chain[0]),4);
        bufp->chgCData(oldp+597,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XID_scan_chain[1]),4);
        bufp->chgCData(oldp+598,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XID_scan_chain[2]),4);
        bufp->chgCData(oldp+599,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XID_scan_chain[3]),4);
        bufp->chgCData(oldp+600,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XID_scan_chain[4]),4);
        bufp->chgCData(oldp+601,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XID_scan_chain[5]),4);
        bufp->chgCData(oldp+602,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__XID_scan_chain[6]),4);
        bufp->chgCData(oldp+603,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id),3);
        bufp->chgCData(oldp+604,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__mc_valid),6);
        bufp->chgCData(oldp+605,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__ID_scan_chain[0]),3);
        bufp->chgCData(oldp+606,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__ID_scan_chain[1]),3);
        bufp->chgCData(oldp+607,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__ID_scan_chain[2]),3);
        bufp->chgCData(oldp+608,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__ID_scan_chain[3]),3);
        bufp->chgCData(oldp+609,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__ID_scan_chain[4]),3);
        bufp->chgCData(oldp+610,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__ID_scan_chain[5]),3);
        bufp->chgCData(oldp+611,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__ID_scan_chain[6]),3);
        bufp->chgCData(oldp+612,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id),3);
        bufp->chgBit(oldp+613,((0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__mc_valid))));
        bufp->chgBit(oldp+614,(((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0) 
                                & (0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__mc_valid)))));
        bufp->chgBit(oldp+615,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out));
        bufp->chgCData(oldp+616,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id),3);
        bufp->chgBit(oldp+617,((0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__mc_valid))));
        bufp->chgBit(oldp+618,(((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0) 
                                & (0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__mc_valid)))));
        bufp->chgBit(oldp+619,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out));
        bufp->chgCData(oldp+620,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id),3);
        bufp->chgBit(oldp+621,((0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__mc_valid))));
        bufp->chgBit(oldp+622,(((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0) 
                                & (0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__mc_valid)))));
        bufp->chgBit(oldp+623,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__ready_out));
        bufp->chgCData(oldp+624,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id),3);
        bufp->chgBit(oldp+625,((0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__mc_valid))));
        bufp->chgBit(oldp+626,(((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0) 
                                & (0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__mc_valid)))));
        bufp->chgBit(oldp+627,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out));
        bufp->chgCData(oldp+628,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id),3);
        bufp->chgBit(oldp+629,((0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__mc_valid))));
        bufp->chgBit(oldp+630,(((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0) 
                                & (0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__mc_valid)))));
        bufp->chgBit(oldp+631,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out));
        bufp->chgBit(oldp+632,((0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__mc_valid))));
        bufp->chgBit(oldp+633,(((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h4d08139e_0_0) 
                                & (0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__mc_valid)))));
        bufp->chgBit(oldp+634,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__ready_out));
        bufp->chgCData(oldp+635,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__pq_data_out),8);
        bufp->chgCData(oldp+636,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__pq_data_out_reg),8);
        bufp->chgCData(oldp+637,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__Comparator_Qint8_0__DOT__data_max),8);
        bufp->chgCData(oldp+638,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__relu_data_in),8);
        bufp->chgCData(oldp+639,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__Comparator_Qint8_0__DOT__data_max_next),8);
        bufp->chgBit(oldp+640,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__Comparator_Qint8_0__DOT__bigger));
        bufp->chgCData(oldp+641,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__ReLU_Qint8_0__DOT__relu_out),8);
        bufp->chgIData(oldp+642,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__post_quant_0__DOT__data_shifted),32);
        bufp->chgBit(oldp+643,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__post_quant_0__DOT__overflow_pos));
        bufp->chgBit(oldp+644,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PPU__DOT__post_quant_0__DOT__overflow_neg));
        bufp->chgCData(oldp+645,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs),5);
        bufp->chgCData(oldp+646,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__ns),5);
        bufp->chgCData(oldp+647,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_x),3);
        bufp->chgCData(oldp+648,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y1),2);
        bufp->chgBit(oldp+649,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_y2));
        bufp->chgCData(oldp+650,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_filt),4);
        bufp->chgCData(oldp+651,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt),3);
        bufp->chgCData(oldp+652,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W),8);
        bufp->chgCData(oldp+653,((0xffU & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_W) 
                                           - (IData)(2U)))),8);
        bufp->chgCData(oldp+654,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__PPU_count_F),8);
        bufp->chgCData(oldp+655,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_h),4);
        bufp->chgCData(oldp+656,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_H),8);
        bufp->chgSData(oldp+657,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_m),10);
        bufp->chgSData(oldp+658,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_C),10);
        bufp->chgCData(oldp+659,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_E),8);
        bufp->chgSData(oldp+660,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_M),10);
        bufp->chgCData(oldp+661,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e),3);
        bufp->chgCData(oldp+662,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PPU),3);
        bufp->chgBit(oldp+663,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt_reset));
        bufp->chgBit(oldp+664,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_h_reset));
        bufp->chgBit(oldp+665,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_e_reset));
        bufp->chgBit(oldp+666,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_F_reset));
        bufp->chgBit(oldp+667,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_C_reset));
        bufp->chgBit(oldp+668,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PPU_reset));
        bufp->chgBit(oldp+669,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_m_reset));
        bufp->chgBit(oldp+670,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_E_reset));
        bufp->chgBit(oldp+671,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_M_reset));
        bufp->chgBit(oldp+672,((0U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_H))));
        bufp->chgBit(oldp+673,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_H_reset));
        bufp->chgBit(oldp+674,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_c_reset));
        bufp->chgCData(oldp+675,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__valid_e),4);
        bufp->chgIData(oldp+676,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_src1),32);
        bufp->chgIData(oldp+677,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_src2),32);
        bufp->chgIData(oldp+678,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul1_res),32);
        bufp->chgIData(oldp+679,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src1),32);
        bufp->chgIData(oldp+680,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_src2),32);
        bufp->chgIData(oldp+681,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul2_res),32);
        bufp->chgIData(oldp+682,(((3U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                   ? (0xffU & (vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                                               - (IData)(2U)))
                                   : ((4U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                       ? 9U : ((0x10U 
                                                == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                                ? (
                                                   (2U 
                                                    & vlSelfRef.asic_wrapper__DOT__ASIC_ENABLE)
                                                    ? 
                                                   (0x3ffU 
                                                    & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__eF) 
                                                       >> 2U))
                                                    : (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__eF))
                                                : 0U)))),32);
        bufp->chgIData(oldp+683,(((3U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                   ? (((0xfU & ((IData)(2U) 
                                                + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__valid_e))) 
                                       - (0U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_H))) 
                                      - (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_H_reset))
                                   : ((4U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                       ? (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt)
                                       : ((0x10U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                           ? ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_m) 
                                              + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_PP_filt))
                                           : 0U)))),32);
        bufp->chgIData(oldp+684,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__mul3_res),32);
        bufp->chgCData(oldp+685,(((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_14)
                                   ? (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_15)
                                   : 8U)),8);
        bufp->chgCData(oldp+686,((0xfU & ((IData)(2U) 
                                          + (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__valid_e)))),4);
        bufp->chgCData(oldp+687,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__PP_filt),6);
        bufp->chgCData(oldp+688,((0x3fU & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_9))),6);
        bufp->chgCData(oldp+689,((0xffU & ((vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                                            >> 8U) 
                                           - (IData)(2U)))),8);
        bufp->chgCData(oldp+690,((0xffU & (vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                                           - (IData)(2U)))),8);
        bufp->chgSData(oldp+691,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__eF),12);
        bufp->chgSData(oldp+692,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__EF),16);
        bufp->chgSData(oldp+693,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__C9),14);
        bufp->chgBit(oldp+694,((0U == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__count_C))));
        bufp->chgCData(oldp+695,((0xffU & ((vlSelfRef.asic_wrapper__DOT__ASIC_SHAPE_PARAM2 
                                            - (IData)(2U)) 
                                           - (IData)(1U)))),8);
        bufp->chgCData(oldp+696,((7U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT____VdfgRegularize_hfb48745a_0_9) 
                                        - (IData)(1U)))),3);
        bufp->chgBit(oldp+697,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en))));
        bufp->chgIData(oldp+698,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0U]),32);
        bufp->chgBit(oldp+699,((1U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))));
        bufp->chgBit(oldp+700,((1U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid))));
        bufp->chgBit(oldp+701,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid))));
        bufp->chgBit(oldp+702,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready))));
        bufp->chgIData(oldp+703,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))
                                   ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch]
                                   : 0U)),32);
        bufp->chgBit(oldp+704,(((2U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)) 
                                | (6U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs)))));
        bufp->chgBit(oldp+705,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+706,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+707,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+708,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+709,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+710,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+711,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+712,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+713,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+714,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+715,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+716,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+717,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+718,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+719,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+720,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+721,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+722,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+723,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+724,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+725,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+726,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+727,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+728,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+729,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+730,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+731,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+732,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+733,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+734,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+735,((0x3fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+736,((0x3fU & ((IData)(2U) 
                                           + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+737,((0x3fU & ((IData)(3U) 
                                           + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+738,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+739,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+740,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad
                                 [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+741,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))
                                   ? (((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__mul_res) 
                                                      >> 0xfU)))) 
                                       << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__mul_res))
                                   : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0U])),32);
        bufp->chgIData(oldp+742,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+743,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+744,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+745,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+746,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+747,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                              >> 1U)))));
        bufp->chgIData(oldp+748,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[1U]),32);
        bufp->chgBit(oldp+749,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                      >> 1U))));
        bufp->chgBit(oldp+750,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                      >> 1U))));
        bufp->chgBit(oldp+751,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                              >> 1U)))));
        bufp->chgBit(oldp+752,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                              >> 1U)))));
        bufp->chgIData(oldp+753,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))
                                   ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch]
                                   : 0U)),32);
        bufp->chgBit(oldp+754,(((2U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)) 
                                | (6U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs)))));
        bufp->chgBit(oldp+755,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+756,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+757,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+758,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+759,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+760,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+761,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+762,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+763,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+764,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+765,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+766,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+767,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+768,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+769,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+770,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+771,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+772,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+773,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+774,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+775,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+776,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+777,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+778,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+779,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+780,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+781,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+782,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+783,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+784,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+785,((0x3fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+786,((0x3fU & ((IData)(2U) 
                                           + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+787,((0x3fU & ((IData)(3U) 
                                           + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+788,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+789,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+790,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad
                                 [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+791,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))
                                   ? (((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__mul_res) 
                                                      >> 0xfU)))) 
                                       << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__mul_res))
                                   : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[1U])),32);
        bufp->chgIData(oldp+792,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+793,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+794,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+795,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+796,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+797,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                              >> 2U)))));
        bufp->chgIData(oldp+798,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[2U]),32);
        bufp->chgBit(oldp+799,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                      >> 2U))));
        bufp->chgBit(oldp+800,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                      >> 2U))));
        bufp->chgBit(oldp+801,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                              >> 2U)))));
        bufp->chgBit(oldp+802,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                              >> 2U)))));
        bufp->chgIData(oldp+803,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))
                                   ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch]
                                   : 0U)),32);
        bufp->chgBit(oldp+804,(((2U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)) 
                                | (6U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs)))));
        bufp->chgBit(oldp+805,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+806,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+807,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+808,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+809,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+810,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+811,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+812,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+813,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+814,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+815,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+816,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+817,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+818,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+819,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+820,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+821,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+822,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+823,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+824,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+825,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+826,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+827,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+828,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+829,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+830,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+831,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+832,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+833,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+834,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+835,((0x3fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+836,((0x3fU & ((IData)(2U) 
                                           + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+837,((0x3fU & ((IData)(3U) 
                                           + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+838,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+839,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+840,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad
                                 [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+841,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))
                                   ? (((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__mul_res) 
                                                      >> 0xfU)))) 
                                       << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__mul_res))
                                   : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[2U])),32);
        bufp->chgIData(oldp+842,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+843,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+844,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+845,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+846,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+847,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                              >> 3U)))));
        bufp->chgIData(oldp+848,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[3U]),32);
        bufp->chgBit(oldp+849,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                      >> 3U))));
        bufp->chgBit(oldp+850,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                      >> 3U))));
        bufp->chgBit(oldp+851,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                              >> 3U)))));
        bufp->chgBit(oldp+852,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                              >> 3U)))));
        bufp->chgIData(oldp+853,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))
                                   ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch]
                                   : 0U)),32);
        bufp->chgBit(oldp+854,(((2U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)) 
                                | (6U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs)))));
        bufp->chgBit(oldp+855,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+856,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+857,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+858,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+859,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+860,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+861,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+862,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+863,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+864,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+865,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+866,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+867,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+868,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+869,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+870,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+871,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+872,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+873,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+874,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+875,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+876,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+877,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+878,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+879,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+880,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+881,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+882,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+883,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+884,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+885,((0x3fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+886,((0x3fU & ((IData)(2U) 
                                           + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+887,((0x3fU & ((IData)(3U) 
                                           + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+888,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+889,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+890,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad
                                 [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+891,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))
                                   ? (((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__mul_res) 
                                                      >> 0xfU)))) 
                                       << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__mul_res))
                                   : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[3U])),32);
        bufp->chgIData(oldp+892,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+893,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+894,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+895,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+896,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+897,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                              >> 4U)))));
        bufp->chgIData(oldp+898,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[4U]),32);
        bufp->chgBit(oldp+899,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                      >> 4U))));
        bufp->chgBit(oldp+900,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                      >> 4U))));
        bufp->chgBit(oldp+901,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                              >> 4U)))));
        bufp->chgBit(oldp+902,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                              >> 4U)))));
        bufp->chgIData(oldp+903,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))
                                   ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch]
                                   : 0U)),32);
        bufp->chgBit(oldp+904,(((2U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)) 
                                | (6U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs)))));
        bufp->chgBit(oldp+905,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+906,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+907,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+908,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+909,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+910,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+911,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+912,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+913,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+914,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+915,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+916,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+917,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+918,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+919,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+920,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+921,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+922,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+923,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+924,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+925,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+926,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+927,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+928,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+929,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+930,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+931,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+932,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+933,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+934,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+935,((0x3fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+936,((0x3fU & ((IData)(2U) 
                                           + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+937,((0x3fU & ((IData)(3U) 
                                           + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+938,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+939,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+940,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad
                                 [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+941,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))
                                   ? (((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__mul_res) 
                                                      >> 0xfU)))) 
                                       << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__mul_res))
                                   : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[4U])),32);
        bufp->chgIData(oldp+942,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+943,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+944,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+945,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+946,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+947,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                              >> 5U)))));
        bufp->chgIData(oldp+948,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[5U]),32);
        bufp->chgBit(oldp+949,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                      >> 5U))));
        bufp->chgBit(oldp+950,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                      >> 5U))));
        bufp->chgBit(oldp+951,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                              >> 5U)))));
        bufp->chgBit(oldp+952,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                              >> 5U)))));
        bufp->chgIData(oldp+953,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))
                                   ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch]
                                   : 0U)),32);
        bufp->chgBit(oldp+954,(((2U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)) 
                                | (6U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs)))));
        bufp->chgBit(oldp+955,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+956,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+957,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+958,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+959,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+960,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+961,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+962,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+963,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+964,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+965,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+966,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+967,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+968,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+969,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+970,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+971,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+972,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+973,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+974,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+975,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+976,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+977,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+978,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+979,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+980,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+981,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+982,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+983,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+984,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+985,((0x3fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+986,((0x3fU & ((IData)(2U) 
                                           + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+987,((0x3fU & ((IData)(3U) 
                                           + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+988,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+989,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+990,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad
                                 [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+991,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))
                                   ? (((- (IData)((1U 
                                                   & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__mul_res) 
                                                      >> 0xfU)))) 
                                       << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__mul_res))
                                   : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[5U])),32);
        bufp->chgIData(oldp+992,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+993,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+994,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+995,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+996,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+997,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                              >> 6U)))));
        bufp->chgIData(oldp+998,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[6U]),32);
        bufp->chgBit(oldp+999,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                      >> 6U))));
        bufp->chgBit(oldp+1000,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                       >> 6U))));
        bufp->chgBit(oldp+1001,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 6U)))));
        bufp->chgBit(oldp+1002,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 6U)))));
        bufp->chgIData(oldp+1003,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+1004,(((2U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)) 
                                 | (6U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs)))));
        bufp->chgBit(oldp+1005,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1006,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1007,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+1008,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+1009,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+1010,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+1011,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+1012,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+1013,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+1014,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+1015,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+1016,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+1017,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+1018,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+1019,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+1020,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+1021,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+1022,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+1023,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+1024,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+1025,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+1026,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+1027,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+1028,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+1029,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+1030,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+1031,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+1032,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+1033,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+1034,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+1035,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1036,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1037,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+1038,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+1039,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+1040,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+1041,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[6U])),32);
        bufp->chgIData(oldp+1042,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+1043,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+1044,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+1045,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1046,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+1047,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 7U)))));
        bufp->chgIData(oldp+1048,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[7U]),32);
        bufp->chgBit(oldp+1049,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                       >> 7U))));
        bufp->chgBit(oldp+1050,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid) 
                                       >> 7U))));
        bufp->chgBit(oldp+1051,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 7U)))));
        bufp->chgBit(oldp+1052,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 7U)))));
        bufp->chgIData(oldp+1053,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+1054,(((2U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)) 
                                 | (6U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs)))));
        bufp->chgBit(oldp+1055,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1056,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1057,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+1058,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+1059,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+1060,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+1061,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+1062,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+1063,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+1064,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+1065,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+1066,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+1067,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+1068,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+1069,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+1070,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+1071,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+1072,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+1073,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+1074,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+1075,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+1076,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+1077,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+1078,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+1079,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+1080,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+1081,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+1082,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+1083,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+1084,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+1085,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1086,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1087,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+1088,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+1089,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+1090,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+1091,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[7U])),32);
        bufp->chgIData(oldp+1092,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+1093,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+1094,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+1095,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1096,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__0__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+1097,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 8U)))));
        bufp->chgIData(oldp+1098,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[8U]),32);
        bufp->chgBit(oldp+1099,((1U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid))));
        bufp->chgBit(oldp+1100,((1U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid))));
        bufp->chgBit(oldp+1101,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 8U)))));
        bufp->chgBit(oldp+1102,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 8U)))));
        bufp->chgIData(oldp+1103,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+1104,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+1105,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1106,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1107,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+1108,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+1109,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+1110,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+1111,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+1112,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+1113,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+1114,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+1115,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+1116,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+1117,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+1118,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+1119,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+1120,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+1121,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+1122,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+1123,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+1124,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+1125,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+1126,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+1127,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+1128,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+1129,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+1130,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+1131,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+1132,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+1133,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+1134,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+1135,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1136,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1137,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+1138,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+1139,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+1140,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+1141,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[8U])),32);
        bufp->chgIData(oldp+1142,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+1143,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+1144,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+1145,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1146,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+1147,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 9U)))));
        bufp->chgIData(oldp+1148,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[9U]),32);
        bufp->chgBit(oldp+1149,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                       >> 1U))));
        bufp->chgBit(oldp+1150,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                       >> 1U))));
        bufp->chgBit(oldp+1151,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 9U)))));
        bufp->chgBit(oldp+1152,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 9U)))));
        bufp->chgIData(oldp+1153,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+1154,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+1155,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1156,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1157,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+1158,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+1159,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+1160,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+1161,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+1162,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+1163,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+1164,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+1165,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+1166,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+1167,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+1168,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+1169,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+1170,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+1171,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+1172,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+1173,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+1174,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+1175,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+1176,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+1177,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+1178,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+1179,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+1180,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+1181,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+1182,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+1183,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+1184,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+1185,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1186,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1187,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+1188,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+1189,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+1190,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+1191,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[9U])),32);
        bufp->chgIData(oldp+1192,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+1193,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+1194,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+1195,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1196,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+1197,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0xaU)))));
        bufp->chgIData(oldp+1198,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xaU]),32);
        bufp->chgBit(oldp+1199,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                       >> 2U))));
        bufp->chgBit(oldp+1200,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                       >> 2U))));
        bufp->chgBit(oldp+1201,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1202,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0xaU)))));
        bufp->chgIData(oldp+1203,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+1204,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+1205,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1206,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1207,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+1208,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+1209,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+1210,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+1211,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+1212,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+1213,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+1214,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+1215,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+1216,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+1217,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+1218,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+1219,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+1220,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+1221,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+1222,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+1223,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+1224,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+1225,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+1226,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+1227,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+1228,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+1229,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+1230,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+1231,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+1232,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+1233,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+1234,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+1235,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1236,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1237,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+1238,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+1239,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+1240,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+1241,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xaU])),32);
        bufp->chgIData(oldp+1242,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+1243,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+1244,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+1245,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1246,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+1247,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0xbU)))));
        bufp->chgIData(oldp+1248,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xbU]),32);
        bufp->chgBit(oldp+1249,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                       >> 3U))));
        bufp->chgBit(oldp+1250,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                       >> 3U))));
        bufp->chgBit(oldp+1251,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1252,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0xbU)))));
        bufp->chgIData(oldp+1253,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+1254,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+1255,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1256,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1257,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+1258,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+1259,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+1260,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+1261,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+1262,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+1263,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+1264,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+1265,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+1266,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+1267,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+1268,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+1269,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+1270,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+1271,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+1272,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+1273,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+1274,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+1275,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+1276,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+1277,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+1278,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+1279,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+1280,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+1281,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+1282,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+1283,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+1284,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+1285,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1286,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1287,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+1288,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+1289,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+1290,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+1291,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xbU])),32);
        bufp->chgIData(oldp+1292,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+1293,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+1294,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+1295,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1296,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+1297,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0xcU)))));
        bufp->chgIData(oldp+1298,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xcU]),32);
        bufp->chgBit(oldp+1299,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                       >> 4U))));
        bufp->chgBit(oldp+1300,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                       >> 4U))));
        bufp->chgBit(oldp+1301,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1302,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0xcU)))));
        bufp->chgIData(oldp+1303,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+1304,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+1305,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1306,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1307,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+1308,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+1309,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+1310,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+1311,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+1312,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+1313,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+1314,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+1315,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+1316,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+1317,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+1318,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+1319,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+1320,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+1321,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+1322,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+1323,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+1324,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+1325,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+1326,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+1327,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+1328,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+1329,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+1330,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+1331,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+1332,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+1333,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+1334,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+1335,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1336,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1337,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+1338,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+1339,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+1340,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+1341,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xcU])),32);
        bufp->chgIData(oldp+1342,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+1343,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+1344,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+1345,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1346,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+1347,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0xdU)))));
        bufp->chgIData(oldp+1348,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xdU]),32);
        bufp->chgBit(oldp+1349,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                       >> 5U))));
        bufp->chgBit(oldp+1350,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                       >> 5U))));
        bufp->chgBit(oldp+1351,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1352,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0xdU)))));
        bufp->chgIData(oldp+1353,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+1354,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+1355,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1356,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1357,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+1358,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+1359,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+1360,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+1361,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+1362,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+1363,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+1364,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+1365,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+1366,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+1367,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+1368,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+1369,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+1370,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+1371,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+1372,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+1373,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+1374,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+1375,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+1376,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+1377,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+1378,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+1379,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+1380,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+1381,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+1382,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+1383,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+1384,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+1385,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1386,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1387,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+1388,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+1389,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+1390,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+1391,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xdU])),32);
        bufp->chgIData(oldp+1392,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+1393,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+1394,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+1395,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1396,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+1397,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0xeU)))));
        bufp->chgIData(oldp+1398,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xeU]),32);
        bufp->chgBit(oldp+1399,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                       >> 6U))));
        bufp->chgBit(oldp+1400,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                       >> 6U))));
        bufp->chgBit(oldp+1401,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1402,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0xeU)))));
        bufp->chgIData(oldp+1403,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+1404,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+1405,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1406,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1407,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+1408,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+1409,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+1410,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+1411,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+1412,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+1413,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+1414,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+1415,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+1416,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+1417,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+1418,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+1419,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+1420,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+1421,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+1422,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+1423,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+1424,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+1425,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+1426,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+1427,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+1428,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+1429,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+1430,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+1431,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+1432,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+1433,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+1434,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+1435,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1436,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1437,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+1438,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+1439,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+1440,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+1441,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xeU])),32);
        bufp->chgIData(oldp+1442,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+1443,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+1444,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+1445,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1446,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+1447,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0xfU)))));
        bufp->chgIData(oldp+1448,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xfU]),32);
        bufp->chgBit(oldp+1449,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                       >> 7U))));
        bufp->chgBit(oldp+1450,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid) 
                                       >> 7U))));
        bufp->chgBit(oldp+1451,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1452,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0xfU)))));
        bufp->chgIData(oldp+1453,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+1454,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+1455,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1456,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1457,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+1458,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+1459,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+1460,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+1461,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+1462,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+1463,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+1464,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+1465,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+1466,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+1467,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+1468,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+1469,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+1470,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+1471,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+1472,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+1473,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+1474,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+1475,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+1476,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+1477,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+1478,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+1479,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+1480,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+1481,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+1482,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+1483,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+1484,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+1485,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1486,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1487,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+1488,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+1489,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+1490,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+1491,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0xfU])),32);
        bufp->chgIData(oldp+1492,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+1493,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+1494,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+1495,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1496,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+1497,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x10U)))));
        bufp->chgIData(oldp+1498,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x10U]),32);
        bufp->chgBit(oldp+1499,((1U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid))));
        bufp->chgBit(oldp+1500,((1U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid))));
        bufp->chgBit(oldp+1501,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1502,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x10U)))));
        bufp->chgIData(oldp+1503,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+1504,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+1505,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1506,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1507,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+1508,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+1509,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+1510,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+1511,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+1512,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+1513,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+1514,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+1515,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+1516,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+1517,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+1518,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+1519,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+1520,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+1521,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+1522,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+1523,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+1524,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+1525,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+1526,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+1527,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+1528,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+1529,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+1530,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+1531,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+1532,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+1533,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+1534,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+1535,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1536,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1537,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+1538,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+1539,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+1540,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+1541,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x10U])),32);
        bufp->chgIData(oldp+1542,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+1543,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+1544,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+1545,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1546,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+1547,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x11U)))));
        bufp->chgIData(oldp+1548,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x11U]),32);
        bufp->chgBit(oldp+1549,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                       >> 1U))));
        bufp->chgBit(oldp+1550,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                       >> 1U))));
        bufp->chgBit(oldp+1551,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1552,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x11U)))));
        bufp->chgIData(oldp+1553,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+1554,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+1555,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1556,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1557,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+1558,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+1559,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+1560,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+1561,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+1562,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+1563,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+1564,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+1565,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+1566,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+1567,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+1568,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+1569,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+1570,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+1571,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+1572,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+1573,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+1574,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+1575,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+1576,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+1577,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+1578,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+1579,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+1580,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+1581,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+1582,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+1583,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+1584,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+1585,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1586,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1587,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+1588,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+1589,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+1590,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+1591,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x11U])),32);
        bufp->chgIData(oldp+1592,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+1593,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+1594,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+1595,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1596,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+1597,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x12U)))));
        bufp->chgIData(oldp+1598,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x12U]),32);
        bufp->chgBit(oldp+1599,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                       >> 2U))));
        bufp->chgBit(oldp+1600,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                       >> 2U))));
        bufp->chgBit(oldp+1601,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1602,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x12U)))));
        bufp->chgIData(oldp+1603,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+1604,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+1605,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1606,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1607,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+1608,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+1609,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+1610,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+1611,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+1612,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+1613,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+1614,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+1615,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+1616,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+1617,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+1618,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+1619,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+1620,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+1621,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+1622,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+1623,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+1624,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+1625,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+1626,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+1627,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+1628,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+1629,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+1630,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+1631,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+1632,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+1633,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+1634,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+1635,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1636,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1637,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+1638,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+1639,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+1640,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+1641,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x12U])),32);
        bufp->chgIData(oldp+1642,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+1643,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+1644,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+1645,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1646,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+1647,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x13U)))));
        bufp->chgIData(oldp+1648,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x13U]),32);
        bufp->chgBit(oldp+1649,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                       >> 3U))));
        bufp->chgBit(oldp+1650,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                       >> 3U))));
        bufp->chgBit(oldp+1651,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1652,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x13U)))));
        bufp->chgIData(oldp+1653,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+1654,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+1655,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1656,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1657,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+1658,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+1659,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+1660,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+1661,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+1662,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+1663,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+1664,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+1665,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+1666,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+1667,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+1668,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+1669,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+1670,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+1671,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+1672,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+1673,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+1674,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+1675,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+1676,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+1677,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+1678,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+1679,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+1680,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+1681,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+1682,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+1683,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+1684,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+1685,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1686,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1687,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+1688,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+1689,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+1690,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+1691,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x13U])),32);
        bufp->chgIData(oldp+1692,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+1693,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+1694,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+1695,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1696,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+1697,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x14U)))));
        bufp->chgIData(oldp+1698,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x14U]),32);
        bufp->chgBit(oldp+1699,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                       >> 4U))));
        bufp->chgBit(oldp+1700,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                       >> 4U))));
        bufp->chgBit(oldp+1701,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1702,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x14U)))));
        bufp->chgIData(oldp+1703,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+1704,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+1705,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1706,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1707,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+1708,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+1709,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+1710,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+1711,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+1712,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+1713,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+1714,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+1715,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+1716,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+1717,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+1718,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+1719,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+1720,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+1721,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+1722,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+1723,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+1724,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+1725,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+1726,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+1727,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+1728,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+1729,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+1730,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+1731,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+1732,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+1733,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+1734,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+1735,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1736,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1737,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+1738,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+1739,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+1740,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+1741,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x14U])),32);
        bufp->chgIData(oldp+1742,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+1743,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+1744,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+1745,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1746,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+1747,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x15U)))));
        bufp->chgIData(oldp+1748,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x15U]),32);
        bufp->chgBit(oldp+1749,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                       >> 5U))));
        bufp->chgBit(oldp+1750,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                       >> 5U))));
        bufp->chgBit(oldp+1751,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1752,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x15U)))));
        bufp->chgIData(oldp+1753,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+1754,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+1755,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1756,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1757,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+1758,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+1759,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+1760,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+1761,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+1762,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+1763,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+1764,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+1765,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+1766,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+1767,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+1768,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+1769,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+1770,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+1771,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+1772,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+1773,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+1774,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+1775,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+1776,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+1777,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+1778,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+1779,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+1780,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+1781,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+1782,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+1783,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+1784,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+1785,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1786,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1787,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+1788,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+1789,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+1790,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+1791,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x15U])),32);
        bufp->chgIData(oldp+1792,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+1793,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+1794,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+1795,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1796,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+1797,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x16U)))));
        bufp->chgIData(oldp+1798,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x16U]),32);
        bufp->chgBit(oldp+1799,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                       >> 6U))));
        bufp->chgBit(oldp+1800,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                       >> 6U))));
        bufp->chgBit(oldp+1801,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1802,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x16U)))));
        bufp->chgIData(oldp+1803,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+1804,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+1805,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1806,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1807,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+1808,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+1809,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+1810,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+1811,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+1812,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+1813,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+1814,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+1815,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+1816,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+1817,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+1818,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+1819,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+1820,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+1821,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+1822,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+1823,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+1824,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+1825,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+1826,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+1827,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+1828,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+1829,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+1830,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+1831,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+1832,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+1833,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+1834,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+1835,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1836,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1837,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+1838,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+1839,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+1840,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+1841,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x16U])),32);
        bufp->chgIData(oldp+1842,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+1843,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+1844,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+1845,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1846,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+1847,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x17U)))));
        bufp->chgIData(oldp+1848,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x17U]),32);
        bufp->chgBit(oldp+1849,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                       >> 7U))));
        bufp->chgBit(oldp+1850,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid) 
                                       >> 7U))));
        bufp->chgBit(oldp+1851,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1852,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x17U)))));
        bufp->chgIData(oldp+1853,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+1854,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+1855,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1856,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1857,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+1858,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+1859,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+1860,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+1861,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+1862,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+1863,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+1864,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+1865,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+1866,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+1867,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+1868,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+1869,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+1870,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+1871,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+1872,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+1873,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+1874,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+1875,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+1876,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+1877,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+1878,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+1879,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+1880,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+1881,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+1882,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+1883,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+1884,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+1885,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1886,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1887,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+1888,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+1889,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+1890,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+1891,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x17U])),32);
        bufp->chgIData(oldp+1892,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+1893,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+1894,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+1895,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1896,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+1897,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x18U)))));
        bufp->chgIData(oldp+1898,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x18U]),32);
        bufp->chgBit(oldp+1899,((1U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid))));
        bufp->chgBit(oldp+1900,((1U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid))));
        bufp->chgBit(oldp+1901,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1902,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x18U)))));
        bufp->chgIData(oldp+1903,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+1904,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+1905,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1906,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1907,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+1908,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+1909,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+1910,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+1911,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+1912,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+1913,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+1914,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+1915,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+1916,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+1917,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+1918,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+1919,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+1920,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+1921,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+1922,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+1923,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+1924,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+1925,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+1926,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+1927,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+1928,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+1929,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+1930,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+1931,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+1932,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+1933,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+1934,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+1935,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1936,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1937,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+1938,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+1939,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+1940,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+1941,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x18U])),32);
        bufp->chgIData(oldp+1942,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+1943,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+1944,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+1945,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1946,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+1947,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x19U)))));
        bufp->chgIData(oldp+1948,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x19U]),32);
        bufp->chgBit(oldp+1949,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                       >> 1U))));
        bufp->chgBit(oldp+1950,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                       >> 1U))));
        bufp->chgBit(oldp+1951,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1952,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x19U)))));
        bufp->chgIData(oldp+1953,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+1954,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+1955,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1956,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+1957,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+1958,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+1959,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+1960,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+1961,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+1962,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+1963,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+1964,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+1965,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+1966,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+1967,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+1968,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+1969,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+1970,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+1971,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+1972,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+1973,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+1974,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+1975,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+1976,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+1977,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+1978,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+1979,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+1980,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+1981,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+1982,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+1983,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+1984,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+1985,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1986,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+1987,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+1988,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+1989,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+1990,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+1991,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x19U])),32);
        bufp->chgIData(oldp+1992,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+1993,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+1994,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+1995,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1996,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+1997,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x1aU)))));
        bufp->chgIData(oldp+1998,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1aU]),32);
        bufp->chgBit(oldp+1999,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                       >> 2U))));
        bufp->chgBit(oldp+2000,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                       >> 2U))));
        bufp->chgBit(oldp+2001,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+2002,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x1aU)))));
        bufp->chgIData(oldp+2003,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+2004,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+2005,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2006,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2007,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+2008,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+2009,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+2010,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+2011,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+2012,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+2013,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+2014,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+2015,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+2016,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+2017,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+2018,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+2019,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+2020,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+2021,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+2022,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+2023,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+2024,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+2025,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+2026,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+2027,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+2028,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+2029,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+2030,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+2031,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+2032,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+2033,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+2034,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+2035,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2036,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2037,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+2038,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+2039,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+2040,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+2041,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1aU])),32);
        bufp->chgIData(oldp+2042,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+2043,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+2044,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+2045,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2046,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+2047,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x1bU)))));
        bufp->chgIData(oldp+2048,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1bU]),32);
        bufp->chgBit(oldp+2049,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                       >> 3U))));
        bufp->chgBit(oldp+2050,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                       >> 3U))));
        bufp->chgBit(oldp+2051,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+2052,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x1bU)))));
        bufp->chgIData(oldp+2053,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+2054,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+2055,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2056,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2057,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+2058,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+2059,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+2060,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+2061,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+2062,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+2063,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+2064,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+2065,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+2066,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+2067,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+2068,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+2069,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+2070,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+2071,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+2072,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+2073,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+2074,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+2075,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+2076,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+2077,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+2078,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+2079,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+2080,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+2081,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+2082,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+2083,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+2084,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+2085,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2086,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2087,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+2088,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+2089,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+2090,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+2091,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1bU])),32);
        bufp->chgIData(oldp+2092,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+2093,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+2094,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+2095,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2096,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+2097,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x1cU)))));
        bufp->chgIData(oldp+2098,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1cU]),32);
        bufp->chgBit(oldp+2099,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                       >> 4U))));
        bufp->chgBit(oldp+2100,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                       >> 4U))));
        bufp->chgBit(oldp+2101,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+2102,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x1cU)))));
        bufp->chgIData(oldp+2103,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+2104,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+2105,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2106,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2107,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+2108,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+2109,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+2110,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+2111,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+2112,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+2113,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+2114,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+2115,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+2116,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+2117,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+2118,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+2119,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+2120,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+2121,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+2122,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+2123,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+2124,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+2125,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+2126,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+2127,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+2128,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+2129,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+2130,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+2131,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+2132,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+2133,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+2134,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+2135,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2136,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2137,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+2138,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+2139,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+2140,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+2141,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1cU])),32);
        bufp->chgIData(oldp+2142,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+2143,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+2144,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+2145,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2146,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+2147,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x1dU)))));
        bufp->chgIData(oldp+2148,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1dU]),32);
        bufp->chgBit(oldp+2149,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                       >> 5U))));
        bufp->chgBit(oldp+2150,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                       >> 5U))));
        bufp->chgBit(oldp+2151,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+2152,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x1dU)))));
        bufp->chgIData(oldp+2153,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+2154,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+2155,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2156,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2157,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+2158,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+2159,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+2160,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+2161,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+2162,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+2163,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+2164,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+2165,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+2166,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+2167,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+2168,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+2169,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+2170,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+2171,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+2172,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+2173,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+2174,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+2175,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+2176,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+2177,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+2178,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+2179,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+2180,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+2181,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+2182,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+2183,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+2184,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+2185,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2186,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2187,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+2188,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+2189,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+2190,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+2191,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1dU])),32);
        bufp->chgIData(oldp+2192,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+2193,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+2194,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+2195,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2196,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+2197,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x1eU)))));
        bufp->chgIData(oldp+2198,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1eU]),32);
        bufp->chgBit(oldp+2199,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                       >> 6U))));
        bufp->chgBit(oldp+2200,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                       >> 6U))));
        bufp->chgBit(oldp+2201,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+2202,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x1eU)))));
        bufp->chgIData(oldp+2203,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+2204,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+2205,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2206,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2207,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+2208,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+2209,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+2210,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+2211,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+2212,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+2213,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+2214,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+2215,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+2216,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+2217,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+2218,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+2219,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+2220,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+2221,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+2222,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+2223,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+2224,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+2225,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+2226,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+2227,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+2228,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+2229,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+2230,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+2231,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+2232,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+2233,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+2234,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+2235,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2236,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2237,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+2238,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+2239,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+2240,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+2241,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1eU])),32);
        bufp->chgIData(oldp+2242,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+2243,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+2244,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+2245,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2246,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+2247,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x1fU)))));
        bufp->chgIData(oldp+2248,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1fU]),32);
        bufp->chgBit(oldp+2249,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                       >> 7U))));
        bufp->chgBit(oldp+2250,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid) 
                                       >> 7U))));
        bufp->chgBit(oldp+2251,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+2252,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x1fU)))));
        bufp->chgIData(oldp+2253,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+2254,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+2255,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2256,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2257,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+2258,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+2259,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+2260,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+2261,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+2262,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+2263,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+2264,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+2265,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+2266,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+2267,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+2268,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+2269,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+2270,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+2271,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+2272,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+2273,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+2274,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+2275,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+2276,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+2277,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+2278,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+2279,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+2280,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+2281,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+2282,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+2283,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+2284,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+2285,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2286,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2287,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+2288,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+2289,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+2290,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+2291,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x1fU])),32);
        bufp->chgIData(oldp+2292,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+2293,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+2294,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+2295,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2296,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+2297,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x20U)))));
        bufp->chgIData(oldp+2298,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x20U]),32);
        bufp->chgBit(oldp+2299,((1U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid))));
        bufp->chgBit(oldp+2300,((1U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid))));
        bufp->chgBit(oldp+2301,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+2302,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x20U)))));
        bufp->chgIData(oldp+2303,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+2304,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+2305,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2306,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2307,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+2308,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+2309,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+2310,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+2311,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+2312,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+2313,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+2314,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+2315,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+2316,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+2317,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+2318,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+2319,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+2320,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+2321,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+2322,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+2323,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+2324,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+2325,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+2326,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+2327,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+2328,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+2329,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+2330,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+2331,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+2332,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+2333,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+2334,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+2335,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2336,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2337,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+2338,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+2339,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+2340,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+2341,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x20U])),32);
        bufp->chgIData(oldp+2342,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+2343,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+2344,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+2345,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2346,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+2347,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x21U)))));
        bufp->chgIData(oldp+2348,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x21U]),32);
        bufp->chgBit(oldp+2349,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                       >> 1U))));
        bufp->chgBit(oldp+2350,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                       >> 1U))));
        bufp->chgBit(oldp+2351,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+2352,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x21U)))));
        bufp->chgIData(oldp+2353,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+2354,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+2355,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2356,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2357,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+2358,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+2359,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+2360,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+2361,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+2362,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+2363,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+2364,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+2365,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+2366,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+2367,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+2368,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+2369,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+2370,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+2371,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+2372,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+2373,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+2374,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+2375,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+2376,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+2377,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+2378,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+2379,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+2380,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+2381,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+2382,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+2383,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+2384,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+2385,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2386,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2387,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+2388,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+2389,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+2390,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+2391,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x21U])),32);
        bufp->chgIData(oldp+2392,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+2393,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+2394,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+2395,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2396,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+2397,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x22U)))));
        bufp->chgIData(oldp+2398,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x22U]),32);
        bufp->chgBit(oldp+2399,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                       >> 2U))));
        bufp->chgBit(oldp+2400,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                       >> 2U))));
        bufp->chgBit(oldp+2401,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+2402,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x22U)))));
        bufp->chgIData(oldp+2403,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+2404,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+2405,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2406,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2407,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+2408,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+2409,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+2410,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+2411,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+2412,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+2413,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+2414,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+2415,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+2416,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+2417,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+2418,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+2419,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+2420,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+2421,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+2422,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+2423,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+2424,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+2425,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+2426,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+2427,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+2428,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+2429,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+2430,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+2431,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+2432,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+2433,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+2434,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+2435,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2436,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2437,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+2438,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+2439,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+2440,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+2441,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x22U])),32);
        bufp->chgIData(oldp+2442,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+2443,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+2444,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+2445,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2446,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+2447,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x23U)))));
        bufp->chgIData(oldp+2448,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x23U]),32);
        bufp->chgBit(oldp+2449,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                       >> 3U))));
        bufp->chgBit(oldp+2450,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                       >> 3U))));
        bufp->chgBit(oldp+2451,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2452,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x23U)))));
        bufp->chgIData(oldp+2453,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+2454,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+2455,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2456,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2457,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+2458,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+2459,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+2460,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+2461,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+2462,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+2463,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+2464,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+2465,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+2466,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+2467,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+2468,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+2469,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+2470,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+2471,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+2472,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+2473,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+2474,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+2475,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+2476,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+2477,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+2478,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+2479,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+2480,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+2481,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+2482,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+2483,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+2484,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+2485,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2486,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2487,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+2488,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+2489,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+2490,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+2491,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x23U])),32);
        bufp->chgIData(oldp+2492,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+2493,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+2494,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+2495,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2496,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+2497,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x24U)))));
        bufp->chgIData(oldp+2498,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x24U]),32);
        bufp->chgBit(oldp+2499,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                       >> 4U))));
        bufp->chgBit(oldp+2500,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                       >> 4U))));
        bufp->chgBit(oldp+2501,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+2502,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x24U)))));
        bufp->chgIData(oldp+2503,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+2504,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+2505,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2506,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2507,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+2508,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+2509,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+2510,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+2511,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+2512,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+2513,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+2514,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+2515,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+2516,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+2517,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+2518,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+2519,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+2520,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+2521,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+2522,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+2523,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+2524,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+2525,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+2526,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+2527,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+2528,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+2529,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+2530,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+2531,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+2532,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+2533,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+2534,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+2535,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2536,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2537,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+2538,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+2539,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+2540,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+2541,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x24U])),32);
        bufp->chgIData(oldp+2542,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+2543,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+2544,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+2545,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2546,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+2547,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x25U)))));
        bufp->chgIData(oldp+2548,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x25U]),32);
        bufp->chgBit(oldp+2549,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                       >> 5U))));
        bufp->chgBit(oldp+2550,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                       >> 5U))));
        bufp->chgBit(oldp+2551,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+2552,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x25U)))));
        bufp->chgIData(oldp+2553,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+2554,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+2555,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2556,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2557,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+2558,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+2559,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+2560,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+2561,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+2562,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+2563,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+2564,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+2565,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+2566,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+2567,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+2568,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+2569,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+2570,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+2571,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+2572,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+2573,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+2574,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+2575,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+2576,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+2577,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+2578,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+2579,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+2580,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+2581,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+2582,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+2583,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+2584,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+2585,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2586,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2587,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+2588,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+2589,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+2590,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+2591,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x25U])),32);
        bufp->chgIData(oldp+2592,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+2593,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+2594,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+2595,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2596,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+2597,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x26U)))));
        bufp->chgIData(oldp+2598,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x26U]),32);
        bufp->chgBit(oldp+2599,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                       >> 6U))));
        bufp->chgBit(oldp+2600,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                       >> 6U))));
        bufp->chgBit(oldp+2601,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+2602,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x26U)))));
        bufp->chgIData(oldp+2603,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+2604,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+2605,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2606,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2607,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+2608,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+2609,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+2610,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+2611,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+2612,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+2613,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+2614,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+2615,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+2616,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+2617,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+2618,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+2619,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+2620,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+2621,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+2622,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+2623,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+2624,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+2625,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+2626,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+2627,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+2628,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+2629,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+2630,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+2631,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+2632,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+2633,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+2634,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+2635,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2636,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2637,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+2638,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+2639,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+2640,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+2641,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x26U])),32);
        bufp->chgIData(oldp+2642,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+2643,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+2644,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+2645,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2646,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+2647,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x27U)))));
        bufp->chgIData(oldp+2648,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x27U]),32);
        bufp->chgBit(oldp+2649,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                       >> 7U))));
        bufp->chgBit(oldp+2650,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid) 
                                       >> 7U))));
        bufp->chgBit(oldp+2651,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+2652,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x27U)))));
        bufp->chgIData(oldp+2653,(((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))
                                    ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad
                                   [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch]
                                    : 0U)),32);
        bufp->chgBit(oldp+2654,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+2655,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2656,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2657,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+2658,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+2659,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+2660,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+2661,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+2662,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+2663,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+2664,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+2665,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+2666,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+2667,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+2668,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+2669,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+2670,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+2671,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+2672,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+2673,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+2674,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+2675,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+2676,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+2677,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+2678,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+2679,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+2680,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+2681,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+2682,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+2683,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+2684,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+2685,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2686,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2687,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+2688,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+2689,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+2690,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+2691,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x27U])),32);
        bufp->chgIData(oldp+2692,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+2693,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+2694,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+2695,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2696,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+2697,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x28U)))));
        bufp->chgIData(oldp+2698,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x28U]),32);
        bufp->chgBit(oldp+2699,((1U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid))));
        bufp->chgBit(oldp+2700,((1U & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid))));
        bufp->chgBit(oldp+2701,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+2702,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x28U)))));
        bufp->chgIData(oldp+2703,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.opsum),32);
        bufp->chgBit(oldp+2704,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+2705,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2706,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2707,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+2708,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+2709,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+2710,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+2711,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+2712,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+2713,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+2714,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+2715,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+2716,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+2717,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+2718,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+2719,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+2720,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+2721,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+2722,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+2723,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+2724,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+2725,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+2726,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+2727,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+2728,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+2729,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+2730,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+2731,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+2732,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+2733,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+2734,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+2735,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2736,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2737,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+2738,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+2739,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+2740,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+2741,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x28U])),32);
        bufp->chgIData(oldp+2742,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+2743,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+2744,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+2745,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2746,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+2747,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x29U)))));
        bufp->chgIData(oldp+2748,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x29U]),32);
        bufp->chgBit(oldp+2749,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid) 
                                       >> 1U))));
        bufp->chgBit(oldp+2750,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid) 
                                       >> 1U))));
        bufp->chgBit(oldp+2751,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+2752,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x29U)))));
        bufp->chgIData(oldp+2753,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.opsum),32);
        bufp->chgBit(oldp+2754,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+2755,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2756,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2757,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+2758,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+2759,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+2760,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+2761,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+2762,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+2763,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+2764,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+2765,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+2766,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+2767,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+2768,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+2769,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+2770,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+2771,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+2772,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+2773,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+2774,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+2775,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+2776,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+2777,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+2778,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+2779,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+2780,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+2781,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+2782,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+2783,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+2784,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+2785,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2786,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2787,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+2788,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+2789,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+2790,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+2791,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x29U])),32);
        bufp->chgIData(oldp+2792,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+2793,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+2794,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+2795,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2796,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+2797,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x2aU)))));
        bufp->chgIData(oldp+2798,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2aU]),32);
        bufp->chgBit(oldp+2799,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid) 
                                       >> 2U))));
        bufp->chgBit(oldp+2800,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid) 
                                       >> 2U))));
        bufp->chgBit(oldp+2801,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+2802,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x2aU)))));
        bufp->chgIData(oldp+2803,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.opsum),32);
        bufp->chgBit(oldp+2804,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+2805,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2806,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2807,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+2808,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+2809,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+2810,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+2811,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+2812,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+2813,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+2814,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+2815,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+2816,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+2817,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+2818,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+2819,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+2820,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+2821,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+2822,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+2823,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+2824,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+2825,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+2826,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+2827,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+2828,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+2829,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+2830,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+2831,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+2832,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+2833,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+2834,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+2835,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2836,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2837,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+2838,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+2839,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+2840,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+2841,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2aU])),32);
        bufp->chgIData(oldp+2842,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+2843,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+2844,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+2845,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2846,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+2847,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x2bU)))));
        bufp->chgIData(oldp+2848,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2bU]),32);
        bufp->chgBit(oldp+2849,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid) 
                                       >> 3U))));
        bufp->chgBit(oldp+2850,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid) 
                                       >> 3U))));
        bufp->chgBit(oldp+2851,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+2852,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x2bU)))));
        bufp->chgIData(oldp+2853,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.opsum),32);
        bufp->chgBit(oldp+2854,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+2855,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2856,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2857,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+2858,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+2859,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+2860,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+2861,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+2862,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+2863,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+2864,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+2865,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+2866,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+2867,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+2868,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+2869,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+2870,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+2871,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+2872,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+2873,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+2874,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+2875,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+2876,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+2877,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+2878,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+2879,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+2880,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+2881,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+2882,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+2883,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+2884,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+2885,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2886,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2887,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+2888,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+2889,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+2890,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+2891,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2bU])),32);
        bufp->chgIData(oldp+2892,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+2893,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+2894,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+2895,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2896,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+2897,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x2cU)))));
        bufp->chgIData(oldp+2898,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2cU]),32);
        bufp->chgBit(oldp+2899,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid) 
                                       >> 4U))));
        bufp->chgBit(oldp+2900,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid) 
                                       >> 4U))));
        bufp->chgBit(oldp+2901,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+2902,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x2cU)))));
        bufp->chgIData(oldp+2903,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.opsum),32);
        bufp->chgBit(oldp+2904,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+2905,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2906,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2907,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+2908,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+2909,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+2910,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+2911,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+2912,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+2913,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+2914,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+2915,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+2916,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+2917,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+2918,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+2919,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+2920,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+2921,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+2922,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+2923,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+2924,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+2925,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+2926,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+2927,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+2928,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+2929,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+2930,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+2931,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+2932,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+2933,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+2934,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+2935,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2936,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2937,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+2938,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+2939,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+2940,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+2941,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2cU])),32);
        bufp->chgIData(oldp+2942,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+2943,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+2944,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+2945,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2946,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+2947,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x2dU)))));
        bufp->chgIData(oldp+2948,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2dU]),32);
        bufp->chgBit(oldp+2949,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid) 
                                       >> 5U))));
        bufp->chgBit(oldp+2950,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid) 
                                       >> 5U))));
        bufp->chgBit(oldp+2951,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+2952,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x2dU)))));
        bufp->chgIData(oldp+2953,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.opsum),32);
        bufp->chgBit(oldp+2954,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+2955,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2956,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+2957,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+2958,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+2959,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+2960,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+2961,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+2962,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+2963,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+2964,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+2965,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+2966,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+2967,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+2968,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+2969,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+2970,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+2971,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+2972,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+2973,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+2974,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+2975,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+2976,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+2977,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+2978,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+2979,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+2980,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+2981,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+2982,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+2983,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+2984,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+2985,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2986,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+2987,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+2988,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+2989,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+2990,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+2991,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2dU])),32);
        bufp->chgIData(oldp+2992,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+2993,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+2994,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+2995,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2996,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+2997,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x2eU)))));
        bufp->chgIData(oldp+2998,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2eU]),32);
        bufp->chgBit(oldp+2999,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid) 
                                       >> 6U))));
        bufp->chgBit(oldp+3000,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid) 
                                       >> 6U))));
        bufp->chgBit(oldp+3001,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+3002,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x2eU)))));
        bufp->chgIData(oldp+3003,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.opsum),32);
        bufp->chgBit(oldp+3004,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+3005,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+3006,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+3007,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+3008,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+3009,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+3010,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+3011,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+3012,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+3013,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+3014,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+3015,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+3016,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+3017,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+3018,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+3019,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+3020,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+3021,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+3022,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+3023,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+3024,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+3025,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+3026,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+3027,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+3028,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+3029,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+3030,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+3031,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+3032,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+3033,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+3034,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+3035,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+3036,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+3037,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+3038,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+3039,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+3040,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+3041,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2eU])),32);
        bufp->chgIData(oldp+3042,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+3043,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+3044,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+3045,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+3046,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+3047,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_en 
                                               >> 0x2fU)))));
        bufp->chgIData(oldp+3048,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2fU]),32);
        bufp->chgBit(oldp+3049,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid) 
                                       >> 7U))));
        bufp->chgBit(oldp+3050,((1U & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid) 
                                       >> 7U))));
        bufp->chgBit(oldp+3051,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum_valid 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+3052,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_opsum_ready 
                                               >> 0x2fU)))));
        bufp->chgIData(oldp+3053,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.opsum),32);
        bufp->chgBit(oldp+3054,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.ifmap_ready));
        bufp->chgBit(oldp+3055,((1U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+3056,((4U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))));
        bufp->chgBit(oldp+3057,((5U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))));
        bufp->chgCData(oldp+3058,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[0]),8);
        bufp->chgCData(oldp+3059,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[1]),8);
        bufp->chgCData(oldp+3060,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[2]),8);
        bufp->chgCData(oldp+3061,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[3]),8);
        bufp->chgCData(oldp+3062,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[4]),8);
        bufp->chgCData(oldp+3063,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[5]),8);
        bufp->chgCData(oldp+3064,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[6]),8);
        bufp->chgCData(oldp+3065,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[7]),8);
        bufp->chgCData(oldp+3066,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[8]),8);
        bufp->chgCData(oldp+3067,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[9]),8);
        bufp->chgCData(oldp+3068,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[10]),8);
        bufp->chgCData(oldp+3069,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_spad[11]),8);
        bufp->chgIData(oldp+3070,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad[0]),32);
        bufp->chgIData(oldp+3071,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad[1]),32);
        bufp->chgIData(oldp+3072,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad[2]),32);
        bufp->chgIData(oldp+3073,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad[3]),32);
        bufp->chgCData(oldp+3074,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_filt_col),2);
        bufp->chgCData(oldp+3075,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__input_ch),2);
        bufp->chgCData(oldp+3076,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_input_ch),2);
        bufp->chgCData(oldp+3077,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_col),5);
        bufp->chgCData(oldp+3078,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_col),5);
        bufp->chgCData(oldp+3079,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_ch),2);
        bufp->chgCData(oldp+3080,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch),2);
        bufp->chgBit(oldp+3081,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__operation_mode));
        bufp->chgCData(oldp+3082,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ifmap_index),4);
        bufp->chgCData(oldp+3083,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__filter_index),6);
        bufp->chgCData(oldp+3084,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__index_0),6);
        bufp->chgCData(oldp+3085,((0x3fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+3086,((0x3fU & ((IData)(2U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgCData(oldp+3087,((0x3fU & ((IData)(3U) 
                                            + (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__index_0)))),6);
        bufp->chgSData(oldp+3088,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__mul_res),16);
        bufp->chgIData(oldp+3089,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__add_res),32);
        bufp->chgIData(oldp+3090,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ofmap_spad
                                  [vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__count_ofmap_ch]),32);
        bufp->chgIData(oldp+3091,(((3U == (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__mul_res) 
                                                       >> 0xfU)))) 
                                        << 0x10U) | (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__mul_res))
                                    : vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ipsum[0x2fU])),32);
        bufp->chgIData(oldp+3092,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__i),32);
        bufp->chgCData(oldp+3093,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__cs),4);
        bufp->chgCData(oldp+3094,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__ns),4);
        bufp->chgIData(oldp+3095,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+3096,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__PE.__PVT__unnamedblk2__DOT__i),32);
        bufp->chgBit(oldp+3097,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid))));
        bufp->chgCData(oldp+3098,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready),8);
        bufp->chgCData(oldp+3099,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid),8);
        __Vtemp_3[0U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_3[1U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_3[2U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_3[3U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_3[4U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_3[5U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_3[6U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        __Vtemp_3[7U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__GLB_data_in_PEarray;
        bufp->chgWData(oldp+3100,(__Vtemp_3),256);
        bufp->chgCData(oldp+3108,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id),4);
        bufp->chgCData(oldp+3109,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id),4);
        bufp->chgCData(oldp+3110,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__valid_mask),8);
        bufp->chgCData(oldp+3111,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__mc_valid),8);
        bufp->chgCData(oldp+3112,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__mc_ready),8);
        bufp->chgCData(oldp+3113,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[0]),4);
        bufp->chgCData(oldp+3114,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[1]),4);
        bufp->chgCData(oldp+3115,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[2]),4);
        bufp->chgCData(oldp+3116,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[3]),4);
        bufp->chgCData(oldp+3117,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[4]),4);
        bufp->chgCData(oldp+3118,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[5]),4);
        bufp->chgCData(oldp+3119,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[6]),4);
        bufp->chgCData(oldp+3120,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[7]),4);
        bufp->chgCData(oldp+3121,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[8]),4);
        bufp->chgIData(oldp+3122,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__j),32);
        bufp->chgCData(oldp+3123,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3124,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid))));
        bufp->chgBit(oldp+3125,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready))));
        bufp->chgBit(oldp+3126,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                       | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready)))));
        bufp->chgCData(oldp+3127,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3128,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid))));
        bufp->chgBit(oldp+3129,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                       >> 1U))));
        bufp->chgBit(oldp+3130,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                          >> 1U)))));
        bufp->chgCData(oldp+3131,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3132,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid))));
        bufp->chgBit(oldp+3133,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                       >> 2U))));
        bufp->chgBit(oldp+3134,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                          >> 2U)))));
        bufp->chgCData(oldp+3135,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3136,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid))));
        bufp->chgBit(oldp+3137,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                       >> 3U))));
        bufp->chgBit(oldp+3138,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                          >> 3U)))));
        bufp->chgCData(oldp+3139,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3140,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid))));
        bufp->chgBit(oldp+3141,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                       >> 4U))));
        bufp->chgBit(oldp+3142,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                          >> 4U)))));
        bufp->chgCData(oldp+3143,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3144,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid))));
        bufp->chgBit(oldp+3145,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                       >> 5U))));
        bufp->chgBit(oldp+3146,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                          >> 5U)))));
        bufp->chgCData(oldp+3147,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3148,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid))));
        bufp->chgBit(oldp+3149,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                       >> 6U))));
        bufp->chgBit(oldp+3150,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                          >> 6U)))));
        bufp->chgBit(oldp+3151,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid))));
        bufp->chgBit(oldp+3152,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                       >> 7U))));
        bufp->chgBit(oldp+3153,((IData)((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                          >> 7U) | 
                                         ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                          != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id))))));
        bufp->chgBit(oldp+3154,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                       >> 1U))));
        bufp->chgCData(oldp+3155,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready),8);
        bufp->chgCData(oldp+3156,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid),8);
        bufp->chgCData(oldp+3157,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id),4);
        bufp->chgCData(oldp+3158,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__valid_mask),8);
        bufp->chgCData(oldp+3159,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__mc_valid),8);
        bufp->chgCData(oldp+3160,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__mc_ready),8);
        bufp->chgCData(oldp+3161,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[0]),4);
        bufp->chgCData(oldp+3162,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[1]),4);
        bufp->chgCData(oldp+3163,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[2]),4);
        bufp->chgCData(oldp+3164,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[3]),4);
        bufp->chgCData(oldp+3165,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[4]),4);
        bufp->chgCData(oldp+3166,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[5]),4);
        bufp->chgCData(oldp+3167,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[6]),4);
        bufp->chgCData(oldp+3168,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[7]),4);
        bufp->chgCData(oldp+3169,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[8]),4);
        bufp->chgIData(oldp+3170,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__j),32);
        bufp->chgCData(oldp+3171,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3172,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 1U))));
        bufp->chgBit(oldp+3173,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready))));
        bufp->chgBit(oldp+3174,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                       | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready)))));
        bufp->chgCData(oldp+3175,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3176,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 1U))));
        bufp->chgBit(oldp+3177,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                       >> 1U))));
        bufp->chgBit(oldp+3178,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                          >> 1U)))));
        bufp->chgCData(oldp+3179,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3180,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 1U))));
        bufp->chgBit(oldp+3181,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                       >> 2U))));
        bufp->chgBit(oldp+3182,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                          >> 2U)))));
        bufp->chgCData(oldp+3183,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3184,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 1U))));
        bufp->chgBit(oldp+3185,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                       >> 3U))));
        bufp->chgBit(oldp+3186,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                          >> 3U)))));
        bufp->chgCData(oldp+3187,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3188,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 1U))));
        bufp->chgBit(oldp+3189,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                       >> 4U))));
        bufp->chgBit(oldp+3190,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                          >> 4U)))));
        bufp->chgCData(oldp+3191,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3192,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 1U))));
        bufp->chgBit(oldp+3193,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                       >> 5U))));
        bufp->chgBit(oldp+3194,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                          >> 5U)))));
        bufp->chgCData(oldp+3195,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3196,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 1U))));
        bufp->chgBit(oldp+3197,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                       >> 6U))));
        bufp->chgBit(oldp+3198,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                          >> 6U)))));
        bufp->chgBit(oldp+3199,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 1U))));
        bufp->chgBit(oldp+3200,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                       >> 7U))));
        bufp->chgBit(oldp+3201,((IData)((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                          >> 7U) | 
                                         ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                          != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id))))));
        bufp->chgBit(oldp+3202,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                       >> 2U))));
        bufp->chgCData(oldp+3203,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready),8);
        bufp->chgCData(oldp+3204,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid),8);
        bufp->chgCData(oldp+3205,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id),4);
        bufp->chgCData(oldp+3206,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__valid_mask),8);
        bufp->chgCData(oldp+3207,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__mc_valid),8);
        bufp->chgCData(oldp+3208,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__mc_ready),8);
        bufp->chgCData(oldp+3209,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[0]),4);
        bufp->chgCData(oldp+3210,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[1]),4);
        bufp->chgCData(oldp+3211,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[2]),4);
        bufp->chgCData(oldp+3212,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[3]),4);
        bufp->chgCData(oldp+3213,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[4]),4);
        bufp->chgCData(oldp+3214,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[5]),4);
        bufp->chgCData(oldp+3215,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[6]),4);
        bufp->chgCData(oldp+3216,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[7]),4);
        bufp->chgCData(oldp+3217,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[8]),4);
        bufp->chgIData(oldp+3218,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__j),32);
        bufp->chgCData(oldp+3219,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3220,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 2U))));
        bufp->chgBit(oldp+3221,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready))));
        bufp->chgBit(oldp+3222,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                       | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready)))));
        bufp->chgCData(oldp+3223,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3224,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 2U))));
        bufp->chgBit(oldp+3225,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                       >> 1U))));
        bufp->chgBit(oldp+3226,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                          >> 1U)))));
        bufp->chgCData(oldp+3227,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3228,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 2U))));
        bufp->chgBit(oldp+3229,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                       >> 2U))));
        bufp->chgBit(oldp+3230,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                          >> 2U)))));
        bufp->chgCData(oldp+3231,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3232,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 2U))));
        bufp->chgBit(oldp+3233,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                       >> 3U))));
        bufp->chgBit(oldp+3234,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                          >> 3U)))));
        bufp->chgCData(oldp+3235,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3236,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 2U))));
        bufp->chgBit(oldp+3237,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                       >> 4U))));
        bufp->chgBit(oldp+3238,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                          >> 4U)))));
        bufp->chgCData(oldp+3239,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3240,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 2U))));
        bufp->chgBit(oldp+3241,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                       >> 5U))));
        bufp->chgBit(oldp+3242,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                          >> 5U)))));
        bufp->chgCData(oldp+3243,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3244,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 2U))));
        bufp->chgBit(oldp+3245,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                       >> 6U))));
        bufp->chgBit(oldp+3246,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                          >> 6U)))));
        bufp->chgBit(oldp+3247,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 2U))));
        bufp->chgBit(oldp+3248,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                       >> 7U))));
        bufp->chgBit(oldp+3249,((IData)((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                          >> 7U) | 
                                         ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                          != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id))))));
        bufp->chgBit(oldp+3250,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                       >> 3U))));
        bufp->chgCData(oldp+3251,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready),8);
        bufp->chgCData(oldp+3252,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid),8);
        bufp->chgCData(oldp+3253,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id),4);
        bufp->chgCData(oldp+3254,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__valid_mask),8);
        bufp->chgCData(oldp+3255,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__mc_valid),8);
        bufp->chgCData(oldp+3256,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__mc_ready),8);
        bufp->chgCData(oldp+3257,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[0]),4);
        bufp->chgCData(oldp+3258,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[1]),4);
        bufp->chgCData(oldp+3259,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[2]),4);
        bufp->chgCData(oldp+3260,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[3]),4);
        bufp->chgCData(oldp+3261,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[4]),4);
        bufp->chgCData(oldp+3262,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[5]),4);
        bufp->chgCData(oldp+3263,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[6]),4);
        bufp->chgCData(oldp+3264,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[7]),4);
        bufp->chgCData(oldp+3265,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[8]),4);
        bufp->chgIData(oldp+3266,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__j),32);
        bufp->chgCData(oldp+3267,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3268,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 3U))));
        bufp->chgBit(oldp+3269,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready))));
        bufp->chgBit(oldp+3270,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                       | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready)))));
        bufp->chgCData(oldp+3271,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3272,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 3U))));
        bufp->chgBit(oldp+3273,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                       >> 1U))));
        bufp->chgBit(oldp+3274,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                          >> 1U)))));
        bufp->chgCData(oldp+3275,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3276,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 3U))));
        bufp->chgBit(oldp+3277,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                       >> 2U))));
        bufp->chgBit(oldp+3278,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                          >> 2U)))));
        bufp->chgCData(oldp+3279,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3280,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 3U))));
        bufp->chgBit(oldp+3281,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                       >> 3U))));
        bufp->chgBit(oldp+3282,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                          >> 3U)))));
        bufp->chgCData(oldp+3283,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3284,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 3U))));
        bufp->chgBit(oldp+3285,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                       >> 4U))));
        bufp->chgBit(oldp+3286,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                          >> 4U)))));
        bufp->chgCData(oldp+3287,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3288,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 3U))));
        bufp->chgBit(oldp+3289,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                       >> 5U))));
        bufp->chgBit(oldp+3290,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                          >> 5U)))));
        bufp->chgCData(oldp+3291,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3292,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 3U))));
        bufp->chgBit(oldp+3293,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                       >> 6U))));
        bufp->chgBit(oldp+3294,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                          >> 6U)))));
        bufp->chgBit(oldp+3295,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 3U))));
        bufp->chgBit(oldp+3296,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                       >> 7U))));
        bufp->chgBit(oldp+3297,((IData)((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                          >> 7U) | 
                                         ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                          != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id))))));
        bufp->chgBit(oldp+3298,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                       >> 4U))));
        bufp->chgCData(oldp+3299,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready),8);
        bufp->chgCData(oldp+3300,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid),8);
        bufp->chgCData(oldp+3301,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id),4);
        bufp->chgCData(oldp+3302,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__valid_mask),8);
        bufp->chgCData(oldp+3303,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__mc_valid),8);
        bufp->chgCData(oldp+3304,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__mc_ready),8);
        bufp->chgCData(oldp+3305,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[0]),4);
        bufp->chgCData(oldp+3306,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[1]),4);
        bufp->chgCData(oldp+3307,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[2]),4);
        bufp->chgCData(oldp+3308,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[3]),4);
        bufp->chgCData(oldp+3309,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[4]),4);
        bufp->chgCData(oldp+3310,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[5]),4);
        bufp->chgCData(oldp+3311,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[6]),4);
        bufp->chgCData(oldp+3312,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[7]),4);
        bufp->chgCData(oldp+3313,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[8]),4);
        bufp->chgIData(oldp+3314,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__j),32);
        bufp->chgCData(oldp+3315,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3316,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 4U))));
        bufp->chgBit(oldp+3317,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready))));
        bufp->chgBit(oldp+3318,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                       | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready)))));
        bufp->chgCData(oldp+3319,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3320,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 4U))));
        bufp->chgBit(oldp+3321,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                       >> 1U))));
        bufp->chgBit(oldp+3322,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                          >> 1U)))));
        bufp->chgCData(oldp+3323,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3324,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 4U))));
        bufp->chgBit(oldp+3325,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                       >> 2U))));
        bufp->chgBit(oldp+3326,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                          >> 2U)))));
        bufp->chgCData(oldp+3327,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3328,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 4U))));
        bufp->chgBit(oldp+3329,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                       >> 3U))));
        bufp->chgBit(oldp+3330,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                          >> 3U)))));
        bufp->chgCData(oldp+3331,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3332,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 4U))));
        bufp->chgBit(oldp+3333,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                       >> 4U))));
        bufp->chgBit(oldp+3334,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                          >> 4U)))));
        bufp->chgCData(oldp+3335,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3336,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 4U))));
        bufp->chgBit(oldp+3337,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                       >> 5U))));
        bufp->chgBit(oldp+3338,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                          >> 5U)))));
        bufp->chgCData(oldp+3339,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3340,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 4U))));
        bufp->chgBit(oldp+3341,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                       >> 6U))));
        bufp->chgBit(oldp+3342,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                          >> 6U)))));
        bufp->chgBit(oldp+3343,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 4U))));
        bufp->chgBit(oldp+3344,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                       >> 7U))));
        bufp->chgBit(oldp+3345,((IData)((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                          >> 7U) | 
                                         ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                          != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id))))));
        bufp->chgBit(oldp+3346,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                       >> 5U))));
        bufp->chgCData(oldp+3347,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready),8);
        bufp->chgCData(oldp+3348,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid),8);
        bufp->chgCData(oldp+3349,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__valid_mask),8);
        bufp->chgCData(oldp+3350,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__mc_valid),8);
        bufp->chgCData(oldp+3351,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__mc_ready),8);
        bufp->chgCData(oldp+3352,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[0]),4);
        bufp->chgCData(oldp+3353,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[1]),4);
        bufp->chgCData(oldp+3354,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[2]),4);
        bufp->chgCData(oldp+3355,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[3]),4);
        bufp->chgCData(oldp+3356,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[4]),4);
        bufp->chgCData(oldp+3357,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[5]),4);
        bufp->chgCData(oldp+3358,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[6]),4);
        bufp->chgCData(oldp+3359,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[7]),4);
        bufp->chgCData(oldp+3360,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[8]),4);
        bufp->chgIData(oldp+3361,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__j),32);
        bufp->chgCData(oldp+3362,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3363,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 5U))));
        bufp->chgBit(oldp+3364,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready))));
        bufp->chgBit(oldp+3365,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                       | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready)))));
        bufp->chgCData(oldp+3366,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3367,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 5U))));
        bufp->chgBit(oldp+3368,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                       >> 1U))));
        bufp->chgBit(oldp+3369,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                          >> 1U)))));
        bufp->chgCData(oldp+3370,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3371,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 5U))));
        bufp->chgBit(oldp+3372,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                       >> 2U))));
        bufp->chgBit(oldp+3373,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                          >> 2U)))));
        bufp->chgCData(oldp+3374,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3375,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 5U))));
        bufp->chgBit(oldp+3376,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                       >> 3U))));
        bufp->chgBit(oldp+3377,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                          >> 3U)))));
        bufp->chgCData(oldp+3378,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3379,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 5U))));
        bufp->chgBit(oldp+3380,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                       >> 4U))));
        bufp->chgBit(oldp+3381,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                          >> 4U)))));
        bufp->chgCData(oldp+3382,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3383,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 5U))));
        bufp->chgBit(oldp+3384,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                       >> 5U))));
        bufp->chgBit(oldp+3385,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                          >> 5U)))));
        bufp->chgCData(oldp+3386,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3387,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 5U))));
        bufp->chgBit(oldp+3388,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                       >> 6U))));
        bufp->chgBit(oldp+3389,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                          >> 6U)))));
        bufp->chgBit(oldp+3390,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__XBus_valid) 
                                    >> 5U))));
        bufp->chgBit(oldp+3391,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                       >> 7U))));
        bufp->chgBit(oldp+3392,((IData)((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                          >> 7U) | 
                                         ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ifmap_tag_X) 
                                          != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IFMAP__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id))))));
        bufp->chgBit(oldp+3393,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid))));
        bufp->chgCData(oldp+3394,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready),8);
        bufp->chgCData(oldp+3395,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid),8);
        bufp->chgCData(oldp+3396,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id),4);
        bufp->chgCData(oldp+3397,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id),4);
        bufp->chgCData(oldp+3398,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__valid_mask),8);
        bufp->chgCData(oldp+3399,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__mc_valid),8);
        bufp->chgCData(oldp+3400,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__mc_ready),8);
        bufp->chgCData(oldp+3401,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[0]),4);
        bufp->chgCData(oldp+3402,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[1]),4);
        bufp->chgCData(oldp+3403,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[2]),4);
        bufp->chgCData(oldp+3404,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[3]),4);
        bufp->chgCData(oldp+3405,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[4]),4);
        bufp->chgCData(oldp+3406,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[5]),4);
        bufp->chgCData(oldp+3407,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[6]),4);
        bufp->chgCData(oldp+3408,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[7]),4);
        bufp->chgCData(oldp+3409,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[8]),4);
        bufp->chgIData(oldp+3410,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__j),32);
        bufp->chgCData(oldp+3411,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3412,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid))));
        bufp->chgBit(oldp+3413,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready))));
        bufp->chgBit(oldp+3414,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                       | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready)))));
        bufp->chgCData(oldp+3415,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3416,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid))));
        bufp->chgBit(oldp+3417,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                       >> 1U))));
        bufp->chgBit(oldp+3418,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                          >> 1U)))));
        bufp->chgCData(oldp+3419,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3420,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid))));
        bufp->chgBit(oldp+3421,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                       >> 2U))));
        bufp->chgBit(oldp+3422,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                          >> 2U)))));
        bufp->chgCData(oldp+3423,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3424,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid))));
        bufp->chgBit(oldp+3425,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                       >> 3U))));
        bufp->chgBit(oldp+3426,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                          >> 3U)))));
        bufp->chgCData(oldp+3427,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3428,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid))));
        bufp->chgBit(oldp+3429,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                       >> 4U))));
        bufp->chgBit(oldp+3430,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                          >> 4U)))));
        bufp->chgCData(oldp+3431,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3432,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid))));
        bufp->chgBit(oldp+3433,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                       >> 5U))));
        bufp->chgBit(oldp+3434,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                          >> 5U)))));
        bufp->chgCData(oldp+3435,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3436,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid))));
        bufp->chgBit(oldp+3437,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                       >> 6U))));
        bufp->chgBit(oldp+3438,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                          >> 6U)))));
        bufp->chgBit(oldp+3439,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid))));
        bufp->chgBit(oldp+3440,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                       >> 7U))));
        bufp->chgBit(oldp+3441,((IData)((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                          >> 7U) | 
                                         ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                          != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id))))));
        bufp->chgBit(oldp+3442,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                       >> 1U))));
        bufp->chgCData(oldp+3443,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready),8);
        bufp->chgCData(oldp+3444,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.slave_valid),8);
        bufp->chgCData(oldp+3445,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id),4);
        bufp->chgCData(oldp+3446,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__valid_mask),8);
        bufp->chgCData(oldp+3447,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__mc_valid),8);
        bufp->chgCData(oldp+3448,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__mc_ready),8);
        bufp->chgCData(oldp+3449,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[0]),4);
        bufp->chgCData(oldp+3450,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[1]),4);
        bufp->chgCData(oldp+3451,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[2]),4);
        bufp->chgCData(oldp+3452,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[3]),4);
        bufp->chgCData(oldp+3453,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[4]),4);
        bufp->chgCData(oldp+3454,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[5]),4);
        bufp->chgCData(oldp+3455,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[6]),4);
        bufp->chgCData(oldp+3456,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[7]),4);
        bufp->chgCData(oldp+3457,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[8]),4);
        bufp->chgIData(oldp+3458,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__j),32);
        bufp->chgCData(oldp+3459,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3460,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 1U))));
        bufp->chgBit(oldp+3461,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready))));
        bufp->chgBit(oldp+3462,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                       | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready)))));
        bufp->chgCData(oldp+3463,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3464,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 1U))));
        bufp->chgBit(oldp+3465,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                       >> 1U))));
        bufp->chgBit(oldp+3466,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                          >> 1U)))));
        bufp->chgCData(oldp+3467,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3468,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 1U))));
        bufp->chgBit(oldp+3469,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                       >> 2U))));
        bufp->chgBit(oldp+3470,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                          >> 2U)))));
        bufp->chgCData(oldp+3471,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3472,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 1U))));
        bufp->chgBit(oldp+3473,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                       >> 3U))));
        bufp->chgBit(oldp+3474,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                          >> 3U)))));
        bufp->chgCData(oldp+3475,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3476,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 1U))));
        bufp->chgBit(oldp+3477,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                       >> 4U))));
        bufp->chgBit(oldp+3478,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                          >> 4U)))));
        bufp->chgCData(oldp+3479,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3480,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 1U))));
        bufp->chgBit(oldp+3481,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                       >> 5U))));
        bufp->chgBit(oldp+3482,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                          >> 5U)))));
        bufp->chgCData(oldp+3483,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3484,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 1U))));
        bufp->chgBit(oldp+3485,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                       >> 6U))));
        bufp->chgBit(oldp+3486,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                          >> 6U)))));
        bufp->chgBit(oldp+3487,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 1U))));
        bufp->chgBit(oldp+3488,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                       >> 7U))));
        bufp->chgBit(oldp+3489,((IData)((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                          >> 7U) | 
                                         ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                          != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id))))));
        bufp->chgBit(oldp+3490,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                       >> 2U))));
        bufp->chgCData(oldp+3491,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready),8);
        bufp->chgCData(oldp+3492,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.slave_valid),8);
        bufp->chgCData(oldp+3493,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id),4);
        bufp->chgCData(oldp+3494,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__valid_mask),8);
        bufp->chgCData(oldp+3495,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__mc_valid),8);
        bufp->chgCData(oldp+3496,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__mc_ready),8);
        bufp->chgCData(oldp+3497,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[0]),4);
        bufp->chgCData(oldp+3498,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[1]),4);
        bufp->chgCData(oldp+3499,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[2]),4);
        bufp->chgCData(oldp+3500,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[3]),4);
        bufp->chgCData(oldp+3501,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[4]),4);
        bufp->chgCData(oldp+3502,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[5]),4);
        bufp->chgCData(oldp+3503,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[6]),4);
        bufp->chgCData(oldp+3504,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[7]),4);
        bufp->chgCData(oldp+3505,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[8]),4);
        bufp->chgIData(oldp+3506,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__j),32);
        bufp->chgCData(oldp+3507,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3508,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 2U))));
        bufp->chgBit(oldp+3509,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready))));
        bufp->chgBit(oldp+3510,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                       | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready)))));
        bufp->chgCData(oldp+3511,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3512,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 2U))));
        bufp->chgBit(oldp+3513,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                       >> 1U))));
        bufp->chgBit(oldp+3514,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                          >> 1U)))));
        bufp->chgCData(oldp+3515,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3516,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 2U))));
        bufp->chgBit(oldp+3517,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                       >> 2U))));
        bufp->chgBit(oldp+3518,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                          >> 2U)))));
        bufp->chgCData(oldp+3519,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3520,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 2U))));
        bufp->chgBit(oldp+3521,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                       >> 3U))));
        bufp->chgBit(oldp+3522,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                          >> 3U)))));
        bufp->chgCData(oldp+3523,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3524,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 2U))));
        bufp->chgBit(oldp+3525,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                       >> 4U))));
        bufp->chgBit(oldp+3526,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                          >> 4U)))));
        bufp->chgCData(oldp+3527,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3528,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 2U))));
        bufp->chgBit(oldp+3529,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                       >> 5U))));
        bufp->chgBit(oldp+3530,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                          >> 5U)))));
        bufp->chgCData(oldp+3531,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3532,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 2U))));
        bufp->chgBit(oldp+3533,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                       >> 6U))));
        bufp->chgBit(oldp+3534,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                          >> 6U)))));
        bufp->chgBit(oldp+3535,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 2U))));
        bufp->chgBit(oldp+3536,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                       >> 7U))));
        bufp->chgBit(oldp+3537,((IData)((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                          >> 7U) | 
                                         ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                          != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id))))));
        bufp->chgBit(oldp+3538,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                       >> 3U))));
        bufp->chgCData(oldp+3539,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready),8);
        bufp->chgCData(oldp+3540,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.slave_valid),8);
        bufp->chgCData(oldp+3541,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id),4);
        bufp->chgCData(oldp+3542,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__valid_mask),8);
        bufp->chgCData(oldp+3543,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__mc_valid),8);
        bufp->chgCData(oldp+3544,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__mc_ready),8);
        bufp->chgCData(oldp+3545,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[0]),4);
        bufp->chgCData(oldp+3546,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[1]),4);
        bufp->chgCData(oldp+3547,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[2]),4);
        bufp->chgCData(oldp+3548,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[3]),4);
        bufp->chgCData(oldp+3549,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[4]),4);
        bufp->chgCData(oldp+3550,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[5]),4);
        bufp->chgCData(oldp+3551,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[6]),4);
        bufp->chgCData(oldp+3552,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[7]),4);
        bufp->chgCData(oldp+3553,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[8]),4);
        bufp->chgIData(oldp+3554,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__j),32);
        bufp->chgCData(oldp+3555,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3556,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 3U))));
        bufp->chgBit(oldp+3557,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready))));
        bufp->chgBit(oldp+3558,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                       | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready)))));
        bufp->chgCData(oldp+3559,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3560,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 3U))));
        bufp->chgBit(oldp+3561,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                       >> 1U))));
        bufp->chgBit(oldp+3562,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                          >> 1U)))));
        bufp->chgCData(oldp+3563,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3564,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 3U))));
        bufp->chgBit(oldp+3565,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                       >> 2U))));
        bufp->chgBit(oldp+3566,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                          >> 2U)))));
        bufp->chgCData(oldp+3567,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3568,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 3U))));
        bufp->chgBit(oldp+3569,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                       >> 3U))));
        bufp->chgBit(oldp+3570,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                          >> 3U)))));
        bufp->chgCData(oldp+3571,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3572,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 3U))));
        bufp->chgBit(oldp+3573,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                       >> 4U))));
        bufp->chgBit(oldp+3574,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                          >> 4U)))));
        bufp->chgCData(oldp+3575,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3576,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 3U))));
        bufp->chgBit(oldp+3577,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                       >> 5U))));
        bufp->chgBit(oldp+3578,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                          >> 5U)))));
        bufp->chgCData(oldp+3579,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3580,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 3U))));
        bufp->chgBit(oldp+3581,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                       >> 6U))));
        bufp->chgBit(oldp+3582,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                          >> 6U)))));
        bufp->chgBit(oldp+3583,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 3U))));
        bufp->chgBit(oldp+3584,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                       >> 7U))));
        bufp->chgBit(oldp+3585,((IData)((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                          >> 7U) | 
                                         ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                          != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id))))));
        bufp->chgBit(oldp+3586,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                       >> 4U))));
        bufp->chgCData(oldp+3587,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready),8);
        bufp->chgCData(oldp+3588,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.slave_valid),8);
        bufp->chgCData(oldp+3589,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id),4);
        bufp->chgCData(oldp+3590,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__valid_mask),8);
        bufp->chgCData(oldp+3591,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__mc_valid),8);
        bufp->chgCData(oldp+3592,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__mc_ready),8);
        bufp->chgCData(oldp+3593,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[0]),4);
        bufp->chgCData(oldp+3594,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[1]),4);
        bufp->chgCData(oldp+3595,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[2]),4);
        bufp->chgCData(oldp+3596,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[3]),4);
        bufp->chgCData(oldp+3597,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[4]),4);
        bufp->chgCData(oldp+3598,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[5]),4);
        bufp->chgCData(oldp+3599,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[6]),4);
        bufp->chgCData(oldp+3600,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[7]),4);
        bufp->chgCData(oldp+3601,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[8]),4);
        bufp->chgIData(oldp+3602,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__j),32);
        bufp->chgCData(oldp+3603,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3604,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 4U))));
        bufp->chgBit(oldp+3605,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready))));
        bufp->chgBit(oldp+3606,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                       | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready)))));
        bufp->chgCData(oldp+3607,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3608,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 4U))));
        bufp->chgBit(oldp+3609,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                       >> 1U))));
        bufp->chgBit(oldp+3610,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                          >> 1U)))));
        bufp->chgCData(oldp+3611,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3612,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 4U))));
        bufp->chgBit(oldp+3613,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                       >> 2U))));
        bufp->chgBit(oldp+3614,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                          >> 2U)))));
        bufp->chgCData(oldp+3615,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3616,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 4U))));
        bufp->chgBit(oldp+3617,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                       >> 3U))));
        bufp->chgBit(oldp+3618,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                          >> 3U)))));
        bufp->chgCData(oldp+3619,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3620,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 4U))));
        bufp->chgBit(oldp+3621,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                       >> 4U))));
        bufp->chgBit(oldp+3622,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                          >> 4U)))));
        bufp->chgCData(oldp+3623,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3624,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 4U))));
        bufp->chgBit(oldp+3625,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                       >> 5U))));
        bufp->chgBit(oldp+3626,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                          >> 5U)))));
        bufp->chgCData(oldp+3627,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3628,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 4U))));
        bufp->chgBit(oldp+3629,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                       >> 6U))));
        bufp->chgBit(oldp+3630,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                          >> 6U)))));
        bufp->chgBit(oldp+3631,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 4U))));
        bufp->chgBit(oldp+3632,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                       >> 7U))));
        bufp->chgBit(oldp+3633,((IData)((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                          >> 7U) | 
                                         ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                          != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id))))));
        bufp->chgBit(oldp+3634,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                       >> 5U))));
        bufp->chgCData(oldp+3635,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready),8);
        bufp->chgCData(oldp+3636,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.slave_valid),8);
        bufp->chgCData(oldp+3637,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__valid_mask),8);
        bufp->chgCData(oldp+3638,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__mc_valid),8);
        bufp->chgCData(oldp+3639,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__mc_ready),8);
        bufp->chgCData(oldp+3640,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[0]),4);
        bufp->chgCData(oldp+3641,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[1]),4);
        bufp->chgCData(oldp+3642,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[2]),4);
        bufp->chgCData(oldp+3643,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[3]),4);
        bufp->chgCData(oldp+3644,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[4]),4);
        bufp->chgCData(oldp+3645,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[5]),4);
        bufp->chgCData(oldp+3646,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[6]),4);
        bufp->chgCData(oldp+3647,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[7]),4);
        bufp->chgCData(oldp+3648,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[8]),4);
        bufp->chgIData(oldp+3649,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__j),32);
        bufp->chgCData(oldp+3650,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3651,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 5U))));
        bufp->chgBit(oldp+3652,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready))));
        bufp->chgBit(oldp+3653,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                       | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready)))));
        bufp->chgCData(oldp+3654,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3655,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 5U))));
        bufp->chgBit(oldp+3656,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                       >> 1U))));
        bufp->chgBit(oldp+3657,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                          >> 1U)))));
        bufp->chgCData(oldp+3658,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3659,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 5U))));
        bufp->chgBit(oldp+3660,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                       >> 2U))));
        bufp->chgBit(oldp+3661,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                          >> 2U)))));
        bufp->chgCData(oldp+3662,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3663,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 5U))));
        bufp->chgBit(oldp+3664,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                       >> 3U))));
        bufp->chgBit(oldp+3665,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                          >> 3U)))));
        bufp->chgCData(oldp+3666,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3667,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 5U))));
        bufp->chgBit(oldp+3668,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                       >> 4U))));
        bufp->chgBit(oldp+3669,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                          >> 4U)))));
        bufp->chgCData(oldp+3670,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3671,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 5U))));
        bufp->chgBit(oldp+3672,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                       >> 5U))));
        bufp->chgBit(oldp+3673,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                          >> 5U)))));
        bufp->chgCData(oldp+3674,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3675,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 5U))));
        bufp->chgBit(oldp+3676,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                       >> 6U))));
        bufp->chgBit(oldp+3677,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                          >> 6U)))));
        bufp->chgBit(oldp+3678,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__XBus_valid) 
                                    >> 5U))));
        bufp->chgBit(oldp+3679,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                       >> 7U))));
        bufp->chgBit(oldp+3680,((IData)((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                          >> 7U) | 
                                         ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__filter_tag_X) 
                                          != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_FILTER__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id))))));
        bufp->chgBit(oldp+3681,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid))));
        bufp->chgCData(oldp+3682,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready),8);
        bufp->chgCData(oldp+3683,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.slave_valid),8);
        bufp->chgCData(oldp+3684,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id),4);
        bufp->chgCData(oldp+3685,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id),4);
        bufp->chgCData(oldp+3686,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__valid_mask),8);
        bufp->chgCData(oldp+3687,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__mc_valid),8);
        bufp->chgCData(oldp+3688,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__mc_ready),8);
        bufp->chgCData(oldp+3689,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[0]),4);
        bufp->chgCData(oldp+3690,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[1]),4);
        bufp->chgCData(oldp+3691,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[2]),4);
        bufp->chgCData(oldp+3692,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[3]),4);
        bufp->chgCData(oldp+3693,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[4]),4);
        bufp->chgCData(oldp+3694,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[5]),4);
        bufp->chgCData(oldp+3695,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[6]),4);
        bufp->chgCData(oldp+3696,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[7]),4);
        bufp->chgCData(oldp+3697,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[8]),4);
        bufp->chgIData(oldp+3698,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__PVT__j),32);
        bufp->chgCData(oldp+3699,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3700,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid))));
        bufp->chgBit(oldp+3701,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready))));
        bufp->chgBit(oldp+3702,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                       | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready)))));
        bufp->chgCData(oldp+3703,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3704,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid))));
        bufp->chgBit(oldp+3705,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                       >> 1U))));
        bufp->chgBit(oldp+3706,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                          >> 1U)))));
        bufp->chgCData(oldp+3707,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3708,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid))));
        bufp->chgBit(oldp+3709,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                       >> 2U))));
        bufp->chgBit(oldp+3710,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                          >> 2U)))));
        bufp->chgCData(oldp+3711,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3712,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid))));
        bufp->chgBit(oldp+3713,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                       >> 3U))));
        bufp->chgBit(oldp+3714,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                          >> 3U)))));
        bufp->chgCData(oldp+3715,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3716,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid))));
        bufp->chgBit(oldp+3717,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                       >> 4U))));
        bufp->chgBit(oldp+3718,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                          >> 4U)))));
        bufp->chgCData(oldp+3719,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3720,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid))));
        bufp->chgBit(oldp+3721,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                       >> 5U))));
        bufp->chgBit(oldp+3722,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                          >> 5U)))));
        bufp->chgCData(oldp+3723,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3724,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid))));
        bufp->chgBit(oldp+3725,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                       >> 6U))));
        bufp->chgBit(oldp+3726,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                          >> 6U)))));
        bufp->chgBit(oldp+3727,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid))));
        bufp->chgBit(oldp+3728,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                       >> 7U))));
        bufp->chgBit(oldp+3729,((IData)((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__0__KET____DOT__XBus__slave_ready) 
                                          >> 7U) | 
                                         ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                          != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id))))));
        bufp->chgBit(oldp+3730,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                       >> 1U))));
        bufp->chgCData(oldp+3731,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready),8);
        bufp->chgCData(oldp+3732,(((~ (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__valid_mask)) 
                                   & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__mc_valid))),8);
        bufp->chgCData(oldp+3733,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id),4);
        bufp->chgCData(oldp+3734,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__valid_mask),8);
        bufp->chgCData(oldp+3735,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__mc_valid),8);
        bufp->chgCData(oldp+3736,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__mc_ready),8);
        bufp->chgCData(oldp+3737,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[0]),4);
        bufp->chgCData(oldp+3738,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[1]),4);
        bufp->chgCData(oldp+3739,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[2]),4);
        bufp->chgCData(oldp+3740,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[3]),4);
        bufp->chgCData(oldp+3741,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[4]),4);
        bufp->chgCData(oldp+3742,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[5]),4);
        bufp->chgCData(oldp+3743,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[6]),4);
        bufp->chgCData(oldp+3744,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[7]),4);
        bufp->chgCData(oldp+3745,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[8]),4);
        bufp->chgIData(oldp+3746,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__PVT__j),32);
        bufp->chgCData(oldp+3747,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3748,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 1U))));
        bufp->chgBit(oldp+3749,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready))));
        bufp->chgBit(oldp+3750,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                       | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready)))));
        bufp->chgCData(oldp+3751,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3752,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 1U))));
        bufp->chgBit(oldp+3753,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                       >> 1U))));
        bufp->chgBit(oldp+3754,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                          >> 1U)))));
        bufp->chgCData(oldp+3755,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3756,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 1U))));
        bufp->chgBit(oldp+3757,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                       >> 2U))));
        bufp->chgBit(oldp+3758,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                          >> 2U)))));
        bufp->chgCData(oldp+3759,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3760,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 1U))));
        bufp->chgBit(oldp+3761,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                       >> 3U))));
        bufp->chgBit(oldp+3762,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                          >> 3U)))));
        bufp->chgCData(oldp+3763,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3764,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 1U))));
        bufp->chgBit(oldp+3765,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                       >> 4U))));
        bufp->chgBit(oldp+3766,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                          >> 4U)))));
        bufp->chgCData(oldp+3767,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3768,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 1U))));
        bufp->chgBit(oldp+3769,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                       >> 5U))));
        bufp->chgBit(oldp+3770,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                          >> 5U)))));
        bufp->chgCData(oldp+3771,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3772,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 1U))));
        bufp->chgBit(oldp+3773,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                       >> 6U))));
        bufp->chgBit(oldp+3774,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                          >> 6U)))));
        bufp->chgBit(oldp+3775,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 1U))));
        bufp->chgBit(oldp+3776,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                       >> 7U))));
        bufp->chgBit(oldp+3777,((IData)((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__1__KET____DOT__XBus__slave_ready) 
                                          >> 7U) | 
                                         ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                          != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id))))));
        bufp->chgBit(oldp+3778,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                       >> 2U))));
        bufp->chgCData(oldp+3779,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready),8);
        bufp->chgCData(oldp+3780,(((~ (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__valid_mask)) 
                                   & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__mc_valid))),8);
        bufp->chgCData(oldp+3781,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id),4);
        bufp->chgCData(oldp+3782,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__valid_mask),8);
        bufp->chgCData(oldp+3783,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__mc_valid),8);
        bufp->chgCData(oldp+3784,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__mc_ready),8);
        bufp->chgCData(oldp+3785,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[0]),4);
        bufp->chgCData(oldp+3786,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[1]),4);
        bufp->chgCData(oldp+3787,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[2]),4);
        bufp->chgCData(oldp+3788,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[3]),4);
        bufp->chgCData(oldp+3789,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[4]),4);
        bufp->chgCData(oldp+3790,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[5]),4);
        bufp->chgCData(oldp+3791,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[6]),4);
        bufp->chgCData(oldp+3792,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[7]),4);
        bufp->chgCData(oldp+3793,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[8]),4);
        bufp->chgIData(oldp+3794,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__PVT__j),32);
        bufp->chgCData(oldp+3795,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3796,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 2U))));
        bufp->chgBit(oldp+3797,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready))));
        bufp->chgBit(oldp+3798,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                       | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready)))));
        bufp->chgCData(oldp+3799,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3800,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 2U))));
        bufp->chgBit(oldp+3801,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                       >> 1U))));
        bufp->chgBit(oldp+3802,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                          >> 1U)))));
        bufp->chgCData(oldp+3803,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3804,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 2U))));
        bufp->chgBit(oldp+3805,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                       >> 2U))));
        bufp->chgBit(oldp+3806,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                          >> 2U)))));
        bufp->chgCData(oldp+3807,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3808,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 2U))));
        bufp->chgBit(oldp+3809,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                       >> 3U))));
        bufp->chgBit(oldp+3810,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                          >> 3U)))));
        bufp->chgCData(oldp+3811,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3812,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 2U))));
        bufp->chgBit(oldp+3813,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                       >> 4U))));
        bufp->chgBit(oldp+3814,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                          >> 4U)))));
        bufp->chgCData(oldp+3815,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3816,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 2U))));
        bufp->chgBit(oldp+3817,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                       >> 5U))));
        bufp->chgBit(oldp+3818,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                          >> 5U)))));
        bufp->chgCData(oldp+3819,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3820,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 2U))));
        bufp->chgBit(oldp+3821,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                       >> 6U))));
        bufp->chgBit(oldp+3822,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                          >> 6U)))));
        bufp->chgBit(oldp+3823,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 2U))));
        bufp->chgBit(oldp+3824,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                       >> 7U))));
        bufp->chgBit(oldp+3825,((IData)((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__2__KET____DOT__XBus__slave_ready) 
                                          >> 7U) | 
                                         ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                          != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id))))));
        bufp->chgBit(oldp+3826,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                       >> 3U))));
        bufp->chgCData(oldp+3827,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready),8);
        bufp->chgCData(oldp+3828,(((~ (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__valid_mask)) 
                                   & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__mc_valid))),8);
        bufp->chgCData(oldp+3829,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id),4);
        bufp->chgCData(oldp+3830,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__valid_mask),8);
        bufp->chgCData(oldp+3831,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__mc_valid),8);
        bufp->chgCData(oldp+3832,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__mc_ready),8);
        bufp->chgCData(oldp+3833,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[0]),4);
        bufp->chgCData(oldp+3834,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[1]),4);
        bufp->chgCData(oldp+3835,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[2]),4);
        bufp->chgCData(oldp+3836,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[3]),4);
        bufp->chgCData(oldp+3837,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[4]),4);
        bufp->chgCData(oldp+3838,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[5]),4);
        bufp->chgCData(oldp+3839,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[6]),4);
        bufp->chgCData(oldp+3840,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[7]),4);
        bufp->chgCData(oldp+3841,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[8]),4);
        bufp->chgIData(oldp+3842,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__PVT__j),32);
        bufp->chgCData(oldp+3843,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3844,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 3U))));
        bufp->chgBit(oldp+3845,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready))));
        bufp->chgBit(oldp+3846,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                       | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready)))));
        bufp->chgCData(oldp+3847,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3848,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 3U))));
        bufp->chgBit(oldp+3849,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                       >> 1U))));
        bufp->chgBit(oldp+3850,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                          >> 1U)))));
        bufp->chgCData(oldp+3851,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3852,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 3U))));
        bufp->chgBit(oldp+3853,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                       >> 2U))));
        bufp->chgBit(oldp+3854,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                          >> 2U)))));
        bufp->chgCData(oldp+3855,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3856,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 3U))));
        bufp->chgBit(oldp+3857,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                       >> 3U))));
        bufp->chgBit(oldp+3858,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                          >> 3U)))));
        bufp->chgCData(oldp+3859,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3860,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 3U))));
        bufp->chgBit(oldp+3861,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                       >> 4U))));
        bufp->chgBit(oldp+3862,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                          >> 4U)))));
        bufp->chgCData(oldp+3863,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3864,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 3U))));
        bufp->chgBit(oldp+3865,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                       >> 5U))));
        bufp->chgBit(oldp+3866,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                          >> 5U)))));
        bufp->chgCData(oldp+3867,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3868,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 3U))));
        bufp->chgBit(oldp+3869,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                       >> 6U))));
        bufp->chgBit(oldp+3870,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                          >> 6U)))));
        bufp->chgBit(oldp+3871,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 3U))));
        bufp->chgBit(oldp+3872,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                       >> 7U))));
        bufp->chgBit(oldp+3873,((IData)((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__3__KET____DOT__XBus__slave_ready) 
                                          >> 7U) | 
                                         ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                          != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id))))));
        bufp->chgBit(oldp+3874,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                       >> 4U))));
        bufp->chgCData(oldp+3875,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready),8);
        bufp->chgCData(oldp+3876,(((~ (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__valid_mask)) 
                                   & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__mc_valid))),8);
        bufp->chgCData(oldp+3877,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id),4);
        bufp->chgCData(oldp+3878,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__valid_mask),8);
        bufp->chgCData(oldp+3879,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__mc_valid),8);
        bufp->chgCData(oldp+3880,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__mc_ready),8);
        bufp->chgCData(oldp+3881,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[0]),4);
        bufp->chgCData(oldp+3882,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[1]),4);
        bufp->chgCData(oldp+3883,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[2]),4);
        bufp->chgCData(oldp+3884,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[3]),4);
        bufp->chgCData(oldp+3885,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[4]),4);
        bufp->chgCData(oldp+3886,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[5]),4);
        bufp->chgCData(oldp+3887,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[6]),4);
        bufp->chgCData(oldp+3888,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[7]),4);
        bufp->chgCData(oldp+3889,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[8]),4);
        bufp->chgIData(oldp+3890,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__PVT__j),32);
        bufp->chgCData(oldp+3891,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3892,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 4U))));
        bufp->chgBit(oldp+3893,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready))));
        bufp->chgBit(oldp+3894,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                       | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready)))));
        bufp->chgCData(oldp+3895,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3896,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 4U))));
        bufp->chgBit(oldp+3897,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                       >> 1U))));
        bufp->chgBit(oldp+3898,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                          >> 1U)))));
        bufp->chgCData(oldp+3899,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3900,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 4U))));
        bufp->chgBit(oldp+3901,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                       >> 2U))));
        bufp->chgBit(oldp+3902,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                          >> 2U)))));
        bufp->chgCData(oldp+3903,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3904,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 4U))));
        bufp->chgBit(oldp+3905,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                       >> 3U))));
        bufp->chgBit(oldp+3906,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                          >> 3U)))));
        bufp->chgCData(oldp+3907,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3908,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 4U))));
        bufp->chgBit(oldp+3909,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                       >> 4U))));
        bufp->chgBit(oldp+3910,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                          >> 4U)))));
        bufp->chgCData(oldp+3911,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3912,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 4U))));
        bufp->chgBit(oldp+3913,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                       >> 5U))));
        bufp->chgBit(oldp+3914,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                          >> 5U)))));
        bufp->chgCData(oldp+3915,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3916,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 4U))));
        bufp->chgBit(oldp+3917,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                       >> 6U))));
        bufp->chgBit(oldp+3918,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                          >> 6U)))));
        bufp->chgBit(oldp+3919,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 4U))));
        bufp->chgBit(oldp+3920,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                       >> 7U))));
        bufp->chgBit(oldp+3921,((IData)((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__4__KET____DOT__XBus__slave_ready) 
                                          >> 7U) | 
                                         ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                          != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id))))));
        bufp->chgBit(oldp+3922,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                       >> 5U))));
        bufp->chgCData(oldp+3923,(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready),8);
        bufp->chgCData(oldp+3924,(((~ (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__valid_mask)) 
                                   & (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__mc_valid))),8);
        bufp->chgCData(oldp+3925,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__valid_mask),8);
        bufp->chgCData(oldp+3926,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__mc_valid),8);
        bufp->chgCData(oldp+3927,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__mc_ready),8);
        bufp->chgCData(oldp+3928,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[0]),4);
        bufp->chgCData(oldp+3929,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[1]),4);
        bufp->chgCData(oldp+3930,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[2]),4);
        bufp->chgCData(oldp+3931,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[3]),4);
        bufp->chgCData(oldp+3932,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[4]),4);
        bufp->chgCData(oldp+3933,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[5]),4);
        bufp->chgCData(oldp+3934,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[6]),4);
        bufp->chgCData(oldp+3935,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[7]),4);
        bufp->chgCData(oldp+3936,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[8]),4);
        bufp->chgIData(oldp+3937,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__PVT__j),32);
        bufp->chgCData(oldp+3938,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3939,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 5U))));
        bufp->chgBit(oldp+3940,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready))));
        bufp->chgBit(oldp+3941,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__0__KET____DOT__MC__id)) 
                                       | (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready)))));
        bufp->chgCData(oldp+3942,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3943,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 5U))));
        bufp->chgBit(oldp+3944,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                       >> 1U))));
        bufp->chgBit(oldp+3945,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__1__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                          >> 1U)))));
        bufp->chgCData(oldp+3946,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3947,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 5U))));
        bufp->chgBit(oldp+3948,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                       >> 2U))));
        bufp->chgBit(oldp+3949,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__2__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                          >> 2U)))));
        bufp->chgCData(oldp+3950,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3951,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 5U))));
        bufp->chgBit(oldp+3952,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                       >> 3U))));
        bufp->chgBit(oldp+3953,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__3__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                          >> 3U)))));
        bufp->chgCData(oldp+3954,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3955,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 5U))));
        bufp->chgBit(oldp+3956,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                       >> 4U))));
        bufp->chgBit(oldp+3957,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__4__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                          >> 4U)))));
        bufp->chgCData(oldp+3958,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3959,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 5U))));
        bufp->chgBit(oldp+3960,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                       >> 5U))));
        bufp->chgBit(oldp+3961,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__5__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                          >> 5U)))));
        bufp->chgCData(oldp+3962,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id),4);
        bufp->chgBit(oldp+3963,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 5U))));
        bufp->chgBit(oldp+3964,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                       >> 6U))));
        bufp->chgBit(oldp+3965,((1U & (((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                        != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__6__KET____DOT__MC__id)) 
                                       | ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                          >> 6U)))));
        bufp->chgBit(oldp+3966,((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id) 
                                  == (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X)) 
                                 & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__XBus_valid) 
                                    >> 5U))));
        bufp->chgBit(oldp+3967,((1U & ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                       >> 7U))));
        bufp->chgBit(oldp+3968,((IData)((((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT____Vcellinp__GIN_XBUS__BRA__5__KET____DOT__XBus__slave_ready) 
                                          >> 7U) | 
                                         ((IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ipsum_tag_X) 
                                          != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GIN_IPSUM__DOT__GIN_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GIN_MC__BRA__7__KET____DOT__MC__id))))));
        bufp->chgCData(oldp+3969,((0xffU & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid))),8);
        __Vtemp_4[0U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0U];
        __Vtemp_4[1U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[1U];
        __Vtemp_4[2U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[2U];
        __Vtemp_4[3U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[3U];
        __Vtemp_4[4U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[4U];
        __Vtemp_4[5U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[5U];
        __Vtemp_4[6U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[6U];
        __Vtemp_4[7U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[7U];
        bufp->chgWData(oldp+3970,(__Vtemp_4),256);
        bufp->chgCData(oldp+3978,(((((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                       & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out)) 
                                      << 7U) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out)) 
                                                << 6U)) 
                                    | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                         & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out)) 
                                        << 5U) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                   & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out)) 
                                                  << 4U))) 
                                   | (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                         & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out)) 
                                        << 3U) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                   & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out)) 
                                                  << 2U)) 
                                      | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                           & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out)) 
                                          << 1U) | 
                                         ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                          & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out)))))),8);
        bufp->chgCData(oldp+3979,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id),4);
        bufp->chgCData(oldp+3980,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id),4);
        bufp->chgCData(oldp+3981,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__mc_valid),8);
        bufp->chgCData(oldp+3982,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[0]),4);
        bufp->chgCData(oldp+3983,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[1]),4);
        bufp->chgCData(oldp+3984,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[2]),4);
        bufp->chgCData(oldp+3985,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[3]),4);
        bufp->chgCData(oldp+3986,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[4]),4);
        bufp->chgCData(oldp+3987,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[5]),4);
        bufp->chgCData(oldp+3988,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[6]),4);
        bufp->chgCData(oldp+3989,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[7]),4);
        bufp->chgCData(oldp+3990,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__ID_scan_chain[8]),4);
        bufp->chgCData(oldp+3991,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+3992,((1U & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid))));
        bufp->chgBit(oldp+3993,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid))));
        bufp->chgBit(oldp+3994,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+3995,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+3996,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 1U)))));
        bufp->chgBit(oldp+3997,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 1U)))));
        bufp->chgBit(oldp+3998,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+3999,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4000,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 2U)))));
        bufp->chgBit(oldp+4001,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 2U)))));
        bufp->chgBit(oldp+4002,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4003,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4004,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 3U)))));
        bufp->chgBit(oldp+4005,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 3U)))));
        bufp->chgBit(oldp+4006,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4007,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4008,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 4U)))));
        bufp->chgBit(oldp+4009,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 4U)))));
        bufp->chgBit(oldp+4010,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4011,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GON_MC__BRA__6__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4012,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 5U)))));
        bufp->chgBit(oldp+4013,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 5U)))));
        bufp->chgBit(oldp+4014,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4015,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__Vcellout__GON_MC__BRA__7__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4016,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 6U)))));
        bufp->chgBit(oldp+4017,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 6U)))));
        bufp->chgBit(oldp+4018,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out))));
        bufp->chgBit(oldp+4019,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 7U)))));
        bufp->chgBit(oldp+4020,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 7U)))));
        bufp->chgBit(oldp+4021,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4022,((0xffU & (IData)(
                                                   (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                    >> 8U)))),8);
        __Vtemp_5[0U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[8U];
        __Vtemp_5[1U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[9U];
        __Vtemp_5[2U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0xaU];
        __Vtemp_5[3U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0xbU];
        __Vtemp_5[4U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0xcU];
        __Vtemp_5[5U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0xdU];
        __Vtemp_5[6U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0xeU];
        __Vtemp_5[7U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0xfU];
        bufp->chgWData(oldp+4023,(__Vtemp_5),256);
        bufp->chgCData(oldp+4031,(((((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                       & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out)) 
                                      << 7U) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out)) 
                                                << 6U)) 
                                    | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                         & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out)) 
                                        << 5U) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                   & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out)) 
                                                  << 4U))) 
                                   | (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                         & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out)) 
                                        << 3U) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                   & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out)) 
                                                  << 2U)) 
                                      | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                           & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out)) 
                                          << 1U) | 
                                         ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                          & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out)))))),8);
        bufp->chgCData(oldp+4032,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id),4);
        bufp->chgCData(oldp+4033,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__mc_valid),8);
        bufp->chgCData(oldp+4034,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[0]),4);
        bufp->chgCData(oldp+4035,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[1]),4);
        bufp->chgCData(oldp+4036,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[2]),4);
        bufp->chgCData(oldp+4037,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[3]),4);
        bufp->chgCData(oldp+4038,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[4]),4);
        bufp->chgCData(oldp+4039,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[5]),4);
        bufp->chgCData(oldp+4040,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[6]),4);
        bufp->chgCData(oldp+4041,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[7]),4);
        bufp->chgCData(oldp+4042,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__ID_scan_chain[8]),4);
        bufp->chgCData(oldp+4043,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4044,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 8U)))));
        bufp->chgBit(oldp+4045,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 8U)))));
        bufp->chgBit(oldp+4046,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4047,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4048,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 9U)))));
        bufp->chgBit(oldp+4049,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 9U)))));
        bufp->chgBit(oldp+4050,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4051,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4052,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+4053,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0xaU)))));
        bufp->chgBit(oldp+4054,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4055,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4056,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+4057,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0xbU)))));
        bufp->chgBit(oldp+4058,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4059,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4060,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+4061,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0xcU)))));
        bufp->chgBit(oldp+4062,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4063,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GON_MC__BRA__6__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4064,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+4065,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0xdU)))));
        bufp->chgBit(oldp+4066,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4067,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__Vcellout__GON_MC__BRA__7__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4068,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+4069,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0xeU)))));
        bufp->chgBit(oldp+4070,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out))));
        bufp->chgBit(oldp+4071,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+4072,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0xfU)))));
        bufp->chgBit(oldp+4073,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4074,((0xffU & (IData)(
                                                   (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                    >> 0x10U)))),8);
        __Vtemp_6[0U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x10U];
        __Vtemp_6[1U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x11U];
        __Vtemp_6[2U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x12U];
        __Vtemp_6[3U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x13U];
        __Vtemp_6[4U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x14U];
        __Vtemp_6[5U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x15U];
        __Vtemp_6[6U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x16U];
        __Vtemp_6[7U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x17U];
        bufp->chgWData(oldp+4075,(__Vtemp_6),256);
        bufp->chgCData(oldp+4083,(((((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
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
                                          & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__ready_out)))))),8);
        bufp->chgCData(oldp+4084,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id),4);
        bufp->chgCData(oldp+4085,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__mc_valid),8);
        bufp->chgCData(oldp+4086,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[0]),4);
        bufp->chgCData(oldp+4087,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[1]),4);
        bufp->chgCData(oldp+4088,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[2]),4);
        bufp->chgCData(oldp+4089,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[3]),4);
        bufp->chgCData(oldp+4090,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[4]),4);
        bufp->chgCData(oldp+4091,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[5]),4);
        bufp->chgCData(oldp+4092,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[6]),4);
        bufp->chgCData(oldp+4093,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[7]),4);
        bufp->chgCData(oldp+4094,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__ID_scan_chain[8]),4);
        bufp->chgCData(oldp+4095,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4096,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+4097,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x10U)))));
        bufp->chgBit(oldp+4098,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4099,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4100,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+4101,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x11U)))));
        bufp->chgBit(oldp+4102,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4103,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4104,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+4105,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x12U)))));
        bufp->chgBit(oldp+4106,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4107,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4108,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+4109,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x13U)))));
        bufp->chgBit(oldp+4110,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4111,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4112,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+4113,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x14U)))));
        bufp->chgBit(oldp+4114,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4115,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GON_MC__BRA__6__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4116,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+4117,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x15U)))));
        bufp->chgBit(oldp+4118,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4119,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__Vcellout__GON_MC__BRA__7__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4120,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+4121,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x16U)))));
        bufp->chgBit(oldp+4122,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__ready_out))));
        bufp->chgBit(oldp+4123,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+4124,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x17U)))));
        bufp->chgBit(oldp+4125,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4126,((0xffU & (IData)(
                                                   (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                    >> 0x18U)))),8);
        __Vtemp_7[0U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x18U];
        __Vtemp_7[1U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x19U];
        __Vtemp_7[2U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x1aU];
        __Vtemp_7[3U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x1bU];
        __Vtemp_7[4U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x1cU];
        __Vtemp_7[5U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x1dU];
        __Vtemp_7[6U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x1eU];
        __Vtemp_7[7U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x1fU];
        bufp->chgWData(oldp+4127,(__Vtemp_7),256);
        bufp->chgCData(oldp+4135,(((((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                       & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out)) 
                                      << 7U) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out)) 
                                                << 6U)) 
                                    | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                         & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out)) 
                                        << 5U) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                   & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out)) 
                                                  << 4U))) 
                                   | (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                         & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out)) 
                                        << 3U) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                   & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out)) 
                                                  << 2U)) 
                                      | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                           & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out)) 
                                          << 1U) | 
                                         ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                          & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out)))))),8);
        bufp->chgCData(oldp+4136,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id),4);
        bufp->chgCData(oldp+4137,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__mc_valid),8);
        bufp->chgCData(oldp+4138,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[0]),4);
        bufp->chgCData(oldp+4139,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[1]),4);
        bufp->chgCData(oldp+4140,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[2]),4);
        bufp->chgCData(oldp+4141,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[3]),4);
        bufp->chgCData(oldp+4142,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[4]),4);
        bufp->chgCData(oldp+4143,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[5]),4);
        bufp->chgCData(oldp+4144,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[6]),4);
        bufp->chgCData(oldp+4145,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[7]),4);
        bufp->chgCData(oldp+4146,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__ID_scan_chain[8]),4);
        bufp->chgCData(oldp+4147,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4148,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+4149,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x18U)))));
        bufp->chgBit(oldp+4150,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4151,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4152,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+4153,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x19U)))));
        bufp->chgBit(oldp+4154,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4155,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4156,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+4157,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x1aU)))));
        bufp->chgBit(oldp+4158,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4159,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4160,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+4161,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x1bU)))));
        bufp->chgBit(oldp+4162,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4163,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4164,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+4165,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x1cU)))));
        bufp->chgBit(oldp+4166,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4167,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GON_MC__BRA__6__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4168,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+4169,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x1dU)))));
        bufp->chgBit(oldp+4170,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4171,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__Vcellout__GON_MC__BRA__7__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4172,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+4173,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x1eU)))));
        bufp->chgBit(oldp+4174,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out))));
        bufp->chgBit(oldp+4175,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+4176,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x1fU)))));
        bufp->chgBit(oldp+4177,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4178,((0xffU & (IData)(
                                                   (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                    >> 0x20U)))),8);
        __Vtemp_8[0U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x20U];
        __Vtemp_8[1U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x21U];
        __Vtemp_8[2U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x22U];
        __Vtemp_8[3U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x23U];
        __Vtemp_8[4U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x24U];
        __Vtemp_8[5U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x25U];
        __Vtemp_8[6U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x26U];
        __Vtemp_8[7U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x27U];
        bufp->chgWData(oldp+4179,(__Vtemp_8),256);
        bufp->chgCData(oldp+4187,(((((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                       & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out)) 
                                      << 7U) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out)) 
                                                << 6U)) 
                                    | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                         & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out)) 
                                        << 5U) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                   & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out)) 
                                                  << 4U))) 
                                   | (((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                         & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out)) 
                                        << 3U) | (((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                                   & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out)) 
                                                  << 2U)) 
                                      | ((((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                           & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out)) 
                                          << 1U) | 
                                         ((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                          & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out)))))),8);
        bufp->chgCData(oldp+4188,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id),4);
        bufp->chgCData(oldp+4189,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__mc_valid),8);
        bufp->chgCData(oldp+4190,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[0]),4);
        bufp->chgCData(oldp+4191,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[1]),4);
        bufp->chgCData(oldp+4192,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[2]),4);
        bufp->chgCData(oldp+4193,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[3]),4);
        bufp->chgCData(oldp+4194,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[4]),4);
        bufp->chgCData(oldp+4195,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[5]),4);
        bufp->chgCData(oldp+4196,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[6]),4);
        bufp->chgCData(oldp+4197,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[7]),4);
        bufp->chgCData(oldp+4198,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__ID_scan_chain[8]),4);
        bufp->chgCData(oldp+4199,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4200,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+4201,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x20U)))));
        bufp->chgBit(oldp+4202,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4203,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4204,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+4205,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x21U)))));
        bufp->chgBit(oldp+4206,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4207,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4208,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+4209,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x22U)))));
        bufp->chgBit(oldp+4210,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4211,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4212,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+4213,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x23U)))));
        bufp->chgBit(oldp+4214,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4215,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4216,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+4217,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x24U)))));
        bufp->chgBit(oldp+4218,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4219,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GON_MC__BRA__6__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4220,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x25U)))));
        bufp->chgBit(oldp+4221,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x25U)))));
        bufp->chgBit(oldp+4222,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4223,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__Vcellout__GON_MC__BRA__7__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4224,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x26U)))));
        bufp->chgBit(oldp+4225,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x26U)))));
        bufp->chgBit(oldp+4226,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out))));
        bufp->chgBit(oldp+4227,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x27U)))));
        bufp->chgBit(oldp+4228,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x27U)))));
        bufp->chgBit(oldp+4229,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4230,((0xffU & (IData)(
                                                   (vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                                    >> 0x28U)))),8);
        __Vtemp_9[0U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x28U];
        __Vtemp_9[1U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x29U];
        __Vtemp_9[2U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x2aU];
        __Vtemp_9[3U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x2bU];
        __Vtemp_9[4U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x2cU];
        __Vtemp_9[5U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x2dU];
        __Vtemp_9[6U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x2eU];
        __Vtemp_9[7U] = vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum[0x2fU];
        bufp->chgWData(oldp+4231,(__Vtemp_9),256);
        bufp->chgCData(oldp+4239,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.master_ready),8);
        bufp->chgCData(oldp+4240,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__mc_valid),8);
        bufp->chgCData(oldp+4241,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[0]),4);
        bufp->chgCData(oldp+4242,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[1]),4);
        bufp->chgCData(oldp+4243,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[2]),4);
        bufp->chgCData(oldp+4244,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[3]),4);
        bufp->chgCData(oldp+4245,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[4]),4);
        bufp->chgCData(oldp+4246,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[5]),4);
        bufp->chgCData(oldp+4247,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[6]),4);
        bufp->chgCData(oldp+4248,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[7]),4);
        bufp->chgCData(oldp+4249,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__ID_scan_chain[8]),4);
        bufp->chgCData(oldp+4250,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4251,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x28U)))));
        bufp->chgBit(oldp+4252,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x28U)))));
        bufp->chgBit(oldp+4253,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4254,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4255,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x29U)))));
        bufp->chgBit(oldp+4256,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x29U)))));
        bufp->chgBit(oldp+4257,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4258,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4259,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x2aU)))));
        bufp->chgBit(oldp+4260,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x2aU)))));
        bufp->chgBit(oldp+4261,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4262,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4263,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x2bU)))));
        bufp->chgBit(oldp+4264,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x2bU)))));
        bufp->chgBit(oldp+4265,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4266,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4267,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x2cU)))));
        bufp->chgBit(oldp+4268,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x2cU)))));
        bufp->chgBit(oldp+4269,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4270,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GON_MC__BRA__6__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4271,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x2dU)))));
        bufp->chgBit(oldp+4272,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x2dU)))));
        bufp->chgBit(oldp+4273,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__ready_out))));
        bufp->chgCData(oldp+4274,(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__Vcellout__GON_MC__BRA__7__KET____DOT__MC_i__id),4);
        bufp->chgBit(oldp+4275,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x2eU)))));
        bufp->chgBit(oldp+4276,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x2eU)))));
        bufp->chgBit(oldp+4277,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__ready_out))));
        bufp->chgBit(oldp+4278,((1U & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                               >> 0x2fU)))));
        bufp->chgBit(oldp+4279,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)((vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON_opsum_valid 
                                            >> 0x2fU)))));
        bufp->chgBit(oldp+4280,(((IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0) 
                                 & (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT____Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__ready_out))));
    }
    bufp->chgBit(oldp+4281,(vlSelfRef.ACLK));
    bufp->chgBit(oldp+4282,(vlSelfRef.ARESETn));
    bufp->chgBit(oldp+4283,(vlSelfRef.ASIC_interrupt));
    bufp->chgCData(oldp+4284,(vlSelfRef.AWID_S),8);
    bufp->chgIData(oldp+4285,(vlSelfRef.AWADDR_S),32);
    bufp->chgCData(oldp+4286,(vlSelfRef.AWLEN_S),8);
    bufp->chgCData(oldp+4287,(vlSelfRef.AWSIZE_S),3);
    bufp->chgCData(oldp+4288,(vlSelfRef.AWBURST_S),2);
    bufp->chgBit(oldp+4289,(vlSelfRef.AWVALID_S));
    bufp->chgBit(oldp+4290,(vlSelfRef.AWREADY_S));
    bufp->chgIData(oldp+4291,(vlSelfRef.WDATA_S),32);
    bufp->chgCData(oldp+4292,(vlSelfRef.WSTRB_S),4);
    bufp->chgBit(oldp+4293,(vlSelfRef.WLAST_S));
    bufp->chgBit(oldp+4294,(vlSelfRef.WVALID_S));
    bufp->chgBit(oldp+4295,(vlSelfRef.WREADY_S));
    bufp->chgCData(oldp+4296,(vlSelfRef.BID_S),8);
    bufp->chgCData(oldp+4297,(vlSelfRef.BRESP_S),2);
    bufp->chgBit(oldp+4298,(vlSelfRef.BVALID_S));
    bufp->chgBit(oldp+4299,(vlSelfRef.BREADY_S));
    bufp->chgCData(oldp+4300,(vlSelfRef.ARID_S),8);
    bufp->chgIData(oldp+4301,(vlSelfRef.ARADDR_S),32);
    bufp->chgCData(oldp+4302,(vlSelfRef.ARLEN_S),8);
    bufp->chgCData(oldp+4303,(vlSelfRef.ARSIZE_S),3);
    bufp->chgCData(oldp+4304,(vlSelfRef.ARBURST_S),2);
    bufp->chgBit(oldp+4305,(vlSelfRef.ARVALID_S));
    bufp->chgBit(oldp+4306,(vlSelfRef.ARREADY_S));
    bufp->chgCData(oldp+4307,(vlSelfRef.RID_S),8);
    bufp->chgIData(oldp+4308,(vlSelfRef.RDATA_S),32);
    bufp->chgCData(oldp+4309,(vlSelfRef.RRESP_S),2);
    bufp->chgBit(oldp+4310,(vlSelfRef.RLAST_S));
    bufp->chgBit(oldp+4311,(vlSelfRef.RVALID_S));
    bufp->chgBit(oldp+4312,(vlSelfRef.RREADY_S));
    bufp->chgCData(oldp+4313,(vlSelfRef.AWID_M),4);
    bufp->chgIData(oldp+4314,(vlSelfRef.AWADDR_M),32);
    bufp->chgCData(oldp+4315,(vlSelfRef.AWLEN_M),8);
    bufp->chgCData(oldp+4316,(vlSelfRef.AWSIZE_M),3);
    bufp->chgCData(oldp+4317,(vlSelfRef.AWBURST_M),2);
    bufp->chgBit(oldp+4318,(vlSelfRef.AWVALID_M));
    bufp->chgBit(oldp+4319,(vlSelfRef.AWREADY_M));
    bufp->chgIData(oldp+4320,(vlSelfRef.WDATA_M),32);
    bufp->chgCData(oldp+4321,(vlSelfRef.WSTRB_M),4);
    bufp->chgBit(oldp+4322,(vlSelfRef.WLAST_M));
    bufp->chgBit(oldp+4323,(vlSelfRef.WVALID_M));
    bufp->chgBit(oldp+4324,(vlSelfRef.WREADY_M));
    bufp->chgCData(oldp+4325,(vlSelfRef.BID_M),4);
    bufp->chgCData(oldp+4326,(vlSelfRef.BRESP_M),2);
    bufp->chgBit(oldp+4327,(vlSelfRef.BVALID_M));
    bufp->chgBit(oldp+4328,(vlSelfRef.BREADY_M));
    bufp->chgCData(oldp+4329,(vlSelfRef.ARID_M),4);
    bufp->chgIData(oldp+4330,(vlSelfRef.ARADDR_M),32);
    bufp->chgCData(oldp+4331,(vlSelfRef.ARLEN_M),8);
    bufp->chgCData(oldp+4332,(vlSelfRef.ARSIZE_M),3);
    bufp->chgCData(oldp+4333,(vlSelfRef.ARBURST_M),2);
    bufp->chgBit(oldp+4334,(vlSelfRef.ARVALID_M));
    bufp->chgBit(oldp+4335,(vlSelfRef.ARREADY_M));
    bufp->chgCData(oldp+4336,(vlSelfRef.RID_M),4);
    bufp->chgIData(oldp+4337,(vlSelfRef.RDATA_M),32);
    bufp->chgCData(oldp+4338,(vlSelfRef.RRESP_M),2);
    bufp->chgBit(oldp+4339,(vlSelfRef.RLAST_M));
    bufp->chgBit(oldp+4340,(vlSelfRef.RVALID_M));
    bufp->chgBit(oldp+4341,(vlSelfRef.RREADY_M));
    bufp->chgIData(oldp+4342,(((0xcU != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__asic_controller_0__DOT__cs))
                                ? (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__ppu_data_out)
                                : ((0U != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__mc_valid))
                                    ? vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data
                                   [6U] : 0U))),32);
    bufp->chgBit(oldp+4343,((1U & (~ (IData)(vlSelfRef.ARESETn)))));
    bufp->chgIData(oldp+4344,(((IData)(vlSelfRef.asic_wrapper__DOT__DMA_0__DOT__DMADIR)
                                ? ((IData)(vlSelfRef.asic_wrapper__DOT__glb_mux)
                                    ? vlSelfRef.asic_wrapper__DOT__GLB_DO
                                    : 0U) : vlSelfRef.RDATA_M)),32);
    bufp->chgIData(oldp+4345,(((0U != (IData)(vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__mc_valid))
                                ? vlSelfRef.asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__Y_Bus__DOT__select_data
                               [6U] : 0U)),32);
    bufp->chgIData(oldp+4346,(((0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__mc_valid))
                                ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__0__KET____DOT__XBus.__PVT__select_data
                               [8U] : 0U)),32);
    bufp->chgIData(oldp+4347,(((0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__mc_valid))
                                ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__1__KET____DOT__XBus.__PVT__select_data
                               [8U] : 0U)),32);
    bufp->chgIData(oldp+4348,(((0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__mc_valid))
                                ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__2__KET____DOT__XBus.__PVT__select_data
                               [8U] : 0U)),32);
    bufp->chgIData(oldp+4349,(((0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__mc_valid))
                                ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__3__KET____DOT__XBus.__PVT__select_data
                               [8U] : 0U)),32);
    bufp->chgIData(oldp+4350,(((0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__mc_valid))
                                ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__4__KET____DOT__XBus.__PVT__select_data
                               [8U] : 0U)),32);
    bufp->chgIData(oldp+4351,(((0U != (IData)(vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__mc_valid))
                                ? vlSymsp->TOP__asic_wrapper__DOT__asic_0__DOT__PE_array__DOT__GON__DOT__GON_XBUS__BRA__5__KET____DOT__XBus.__PVT__select_data
                               [8U] : 0U)),32);
}

void Vasic_wrapper___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vasic_wrapper___024root__trace_cleanup\n"); );
    // Init
    Vasic_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vasic_wrapper___024root*>(voidSelf);
    Vasic_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x12U] = 0U;
}
