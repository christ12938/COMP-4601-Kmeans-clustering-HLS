#include "pow_generic_double_s.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pow_generic_double_s::thread_Z3_V_fu_1886_p4() {
    Z3_V_fu_1886_p4 = ret_V_18_fu_1860_p2.read().range(42, 35);
}

void pow_generic_double_s::thread_Z4_V_fu_1896_p1() {
    Z4_V_fu_1896_p1 = ret_V_18_fu_1860_p2.read().range(35-1, 0);
}

void pow_generic_double_s::thread_Z4_ind_V_fu_1900_p4() {
    Z4_ind_V_fu_1900_p4 = ret_V_18_fu_1860_p2.read().range(34, 27);
}

void pow_generic_double_s::thread_add_ln1146_2_fu_1696_p2() {
    add_ln1146_2_fu_1696_p2 = (!sext_ln1146_fu_1681_p1.read().is_01() || !add_ln1146_fu_1684_p2.read().is_01())? sc_lv<120>(): (sc_bigint<120>(sext_ln1146_fu_1681_p1.read()) + sc_biguint<120>(add_ln1146_fu_1684_p2.read()));
}

void pow_generic_double_s::thread_add_ln1146_7_fu_2154_p2() {
    add_ln1146_7_fu_2154_p2 = (!zext_ln1146_fu_2138_p1.read().is_01() || !trunc_ln3_fu_2141_p3.read().is_01())? sc_lv<107>(): (sc_biguint<107>(zext_ln1146_fu_2138_p1.read()) + sc_biguint<107>(trunc_ln3_fu_2141_p3.read()));
}

void pow_generic_double_s::thread_add_ln1146_fu_1684_p2() {
    add_ln1146_fu_1684_p2 = (!sext_ln654_1_fu_1672_p1.read().is_01() || !lhs_V_13_fu_1661_p3.read().is_01())? sc_lv<120>(): (sc_bigint<120>(sext_ln654_1_fu_1672_p1.read()) + sc_bigint<120>(lhs_V_13_fu_1661_p3.read()));
}

void pow_generic_double_s::thread_add_ln654_fu_1675_p2() {
    add_ln654_fu_1675_p2 = (!sext_ln654_fu_1668_p1.read().is_01() || !sext_ln657_1_fu_1655_p1.read().is_01())? sc_lv<121>(): (sc_bigint<121>(sext_ln654_fu_1668_p1.read()) + sc_bigint<121>(sext_ln657_1_fu_1655_p1.read()));
}

void pow_generic_double_s::thread_add_ln657_1_fu_1568_p2() {
    add_ln657_1_fu_1568_p2 = (!zext_ln157_1_fu_1548_p1.read().is_01() || !zext_ln157_2_fu_1552_p1.read().is_01())? sc_lv<103>(): (sc_biguint<103>(zext_ln157_1_fu_1548_p1.read()) + sc_biguint<103>(zext_ln157_2_fu_1552_p1.read()));
}

void pow_generic_double_s::thread_add_ln657_2_fu_1611_p2() {
    add_ln657_2_fu_1611_p2 = (!zext_ln657_fu_1608_p1.read().is_01() || !add_ln657_reg_2676.read().is_01())? sc_lv<109>(): (sc_biguint<109>(zext_ln657_fu_1608_p1.read()) + sc_biguint<109>(add_ln657_reg_2676.read()));
}

void pow_generic_double_s::thread_add_ln657_3_fu_1574_p2() {
    add_ln657_3_fu_1574_p2 = (!zext_ln157_3_fu_1556_p1.read().is_01() || !zext_ln157_4_fu_1559_p1.read().is_01())? sc_lv<93>(): (sc_biguint<93>(zext_ln157_3_fu_1556_p1.read()) + sc_biguint<93>(zext_ln157_4_fu_1559_p1.read()));
}

void pow_generic_double_s::thread_add_ln657_4_fu_1518_p2() {
    add_ln657_4_fu_1518_p2 = (!zext_ln157_5_fu_1465_p1.read().is_01() || !zext_ln157_6_fu_1514_p1.read().is_01())? sc_lv<83>(): (sc_biguint<83>(zext_ln157_5_fu_1465_p1.read()) + sc_biguint<83>(zext_ln157_6_fu_1514_p1.read()));
}

void pow_generic_double_s::thread_add_ln657_5_fu_1583_p2() {
    add_ln657_5_fu_1583_p2 = (!zext_ln657_1_fu_1580_p1.read().is_01() || !add_ln657_3_fu_1574_p2.read().is_01())? sc_lv<93>(): (sc_biguint<93>(zext_ln657_1_fu_1580_p1.read()) + sc_biguint<93>(add_ln657_3_fu_1574_p2.read()));
}

void pow_generic_double_s::thread_add_ln657_7_fu_1984_p2() {
    add_ln657_7_fu_1984_p2 = (!ret_V_19_reg_2797_pp0_iter58_reg.read().is_01() || !zext_ln657_6_fu_1981_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(ret_V_19_reg_2797_pp0_iter58_reg.read()) + sc_biguint<36>(zext_ln657_6_fu_1981_p1.read()));
}

void pow_generic_double_s::thread_add_ln657_9_fu_2061_p2() {
    add_ln657_9_fu_2061_p2 = (!exp_Z2P_m_1_V_reg_2833_pp0_iter61_reg.read().is_01() || !zext_ln657_8_fu_2058_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(exp_Z2P_m_1_V_reg_2833_pp0_iter61_reg.read()) + sc_biguint<44>(zext_ln657_8_fu_2058_p1.read()));
}

void pow_generic_double_s::thread_add_ln657_fu_1562_p2() {
    add_ln657_fu_1562_p2 = (!zext_ln157_fu_1544_p1.read().is_01() || !pow_reduce_anonymo_19_q0.read().is_01())? sc_lv<109>(): (sc_biguint<109>(zext_ln157_fu_1544_p1.read()) + sc_biguint<109>(pow_reduce_anonymo_19_q0.read()));
}

void pow_generic_double_s::thread_add_ln805_fu_1803_p2() {
    add_ln805_fu_1803_p2 = (!ap_const_lv13_1.is_01() || !tmp_fu_1778_p4.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1) + sc_biguint<13>(tmp_fu_1778_p4.read()));
}

void pow_generic_double_s::thread_and_ln18_1_fu_714_p2() {
    and_ln18_1_fu_714_p2 = (icmp_ln833_2_fu_690_p2.read() & icmp_ln833_fu_660_p2.read());
}

void pow_generic_double_s::thread_and_ln18_fu_702_p2() {
    and_ln18_fu_702_p2 = (icmp_ln833_2_fu_690_p2.read() & icmp_ln837_fu_696_p2.read());
}

void pow_generic_double_s::thread_and_ln369_fu_666_p2() {
    and_ln369_fu_666_p2 = (icmp_ln369_fu_654_p2.read() & icmp_ln833_fu_660_p2.read());
}

void pow_generic_double_s::thread_and_ln_fu_2188_p3() {
    and_ln_fu_2188_p3 = esl_concat<58,1>(tmp_13_fu_2178_p4.read(), ap_const_lv1_0);
}

void pow_generic_double_s::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[0];
}

void pow_generic_double_s::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()));
}

void pow_generic_double_s::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()));
}

void pow_generic_double_s::thread_ap_block_state10_pp0_stage0_iter9() {
    ap_block_state10_pp0_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state11_pp0_stage0_iter10() {
    ap_block_state11_pp0_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state12_pp0_stage0_iter11() {
    ap_block_state12_pp0_stage0_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state13_pp0_stage0_iter12() {
    ap_block_state13_pp0_stage0_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state14_pp0_stage0_iter13() {
    ap_block_state14_pp0_stage0_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state15_pp0_stage0_iter14() {
    ap_block_state15_pp0_stage0_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state16_pp0_stage0_iter15() {
    ap_block_state16_pp0_stage0_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state17_pp0_stage0_iter16() {
    ap_block_state17_pp0_stage0_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state18_pp0_stage0_iter17() {
    ap_block_state18_pp0_stage0_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state19_pp0_stage0_iter18() {
    ap_block_state19_pp0_stage0_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state1_pp0_stage0_iter0() {
    ap_block_state1_pp0_stage0_iter0 = esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read());
}

void pow_generic_double_s::thread_ap_block_state20_pp0_stage0_iter19() {
    ap_block_state20_pp0_stage0_iter19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state21_pp0_stage0_iter20() {
    ap_block_state21_pp0_stage0_iter20 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state22_pp0_stage0_iter21() {
    ap_block_state22_pp0_stage0_iter21 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state23_pp0_stage0_iter22() {
    ap_block_state23_pp0_stage0_iter22 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state24_pp0_stage0_iter23() {
    ap_block_state24_pp0_stage0_iter23 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state25_pp0_stage0_iter24() {
    ap_block_state25_pp0_stage0_iter24 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state26_pp0_stage0_iter25() {
    ap_block_state26_pp0_stage0_iter25 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state27_pp0_stage0_iter26() {
    ap_block_state27_pp0_stage0_iter26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state28_pp0_stage0_iter27() {
    ap_block_state28_pp0_stage0_iter27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state29_pp0_stage0_iter28() {
    ap_block_state29_pp0_stage0_iter28 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state2_pp0_stage0_iter1() {
    ap_block_state2_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state30_pp0_stage0_iter29() {
    ap_block_state30_pp0_stage0_iter29 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state31_pp0_stage0_iter30() {
    ap_block_state31_pp0_stage0_iter30 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state32_pp0_stage0_iter31() {
    ap_block_state32_pp0_stage0_iter31 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state33_pp0_stage0_iter32() {
    ap_block_state33_pp0_stage0_iter32 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state34_pp0_stage0_iter33() {
    ap_block_state34_pp0_stage0_iter33 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state35_pp0_stage0_iter34() {
    ap_block_state35_pp0_stage0_iter34 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state36_pp0_stage0_iter35() {
    ap_block_state36_pp0_stage0_iter35 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state37_pp0_stage0_iter36() {
    ap_block_state37_pp0_stage0_iter36 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state38_pp0_stage0_iter37() {
    ap_block_state38_pp0_stage0_iter37 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state39_pp0_stage0_iter38() {
    ap_block_state39_pp0_stage0_iter38 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state3_pp0_stage0_iter2() {
    ap_block_state3_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state40_pp0_stage0_iter39() {
    ap_block_state40_pp0_stage0_iter39 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state41_pp0_stage0_iter40() {
    ap_block_state41_pp0_stage0_iter40 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state42_pp0_stage0_iter41() {
    ap_block_state42_pp0_stage0_iter41 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state43_pp0_stage0_iter42() {
    ap_block_state43_pp0_stage0_iter42 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state44_pp0_stage0_iter43() {
    ap_block_state44_pp0_stage0_iter43 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state45_pp0_stage0_iter44() {
    ap_block_state45_pp0_stage0_iter44 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state46_pp0_stage0_iter45() {
    ap_block_state46_pp0_stage0_iter45 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state47_pp0_stage0_iter46() {
    ap_block_state47_pp0_stage0_iter46 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state48_pp0_stage0_iter47() {
    ap_block_state48_pp0_stage0_iter47 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state49_pp0_stage0_iter48() {
    ap_block_state49_pp0_stage0_iter48 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state4_pp0_stage0_iter3() {
    ap_block_state4_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state50_pp0_stage0_iter49() {
    ap_block_state50_pp0_stage0_iter49 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state51_pp0_stage0_iter50() {
    ap_block_state51_pp0_stage0_iter50 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state52_pp0_stage0_iter51() {
    ap_block_state52_pp0_stage0_iter51 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state53_pp0_stage0_iter52() {
    ap_block_state53_pp0_stage0_iter52 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state54_pp0_stage0_iter53() {
    ap_block_state54_pp0_stage0_iter53 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state55_pp0_stage0_iter54() {
    ap_block_state55_pp0_stage0_iter54 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state56_pp0_stage0_iter55() {
    ap_block_state56_pp0_stage0_iter55 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state57_pp0_stage0_iter56() {
    ap_block_state57_pp0_stage0_iter56 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state58_pp0_stage0_iter57() {
    ap_block_state58_pp0_stage0_iter57 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state59_pp0_stage0_iter58() {
    ap_block_state59_pp0_stage0_iter58 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state5_pp0_stage0_iter4() {
    ap_block_state5_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state60_pp0_stage0_iter59() {
    ap_block_state60_pp0_stage0_iter59 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state61_pp0_stage0_iter60() {
    ap_block_state61_pp0_stage0_iter60 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state62_pp0_stage0_iter61() {
    ap_block_state62_pp0_stage0_iter61 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state63_pp0_stage0_iter62() {
    ap_block_state63_pp0_stage0_iter62 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state64_pp0_stage0_iter63() {
    ap_block_state64_pp0_stage0_iter63 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state65_pp0_stage0_iter64() {
    ap_block_state65_pp0_stage0_iter64 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state66_pp0_stage0_iter65() {
    ap_block_state66_pp0_stage0_iter65 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state67_pp0_stage0_iter66() {
    ap_block_state67_pp0_stage0_iter66 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state6_pp0_stage0_iter5() {
    ap_block_state6_pp0_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state7_pp0_stage0_iter6() {
    ap_block_state7_pp0_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state8_pp0_stage0_iter7() {
    ap_block_state8_pp0_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_block_state9_pp0_stage0_iter8() {
    ap_block_state9_pp0_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void pow_generic_double_s::thread_ap_condition_1781() {
    ap_condition_1781 = (esl_seteq<1,1,1>(x_is_p1_reg_2308_pp0_iter64_reg.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, or_ln415_reg_2317_pp0_iter64_reg.read()) && esl_seteq<1,1,1>(icmp_ln460_reg_2321_pp0_iter64_reg.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln467_reg_2325_pp0_iter64_reg.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, or_ln657_fu_2232_p2.read()));
}

void pow_generic_double_s::thread_ap_condition_1800() {
    ap_condition_1800 = (esl_seteq<1,1,1>(x_is_p1_reg_2308_pp0_iter65_reg.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, or_ln415_reg_2317_pp0_iter65_reg.read()) && esl_seteq<1,1,1>(icmp_ln460_reg_2321_pp0_iter65_reg.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln467_reg_2325_pp0_iter65_reg.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, or_ln657_reg_2911.read()));
}

void pow_generic_double_s::thread_ap_condition_2007() {
    ap_condition_2007 = (esl_seteq<1,1,1>(x_is_p1_fu_678_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, or_ln415_fu_734_p2.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln460_fu_748_p2.read()));
}

void pow_generic_double_s::thread_ap_condition_2011() {
    ap_condition_2011 = (esl_seteq<1,1,1>(x_is_p1_fu_678_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_0, or_ln415_fu_734_p2.read()) && esl_seteq<1,1,1>(icmp_ln460_fu_748_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln467_fu_762_p2.read()));
}

void pow_generic_double_s::thread_ap_condition_303() {
    ap_condition_303 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()));
}

void pow_generic_double_s::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter66.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void pow_generic_double_s::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void pow_generic_double_s::thread_ap_enable_reg_pp0_iter0() {
    ap_enable_reg_pp0_iter0 = ap_start.read();
}

void pow_generic_double_s::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void pow_generic_double_s::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter17.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter18.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter19.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter20.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter21.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter22.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter23.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter24.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter25.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter26.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter27.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter29.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter30.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter31.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter32.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter33.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter34.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter35.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter36.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter37.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter38.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter39.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter40.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter41.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter42.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter43.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter44.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter45.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter46.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter47.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter48.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter49.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter50.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter51.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter52.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter53.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter54.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter55.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter56.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter57.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter58.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter59.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter60.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter61.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter62.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter63.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter64.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter65.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter66.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void pow_generic_double_s::thread_ap_idle_pp0_0to65() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter17.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter18.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter19.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter20.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter21.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter22.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter23.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter24.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter25.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter26.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter27.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter29.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter30.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter31.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter32.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter33.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter34.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter35.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter36.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter37.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter38.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter39.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter40.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter41.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter42.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter43.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter44.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter45.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter46.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter47.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter48.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter49.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter50.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter51.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter52.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter53.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter54.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter55.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter56.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter57.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter58.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter59.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter60.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter61.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter62.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter63.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter64.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter65.read()))) {
        ap_idle_pp0_0to65 = ap_const_logic_1;
    } else {
        ap_idle_pp0_0to65 = ap_const_logic_0;
    }
}

void pow_generic_double_s::thread_ap_phi_mux_UnifiedRetVal_phi_fu_611_p4() {
    if (((((esl_seteq<1,1,1>(ap_const_lv1_0, or_ln657_reg_2911.read()) || 
            esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln467_reg_2325_pp0_iter65_reg.read())) || 
           esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln460_reg_2321_pp0_iter65_reg.read())) || 
          esl_seteq<1,1,1>(or_ln415_reg_2317_pp0_iter65_reg.read(), ap_const_lv1_1)) || 
         esl_seteq<1,1,1>(x_is_p1_reg_2308_pp0_iter65_reg.read(), ap_const_lv1_1))) {
        ap_phi_mux_UnifiedRetVal_phi_fu_611_p4 = ap_phi_mux_p_01254_phi_fu_590_p12.read();
    } else {
        ap_phi_mux_UnifiedRetVal_phi_fu_611_p4 = ap_phi_reg_pp0_iter66_UnifiedRetVal_reg_608.read();
    }
}

void pow_generic_double_s::thread_ap_phi_mux_p_01254_phi_fu_590_p12() {
    if (esl_seteq<1,1,1>(ap_condition_1800.read(), ap_const_boolean_1)) {
        if (esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln853_reg_2915.read())) {
            ap_phi_mux_p_01254_phi_fu_590_p12 = ap_const_lv64_0;
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln853_reg_2915.read())) {
            ap_phi_mux_p_01254_phi_fu_590_p12 = bitcast_ln512_fu_2286_p1.read();
        } else {
            ap_phi_mux_p_01254_phi_fu_590_p12 = ap_phi_reg_pp0_iter66_p_01254_reg_584.read();
        }
    } else {
        ap_phi_mux_p_01254_phi_fu_590_p12 = ap_phi_reg_pp0_iter66_p_01254_reg_584.read();
    }
}

void pow_generic_double_s::thread_ap_phi_reg_pp0_iter0_UnifiedRetVal_reg_608() {
    ap_phi_reg_pp0_iter0_UnifiedRetVal_reg_608 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void pow_generic_double_s::thread_ap_phi_reg_pp0_iter0_p_01254_reg_584() {
    ap_phi_reg_pp0_iter0_p_01254_reg_584 =  (sc_lv<64>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
}

void pow_generic_double_s::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void pow_generic_double_s::thread_ap_reset_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_idle_pp0_0to65.read()))) {
        ap_reset_idle_pp0 = ap_const_logic_1;
    } else {
        ap_reset_idle_pp0 = ap_const_logic_0;
    }
}

void pow_generic_double_s::thread_ap_return() {
    ap_return = ap_phi_mux_UnifiedRetVal_phi_fu_611_p4.read();
}

void pow_generic_double_s::thread_b_exp_1_fu_786_p2() {
    b_exp_1_fu_786_p2 = (!ap_const_lv12_C02.is_01() || !zext_ln502_fu_644_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_C02) + sc_biguint<12>(zext_ln502_fu_644_p1.read()));
}

void pow_generic_double_s::thread_b_exp_3_fu_792_p3() {
    b_exp_3_fu_792_p3 = (!tmp_4_fu_768_p3.read()[0].is_01())? sc_lv<12>(): ((tmp_4_fu_768_p3.read()[0].to_bool())? b_exp_1_fu_786_p2.read(): b_exp_fu_648_p2.read());
}

void pow_generic_double_s::thread_b_exp_fu_648_p2() {
    b_exp_fu_648_p2 = (!ap_const_lv12_C01.is_01() || !zext_ln502_fu_644_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_C01) + sc_biguint<12>(zext_ln502_fu_644_p1.read()));
}

void pow_generic_double_s::thread_b_frac_V_1_fu_825_p3() {
    b_frac_V_1_fu_825_p3 = (!tmp_4_reg_2329.read()[0].is_01())? sc_lv<54>(): ((tmp_4_reg_2329.read()[0].to_bool())? r_V_23_fu_821_p1.read(): p_Result_22_fu_805_p4.read());
}

void pow_generic_double_s::thread_bitcast_ln512_fu_2286_p1() {
    bitcast_ln512_fu_2286_p1 = p_Result_24_fu_2277_p4.read();
}

void pow_generic_double_s::thread_eZ_V_1_fu_987_p3() {
    eZ_V_1_fu_987_p3 = esl_concat<8,73>(ap_const_lv8_80, p_Val2_13_reg_2394_pp0_iter14_reg.read());
}

void pow_generic_double_s::thread_eZ_V_2_fu_1053_p4() {
    eZ_V_2_fu_1053_p4 = esl_concat<95,1>(esl_concat<13,82>(ap_const_lv13_1000, sub_ln685_reg_2426.read()), ap_const_lv1_0);
}

void pow_generic_double_s::thread_eZ_V_3_fu_1146_p3() {
    eZ_V_3_fu_1146_p3 = esl_concat<18,92>(ap_const_lv18_20000, p_Val2_26_reg_2463.read());
}

void pow_generic_double_s::thread_eZ_V_4_fu_1236_p3() {
    eZ_V_4_fu_1236_p3 = esl_concat<23,87>(ap_const_lv23_400000, p_Val2_33_reg_2500.read());
}

void pow_generic_double_s::thread_eZ_V_5_fu_1326_p3() {
    eZ_V_5_fu_1326_p3 = esl_concat<28,82>(ap_const_lv28_8000000, p_Val2_40_reg_2537.read());
}

void pow_generic_double_s::thread_eZ_V_6_fu_1469_p3() {
    eZ_V_6_fu_1469_p3 = esl_concat<33,77>(ap_const_lv33_100000000, p_Val2_47_reg_2574_pp0_iter44_reg.read());
}

void pow_generic_double_s::thread_eZ_V_fu_902_p3() {
    eZ_V_fu_902_p3 = (!tmp_15_fu_873_p3.read()[0].is_01())? sc_lv<76>(): ((tmp_15_fu_873_p3.read()[0].to_bool())? tmp_2_fu_889_p4.read(): zext_ln1287_fu_898_p1.read());
}

void pow_generic_double_s::thread_exp_Z1P_m_1_l_V_fu_2070_p2() {
    exp_Z1P_m_1_l_V_fu_2070_p2 = (!zext_ln657_9_fu_2066_p1.read().is_01() || !zext_ln682_14_fu_2054_p1.read().is_01())? sc_lv<52>(): (sc_biguint<52>(zext_ln657_9_fu_2066_p1.read()) + sc_biguint<52>(zext_ln682_14_fu_2054_p1.read()));
}

void pow_generic_double_s::thread_exp_Z2P_m_1_V_fu_1993_p2() {
    exp_Z2P_m_1_V_fu_1993_p2 = (!zext_ln657_7_fu_1989_p1.read().is_01() || !ret_V_20_fu_1978_p1.read().is_01())? sc_lv<44>(): (sc_biguint<44>(zext_ln657_7_fu_1989_p1.read()) + sc_biguint<44>(ret_V_20_fu_1978_p1.read()));
}

void pow_generic_double_s::thread_f_Z4_V_fu_1920_p4() {
    f_Z4_V_fu_1920_p4 = pow_reduce_anonymo_q0.read().range(25, 16);
}

void pow_generic_double_s::thread_grp_fu_1090_p0() {
    grp_fu_1090_p0 =  (sc_lv<83>) (grp_fu_1090_p00.read());
}

void pow_generic_double_s::thread_grp_fu_1090_p00() {
    grp_fu_1090_p00 = esl_zext<89,83>(p_Val2_19_fu_1046_p3.read());
}

void pow_generic_double_s::thread_grp_fu_1090_p1() {
    grp_fu_1090_p1 =  (sc_lv<6>) (grp_fu_1090_p10.read());
}

void pow_generic_double_s::thread_grp_fu_1090_p10() {
    grp_fu_1090_p10 = esl_zext<89,6>(a_V_2_reg_2432.read());
}

void pow_generic_double_s::thread_grp_fu_1180_p0() {
    grp_fu_1180_p0 =  (sc_lv<92>) (grp_fu_1180_p00.read());
}

void pow_generic_double_s::thread_grp_fu_1180_p00() {
    grp_fu_1180_p00 = esl_zext<98,92>(p_Val2_26_reg_2463.read());
}

void pow_generic_double_s::thread_grp_fu_1180_p1() {
    grp_fu_1180_p1 =  (sc_lv<6>) (grp_fu_1180_p10.read());
}

void pow_generic_double_s::thread_grp_fu_1180_p10() {
    grp_fu_1180_p10 = esl_zext<98,6>(a_V_3_reg_2469.read());
}

void pow_generic_double_s::thread_grp_fu_1270_p0() {
    grp_fu_1270_p0 =  (sc_lv<87>) (grp_fu_1270_p00.read());
}

void pow_generic_double_s::thread_grp_fu_1270_p00() {
    grp_fu_1270_p00 = esl_zext<93,87>(p_Val2_33_reg_2500.read());
}

void pow_generic_double_s::thread_grp_fu_1270_p1() {
    grp_fu_1270_p1 =  (sc_lv<6>) (grp_fu_1270_p10.read());
}

void pow_generic_double_s::thread_grp_fu_1270_p10() {
    grp_fu_1270_p10 = esl_zext<93,6>(a_V_4_reg_2506.read());
}

void pow_generic_double_s::thread_grp_fu_1360_p0() {
    grp_fu_1360_p0 =  (sc_lv<82>) (grp_fu_1360_p00.read());
}

void pow_generic_double_s::thread_grp_fu_1360_p00() {
    grp_fu_1360_p00 = esl_zext<88,82>(p_Val2_40_reg_2537.read());
}

void pow_generic_double_s::thread_grp_fu_1360_p1() {
    grp_fu_1360_p1 =  (sc_lv<6>) (grp_fu_1360_p10.read());
}

void pow_generic_double_s::thread_grp_fu_1360_p10() {
    grp_fu_1360_p10 = esl_zext<88,6>(a_V_5_reg_2543.read());
}

void pow_generic_double_s::thread_grp_fu_1422_p0() {
    grp_fu_1422_p0 =  (sc_lv<77>) (grp_fu_1422_p00.read());
}

void pow_generic_double_s::thread_grp_fu_1422_p00() {
    grp_fu_1422_p00 = esl_zext<83,77>(p_Val2_47_reg_2574.read());
}

void pow_generic_double_s::thread_grp_fu_1422_p1() {
    grp_fu_1422_p1 =  (sc_lv<6>) (grp_fu_1422_p10.read());
}

void pow_generic_double_s::thread_grp_fu_1422_p10() {
    grp_fu_1422_p10 = esl_zext<83,6>(a_V_6_reg_2580.read());
}

void pow_generic_double_s::thread_grp_fu_1431_p0() {
    grp_fu_1431_p0 =  (sc_lv<80>) (ap_const_lv90_58B90BFBE8E7BCD5E4F1);
}

void pow_generic_double_s::thread_grp_fu_1838_p0() {
    grp_fu_1838_p0 =  (sc_lv<72>) (ap_const_lv83_58B90BFBE8E7BCD5E4);
}

void pow_generic_double_s::thread_grp_fu_1958_p0() {
    grp_fu_1958_p0 =  (sc_lv<43>) (grp_fu_1958_p00.read());
}

void pow_generic_double_s::thread_grp_fu_1958_p00() {
    grp_fu_1958_p00 = esl_zext<79,43>(tmp_i_fu_1943_p4.read());
}

void pow_generic_double_s::thread_grp_fu_1958_p1() {
    grp_fu_1958_p1 =  (sc_lv<36>) (grp_fu_1958_p10.read());
}

void pow_generic_double_s::thread_grp_fu_1958_p10() {
    grp_fu_1958_p10 = esl_zext<79,36>(ret_V_19_reg_2797.read());
}

void pow_generic_double_s::thread_grp_fu_2024_p0() {
    grp_fu_2024_p0 =  (sc_lv<49>) (grp_fu_2024_p00.read());
}

void pow_generic_double_s::thread_grp_fu_2024_p00() {
    grp_fu_2024_p00 = esl_zext<93,49>(lshr_ln662_s_fu_2009_p4.read());
}

void pow_generic_double_s::thread_grp_fu_2024_p1() {
    grp_fu_2024_p1 =  (sc_lv<44>) (grp_fu_2024_p10.read());
}

void pow_generic_double_s::thread_grp_fu_2024_p10() {
    grp_fu_2024_p10 = esl_zext<93,44>(exp_Z2P_m_1_V_reg_2833.read());
}

void pow_generic_double_s::thread_grp_fu_2102_p0() {
    grp_fu_2102_p0 =  (sc_lv<50>) (grp_fu_2102_p00.read());
}

void pow_generic_double_s::thread_grp_fu_2102_p00() {
    grp_fu_2102_p00 = esl_zext<100,50>(exp_Z1_hi_V_reg_2875.read());
}

void pow_generic_double_s::thread_grp_fu_2102_p1() {
    grp_fu_2102_p1 =  (sc_lv<50>) (grp_fu_2102_p10.read());
}

void pow_generic_double_s::thread_grp_fu_2102_p10() {
    grp_fu_2102_p10 = esl_zext<100,50>(exp_Z1P_m_1_V_reg_2870.read());
}

void pow_generic_double_s::thread_grp_fu_2291_p0() {
    grp_fu_2291_p0 =  (sc_lv<16>) (ap_const_lv31_5C55);
}

void pow_generic_double_s::thread_grp_fu_835_p1() {
    grp_fu_835_p1 =  (sc_lv<6>) (grp_fu_835_p10.read());
}

void pow_generic_double_s::thread_grp_fu_835_p10() {
    grp_fu_835_p10 = esl_zext<54,6>(b_frac_tilde_inverse_reg_2354.read());
}

void pow_generic_double_s::thread_grp_fu_864_p0() {
    grp_fu_864_p0 =  (sc_lv<71>) (grp_fu_864_p00.read());
}

void pow_generic_double_s::thread_grp_fu_864_p00() {
    grp_fu_864_p00 = esl_zext<75,71>(z1_V_fu_850_p3.read());
}

void pow_generic_double_s::thread_grp_fu_864_p1() {
    grp_fu_864_p1 =  (sc_lv<4>) (grp_fu_864_p10.read());
}

void pow_generic_double_s::thread_grp_fu_864_p10() {
    grp_fu_864_p10 = esl_zext<75,4>(a_V_reg_2373.read());
}

void pow_generic_double_s::thread_grp_fu_981_p0() {
    grp_fu_981_p0 =  (sc_lv<73>) (grp_fu_981_p00.read());
}

void pow_generic_double_s::thread_grp_fu_981_p00() {
    grp_fu_981_p00 = esl_zext<79,73>(p_Val2_13_reg_2394.read());
}

void pow_generic_double_s::thread_grp_fu_981_p1() {
    grp_fu_981_p1 =  (sc_lv<6>) (grp_fu_981_p10.read());
}

void pow_generic_double_s::thread_grp_fu_981_p10() {
    grp_fu_981_p10 = esl_zext<79,6>(a_V_1_reg_2400.read());
}

void pow_generic_double_s::thread_icmp_ln369_fu_654_p2() {
    icmp_ln369_fu_654_p2 = (!b_exp_fu_648_p2.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(b_exp_fu_648_p2.read() == ap_const_lv12_0);
}

void pow_generic_double_s::thread_icmp_ln415_fu_728_p2() {
    icmp_ln415_fu_728_p2 = (!or_ln415_1_fu_720_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(or_ln415_1_fu_720_p3.read() != ap_const_lv32_0);
}

void pow_generic_double_s::thread_icmp_ln460_fu_748_p2() {
    icmp_ln460_fu_748_p2 = (!or_ln460_2_fu_740_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(or_ln460_2_fu_740_p3.read() == ap_const_lv32_0);
}

void pow_generic_double_s::thread_icmp_ln467_fu_762_p2() {
    icmp_ln467_fu_762_p2 = (!or_ln467_2_fu_754_p3.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(or_ln467_2_fu_754_p3.read() == ap_const_lv32_0);
}

void pow_generic_double_s::thread_icmp_ln657_fu_1829_p2() {
    icmp_ln657_fu_1829_p2 = (!sext_ln657_4_fu_1825_p1.read().is_01() || !m_frac_l_V_fu_1750_p3.read().is_01())? sc_lv<1>(): sc_lv<1>(sext_ln657_4_fu_1825_p1.read() != m_frac_l_V_fu_1750_p3.read());
}

void pow_generic_double_s::thread_icmp_ln805_fu_1797_p2() {
    icmp_ln805_fu_1797_p2 = (!trunc_ln805_fu_1794_p1.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(trunc_ln805_fu_1794_p1.read() == ap_const_lv18_0);
}

void pow_generic_double_s::thread_icmp_ln833_1_fu_708_p2() {
    icmp_ln833_1_fu_708_p2 = (!tmp_V_3_fu_630_p4.read().is_01() || !ap_const_lv11_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_3_fu_630_p4.read() == ap_const_lv11_0);
}

void pow_generic_double_s::thread_icmp_ln833_2_fu_690_p2() {
    icmp_ln833_2_fu_690_p2 = (!tmp_V_3_fu_630_p4.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_3_fu_630_p4.read() == ap_const_lv11_7FF);
}

void pow_generic_double_s::thread_icmp_ln833_fu_660_p2() {
    icmp_ln833_fu_660_p2 = (!tmp_V_4_fu_640_p1.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_4_fu_640_p1.read() == ap_const_lv52_0);
}

void pow_generic_double_s::thread_icmp_ln837_fu_696_p2() {
    icmp_ln837_fu_696_p2 = (!tmp_V_4_fu_640_p1.read().is_01() || !ap_const_lv52_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_V_4_fu_640_p1.read() != ap_const_lv52_0);
}

void pow_generic_double_s::thread_icmp_ln849_fu_2226_p2() {
    icmp_ln849_fu_2226_p2 = (!tmp_20_fu_2216_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): (sc_bigint<3>(tmp_20_fu_2216_p4.read()) > sc_bigint<3>(ap_const_lv3_0));
}

void pow_generic_double_s::thread_icmp_ln853_fu_2237_p2() {
    icmp_ln853_fu_2237_p2 = (!r_exp_V_2_fu_2209_p3.read().is_01() || !ap_const_lv13_1C02.is_01())? sc_lv<1>(): (sc_bigint<13>(r_exp_V_2_fu_2209_p3.read()) < sc_bigint<13>(ap_const_lv13_1C02));
}

void pow_generic_double_s::thread_index0_V_fu_776_p4() {
    index0_V_fu_776_p4 = p_Val2_s_fu_618_p1.read().range(51, 46);
}

void pow_generic_double_s::thread_lhs_V_10_fu_1366_p1() {
    lhs_V_10_fu_1366_p1 = esl_zext<132,131>(ret_V_11_reg_2554_pp0_iter38_reg.read());
}

void pow_generic_double_s::thread_lhs_V_11_fu_1476_p3() {
    lhs_V_11_fu_1476_p3 = esl_concat<71,64>(tmp_8_reg_2586_pp0_iter44_reg.read(), ap_const_lv64_0);
}

void pow_generic_double_s::thread_lhs_V_12_fu_1625_p3() {
    lhs_V_12_fu_1625_p3 = esl_concat<72,45>(tmp_9_reg_2666_pp0_iter46_reg.read(), ap_const_lv45_0);
}

void pow_generic_double_s::thread_lhs_V_13_fu_1661_p3() {
    lhs_V_13_fu_1661_p3 = esl_concat<90,30>(Elog2_V_reg_2696.read(), ap_const_lv30_0);
}

void pow_generic_double_s::thread_lhs_V_14_fu_1854_p1() {
    lhs_V_14_fu_1854_p1 = esl_sext<72,71>(m_fix_V_reg_2728_pp0_iter54_reg.read());
}

void pow_generic_double_s::thread_lhs_V_15_fu_1930_p1() {
    lhs_V_15_fu_1930_p1 = esl_zext<36,35>(Z4_V_reg_2782.read());
}

void pow_generic_double_s::thread_lhs_V_16_fu_2044_p5() {
    lhs_V_16_fu_2044_p5 = esl_concat<49,2>(esl_concat<9,40>(esl_concat<8,1>(Z2_V_reg_2770_pp0_iter61_reg.read(), ap_const_lv1_0), tmp_11_reg_2839_pp0_iter61_reg.read()), ap_const_lv2_0);
}

void pow_generic_double_s::thread_lhs_V_17_fu_2108_p1() {
    lhs_V_17_fu_2108_p1 = esl_zext<59,58>(exp_Z1_V_reg_2865_pp0_iter63_reg.read());
}

void pow_generic_double_s::thread_lhs_V_18_fu_2128_p3() {
    lhs_V_18_fu_2128_p3 = esl_concat<59,49>(ret_V_21_reg_2890.read(), ap_const_lv49_0);
}

void pow_generic_double_s::thread_lhs_V_1_fu_932_p1() {
    lhs_V_1_fu_932_p1 = esl_zext<78,77>(ret_V_2_fu_926_p2.read());
}

void pow_generic_double_s::thread_lhs_V_2_fu_994_p3() {
    lhs_V_2_fu_994_p3 = esl_concat<67,14>(tmp_3_reg_2406_pp0_iter14_reg.read(), ap_const_lv14_0);
}

void pow_generic_double_s::thread_lhs_V_3_fu_1062_p3() {
    lhs_V_3_fu_1062_p3 = esl_concat<76,25>(trunc_ln657_1_reg_2438.read(), ap_const_lv25_0);
}

void pow_generic_double_s::thread_lhs_V_4_fu_1096_p1() {
    lhs_V_4_fu_1096_p1 = esl_zext<103,102>(ret_V_5_reg_2443_pp0_iter20_reg.read());
}

void pow_generic_double_s::thread_lhs_V_5_fu_1153_p3() {
    lhs_V_5_fu_1153_p3 = esl_concat<86,34>(tmp_5_reg_2475.read(), ap_const_lv34_0);
}

void pow_generic_double_s::thread_lhs_V_6_fu_1186_p1() {
    lhs_V_6_fu_1186_p1 = esl_zext<122,121>(ret_V_7_reg_2480_pp0_iter26_reg.read());
}

void pow_generic_double_s::thread_lhs_V_7_fu_1243_p3() {
    lhs_V_7_fu_1243_p3 = esl_concat<81,44>(tmp_6_reg_2512.read(), ap_const_lv44_0);
}

void pow_generic_double_s::thread_lhs_V_8_fu_1276_p1() {
    lhs_V_8_fu_1276_p1 = esl_zext<127,126>(ret_V_9_reg_2517_pp0_iter32_reg.read());
}

void pow_generic_double_s::thread_lhs_V_9_fu_1333_p3() {
    lhs_V_9_fu_1333_p3 = esl_concat<76,54>(tmp_7_reg_2549.read(), ap_const_lv54_0);
}

void pow_generic_double_s::thread_lhs_V_fu_910_p3() {
    lhs_V_fu_910_p3 = esl_concat<50,25>(trunc_ln657_fu_870_p1.read(), ap_const_lv25_0);
}

void pow_generic_double_s::thread_log_sum_V_1_fu_1619_p2() {
    log_sum_V_1_fu_1619_p2 = (!zext_ln657_2_fu_1616_p1.read().is_01() || !add_ln657_2_fu_1611_p2.read().is_01())? sc_lv<109>(): (sc_biguint<109>(zext_ln657_2_fu_1616_p1.read()) + sc_biguint<109>(add_ln657_2_fu_1611_p2.read()));
}

void pow_generic_double_s::thread_lshr_ln662_s_fu_2009_p4() {
    lshr_ln662_s_fu_2009_p4 = esl_concat<9,40>(esl_concat<8,1>(Z2_V_reg_2770_pp0_iter59_reg.read(), ap_const_lv1_0), tmp_11_reg_2839.read());
}

void pow_generic_double_s::thread_m_frac_l_V_fu_1750_p3() {
    m_frac_l_V_fu_1750_p3 = esl_concat<78,52>(tmp_s_reg_2718.read(), ap_const_lv52_0);
}

void pow_generic_double_s::thread_or_ln415_1_fu_720_p3() {
    or_ln415_1_fu_720_p3 = esl_concat<31,1>(ap_const_lv31_0, and_ln18_fu_702_p2.read());
}

void pow_generic_double_s::thread_or_ln415_fu_734_p2() {
    or_ln415_fu_734_p2 = (icmp_ln415_fu_728_p2.read() | x_is_n1_fu_684_p2.read());
}

void pow_generic_double_s::thread_or_ln460_2_fu_740_p3() {
    or_ln460_2_fu_740_p3 = esl_concat<31,1>(ap_const_lv31_0, and_ln18_1_fu_714_p2.read());
}

void pow_generic_double_s::thread_or_ln467_2_fu_754_p3() {
    or_ln467_2_fu_754_p3 = esl_concat<31,1>(ap_const_lv31_0, icmp_ln833_1_fu_708_p2.read());
}

void pow_generic_double_s::thread_or_ln657_fu_2232_p2() {
    or_ln657_fu_2232_p2 = (icmp_ln657_reg_2750_pp0_iter64_reg.read() | icmp_ln849_fu_2226_p2.read());
}

void pow_generic_double_s::thread_out_exp_V_fu_2272_p2() {
    out_exp_V_fu_2272_p2 = (!ap_const_lv11_3FF.is_01() || !trunc_ln168_reg_2924.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_3FF) + sc_biguint<11>(trunc_ln168_reg_2924.read()));
}

void pow_generic_double_s::thread_p_Result_15_fu_1787_p3() {
    p_Result_15_fu_1787_p3 = grp_fu_2291_p3.read().range(30, 30);
}

void pow_generic_double_s::thread_p_Result_22_fu_805_p4() {
    p_Result_22_fu_805_p4 = esl_concat<53,1>(esl_concat<1,52>(ap_const_lv1_1, tmp_V_4_reg_2302.read()), ap_const_lv1_0);
}

void pow_generic_double_s::thread_p_Result_24_fu_2277_p4() {
    p_Result_24_fu_2277_p4 = esl_concat<12,52>(esl_concat<1,11>(ap_const_lv1_0, out_exp_V_fu_2272_p2.read()), tmp_V_reg_2919.read());
}

void pow_generic_double_s::thread_p_Result_s_fu_622_p3() {
    p_Result_s_fu_622_p3 = p_Val2_s_fu_618_p1.read().range(63, 63);
}

void pow_generic_double_s::thread_p_Val2_19_fu_1046_p3() {
    p_Val2_19_fu_1046_p3 = esl_concat<82,1>(sub_ln685_reg_2426.read(), ap_const_lv1_0);
}

void pow_generic_double_s::thread_p_Val2_s_fu_618_p1() {
    p_Val2_s_fu_618_p1 = base_r.read();
}

void pow_generic_double_s::thread_pow_reduce_anonymo_12_address0() {
    pow_reduce_anonymo_12_address0 =  (sc_lv<6>) (zext_ln498_5_fu_1437_p1.read());
}

void pow_generic_double_s::thread_pow_reduce_anonymo_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter44.read()))) {
        pow_reduce_anonymo_12_ce0 = ap_const_logic_1;
    } else {
        pow_reduce_anonymo_12_ce0 = ap_const_logic_0;
    }
}

void pow_generic_double_s::thread_pow_reduce_anonymo_13_address0() {
    pow_reduce_anonymo_13_address0 =  (sc_lv<6>) (zext_ln498_6_fu_1441_p1.read());
}

void pow_generic_double_s::thread_pow_reduce_anonymo_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter44.read()))) {
        pow_reduce_anonymo_13_ce0 = ap_const_logic_1;
    } else {
        pow_reduce_anonymo_13_ce0 = ap_const_logic_0;
    }
}

void pow_generic_double_s::thread_pow_reduce_anonymo_14_address0() {
    pow_reduce_anonymo_14_address0 =  (sc_lv<6>) (zext_ln498_10_fu_1445_p1.read());
}

void pow_generic_double_s::thread_pow_reduce_anonymo_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter44.read()))) {
        pow_reduce_anonymo_14_ce0 = ap_const_logic_1;
    } else {
        pow_reduce_anonymo_14_ce0 = ap_const_logic_0;
    }
}

void pow_generic_double_s::thread_pow_reduce_anonymo_15_address0() {
    pow_reduce_anonymo_15_address0 =  (sc_lv<6>) (zext_ln498_11_fu_1449_p1.read());
}

void pow_generic_double_s::thread_pow_reduce_anonymo_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter44.read()))) {
        pow_reduce_anonymo_15_ce0 = ap_const_logic_1;
    } else {
        pow_reduce_anonymo_15_ce0 = ap_const_logic_0;
    }
}

void pow_generic_double_s::thread_pow_reduce_anonymo_16_address0() {
    pow_reduce_anonymo_16_address0 =  (sc_lv<4>) (zext_ln498_1_fu_1453_p1.read());
}

void pow_generic_double_s::thread_pow_reduce_anonymo_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter45.read()))) {
        pow_reduce_anonymo_16_ce0 = ap_const_logic_1;
    } else {
        pow_reduce_anonymo_16_ce0 = ap_const_logic_0;
    }
}

void pow_generic_double_s::thread_pow_reduce_anonymo_17_address0() {
    pow_reduce_anonymo_17_address0 =  (sc_lv<6>) (zext_ln498_2_fu_1457_p1.read());
}

void pow_generic_double_s::thread_pow_reduce_anonymo_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter45.read()))) {
        pow_reduce_anonymo_17_ce0 = ap_const_logic_1;
    } else {
        pow_reduce_anonymo_17_ce0 = ap_const_logic_0;
    }
}

void pow_generic_double_s::thread_pow_reduce_anonymo_18_address0() {
    pow_reduce_anonymo_18_address0 =  (sc_lv<8>) (zext_ln498_3_fu_2030_p1.read());
}

void pow_generic_double_s::thread_pow_reduce_anonymo_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter61.read()))) {
        pow_reduce_anonymo_18_ce0 = ap_const_logic_1;
    } else {
        pow_reduce_anonymo_18_ce0 = ap_const_logic_0;
    }
}

void pow_generic_double_s::thread_pow_reduce_anonymo_19_address0() {
    pow_reduce_anonymo_19_address0 =  (sc_lv<6>) (zext_ln498_reg_2339_pp0_iter44_reg.read());
}

void pow_generic_double_s::thread_pow_reduce_anonymo_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter45.read()))) {
        pow_reduce_anonymo_19_ce0 = ap_const_logic_1;
    } else {
        pow_reduce_anonymo_19_ce0 = ap_const_logic_0;
    }
}

void pow_generic_double_s::thread_pow_reduce_anonymo_20_address0() {
    pow_reduce_anonymo_20_address0 =  (sc_lv<6>) (zext_ln498_fu_800_p1.read());
}

void pow_generic_double_s::thread_pow_reduce_anonymo_20_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()))) {
        pow_reduce_anonymo_20_ce0 = ap_const_logic_1;
    } else {
        pow_reduce_anonymo_20_ce0 = ap_const_logic_0;
    }
}

void pow_generic_double_s::thread_pow_reduce_anonymo_21_address0() {
    pow_reduce_anonymo_21_address0 =  (sc_lv<8>) (zext_ln498_9_fu_1974_p1.read());
}

void pow_generic_double_s::thread_pow_reduce_anonymo_21_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter58.read()))) {
        pow_reduce_anonymo_21_ce0 = ap_const_logic_1;
    } else {
        pow_reduce_anonymo_21_ce0 = ap_const_logic_0;
    }
}

void pow_generic_double_s::thread_pow_reduce_anonymo_9_address0() {
    pow_reduce_anonymo_9_address0 =  (sc_lv<6>) (zext_ln498_4_fu_1461_p1.read());
}

void pow_generic_double_s::thread_pow_reduce_anonymo_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter45.read()))) {
        pow_reduce_anonymo_9_ce0 = ap_const_logic_1;
    } else {
        pow_reduce_anonymo_9_ce0 = ap_const_logic_0;
    }
}

void pow_generic_double_s::thread_pow_reduce_anonymo_address0() {
    pow_reduce_anonymo_address0 =  (sc_lv<8>) (zext_ln498_7_fu_1910_p1.read());
}

void pow_generic_double_s::thread_pow_reduce_anonymo_address1() {
    pow_reduce_anonymo_address1 =  (sc_lv<8>) (zext_ln498_8_fu_1915_p1.read());
}

void pow_generic_double_s::thread_pow_reduce_anonymo_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter55.read()))) {
        pow_reduce_anonymo_ce0 = ap_const_logic_1;
    } else {
        pow_reduce_anonymo_ce0 = ap_const_logic_0;
    }
}

void pow_generic_double_s::thread_pow_reduce_anonymo_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter55.read()))) {
        pow_reduce_anonymo_ce1 = ap_const_logic_1;
    } else {
        pow_reduce_anonymo_ce1 = ap_const_logic_0;
    }
}

void pow_generic_double_s::thread_r_V_23_fu_821_p1() {
    r_V_23_fu_821_p1 = esl_zext<54,53>(r_V_s_fu_814_p3.read());
}

void pow_generic_double_s::thread_r_V_31_fu_1592_p0() {
    r_V_31_fu_1592_p0 =  (sc_lv<40>) (zext_ln1070_fu_1589_p1.read());
}

void pow_generic_double_s::thread_r_V_31_fu_1592_p1() {
    r_V_31_fu_1592_p1 =  (sc_lv<40>) (zext_ln1070_fu_1589_p1.read());
}

void pow_generic_double_s::thread_r_V_31_fu_1592_p2() {
    r_V_31_fu_1592_p2 = (!r_V_31_fu_1592_p0.read().is_01() || !r_V_31_fu_1592_p1.read().is_01())? sc_lv<80>(): sc_biguint<40>(r_V_31_fu_1592_p0.read()) * sc_biguint<40>(r_V_31_fu_1592_p1.read());
}

void pow_generic_double_s::thread_r_V_s_fu_814_p3() {
    r_V_s_fu_814_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_V_4_reg_2302.read());
}

void pow_generic_double_s::thread_r_exp_V_2_fu_2209_p3() {
    r_exp_V_2_fu_2209_p3 = (!tmp_19_fu_2170_p3.read()[0].is_01())? sc_lv<13>(): ((tmp_19_fu_2170_p3.read()[0].to_bool())? r_exp_V_3_reg_2743_pp0_iter64_reg.read(): r_exp_V_fu_2196_p2.read());
}

void pow_generic_double_s::thread_r_exp_V_3_fu_1817_p3() {
    r_exp_V_3_fu_1817_p3 = (!p_Result_15_fu_1787_p3.read()[0].is_01())? sc_lv<13>(): ((p_Result_15_fu_1787_p3.read()[0].to_bool())? select_ln805_fu_1809_p3.read(): tmp_fu_1778_p4.read());
}

void pow_generic_double_s::thread_r_exp_V_fu_2196_p2() {
    r_exp_V_fu_2196_p2 = (!ap_const_lv13_1FFF.is_01() || !r_exp_V_3_reg_2743_pp0_iter64_reg.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1FFF) + sc_bigint<13>(r_exp_V_3_reg_2743_pp0_iter64_reg.read()));
}

void pow_generic_double_s::thread_ret_V_10_fu_1290_p2() {
    ret_V_10_fu_1290_p2 = (!lhs_V_8_fu_1276_p1.read().is_01() || !zext_ln682_8_fu_1286_p1.read().is_01())? sc_lv<127>(): (sc_biguint<127>(lhs_V_8_fu_1276_p1.read()) - sc_biguint<127>(zext_ln682_8_fu_1286_p1.read()));
}

void pow_generic_double_s::thread_ret_V_11_fu_1348_p2() {
    ret_V_11_fu_1348_p2 = (!zext_ln682_9_fu_1340_p1.read().is_01() || !rhs_V_9_fu_1344_p1.read().is_01())? sc_lv<131>(): (sc_biguint<131>(zext_ln682_9_fu_1340_p1.read()) + sc_biguint<131>(rhs_V_9_fu_1344_p1.read()));
}

void pow_generic_double_s::thread_ret_V_12_fu_1380_p2() {
    ret_V_12_fu_1380_p2 = (!lhs_V_10_fu_1366_p1.read().is_01() || !zext_ln682_10_fu_1376_p1.read().is_01())? sc_lv<132>(): (sc_biguint<132>(lhs_V_10_fu_1366_p1.read()) - sc_biguint<132>(zext_ln682_10_fu_1376_p1.read()));
}

void pow_generic_double_s::thread_ret_V_13_fu_1491_p2() {
    ret_V_13_fu_1491_p2 = (!zext_ln682_11_fu_1483_p1.read().is_01() || !rhs_V_11_fu_1487_p1.read().is_01())? sc_lv<136>(): (sc_biguint<136>(zext_ln682_11_fu_1483_p1.read()) + sc_biguint<136>(rhs_V_11_fu_1487_p1.read()));
}

void pow_generic_double_s::thread_ret_V_14_fu_1508_p2() {
    ret_V_14_fu_1508_p2 = (!ret_V_13_fu_1491_p2.read().is_01() || !zext_ln682_12_fu_1504_p1.read().is_01())? sc_lv<136>(): (sc_biguint<136>(ret_V_13_fu_1491_p2.read()) - sc_biguint<136>(zext_ln682_12_fu_1504_p1.read()));
}

void pow_generic_double_s::thread_ret_V_15_fu_1639_p2() {
    ret_V_15_fu_1639_p2 = (!zext_ln682_13_fu_1632_p1.read().is_01() || !zext_ln657_3_fu_1636_p1.read().is_01())? sc_lv<118>(): (sc_biguint<118>(zext_ln682_13_fu_1632_p1.read()) - sc_biguint<118>(zext_ln657_3_fu_1636_p1.read()));
}

void pow_generic_double_s::thread_ret_V_16_fu_1690_p2() {
    ret_V_16_fu_1690_p2 = (!add_ln654_fu_1675_p2.read().is_01() || !sum_V_fu_1658_p1.read().is_01())? sc_lv<121>(): (sc_biguint<121>(add_ln654_fu_1675_p2.read()) + sc_bigint<121>(sum_V_fu_1658_p1.read()));
}

void pow_generic_double_s::thread_ret_V_18_fu_1860_p2() {
    ret_V_18_fu_1860_p2 = (!lhs_V_14_fu_1854_p1.read().is_01() || !rhs_V_14_fu_1857_p1.read().is_01())? sc_lv<72>(): (sc_bigint<72>(lhs_V_14_fu_1854_p1.read()) - sc_bigint<72>(rhs_V_14_fu_1857_p1.read()));
}

void pow_generic_double_s::thread_ret_V_19_fu_1937_p2() {
    ret_V_19_fu_1937_p2 = (!lhs_V_15_fu_1930_p1.read().is_01() || !rhs_V_15_fu_1933_p1.read().is_01())? sc_lv<36>(): (sc_biguint<36>(lhs_V_15_fu_1930_p1.read()) + sc_biguint<36>(rhs_V_15_fu_1933_p1.read()));
}

void pow_generic_double_s::thread_ret_V_20_fu_1978_p1() {
    ret_V_20_fu_1978_p1 = esl_zext<44,43>(tmp_i_reg_2808_pp0_iter58_reg.read());
}

void pow_generic_double_s::thread_ret_V_21_fu_2111_p2() {
    ret_V_21_fu_2111_p2 = (!ap_const_lv59_10.is_01() || !lhs_V_17_fu_2108_p1.read().is_01())? sc_lv<59>(): (sc_biguint<59>(ap_const_lv59_10) + sc_biguint<59>(lhs_V_17_fu_2108_p1.read()));
}

void pow_generic_double_s::thread_ret_V_22_fu_2148_p2() {
    ret_V_22_fu_2148_p2 = (!lhs_V_18_fu_2128_p3.read().is_01() || !zext_ln657_11_fu_2135_p1.read().is_01())? sc_lv<108>(): (sc_biguint<108>(lhs_V_18_fu_2128_p3.read()) + sc_biguint<108>(zext_ln657_11_fu_2135_p1.read()));
}

void pow_generic_double_s::thread_ret_V_2_fu_926_p2() {
    ret_V_2_fu_926_p2 = (!zext_ln682_1_fu_918_p1.read().is_01() || !rhs_V_fu_922_p1.read().is_01())? sc_lv<77>(): (sc_biguint<77>(zext_ln682_1_fu_918_p1.read()) + sc_biguint<77>(rhs_V_fu_922_p1.read()));
}

void pow_generic_double_s::thread_ret_V_3_fu_939_p2() {
    ret_V_3_fu_939_p2 = (!lhs_V_1_fu_932_p1.read().is_01() || !rhs_V_1_fu_936_p1.read().is_01())? sc_lv<78>(): (sc_biguint<78>(lhs_V_1_fu_932_p1.read()) - sc_biguint<78>(rhs_V_1_fu_936_p1.read()));
}

void pow_generic_double_s::thread_ret_V_4_fu_1009_p2() {
    ret_V_4_fu_1009_p2 = (!zext_ln682_2_fu_1001_p1.read().is_01() || !rhs_V_2_fu_1005_p1.read().is_01())? sc_lv<82>(): (sc_biguint<82>(zext_ln682_2_fu_1001_p1.read()) + sc_biguint<82>(rhs_V_2_fu_1005_p1.read()));
}

void pow_generic_double_s::thread_ret_V_5_fu_1077_p2() {
    ret_V_5_fu_1077_p2 = (!zext_ln682_3_fu_1069_p1.read().is_01() || !rhs_V_3_fu_1073_p1.read().is_01())? sc_lv<102>(): (sc_biguint<102>(zext_ln682_3_fu_1069_p1.read()) + sc_biguint<102>(rhs_V_3_fu_1073_p1.read()));
}

void pow_generic_double_s::thread_ret_V_6_fu_1110_p2() {
    ret_V_6_fu_1110_p2 = (!lhs_V_4_fu_1096_p1.read().is_01() || !zext_ln682_4_fu_1106_p1.read().is_01())? sc_lv<103>(): (sc_biguint<103>(lhs_V_4_fu_1096_p1.read()) - sc_biguint<103>(zext_ln682_4_fu_1106_p1.read()));
}

void pow_generic_double_s::thread_ret_V_7_fu_1168_p2() {
    ret_V_7_fu_1168_p2 = (!zext_ln682_5_fu_1160_p1.read().is_01() || !rhs_V_5_fu_1164_p1.read().is_01())? sc_lv<121>(): (sc_biguint<121>(zext_ln682_5_fu_1160_p1.read()) + sc_biguint<121>(rhs_V_5_fu_1164_p1.read()));
}

void pow_generic_double_s::thread_ret_V_8_fu_1200_p2() {
    ret_V_8_fu_1200_p2 = (!lhs_V_6_fu_1186_p1.read().is_01() || !zext_ln682_6_fu_1196_p1.read().is_01())? sc_lv<122>(): (sc_biguint<122>(lhs_V_6_fu_1186_p1.read()) - sc_biguint<122>(zext_ln682_6_fu_1196_p1.read()));
}

void pow_generic_double_s::thread_ret_V_9_fu_1258_p2() {
    ret_V_9_fu_1258_p2 = (!zext_ln682_7_fu_1250_p1.read().is_01() || !rhs_V_7_fu_1254_p1.read().is_01())? sc_lv<126>(): (sc_biguint<126>(zext_ln682_7_fu_1250_p1.read()) + sc_biguint<126>(rhs_V_7_fu_1254_p1.read()));
}

void pow_generic_double_s::thread_rhs_V_10_fu_1369_p3() {
    rhs_V_10_fu_1369_p3 = esl_concat<88,21>(r_V_29_reg_2569.read(), ap_const_lv21_0);
}

void pow_generic_double_s::thread_rhs_V_11_fu_1487_p1() {
    rhs_V_11_fu_1487_p1 = esl_zext<136,110>(eZ_V_6_fu_1469_p3.read());
}

void pow_generic_double_s::thread_rhs_V_12_fu_1497_p3() {
    rhs_V_12_fu_1497_p3 = esl_concat<83,26>(r_V_30_reg_2621.read(), ap_const_lv26_0);
}

void pow_generic_double_s::thread_rhs_V_13_fu_1767_p3() {
    rhs_V_13_fu_1767_p3 = esl_concat<1,18>(p_Result_23_reg_2738.read(), ap_const_lv18_20000);
}

void pow_generic_double_s::thread_rhs_V_14_fu_1857_p1() {
    rhs_V_14_fu_1857_p1 = esl_sext<72,71>(m_fix_a_V_reg_2760.read());
}

void pow_generic_double_s::thread_rhs_V_15_fu_1933_p1() {
    rhs_V_15_fu_1933_p1 = esl_zext<36,10>(f_Z4_V_fu_1920_p4.read());
}

void pow_generic_double_s::thread_rhs_V_1_fu_936_p1() {
    rhs_V_1_fu_936_p1 = esl_zext<78,75>(r_V_24_reg_2389.read());
}

void pow_generic_double_s::thread_rhs_V_2_fu_1005_p1() {
    rhs_V_2_fu_1005_p1 = esl_zext<82,81>(eZ_V_1_fu_987_p3.read());
}

void pow_generic_double_s::thread_rhs_V_3_fu_1073_p1() {
    rhs_V_3_fu_1073_p1 = esl_zext<102,96>(eZ_V_2_fu_1053_p4.read());
}

void pow_generic_double_s::thread_rhs_V_4_fu_1099_p3() {
    rhs_V_4_fu_1099_p3 = esl_concat<89,6>(r_V_26_reg_2458.read(), ap_const_lv6_0);
}

void pow_generic_double_s::thread_rhs_V_5_fu_1164_p1() {
    rhs_V_5_fu_1164_p1 = esl_zext<121,110>(eZ_V_3_fu_1146_p3.read());
}

void pow_generic_double_s::thread_rhs_V_6_fu_1189_p3() {
    rhs_V_6_fu_1189_p3 = esl_concat<98,11>(r_V_27_reg_2495.read(), ap_const_lv11_0);
}

void pow_generic_double_s::thread_rhs_V_7_fu_1254_p1() {
    rhs_V_7_fu_1254_p1 = esl_zext<126,110>(eZ_V_4_fu_1236_p3.read());
}

void pow_generic_double_s::thread_rhs_V_8_fu_1279_p3() {
    rhs_V_8_fu_1279_p3 = esl_concat<93,16>(r_V_28_reg_2532.read(), ap_const_lv16_0);
}

void pow_generic_double_s::thread_rhs_V_9_fu_1344_p1() {
    rhs_V_9_fu_1344_p1 = esl_zext<131,110>(eZ_V_5_fu_1326_p3.read());
}

void pow_generic_double_s::thread_rhs_V_fu_922_p1() {
    rhs_V_fu_922_p1 = esl_zext<77,76>(eZ_V_fu_902_p3.read());
}

void pow_generic_double_s::thread_select_ln415_fu_2121_p3() {
    select_ln415_fu_2121_p3 = (!icmp_ln415_reg_2312_pp0_iter64_reg.read()[0].is_01())? sc_lv<64>(): ((icmp_ln415_reg_2312_pp0_iter64_reg.read()[0].to_bool())? ap_const_lv64_7FFFFFFFFFFFFFFF: ap_const_lv64_3FF0000000000000);
}

void pow_generic_double_s::thread_select_ln656_fu_2201_p3() {
    select_ln656_fu_2201_p3 = (!tmp_19_fu_2170_p3.read()[0].is_01())? sc_lv<59>(): ((tmp_19_fu_2170_p3.read()[0].to_bool())? trunc_ln662_s_fu_2160_p4.read(): and_ln_fu_2188_p3.read());
}

void pow_generic_double_s::thread_select_ln658_fu_2264_p3() {
    select_ln658_fu_2264_p3 = (!tmp_21_fu_2257_p3.read()[0].is_01())? sc_lv<64>(): ((tmp_21_fu_2257_p3.read()[0].to_bool())? ap_const_lv64_0: ap_const_lv64_7FF0000000000000);
}

void pow_generic_double_s::thread_select_ln805_fu_1809_p3() {
    select_ln805_fu_1809_p3 = (!icmp_ln805_fu_1797_p2.read()[0].is_01())? sc_lv<13>(): ((icmp_ln805_fu_1797_p2.read()[0].to_bool())? tmp_fu_1778_p4.read(): add_ln805_fu_1803_p2.read());
}

void pow_generic_double_s::thread_sext_ln1146_fu_1681_p1() {
    sext_ln1146_fu_1681_p1 = esl_sext<120,73>(trunc_ln662_1_reg_2707.read());
}

void pow_generic_double_s::thread_sext_ln654_1_fu_1672_p1() {
    sext_ln654_1_fu_1672_p1 = esl_sext<120,109>(log_sum_V_1_reg_2701.read());
}

void pow_generic_double_s::thread_sext_ln654_fu_1668_p1() {
    sext_ln654_fu_1668_p1 = esl_sext<121,120>(lhs_V_13_fu_1661_p3.read());
}

void pow_generic_double_s::thread_sext_ln657_1_fu_1655_p1() {
    sext_ln657_1_fu_1655_p1 = esl_sext<121,109>(log_sum_V_1_reg_2701.read());
}

void pow_generic_double_s::thread_sext_ln657_4_fu_1825_p1() {
    sext_ln657_4_fu_1825_p1 = esl_sext<130,129>(shl_ln_fu_1757_p3.read());
}

void pow_generic_double_s::thread_sf_fu_880_p4() {
    sf_fu_880_p4 = esl_concat<59,16>(esl_concat<5,54>(ap_const_lv5_10, mul_ln682_reg_2364_pp0_iter8_reg.read()), ap_const_lv16_0);
}

void pow_generic_double_s::thread_shl_ln685_1_fu_1015_p3() {
    shl_ln685_1_fu_1015_p3 = esl_concat<79,1>(r_V_25_reg_2421.read(), ap_const_lv1_0);
}

void pow_generic_double_s::thread_shl_ln_fu_1757_p3() {
    shl_ln_fu_1757_p3 = esl_concat<77,52>(tmp_1_reg_2723.read(), ap_const_lv52_0);
}

void pow_generic_double_s::thread_sub_ln685_fu_1026_p2() {
    sub_ln685_fu_1026_p2 = (!ret_V_4_fu_1009_p2.read().is_01() || !zext_ln685_fu_1022_p1.read().is_01())? sc_lv<82>(): (sc_biguint<82>(ret_V_4_fu_1009_p2.read()) - sc_biguint<82>(zext_ln685_fu_1022_p1.read()));
}

void pow_generic_double_s::thread_sum_V_fu_1658_p1() {
    sum_V_fu_1658_p1 = esl_sext<121,73>(trunc_ln662_1_reg_2707.read());
}

void pow_generic_double_s::thread_tmp_13_fu_2178_p4() {
    tmp_13_fu_2178_p4 = ret_V_22_fu_2148_p2.read().range(106, 49);
}

void pow_generic_double_s::thread_tmp_15_fu_873_p3() {
    tmp_15_fu_873_p3 = mul_ln682_reg_2364_pp0_iter8_reg.read().range(53, 53);
}

void pow_generic_double_s::thread_tmp_19_fu_2170_p3() {
    tmp_19_fu_2170_p3 = add_ln1146_7_fu_2154_p2.read().range(106, 106);
}

void pow_generic_double_s::thread_tmp_20_fu_2216_p4() {
    tmp_20_fu_2216_p4 = r_exp_V_2_fu_2209_p3.read().range(12, 10);
}

void pow_generic_double_s::thread_tmp_21_fu_2257_p3() {
    tmp_21_fu_2257_p3 = ret_V_16_reg_2713_pp0_iter64_reg.read().range(120, 120);
}

void pow_generic_double_s::thread_tmp_2_fu_889_p4() {
    tmp_2_fu_889_p4 = esl_concat<59,17>(esl_concat<5,54>(ap_const_lv5_10, mul_ln682_reg_2364_pp0_iter8_reg.read()), ap_const_lv17_0);
}

void pow_generic_double_s::thread_tmp_4_fu_768_p3() {
    tmp_4_fu_768_p3 = p_Val2_s_fu_618_p1.read().range(51, 51);
}

void pow_generic_double_s::thread_tmp_V_3_fu_630_p4() {
    tmp_V_3_fu_630_p4 = p_Val2_s_fu_618_p1.read().range(62, 52);
}

void pow_generic_double_s::thread_tmp_V_4_fu_640_p1() {
    tmp_V_4_fu_640_p1 = p_Val2_s_fu_618_p1.read().range(52-1, 0);
}

void pow_generic_double_s::thread_tmp_fu_1778_p4() {
    tmp_fu_1778_p4 = grp_fu_2291_p3.read().range(30, 18);
}

void pow_generic_double_s::thread_tmp_i_fu_1943_p4() {
    tmp_i_fu_1943_p4 = esl_concat<17,26>(esl_concat<8,9>(Z3_V_reg_2777_pp0_iter56_reg.read(), ap_const_lv9_0), p_Val2_71_reg_2803.read());
}

void pow_generic_double_s::thread_trunc_ln1146_fu_2117_p1() {
    trunc_ln1146_fu_2117_p1 = ret_V_21_fu_2111_p2.read().range(58-1, 0);
}

void pow_generic_double_s::thread_trunc_ln168_fu_2253_p1() {
    trunc_ln168_fu_2253_p1 = r_exp_V_2_fu_2209_p3.read().range(11-1, 0);
}

void pow_generic_double_s::thread_trunc_ln3_fu_2141_p3() {
    trunc_ln3_fu_2141_p3 = esl_concat<58,49>(trunc_ln1146_reg_2901.read(), ap_const_lv49_0);
}

void pow_generic_double_s::thread_trunc_ln657_1_fu_1042_p1() {
    trunc_ln657_1_fu_1042_p1 = sub_ln685_fu_1026_p2.read().range(76-1, 0);
}

void pow_generic_double_s::thread_trunc_ln657_fu_870_p1() {
    trunc_ln657_fu_870_p1 = mul_ln682_reg_2364_pp0_iter8_reg.read().range(50-1, 0);
}

void pow_generic_double_s::thread_trunc_ln662_s_fu_2160_p4() {
    trunc_ln662_s_fu_2160_p4 = ret_V_22_fu_2148_p2.read().range(107, 49);
}

void pow_generic_double_s::thread_trunc_ln805_fu_1794_p1() {
    trunc_ln805_fu_1794_p1 = grp_fu_2291_p3.read().range(18-1, 0);
}

void pow_generic_double_s::thread_x_is_n1_fu_684_p2() {
    x_is_n1_fu_684_p2 = (and_ln369_fu_666_p2.read() & p_Result_s_fu_622_p3.read());
}

void pow_generic_double_s::thread_x_is_p1_fu_678_p2() {
    x_is_p1_fu_678_p2 = (and_ln369_fu_666_p2.read() & xor_ln936_fu_672_p2.read());
}

void pow_generic_double_s::thread_xor_ln936_fu_672_p2() {
    xor_ln936_fu_672_p2 = (p_Result_s_fu_622_p3.read() ^ ap_const_lv1_1);
}

void pow_generic_double_s::thread_z1_V_fu_850_p3() {
    z1_V_fu_850_p3 = esl_concat<54,17>(mul_ln682_reg_2364.read(), ap_const_lv17_0);
}

void pow_generic_double_s::thread_zext_ln1070_fu_1589_p1() {
    zext_ln1070_fu_1589_p1 = esl_zext<80,40>(trunc_ln2_reg_2671.read());
}

void pow_generic_double_s::thread_zext_ln1146_fu_2138_p1() {
    zext_ln1146_fu_2138_p1 = esl_zext<107,100>(r_V_36_reg_2895.read());
}

void pow_generic_double_s::thread_zext_ln1287_fu_898_p1() {
    zext_ln1287_fu_898_p1 = esl_zext<76,75>(sf_fu_880_p4.read());
}

void pow_generic_double_s::thread_zext_ln157_1_fu_1548_p1() {
    zext_ln157_1_fu_1548_p1 = esl_zext<103,102>(pow_reduce_anonymo_17_q0.read());
}

void pow_generic_double_s::thread_zext_ln157_2_fu_1552_p1() {
    zext_ln157_2_fu_1552_p1 = esl_zext<103,97>(pow_reduce_anonymo_9_q0.read());
}

void pow_generic_double_s::thread_zext_ln157_3_fu_1556_p1() {
    zext_ln157_3_fu_1556_p1 = esl_zext<93,92>(p_Val2_32_reg_2651.read());
}

void pow_generic_double_s::thread_zext_ln157_4_fu_1559_p1() {
    zext_ln157_4_fu_1559_p1 = esl_zext<93,87>(p_Val2_39_reg_2656.read());
}

void pow_generic_double_s::thread_zext_ln157_5_fu_1465_p1() {
    zext_ln157_5_fu_1465_p1 = esl_zext<83,82>(pow_reduce_anonymo_14_q0.read());
}

void pow_generic_double_s::thread_zext_ln157_6_fu_1514_p1() {
    zext_ln157_6_fu_1514_p1 = esl_zext<83,77>(pow_reduce_anonymo_15_q0.read());
}

void pow_generic_double_s::thread_zext_ln157_fu_1544_p1() {
    zext_ln157_fu_1544_p1 = esl_zext<109,105>(pow_reduce_anonymo_16_q0.read());
}

void pow_generic_double_s::thread_zext_ln498_10_fu_1445_p1() {
    zext_ln498_10_fu_1445_p1 = esl_zext<64,6>(a_V_5_reg_2543_pp0_iter43_reg.read());
}

void pow_generic_double_s::thread_zext_ln498_11_fu_1449_p1() {
    zext_ln498_11_fu_1449_p1 = esl_zext<64,6>(a_V_6_reg_2580_pp0_iter43_reg.read());
}

void pow_generic_double_s::thread_zext_ln498_1_fu_1453_p1() {
    zext_ln498_1_fu_1453_p1 = esl_zext<64,4>(a_V_reg_2373_pp0_iter44_reg.read());
}

void pow_generic_double_s::thread_zext_ln498_2_fu_1457_p1() {
    zext_ln498_2_fu_1457_p1 = esl_zext<64,6>(a_V_1_reg_2400_pp0_iter44_reg.read());
}

void pow_generic_double_s::thread_zext_ln498_3_fu_2030_p1() {
    zext_ln498_3_fu_2030_p1 = esl_zext<64,8>(m_diff_hi_V_reg_2765_pp0_iter60_reg.read());
}

void pow_generic_double_s::thread_zext_ln498_4_fu_1461_p1() {
    zext_ln498_4_fu_1461_p1 = esl_zext<64,6>(a_V_2_reg_2432_pp0_iter44_reg.read());
}

void pow_generic_double_s::thread_zext_ln498_5_fu_1437_p1() {
    zext_ln498_5_fu_1437_p1 = esl_zext<64,6>(a_V_3_reg_2469_pp0_iter43_reg.read());
}

void pow_generic_double_s::thread_zext_ln498_6_fu_1441_p1() {
    zext_ln498_6_fu_1441_p1 = esl_zext<64,6>(a_V_4_reg_2506_pp0_iter43_reg.read());
}

void pow_generic_double_s::thread_zext_ln498_7_fu_1910_p1() {
    zext_ln498_7_fu_1910_p1 = esl_zext<64,8>(Z4_ind_V_fu_1900_p4.read());
}

void pow_generic_double_s::thread_zext_ln498_8_fu_1915_p1() {
    zext_ln498_8_fu_1915_p1 = esl_zext<64,8>(Z3_V_fu_1886_p4.read());
}

void pow_generic_double_s::thread_zext_ln498_9_fu_1974_p1() {
    zext_ln498_9_fu_1974_p1 = esl_zext<64,8>(Z2_V_reg_2770_pp0_iter57_reg.read());
}

void pow_generic_double_s::thread_zext_ln498_fu_800_p1() {
    zext_ln498_fu_800_p1 = esl_zext<64,6>(index0_V_fu_776_p4.read());
}

void pow_generic_double_s::thread_zext_ln502_fu_644_p1() {
    zext_ln502_fu_644_p1 = esl_zext<12,11>(tmp_V_3_fu_630_p4.read());
}

void pow_generic_double_s::thread_zext_ln657_11_fu_2135_p1() {
    zext_ln657_11_fu_2135_p1 = esl_zext<108,100>(r_V_36_reg_2895.read());
}

void pow_generic_double_s::thread_zext_ln657_1_fu_1580_p1() {
    zext_ln657_1_fu_1580_p1 = esl_zext<93,83>(add_ln657_4_reg_2661.read());
}

void pow_generic_double_s::thread_zext_ln657_2_fu_1616_p1() {
    zext_ln657_2_fu_1616_p1 = esl_zext<109,93>(add_ln657_5_reg_2686.read());
}

void pow_generic_double_s::thread_zext_ln657_3_fu_1636_p1() {
    zext_ln657_3_fu_1636_p1 = esl_zext<118,79>(lshr_ln_reg_2691.read());
}

void pow_generic_double_s::thread_zext_ln657_6_fu_1981_p1() {
    zext_ln657_6_fu_1981_p1 = esl_zext<36,20>(tmp_10_reg_2823.read());
}

void pow_generic_double_s::thread_zext_ln657_7_fu_1989_p1() {
    zext_ln657_7_fu_1989_p1 = esl_zext<44,36>(add_ln657_7_fu_1984_p2.read());
}

void pow_generic_double_s::thread_zext_ln657_8_fu_2058_p1() {
    zext_ln657_8_fu_2058_p1 = esl_zext<44,36>(tmp_12_reg_2860.read());
}

void pow_generic_double_s::thread_zext_ln657_9_fu_2066_p1() {
    zext_ln657_9_fu_2066_p1 = esl_zext<52,44>(add_ln657_9_fu_2061_p2.read());
}

void pow_generic_double_s::thread_zext_ln657_fu_1608_p1() {
    zext_ln657_fu_1608_p1 = esl_zext<109,103>(add_ln657_1_reg_2681.read());
}

void pow_generic_double_s::thread_zext_ln682_10_fu_1376_p1() {
    zext_ln682_10_fu_1376_p1 = esl_zext<132,109>(rhs_V_10_fu_1369_p3.read());
}

void pow_generic_double_s::thread_zext_ln682_11_fu_1483_p1() {
    zext_ln682_11_fu_1483_p1 = esl_zext<136,135>(lhs_V_11_fu_1476_p3.read());
}

void pow_generic_double_s::thread_zext_ln682_12_fu_1504_p1() {
    zext_ln682_12_fu_1504_p1 = esl_zext<136,109>(rhs_V_12_fu_1497_p3.read());
}

void pow_generic_double_s::thread_zext_ln682_13_fu_1632_p1() {
    zext_ln682_13_fu_1632_p1 = esl_zext<118,117>(lhs_V_12_fu_1625_p3.read());
}

void pow_generic_double_s::thread_zext_ln682_14_fu_2054_p1() {
    zext_ln682_14_fu_2054_p1 = esl_zext<52,51>(lhs_V_16_fu_2044_p5.read());
}

void pow_generic_double_s::thread_zext_ln682_1_fu_918_p1() {
    zext_ln682_1_fu_918_p1 = esl_zext<77,75>(lhs_V_fu_910_p3.read());
}

void pow_generic_double_s::thread_zext_ln682_2_fu_1001_p1() {
    zext_ln682_2_fu_1001_p1 = esl_zext<82,81>(lhs_V_2_fu_994_p3.read());
}

void pow_generic_double_s::thread_zext_ln682_3_fu_1069_p1() {
    zext_ln682_3_fu_1069_p1 = esl_zext<102,101>(lhs_V_3_fu_1062_p3.read());
}

void pow_generic_double_s::thread_zext_ln682_4_fu_1106_p1() {
    zext_ln682_4_fu_1106_p1 = esl_zext<103,95>(rhs_V_4_fu_1099_p3.read());
}

void pow_generic_double_s::thread_zext_ln682_5_fu_1160_p1() {
    zext_ln682_5_fu_1160_p1 = esl_zext<121,120>(lhs_V_5_fu_1153_p3.read());
}

void pow_generic_double_s::thread_zext_ln682_6_fu_1196_p1() {
    zext_ln682_6_fu_1196_p1 = esl_zext<122,109>(rhs_V_6_fu_1189_p3.read());
}

void pow_generic_double_s::thread_zext_ln682_7_fu_1250_p1() {
    zext_ln682_7_fu_1250_p1 = esl_zext<126,125>(lhs_V_7_fu_1243_p3.read());
}

void pow_generic_double_s::thread_zext_ln682_8_fu_1286_p1() {
    zext_ln682_8_fu_1286_p1 = esl_zext<127,109>(rhs_V_8_fu_1279_p3.read());
}

void pow_generic_double_s::thread_zext_ln682_9_fu_1340_p1() {
    zext_ln682_9_fu_1340_p1 = esl_zext<131,130>(lhs_V_9_fu_1333_p3.read());
}

void pow_generic_double_s::thread_zext_ln685_fu_1022_p1() {
    zext_ln685_fu_1022_p1 = esl_zext<82,80>(shl_ln685_1_fu_1015_p3.read());
}

}

