// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vasic_wrapper.h for the primary calling header

#ifndef VERILATED_VASIC_WRAPPER_PE_H_
#define VERILATED_VASIC_WRAPPER_PE_H_  // guard

#include "verilated.h"


class Vasic_wrapper__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vasic_wrapper_PE final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(PE_en,0,0);
    VL_IN8(ifmap_valid,0,0);
    VL_IN8(filter_valid,0,0);
    VL_IN8(ipsum_valid,0,0);
    VL_IN8(opsum_ready,0,0);
    VL_OUT8(ifmap_ready,0,0);
    VL_OUT8(filter_ready,0,0);
    VL_OUT8(ipsum_ready,0,0);
    VL_OUT8(opsum_valid,0,0);
    CData/*1:0*/ __PVT__count_filt_col;
    CData/*1:0*/ __PVT__input_ch;
    CData/*1:0*/ __PVT__count_input_ch;
    CData/*4:0*/ __PVT__ofmap_col;
    CData/*4:0*/ __PVT__count_ofmap_col;
    CData/*1:0*/ __PVT__ofmap_ch;
    CData/*1:0*/ __PVT__count_ofmap_ch;
    CData/*0:0*/ __PVT__operation_mode;
    CData/*0:0*/ __PVT__load_ipsum;
    CData/*3:0*/ __PVT__ifmap_index;
    CData/*5:0*/ __PVT__filter_index;
    CData/*5:0*/ __PVT__index_0;
    CData/*3:0*/ __PVT__cs;
    CData/*3:0*/ __PVT__ns;
    CData/*7:0*/ __Vlvbound_h652caa15__0;
    CData/*7:0*/ __Vlvbound_h94c06f97__0;
    CData/*7:0*/ __Vlvbound_h3265d838__0;
    CData/*7:0*/ __Vlvbound_h136a5f52__0;
    CData/*7:0*/ __Vlvbound_h88de6bbc__0;
    CData/*7:0*/ __Vlvbound_h3953f0de__0;
    CData/*7:0*/ __Vlvbound_h2357e037__0;
    CData/*7:0*/ __Vlvbound_hbb266322__0;
    VL_IN16(i_config,10,0);
    SData/*15:0*/ __PVT__mul_res;
    VL_IN(ifmap,31,0);
    VL_IN(filter,31,0);
    VL_IN(ipsum,31,0);
    VL_OUT(opsum,31,0);
    IData/*31:0*/ __PVT__add_res;
    IData/*31:0*/ __PVT__i;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
    IData/*31:0*/ __PVT__unnamedblk2__DOT__i;
    VlUnpacked<CData/*7:0*/, 12> __PVT__ifmap_spad;
    VlUnpacked<CData/*7:0*/, 48> __PVT__filter_spad;
    VlUnpacked<IData/*31:0*/, 4> __PVT__ofmap_spad;

    // INTERNAL VARIABLES
    Vasic_wrapper__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vasic_wrapper_PE(Vasic_wrapper__Syms* symsp, const char* v__name);
    ~Vasic_wrapper_PE();
    VL_UNCOPYABLE(Vasic_wrapper_PE);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
