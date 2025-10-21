// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vasic_wrapper.h for the primary calling header

#ifndef VERILATED_VASIC_WRAPPER_GON_BUS__T4_H_
#define VERILATED_VASIC_WRAPPER_GON_BUS__T4_H_  // guard

#include "verilated.h"


class Vasic_wrapper__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vasic_wrapper_GON_Bus__T4 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(tag,3,0);
    VL_IN8(master_valid,7,0);
    VL_OUT8(master_ready,7,0);
    VL_OUT8(slave_valid,0,0);
    VL_IN8(slave_ready,0,0);
    VL_IN8(set_id,0,0);
    VL_IN8(ID_scan_in,3,0);
    VL_OUT8(ID_scan_out,3,0);
    CData/*7:0*/ __PVT__mc_valid;
    CData/*3:0*/ __Vcellout__GON_MC__BRA__0__KET____DOT__MC_i__id;
    CData/*3:0*/ __Vcellout__GON_MC__BRA__1__KET____DOT__MC_i__id;
    CData/*3:0*/ __Vcellout__GON_MC__BRA__2__KET____DOT__MC_i__id;
    CData/*3:0*/ __Vcellout__GON_MC__BRA__3__KET____DOT__MC_i__id;
    CData/*3:0*/ __Vcellout__GON_MC__BRA__4__KET____DOT__MC_i__id;
    CData/*3:0*/ __Vcellout__GON_MC__BRA__5__KET____DOT__MC_i__id;
    CData/*3:0*/ __Vcellout__GON_MC__BRA__6__KET____DOT__MC_i__id;
    CData/*3:0*/ __Vcellout__GON_MC__BRA__7__KET____DOT__MC_i__id;
    CData/*0:0*/ GON_MC__BRA__0__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0;
    CData/*0:0*/ GON_MC__BRA__1__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0;
    CData/*0:0*/ GON_MC__BRA__2__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0;
    CData/*0:0*/ GON_MC__BRA__3__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0;
    CData/*0:0*/ GON_MC__BRA__4__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0;
    CData/*0:0*/ GON_MC__BRA__5__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0;
    CData/*0:0*/ GON_MC__BRA__6__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0;
    CData/*0:0*/ GON_MC__BRA__7__KET____DOT__MC_i__DOT____VdfgRegularize_h1c2b59ab_0_0;
    SData/*8:0*/ __PVT__select_valid;
    VL_INW(master_data,255,0,8);
    VL_OUT(slave_data,31,0);
    VlUnpacked<IData/*31:0*/, 9> __PVT__select_data;
    VlUnpacked<CData/*3:0*/, 9> __PVT__ID_scan_chain;

    // INTERNAL VARIABLES
    Vasic_wrapper__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vasic_wrapper_GON_Bus__T4(Vasic_wrapper__Syms* symsp, const char* v__name);
    ~Vasic_wrapper_GON_Bus__T4();
    VL_UNCOPYABLE(Vasic_wrapper_GON_Bus__T4);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
