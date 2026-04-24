// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdecoder.h for the primary calling header

#ifndef VERILATED_VDECODER___024UNIT_H_
#define VERILATED_VDECODER___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdecoder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdecoder___024unit final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;

    // INTERNAL VARIABLES
    Vdecoder__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdecoder___024unit();
    ~Vdecoder___024unit();
    void ctor(Vdecoder__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdecoder___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
