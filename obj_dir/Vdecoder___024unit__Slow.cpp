// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecoder.h for the primary calling header

#include "Vdecoder__pch.h"

void Vdecoder___024unit___ctor_var_reset(Vdecoder___024unit* vlSelf);

Vdecoder___024unit::Vdecoder___024unit() = default;
Vdecoder___024unit::~Vdecoder___024unit() = default;

void Vdecoder___024unit::ctor(Vdecoder__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vdecoder___024unit___ctor_var_reset(this);
}

void Vdecoder___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vdecoder___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
