// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __assign_intensity_frecip_32ns_32ns_32_11_full_dsp__HH__
#define __assign_intensity_frecip_32ns_32ns_32_11_full_dsp__HH__
#include "ACMP_frecip.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int dout_WIDTH>
SC_MODULE(assign_intensity_frecip_32ns_32ns_32_11_full_dsp) {
    sc_core::sc_in_clk clk;
    sc_core::sc_in<sc_dt::sc_logic> reset;
    sc_core::sc_in<sc_dt::sc_logic> ce;
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_frecip<ID, 11, din0_WIDTH, din1_WIDTH, dout_WIDTH> ACMP_frecip_U;

    SC_CTOR(assign_intensity_frecip_32ns_32ns_32_11_full_dsp):  ACMP_frecip_U ("ACMP_frecip_U") {
        ACMP_frecip_U.clk(clk);
        ACMP_frecip_U.reset(reset);
        ACMP_frecip_U.ce(ce);
        ACMP_frecip_U.din0(din0);
        ACMP_frecip_U.din1(din1);
        ACMP_frecip_U.dout(dout);

    }

};

#endif //
