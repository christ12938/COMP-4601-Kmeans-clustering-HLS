// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _kmeans_HH_
#define _kmeans_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "pow_generic_double_s.h"
#include "kmeans_faddfsub_3CeG.h"
#include "kmeans_fsub_32ns_DeQ.h"
#include "kmeans_fdiv_32ns_Ee0.h"
#include "kmeans_sitofp_32nFfa.h"
#include "kmeans_fptrunc_64Gfk.h"
#include "kmeans_fpext_32nsHfu.h"
#include "kmeans_fcmp_32ns_IfE.h"
#include "kmeans_dadd_64ns_JfO.h"
#include "kmeans_x_data.h"
#include "kmeans_y_data.h"
#include "kmeans_data_clustBew.h"

namespace ap_rtl {

struct kmeans : public sc_module {
    // Port declarations 26
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<1> > centroids_x_address0;
    sc_out< sc_logic > centroids_x_ce0;
    sc_out< sc_logic > centroids_x_we0;
    sc_out< sc_lv<32> > centroids_x_d0;
    sc_in< sc_lv<32> > centroids_x_q0;
    sc_out< sc_lv<1> > centroids_x_address1;
    sc_out< sc_logic > centroids_x_ce1;
    sc_out< sc_logic > centroids_x_we1;
    sc_out< sc_lv<32> > centroids_x_d1;
    sc_in< sc_lv<32> > centroids_x_q1;
    sc_out< sc_lv<1> > centroids_y_address0;
    sc_out< sc_logic > centroids_y_ce0;
    sc_out< sc_logic > centroids_y_we0;
    sc_out< sc_lv<32> > centroids_y_d0;
    sc_in< sc_lv<32> > centroids_y_q0;
    sc_out< sc_lv<1> > centroids_y_address1;
    sc_out< sc_logic > centroids_y_ce1;
    sc_out< sc_logic > centroids_y_we1;
    sc_out< sc_lv<32> > centroids_y_d1;
    sc_in< sc_lv<32> > centroids_y_q1;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_lv<5> > ap_var_for_const1;


    // Module declarations
    kmeans(sc_module_name name);
    SC_HAS_PROCESS(kmeans);

    ~kmeans();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    kmeans_x_data* x_data_U;
    kmeans_y_data* y_data_U;
    kmeans_data_clustBew* data_cluster_id_U;
    pow_generic_double_s* grp_pow_generic_double_s_fu_285;
    pow_generic_double_s* grp_pow_generic_double_s_fu_314;
    pow_generic_double_s* grp_pow_generic_double_s_fu_343;
    pow_generic_double_s* grp_pow_generic_double_s_fu_372;
    kmeans_faddfsub_3CeG<1,5,32,32,32>* kmeans_faddfsub_3CeG_U42;
    kmeans_faddfsub_3CeG<1,5,32,32,32>* kmeans_faddfsub_3CeG_U43;
    kmeans_fsub_32ns_DeQ<1,5,32,32,32>* kmeans_fsub_32ns_DeQ_U44;
    kmeans_fsub_32ns_DeQ<1,5,32,32,32>* kmeans_fsub_32ns_DeQ_U45;
    kmeans_fdiv_32ns_Ee0<1,16,32,32,32>* kmeans_fdiv_32ns_Ee0_U46;
    kmeans_fdiv_32ns_Ee0<1,16,32,32,32>* kmeans_fdiv_32ns_Ee0_U47;
    kmeans_sitofp_32nFfa<1,6,32,32>* kmeans_sitofp_32nFfa_U48;
    kmeans_fptrunc_64Gfk<1,2,64,32>* kmeans_fptrunc_64Gfk_U49;
    kmeans_fptrunc_64Gfk<1,2,64,32>* kmeans_fptrunc_64Gfk_U50;
    kmeans_fpext_32nsHfu<1,2,32,64>* kmeans_fpext_32nsHfu_U51;
    kmeans_fpext_32nsHfu<1,2,32,64>* kmeans_fpext_32nsHfu_U52;
    kmeans_fpext_32nsHfu<1,2,32,64>* kmeans_fpext_32nsHfu_U53;
    kmeans_fpext_32nsHfu<1,2,32,64>* kmeans_fpext_32nsHfu_U54;
    kmeans_fcmp_32ns_IfE<1,2,32,32,1>* kmeans_fcmp_32ns_IfE_U55;
    kmeans_dadd_64ns_JfO<1,5,64,64,64>* kmeans_dadd_64ns_JfO_U56;
    kmeans_dadd_64ns_JfO<1,5,64,64,64>* kmeans_dadd_64ns_JfO_U57;
    sc_signal< sc_lv<122> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<6> > x_data_address0;
    sc_signal< sc_logic > x_data_ce0;
    sc_signal< sc_lv<32> > x_data_q0;
    sc_signal< sc_lv<6> > y_data_address0;
    sc_signal< sc_logic > y_data_ce0;
    sc_signal< sc_lv<32> > y_data_q0;
    sc_signal< sc_lv<32> > reg_467;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > ap_CS_fsm_state96;
    sc_signal< sc_lv<32> > reg_474;
    sc_signal< sc_lv<32> > zext_ln13_fu_481_p1;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<2> > i_fu_492_p2;
    sc_signal< sc_lv<2> > i_reg_690;
    sc_signal< sc_lv<32> > centroids_x_load_reg_695;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<32> > centroids_y_load_reg_700;
    sc_signal< sc_lv<32> > centroids_x_load_1_reg_705;
    sc_signal< sc_lv<32> > centroids_y_load_1_reg_710;
    sc_signal< sc_lv<6> > add_ln24_fu_510_p2;
    sc_signal< sc_lv<6> > add_ln24_reg_718;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<64> > zext_ln25_fu_516_p1;
    sc_signal< sc_lv<64> > zext_ln25_reg_723;
    sc_signal< sc_lv<1> > icmp_ln24_fu_504_p2;
    sc_signal< sc_lv<32> > grp_fu_401_p2;
    sc_signal< sc_lv<32> > tmp_s_reg_738;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<32> > grp_fu_405_p2;
    sc_signal< sc_lv<32> > tmp_2_reg_743;
    sc_signal< sc_lv<32> > grp_fu_409_p2;
    sc_signal< sc_lv<32> > tmp_1_reg_748;
    sc_signal< sc_lv<32> > grp_fu_413_p2;
    sc_signal< sc_lv<32> > tmp_3_reg_753;
    sc_signal< sc_lv<64> > grp_fu_443_p1;
    sc_signal< sc_lv<64> > x_assign_reg_758;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<64> > grp_fu_446_p1;
    sc_signal< sc_lv<64> > x_assign_1_reg_763;
    sc_signal< sc_lv<64> > grp_fu_449_p1;
    sc_signal< sc_lv<64> > x_assign_2_reg_768;
    sc_signal< sc_lv<64> > grp_fu_452_p1;
    sc_signal< sc_lv<64> > x_assign_3_reg_773;
    sc_signal< sc_lv<64> > grp_pow_generic_double_s_fu_285_ap_return;
    sc_signal< sc_lv<64> > tmp_i_reg_778;
    sc_signal< sc_logic > ap_CS_fsm_state84;
    sc_signal< sc_lv<64> > grp_pow_generic_double_s_fu_314_ap_return;
    sc_signal< sc_lv<64> > tmp_i1_reg_783;
    sc_signal< sc_lv<64> > grp_pow_generic_double_s_fu_343_ap_return;
    sc_signal< sc_lv<64> > tmp_i2_reg_788;
    sc_signal< sc_lv<64> > grp_pow_generic_double_s_fu_372_ap_return;
    sc_signal< sc_lv<64> > tmp_i3_reg_793;
    sc_signal< sc_lv<64> > grp_fu_459_p2;
    sc_signal< sc_lv<64> > tmp_4_reg_798;
    sc_signal< sc_logic > ap_CS_fsm_state89;
    sc_signal< sc_lv<64> > grp_fu_463_p2;
    sc_signal< sc_lv<64> > tmp_8_reg_803;
    sc_signal< sc_lv<32> > grp_fu_437_p1;
    sc_signal< sc_lv<32> > min_distance_s_reg_808;
    sc_signal< sc_logic > ap_CS_fsm_state91;
    sc_signal< sc_lv<32> > grp_fu_440_p1;
    sc_signal< sc_lv<32> > distance_reg_814;
    sc_signal< sc_lv<1> > icmp_ln29_fu_556_p2;
    sc_signal< sc_lv<1> > icmp_ln29_reg_820;
    sc_signal< sc_logic > ap_CS_fsm_state92;
    sc_signal< sc_lv<1> > icmp_ln29_1_fu_562_p2;
    sc_signal< sc_lv<1> > icmp_ln29_1_reg_825;
    sc_signal< sc_lv<1> > icmp_ln29_2_fu_568_p2;
    sc_signal< sc_lv<1> > icmp_ln29_2_reg_830;
    sc_signal< sc_lv<1> > icmp_ln29_3_fu_574_p2;
    sc_signal< sc_lv<1> > icmp_ln29_3_reg_835;
    sc_signal< sc_lv<2> > add_ln38_fu_607_p2;
    sc_signal< sc_lv<2> > add_ln38_reg_843;
    sc_signal< sc_logic > ap_CS_fsm_state94;
    sc_signal< sc_lv<6> > add_ln43_fu_619_p2;
    sc_signal< sc_lv<6> > add_ln43_reg_851;
    sc_signal< sc_logic > ap_CS_fsm_state95;
    sc_signal< sc_lv<1> > icmp_ln43_fu_613_p2;
    sc_signal< sc_lv<1> > icmp_ln51_fu_632_p2;
    sc_signal< sc_lv<1> > icmp_ln51_reg_871;
    sc_signal< sc_lv<1> > icmp_ln44_fu_642_p2;
    sc_signal< sc_lv<1> > icmp_ln44_reg_875;
    sc_signal< sc_lv<32> > select_ln44_2_fu_654_p3;
    sc_signal< sc_lv<32> > select_ln44_2_reg_881;
    sc_signal< sc_lv<32> > select_ln44_fu_662_p3;
    sc_signal< sc_logic > ap_CS_fsm_state101;
    sc_signal< sc_lv<32> > select_ln44_1_fu_669_p3;
    sc_signal< sc_lv<32> > grp_fu_431_p1;
    sc_signal< sc_lv<32> > tmp_5_reg_896;
    sc_signal< sc_logic > ap_CS_fsm_state106;
    sc_signal< sc_lv<6> > data_cluster_id_address0;
    sc_signal< sc_logic > data_cluster_id_ce0;
    sc_signal< sc_logic > data_cluster_id_we0;
    sc_signal< sc_lv<1> > data_cluster_id_d0;
    sc_signal< sc_lv<1> > data_cluster_id_q0;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_285_ap_start;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_285_ap_done;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_285_ap_idle;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_285_ap_ready;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_314_ap_start;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_314_ap_done;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_314_ap_idle;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_314_ap_ready;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_343_ap_start;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_343_ap_done;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_343_ap_idle;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_343_ap_ready;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_372_ap_start;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_372_ap_done;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_372_ap_idle;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_372_ap_ready;
    sc_signal< sc_lv<2> > i_0_reg_203;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<6> > i_1_0_reg_215;
    sc_signal< sc_logic > ap_CS_fsm_state93;
    sc_signal< sc_lv<2> > i_2_0_reg_226;
    sc_signal< sc_logic > ap_CS_fsm_state122;
    sc_signal< sc_lv<32> > mean_value_y_0_0_reg_238;
    sc_signal< sc_lv<1> > icmp_ln38_fu_601_p2;
    sc_signal< sc_lv<32> > mean_value_x_0_0_reg_250;
    sc_signal< sc_lv<32> > count_0_0_reg_262;
    sc_signal< sc_lv<6> > j_1_0_reg_274;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_285_ap_start_reg;
    sc_signal< sc_lv<122> > ap_NS_fsm;
    sc_signal< sc_logic > ap_NS_fsm_state18;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_314_ap_start_reg;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_343_ap_start_reg;
    sc_signal< sc_logic > grp_pow_generic_double_s_fu_372_ap_start_reg;
    sc_signal< sc_lv<64> > zext_ln14_fu_498_p1;
    sc_signal< sc_lv<64> > zext_ln44_fu_625_p1;
    sc_signal< sc_lv<64> > zext_ln52_fu_676_p1;
    sc_signal< sc_lv<32> > grp_fu_419_p2;
    sc_signal< sc_lv<32> > grp_fu_425_p2;
    sc_signal< sc_lv<32> > grp_fu_401_p0;
    sc_signal< sc_lv<32> > grp_fu_401_p1;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_logic > ap_CS_fsm_state97;
    sc_signal< sc_lv<32> > grp_fu_405_p0;
    sc_signal< sc_lv<32> > grp_fu_405_p1;
    sc_signal< sc_logic > ap_CS_fsm_state107;
    sc_signal< sc_lv<32> > grp_fu_431_p0;
    sc_signal< sc_logic > ap_CS_fsm_state90;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_logic > ap_CS_fsm_state85;
    sc_signal< sc_lv<32> > bitcast_ln29_fu_522_p1;
    sc_signal< sc_lv<32> > bitcast_ln29_1_fu_539_p1;
    sc_signal< sc_lv<8> > tmp_9_fu_525_p4;
    sc_signal< sc_lv<23> > trunc_ln29_fu_535_p1;
    sc_signal< sc_lv<8> > tmp_10_fu_542_p4;
    sc_signal< sc_lv<23> > trunc_ln29_1_fu_552_p1;
    sc_signal< sc_lv<1> > or_ln29_fu_580_p2;
    sc_signal< sc_lv<1> > or_ln29_1_fu_584_p2;
    sc_signal< sc_lv<1> > and_ln29_fu_588_p2;
    sc_signal< sc_lv<1> > grp_fu_455_p2;
    sc_signal< sc_lv<2> > zext_ln44_1_fu_638_p1;
    sc_signal< sc_lv<32> > add_ln47_fu_648_p2;
    sc_signal< sc_lv<2> > grp_fu_401_opcode;
    sc_signal< sc_lv<2> > grp_fu_405_opcode;
    sc_signal< sc_lv<1> > icmp_ln13_fu_486_p2;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<122> ap_ST_fsm_state1;
    static const sc_lv<122> ap_ST_fsm_state2;
    static const sc_lv<122> ap_ST_fsm_state3;
    static const sc_lv<122> ap_ST_fsm_state4;
    static const sc_lv<122> ap_ST_fsm_state5;
    static const sc_lv<122> ap_ST_fsm_state6;
    static const sc_lv<122> ap_ST_fsm_state7;
    static const sc_lv<122> ap_ST_fsm_state8;
    static const sc_lv<122> ap_ST_fsm_state9;
    static const sc_lv<122> ap_ST_fsm_state10;
    static const sc_lv<122> ap_ST_fsm_state11;
    static const sc_lv<122> ap_ST_fsm_state12;
    static const sc_lv<122> ap_ST_fsm_state13;
    static const sc_lv<122> ap_ST_fsm_state14;
    static const sc_lv<122> ap_ST_fsm_state15;
    static const sc_lv<122> ap_ST_fsm_state16;
    static const sc_lv<122> ap_ST_fsm_state17;
    static const sc_lv<122> ap_ST_fsm_state18;
    static const sc_lv<122> ap_ST_fsm_state19;
    static const sc_lv<122> ap_ST_fsm_state20;
    static const sc_lv<122> ap_ST_fsm_state21;
    static const sc_lv<122> ap_ST_fsm_state22;
    static const sc_lv<122> ap_ST_fsm_state23;
    static const sc_lv<122> ap_ST_fsm_state24;
    static const sc_lv<122> ap_ST_fsm_state25;
    static const sc_lv<122> ap_ST_fsm_state26;
    static const sc_lv<122> ap_ST_fsm_state27;
    static const sc_lv<122> ap_ST_fsm_state28;
    static const sc_lv<122> ap_ST_fsm_state29;
    static const sc_lv<122> ap_ST_fsm_state30;
    static const sc_lv<122> ap_ST_fsm_state31;
    static const sc_lv<122> ap_ST_fsm_state32;
    static const sc_lv<122> ap_ST_fsm_state33;
    static const sc_lv<122> ap_ST_fsm_state34;
    static const sc_lv<122> ap_ST_fsm_state35;
    static const sc_lv<122> ap_ST_fsm_state36;
    static const sc_lv<122> ap_ST_fsm_state37;
    static const sc_lv<122> ap_ST_fsm_state38;
    static const sc_lv<122> ap_ST_fsm_state39;
    static const sc_lv<122> ap_ST_fsm_state40;
    static const sc_lv<122> ap_ST_fsm_state41;
    static const sc_lv<122> ap_ST_fsm_state42;
    static const sc_lv<122> ap_ST_fsm_state43;
    static const sc_lv<122> ap_ST_fsm_state44;
    static const sc_lv<122> ap_ST_fsm_state45;
    static const sc_lv<122> ap_ST_fsm_state46;
    static const sc_lv<122> ap_ST_fsm_state47;
    static const sc_lv<122> ap_ST_fsm_state48;
    static const sc_lv<122> ap_ST_fsm_state49;
    static const sc_lv<122> ap_ST_fsm_state50;
    static const sc_lv<122> ap_ST_fsm_state51;
    static const sc_lv<122> ap_ST_fsm_state52;
    static const sc_lv<122> ap_ST_fsm_state53;
    static const sc_lv<122> ap_ST_fsm_state54;
    static const sc_lv<122> ap_ST_fsm_state55;
    static const sc_lv<122> ap_ST_fsm_state56;
    static const sc_lv<122> ap_ST_fsm_state57;
    static const sc_lv<122> ap_ST_fsm_state58;
    static const sc_lv<122> ap_ST_fsm_state59;
    static const sc_lv<122> ap_ST_fsm_state60;
    static const sc_lv<122> ap_ST_fsm_state61;
    static const sc_lv<122> ap_ST_fsm_state62;
    static const sc_lv<122> ap_ST_fsm_state63;
    static const sc_lv<122> ap_ST_fsm_state64;
    static const sc_lv<122> ap_ST_fsm_state65;
    static const sc_lv<122> ap_ST_fsm_state66;
    static const sc_lv<122> ap_ST_fsm_state67;
    static const sc_lv<122> ap_ST_fsm_state68;
    static const sc_lv<122> ap_ST_fsm_state69;
    static const sc_lv<122> ap_ST_fsm_state70;
    static const sc_lv<122> ap_ST_fsm_state71;
    static const sc_lv<122> ap_ST_fsm_state72;
    static const sc_lv<122> ap_ST_fsm_state73;
    static const sc_lv<122> ap_ST_fsm_state74;
    static const sc_lv<122> ap_ST_fsm_state75;
    static const sc_lv<122> ap_ST_fsm_state76;
    static const sc_lv<122> ap_ST_fsm_state77;
    static const sc_lv<122> ap_ST_fsm_state78;
    static const sc_lv<122> ap_ST_fsm_state79;
    static const sc_lv<122> ap_ST_fsm_state80;
    static const sc_lv<122> ap_ST_fsm_state81;
    static const sc_lv<122> ap_ST_fsm_state82;
    static const sc_lv<122> ap_ST_fsm_state83;
    static const sc_lv<122> ap_ST_fsm_state84;
    static const sc_lv<122> ap_ST_fsm_state85;
    static const sc_lv<122> ap_ST_fsm_state86;
    static const sc_lv<122> ap_ST_fsm_state87;
    static const sc_lv<122> ap_ST_fsm_state88;
    static const sc_lv<122> ap_ST_fsm_state89;
    static const sc_lv<122> ap_ST_fsm_state90;
    static const sc_lv<122> ap_ST_fsm_state91;
    static const sc_lv<122> ap_ST_fsm_state92;
    static const sc_lv<122> ap_ST_fsm_state93;
    static const sc_lv<122> ap_ST_fsm_state94;
    static const sc_lv<122> ap_ST_fsm_state95;
    static const sc_lv<122> ap_ST_fsm_state96;
    static const sc_lv<122> ap_ST_fsm_state97;
    static const sc_lv<122> ap_ST_fsm_state98;
    static const sc_lv<122> ap_ST_fsm_state99;
    static const sc_lv<122> ap_ST_fsm_state100;
    static const sc_lv<122> ap_ST_fsm_state101;
    static const sc_lv<122> ap_ST_fsm_state102;
    static const sc_lv<122> ap_ST_fsm_state103;
    static const sc_lv<122> ap_ST_fsm_state104;
    static const sc_lv<122> ap_ST_fsm_state105;
    static const sc_lv<122> ap_ST_fsm_state106;
    static const sc_lv<122> ap_ST_fsm_state107;
    static const sc_lv<122> ap_ST_fsm_state108;
    static const sc_lv<122> ap_ST_fsm_state109;
    static const sc_lv<122> ap_ST_fsm_state110;
    static const sc_lv<122> ap_ST_fsm_state111;
    static const sc_lv<122> ap_ST_fsm_state112;
    static const sc_lv<122> ap_ST_fsm_state113;
    static const sc_lv<122> ap_ST_fsm_state114;
    static const sc_lv<122> ap_ST_fsm_state115;
    static const sc_lv<122> ap_ST_fsm_state116;
    static const sc_lv<122> ap_ST_fsm_state117;
    static const sc_lv<122> ap_ST_fsm_state118;
    static const sc_lv<122> ap_ST_fsm_state119;
    static const sc_lv<122> ap_ST_fsm_state120;
    static const sc_lv<122> ap_ST_fsm_state121;
    static const sc_lv<122> ap_ST_fsm_state122;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_5F;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_53;
    static const sc_lv<32> ap_const_lv32_58;
    static const sc_lv<32> ap_const_lv32_5A;
    static const sc_lv<32> ap_const_lv32_5B;
    static const sc_lv<32> ap_const_lv32_5D;
    static const sc_lv<32> ap_const_lv32_5E;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_64;
    static const sc_lv<32> ap_const_lv32_69;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_5C;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<32> ap_const_lv32_79;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_60;
    static const sc_lv<32> ap_const_lv32_6A;
    static const sc_lv<32> ap_const_lv32_59;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_54;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<6> ap_const_lv6_32;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<5> ap_const_lv5_4;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_clk_no_reset_();
    void thread_add_ln24_fu_510_p2();
    void thread_add_ln38_fu_607_p2();
    void thread_add_ln43_fu_619_p2();
    void thread_add_ln47_fu_648_p2();
    void thread_and_ln29_fu_588_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state101();
    void thread_ap_CS_fsm_state106();
    void thread_ap_CS_fsm_state107();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state122();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state84();
    void thread_ap_CS_fsm_state85();
    void thread_ap_CS_fsm_state89();
    void thread_ap_CS_fsm_state9();
    void thread_ap_CS_fsm_state90();
    void thread_ap_CS_fsm_state91();
    void thread_ap_CS_fsm_state92();
    void thread_ap_CS_fsm_state93();
    void thread_ap_CS_fsm_state94();
    void thread_ap_CS_fsm_state95();
    void thread_ap_CS_fsm_state96();
    void thread_ap_CS_fsm_state97();
    void thread_ap_NS_fsm_state18();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_bitcast_ln29_1_fu_539_p1();
    void thread_bitcast_ln29_fu_522_p1();
    void thread_centroids_x_address0();
    void thread_centroids_x_address1();
    void thread_centroids_x_ce0();
    void thread_centroids_x_ce1();
    void thread_centroids_x_d0();
    void thread_centroids_x_d1();
    void thread_centroids_x_we0();
    void thread_centroids_x_we1();
    void thread_centroids_y_address0();
    void thread_centroids_y_address1();
    void thread_centroids_y_ce0();
    void thread_centroids_y_ce1();
    void thread_centroids_y_d0();
    void thread_centroids_y_d1();
    void thread_centroids_y_we0();
    void thread_centroids_y_we1();
    void thread_data_cluster_id_address0();
    void thread_data_cluster_id_ce0();
    void thread_data_cluster_id_d0();
    void thread_data_cluster_id_we0();
    void thread_grp_fu_401_opcode();
    void thread_grp_fu_401_p0();
    void thread_grp_fu_401_p1();
    void thread_grp_fu_405_opcode();
    void thread_grp_fu_405_p0();
    void thread_grp_fu_405_p1();
    void thread_grp_fu_431_p0();
    void thread_grp_pow_generic_double_s_fu_285_ap_start();
    void thread_grp_pow_generic_double_s_fu_314_ap_start();
    void thread_grp_pow_generic_double_s_fu_343_ap_start();
    void thread_grp_pow_generic_double_s_fu_372_ap_start();
    void thread_i_fu_492_p2();
    void thread_icmp_ln13_fu_486_p2();
    void thread_icmp_ln24_fu_504_p2();
    void thread_icmp_ln29_1_fu_562_p2();
    void thread_icmp_ln29_2_fu_568_p2();
    void thread_icmp_ln29_3_fu_574_p2();
    void thread_icmp_ln29_fu_556_p2();
    void thread_icmp_ln38_fu_601_p2();
    void thread_icmp_ln43_fu_613_p2();
    void thread_icmp_ln44_fu_642_p2();
    void thread_icmp_ln51_fu_632_p2();
    void thread_or_ln29_1_fu_584_p2();
    void thread_or_ln29_fu_580_p2();
    void thread_select_ln44_1_fu_669_p3();
    void thread_select_ln44_2_fu_654_p3();
    void thread_select_ln44_fu_662_p3();
    void thread_tmp_10_fu_542_p4();
    void thread_tmp_9_fu_525_p4();
    void thread_trunc_ln29_1_fu_552_p1();
    void thread_trunc_ln29_fu_535_p1();
    void thread_x_data_address0();
    void thread_x_data_ce0();
    void thread_y_data_address0();
    void thread_y_data_ce0();
    void thread_zext_ln13_fu_481_p1();
    void thread_zext_ln14_fu_498_p1();
    void thread_zext_ln25_fu_516_p1();
    void thread_zext_ln44_1_fu_638_p1();
    void thread_zext_ln44_fu_625_p1();
    void thread_zext_ln52_fu_676_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
