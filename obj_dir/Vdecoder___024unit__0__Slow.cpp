// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecoder.h for the primary calling header

#include "Vdecoder__pch.h"

VL_ATTR_COLD void Vdecoder___024unit___ctor_var_reset(Vdecoder___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vdecoder___024unit___ctor_var_reset\n"); );
    Vdecoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VmonitorOff = 0;
}
