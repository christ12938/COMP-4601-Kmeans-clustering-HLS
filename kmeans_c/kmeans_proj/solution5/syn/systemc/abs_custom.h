// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _abs_custom_HH_
#define _abs_custom_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct abs_custom : public sc_module {
    // Port declarations 3
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<17> > number_V;
    sc_out< sc_lv<17> > ap_return;


    // Module declarations
    abs_custom(sc_module_name name);
    SC_HAS_PROCESS(abs_custom);

    ~abs_custom();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<1> > tmp_fu_16_p3;
    sc_signal< sc_lv<17> > sub_ln703_fu_24_p2;
    static const sc_logic ap_const_logic_1;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<17> ap_const_lv17_0;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_ready();
    void thread_ap_return();
    void thread_sub_ln703_fu_24_p2();
    void thread_tmp_fu_16_p3();
};

}

using namespace ap_rtl;

#endif