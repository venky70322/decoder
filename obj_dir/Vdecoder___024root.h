// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdecoder.h for the primary calling header

#ifndef VERILATED_VDECODER___024ROOT_H_
#define VERILATED_VDECODER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vdecoder___024unit;


class Vdecoder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdecoder___024root final {
  public:
    // CELLS
    Vdecoder___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*1:0*/ tb__DOT__a;
    CData/*0:0*/ tb__DOT__en;
    CData/*3:0*/ tb__DOT__y;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*1:0*/ __Vtrigprevexpr___TOP__tb__DOT__a__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__en__0;
    CData/*3:0*/ __Vtrigprevexpr___TOP__tb__DOT__y__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vdecoder__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdecoder___024root(Vdecoder__Syms* symsp, const char* namep);
    ~Vdecoder___024root();
    VL_UNCOPYABLE(Vdecoder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
