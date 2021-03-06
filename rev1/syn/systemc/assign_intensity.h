// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _assign_intensity_HH_
#define _assign_intensity_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "assign_intensity_fadd_32ns_32ns_32_7_full_dsp.h"
#include "assign_intensity_fmul_32ns_32ns_32_4_max_dsp.h"
#include "assign_intensity_fdiv_32ns_32ns_32_16.h"
#include "assign_intensity_uitofp_64ns_32_6.h"
#include "assign_intensity_mul_48s_32ns_48_6.h"
#include "assign_intensity_mul_36ns_48ns_52_6.h"

namespace ap_rtl {

struct assign_intensity : public sc_module {
    // Port declarations 24
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<4> > alphabuf_address0;
    sc_out< sc_logic > alphabuf_ce0;
    sc_in< sc_lv<32> > alphabuf_q0;
    sc_out< sc_lv<4> > alphabuf_address1;
    sc_out< sc_logic > alphabuf_ce1;
    sc_in< sc_lv<32> > alphabuf_q1;
    sc_in< sc_lv<16> > intensity;
    sc_out< sc_lv<4> > node_output_address0;
    sc_out< sc_logic > node_output_ce0;
    sc_out< sc_logic > node_output_we0;
    sc_out< sc_lv<32> > node_output_d0;
    sc_in< sc_lv<32> > node_output_q0;
    sc_out< sc_lv<4> > node_count_address0;
    sc_out< sc_logic > node_count_ce0;
    sc_out< sc_logic > node_count_we0;
    sc_out< sc_lv<32> > node_count_d0;
    sc_in< sc_lv<32> > node_count_q0;
    sc_out< sc_lv<32> > ap_return;
    sc_signal< sc_logic > ap_var_for_const1;
    sc_signal< sc_lv<32> > ap_var_for_const0;
    sc_signal< sc_lv<32> > ap_var_for_const2;
    sc_signal< sc_lv<32> > ap_var_for_const3;


    // Module declarations
    assign_intensity(sc_module_name name);
    SC_HAS_PROCESS(assign_intensity);

    ~assign_intensity();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    assign_intensity_fadd_32ns_32ns_32_7_full_dsp<1,7,32,32,32>* assign_intensity_fadd_32ns_32ns_32_7_full_dsp_U0;
    assign_intensity_fmul_32ns_32ns_32_4_max_dsp<1,4,32,32,32>* assign_intensity_fmul_32ns_32ns_32_4_max_dsp_U1;
    assign_intensity_fdiv_32ns_32ns_32_16<1,16,32,32,32>* assign_intensity_fdiv_32ns_32ns_32_16_U2;
    assign_intensity_uitofp_64ns_32_6<1,6,64,32>* assign_intensity_uitofp_64ns_32_6_U3;
    assign_intensity_mul_48s_32ns_48_6<1,6,48,32,48>* assign_intensity_mul_48s_32ns_48_6_U4;
    assign_intensity_mul_36ns_48ns_52_6<1,6,36,48,52>* assign_intensity_mul_36ns_48ns_52_6_U5;
    sc_signal< sc_lv<62> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_77;
    sc_signal< sc_lv<32> > reg_361;
    sc_signal< sc_logic > ap_sig_cseq_ST_st2_fsm_1;
    sc_signal< bool > ap_sig_117;
    sc_signal< sc_logic > ap_sig_cseq_ST_st4_fsm_3;
    sc_signal< bool > ap_sig_124;
    sc_signal< sc_logic > ap_sig_cseq_ST_st6_fsm_5;
    sc_signal< bool > ap_sig_132;
    sc_signal< sc_logic > ap_sig_cseq_ST_st8_fsm_7;
    sc_signal< bool > ap_sig_140;
    sc_signal< sc_logic > ap_sig_cseq_ST_st49_fsm_48;
    sc_signal< bool > ap_sig_148;
    sc_signal< sc_lv<32> > reg_365;
    sc_signal< sc_lv<32> > grp_fu_355_p2;
    sc_signal< sc_lv<32> > reg_369;
    sc_signal< sc_logic > ap_sig_cseq_ST_st3_fsm_2;
    sc_signal< bool > ap_sig_159;
    sc_signal< sc_logic > ap_sig_cseq_ST_st5_fsm_4;
    sc_signal< bool > ap_sig_166;
    sc_signal< sc_logic > ap_sig_cseq_ST_st7_fsm_6;
    sc_signal< bool > ap_sig_174;
    sc_signal< sc_logic > ap_sig_cseq_ST_st9_fsm_8;
    sc_signal< bool > ap_sig_182;
    sc_signal< sc_lv<32> > grp_fu_379_p2;
    sc_signal< sc_lv<32> > val_assign_reg_693;
    sc_signal< sc_lv<32> > val_assign_1_reg_718;
    sc_signal< sc_lv<33> > tmp_fu_392_p2;
    sc_signal< sc_lv<33> > tmp_reg_743;
    sc_signal< sc_lv<33> > tmp9_fu_405_p2;
    sc_signal< sc_lv<33> > tmp9_reg_748;
    sc_signal< sc_logic > ap_sig_cseq_ST_st10_fsm_9;
    sc_signal< bool > ap_sig_232;
    sc_signal< sc_logic > ap_sig_cseq_ST_st11_fsm_10;
    sc_signal< bool > ap_sig_241;
    sc_signal< sc_lv<34> > cumsum_V_fu_417_p2;
    sc_signal< sc_lv<34> > cumsum_V_reg_758;
    sc_signal< sc_lv<1> > tmp_i_fu_423_p2;
    sc_signal< sc_lv<1> > tmp_i_reg_763;
    sc_signal< sc_logic > ap_sig_cseq_ST_st12_fsm_11;
    sc_signal< bool > ap_sig_254;
    sc_signal< sc_lv<32> > grp_fu_352_p1;
    sc_signal< sc_lv<32> > tmp_1_i_reg_772;
    sc_signal< sc_logic > ap_sig_cseq_ST_st17_fsm_16;
    sc_signal< bool > ap_sig_263;
    sc_signal< sc_lv<32> > grp_fu_347_p2;
    sc_signal< sc_lv<32> > tmp_2_i_reg_777;
    sc_signal< sc_logic > ap_sig_cseq_ST_st33_fsm_32;
    sc_signal< bool > ap_sig_272;
    sc_signal< sc_lv<32> > grp_fu_342_p2;
    sc_signal< sc_lv<32> > tmp_3_i_reg_782;
    sc_signal< sc_logic > ap_sig_cseq_ST_st37_fsm_36;
    sc_signal< bool > ap_sig_281;
    sc_signal< sc_lv<8> > loc_V_reg_787;
    sc_signal< sc_logic > ap_sig_cseq_ST_st44_fsm_43;
    sc_signal< bool > ap_sig_290;
    sc_signal< sc_lv<23> > loc_V_1_fu_447_p1;
    sc_signal< sc_lv<23> > loc_V_1_reg_793;
    sc_signal< sc_lv<1> > isNeg_fu_460_p3;
    sc_signal< sc_lv<1> > isNeg_reg_798;
    sc_signal< sc_logic > ap_sig_cseq_ST_st45_fsm_44;
    sc_signal< bool > ap_sig_301;
    sc_signal< sc_lv<9> > sh_assign_1_fu_477_p3;
    sc_signal< sc_lv<9> > sh_assign_1_reg_803;
    sc_signal< sc_lv<52> > rhs_V_cast_fu_555_p1;
    sc_signal< sc_lv<52> > rhs_V_cast_reg_809;
    sc_signal< sc_logic > ap_sig_cseq_ST_st46_fsm_45;
    sc_signal< bool > ap_sig_312;
    sc_signal< sc_lv<3> > i_1_fu_565_p2;
    sc_signal< sc_lv<3> > i_1_reg_817;
    sc_signal< sc_logic > ap_sig_cseq_ST_st47_fsm_46;
    sc_signal< bool > ap_sig_321;
    sc_signal< sc_lv<6> > tmp_12_cast_fu_579_p1;
    sc_signal< sc_lv<6> > tmp_12_cast_reg_822;
    sc_signal< sc_lv<1> > exitcond1_fu_559_p2;
    sc_signal< sc_lv<3> > j_1_fu_589_p2;
    sc_signal< sc_lv<3> > j_1_reg_830;
    sc_signal< sc_logic > ap_sig_cseq_ST_st48_fsm_47;
    sc_signal< bool > ap_sig_336;
    sc_signal< sc_lv<1> > exitcond_fu_583_p2;
    sc_signal< sc_lv<4> > node_output_addr_reg_840;
    sc_signal< sc_lv<4> > node_count_addr_reg_845;
    sc_signal< sc_logic > ap_sig_cseq_ST_st50_fsm_49;
    sc_signal< bool > ap_sig_354;
    sc_signal< sc_lv<48> > grp_fu_615_p2;
    sc_signal< sc_lv<48> > alpha_norm_V_reg_855;
    sc_signal< sc_logic > ap_sig_cseq_ST_st55_fsm_54;
    sc_signal< bool > ap_sig_363;
    sc_signal< sc_lv<32> > tmp_10_fu_621_p1;
    sc_signal< sc_lv<32> > tmp_10_reg_860;
    sc_signal< sc_lv<32> > node_count_load_reg_865;
    sc_signal< sc_logic > ap_sig_cseq_ST_st56_fsm_55;
    sc_signal< bool > ap_sig_375;
    sc_signal< sc_lv<32> > phitmp_reg_875;
    sc_signal< sc_logic > ap_sig_cseq_ST_st61_fsm_60;
    sc_signal< bool > ap_sig_384;
    sc_signal< sc_lv<32> > node_output_load_reg_880;
    sc_signal< sc_lv<48> > tmp_s_fu_540_p3;
    sc_signal< sc_lv<48> > rec_V_reg_303;
    sc_signal< sc_lv<3> > i_reg_315;
    sc_signal< sc_lv<3> > j_reg_326;
    sc_signal< sc_logic > ap_sig_cseq_ST_st62_fsm_61;
    sc_signal< bool > ap_sig_408;
    sc_signal< sc_lv<64> > tmp_13_cast_fu_604_p1;
    sc_signal< sc_logic > ap_sig_cseq_ST_st54_fsm_53;
    sc_signal< bool > ap_sig_440;
    sc_signal< sc_logic > ap_sig_cseq_ST_st60_fsm_59;
    sc_signal< bool > ap_sig_450;
    sc_signal< sc_logic > ap_sig_cseq_ST_st38_fsm_37;
    sc_signal< bool > ap_sig_463;
    sc_signal< sc_logic > ap_sig_cseq_ST_st34_fsm_33;
    sc_signal< bool > ap_sig_473;
    sc_signal< sc_logic > ap_sig_cseq_ST_st18_fsm_17;
    sc_signal< bool > ap_sig_483;
    sc_signal< sc_lv<64> > grp_fu_352_p0;
    sc_signal< sc_lv<32> > grp_fu_373_p2;
    sc_signal< sc_lv<33> > cumsum_V_cast_fu_385_p1;
    sc_signal< sc_lv<33> > tmp_3_cast_fu_388_p1;
    sc_signal< sc_lv<33> > tmp_8_cast_fu_398_p1;
    sc_signal< sc_lv<33> > tmp_10_cast_fu_401_p1;
    sc_signal< sc_lv<34> > tmp11_cast_fu_414_p1;
    sc_signal< sc_lv<34> > tmp10_cast_fu_411_p1;
    sc_signal< sc_lv<32> > grp_fu_337_p2;
    sc_signal< sc_lv<32> > p_Val2_s_fu_433_p1;
    sc_signal< sc_lv<9> > tmp_i_i_i_i_cast_fu_451_p1;
    sc_signal< sc_lv<9> > sh_assign_fu_454_p2;
    sc_signal< sc_lv<8> > tmp_4_i_i_i_fu_468_p2;
    sc_signal< sc_lv<9> > tmp_4_i_i_i_cast_fu_473_p1;
    sc_signal< sc_lv<24> > p_Result_s_fu_485_p3;
    sc_signal< sc_lv<32> > sh_assign_1_cast_fu_496_p1;
    sc_signal< sc_lv<24> > sh_assign_1_cast_cast_fu_499_p1;
    sc_signal< sc_lv<110> > tmp_2_i_i_i_fu_492_p1;
    sc_signal< sc_lv<110> > tmp_6_i_i_i_fu_502_p1;
    sc_signal< sc_lv<24> > tmp_7_i_i_i_fu_506_p2;
    sc_signal< sc_lv<1> > tmp_6_fu_518_p3;
    sc_signal< sc_lv<110> > tmp_9_i_i_i_fu_512_p2;
    sc_signal< sc_lv<48> > tmp_8_fu_526_p1;
    sc_signal< sc_lv<48> > tmp_9_fu_530_p4;
    sc_signal< sc_lv<36> > r_V_2_fu_548_p3;
    sc_signal< sc_lv<5> > tmp_2_fu_571_p3;
    sc_signal< sc_lv<6> > tmp_2_cast_fu_595_p1;
    sc_signal< sc_lv<6> > tmp_4_fu_599_p2;
    sc_signal< sc_lv<32> > grp_fu_615_p1;
    sc_signal< sc_lv<36> > grp_fu_633_p0;
    sc_signal< sc_lv<48> > grp_fu_633_p1;
    sc_signal< sc_lv<52> > grp_fu_633_p2;
    sc_signal< sc_lv<62> > ap_NS_fsm;
    sc_signal< sc_lv<48> > grp_fu_615_p10;
    sc_signal< sc_lv<52> > grp_fu_633_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<62> ap_ST_st1_fsm_0;
    static const sc_lv<62> ap_ST_st2_fsm_1;
    static const sc_lv<62> ap_ST_st3_fsm_2;
    static const sc_lv<62> ap_ST_st4_fsm_3;
    static const sc_lv<62> ap_ST_st5_fsm_4;
    static const sc_lv<62> ap_ST_st6_fsm_5;
    static const sc_lv<62> ap_ST_st7_fsm_6;
    static const sc_lv<62> ap_ST_st8_fsm_7;
    static const sc_lv<62> ap_ST_st9_fsm_8;
    static const sc_lv<62> ap_ST_st10_fsm_9;
    static const sc_lv<62> ap_ST_st11_fsm_10;
    static const sc_lv<62> ap_ST_st12_fsm_11;
    static const sc_lv<62> ap_ST_st13_fsm_12;
    static const sc_lv<62> ap_ST_st14_fsm_13;
    static const sc_lv<62> ap_ST_st15_fsm_14;
    static const sc_lv<62> ap_ST_st16_fsm_15;
    static const sc_lv<62> ap_ST_st17_fsm_16;
    static const sc_lv<62> ap_ST_st18_fsm_17;
    static const sc_lv<62> ap_ST_st19_fsm_18;
    static const sc_lv<62> ap_ST_st20_fsm_19;
    static const sc_lv<62> ap_ST_st21_fsm_20;
    static const sc_lv<62> ap_ST_st22_fsm_21;
    static const sc_lv<62> ap_ST_st23_fsm_22;
    static const sc_lv<62> ap_ST_st24_fsm_23;
    static const sc_lv<62> ap_ST_st25_fsm_24;
    static const sc_lv<62> ap_ST_st26_fsm_25;
    static const sc_lv<62> ap_ST_st27_fsm_26;
    static const sc_lv<62> ap_ST_st28_fsm_27;
    static const sc_lv<62> ap_ST_st29_fsm_28;
    static const sc_lv<62> ap_ST_st30_fsm_29;
    static const sc_lv<62> ap_ST_st31_fsm_30;
    static const sc_lv<62> ap_ST_st32_fsm_31;
    static const sc_lv<62> ap_ST_st33_fsm_32;
    static const sc_lv<62> ap_ST_st34_fsm_33;
    static const sc_lv<62> ap_ST_st35_fsm_34;
    static const sc_lv<62> ap_ST_st36_fsm_35;
    static const sc_lv<62> ap_ST_st37_fsm_36;
    static const sc_lv<62> ap_ST_st38_fsm_37;
    static const sc_lv<62> ap_ST_st39_fsm_38;
    static const sc_lv<62> ap_ST_st40_fsm_39;
    static const sc_lv<62> ap_ST_st41_fsm_40;
    static const sc_lv<62> ap_ST_st42_fsm_41;
    static const sc_lv<62> ap_ST_st43_fsm_42;
    static const sc_lv<62> ap_ST_st44_fsm_43;
    static const sc_lv<62> ap_ST_st45_fsm_44;
    static const sc_lv<62> ap_ST_st46_fsm_45;
    static const sc_lv<62> ap_ST_st47_fsm_46;
    static const sc_lv<62> ap_ST_st48_fsm_47;
    static const sc_lv<62> ap_ST_st49_fsm_48;
    static const sc_lv<62> ap_ST_st50_fsm_49;
    static const sc_lv<62> ap_ST_st51_fsm_50;
    static const sc_lv<62> ap_ST_st52_fsm_51;
    static const sc_lv<62> ap_ST_st53_fsm_52;
    static const sc_lv<62> ap_ST_st54_fsm_53;
    static const sc_lv<62> ap_ST_st55_fsm_54;
    static const sc_lv<62> ap_ST_st56_fsm_55;
    static const sc_lv<62> ap_ST_st57_fsm_56;
    static const sc_lv<62> ap_ST_st58_fsm_57;
    static const sc_lv<62> ap_ST_st59_fsm_58;
    static const sc_lv<62> ap_ST_st60_fsm_59;
    static const sc_lv<62> ap_ST_st61_fsm_60;
    static const sc_lv<62> ap_ST_st62_fsm_61;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_30;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_24;
    static const sc_lv<32> ap_const_lv32_2B;
    static const sc_lv<32> ap_const_lv32_2C;
    static const sc_lv<32> ap_const_lv32_2D;
    static const sc_lv<32> ap_const_lv32_2E;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<32> ap_const_lv32_31;
    static const sc_lv<32> ap_const_lv32_36;
    static const sc_lv<32> ap_const_lv32_37;
    static const sc_lv<32> ap_const_lv32_3C;
    static const sc_lv<48> ap_const_lv48_FFFFFFFFFFFF;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_3D;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<64> ap_const_lv64_2;
    static const sc_lv<64> ap_const_lv64_3;
    static const sc_lv<64> ap_const_lv64_4;
    static const sc_lv<64> ap_const_lv64_5;
    static const sc_lv<64> ap_const_lv64_6;
    static const sc_lv<64> ap_const_lv64_7;
    static const sc_lv<64> ap_const_lv64_8;
    static const sc_lv<64> ap_const_lv64_9;
    static const sc_lv<64> ap_const_lv64_A;
    static const sc_lv<64> ap_const_lv64_B;
    static const sc_lv<64> ap_const_lv64_C;
    static const sc_lv<64> ap_const_lv64_D;
    static const sc_lv<64> ap_const_lv64_E;
    static const sc_lv<64> ap_const_lv64_F;
    static const sc_lv<32> ap_const_lv32_35;
    static const sc_lv<32> ap_const_lv32_3B;
    static const sc_lv<32> ap_const_lv32_3F000000;
    static const sc_lv<32> ap_const_lv32_25;
    static const sc_lv<32> ap_const_lv32_49800000;
    static const sc_lv<32> ap_const_lv32_21;
    static const sc_lv<32> ap_const_lv32_3F800000;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<34> ap_const_lv34_0;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<9> ap_const_lv9_181;
    static const sc_lv<8> ap_const_lv8_7F;
    static const sc_lv<32> ap_const_lv32_46;
    static const sc_lv<20> ap_const_lv20_0;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_33;
    // Thread declarations
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const2();
    void thread_ap_var_for_const3();
    void thread_ap_clk_no_reset_();
    void thread_alphabuf_address0();
    void thread_alphabuf_address1();
    void thread_alphabuf_ce0();
    void thread_alphabuf_ce1();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_ap_sig_117();
    void thread_ap_sig_124();
    void thread_ap_sig_132();
    void thread_ap_sig_140();
    void thread_ap_sig_148();
    void thread_ap_sig_159();
    void thread_ap_sig_166();
    void thread_ap_sig_174();
    void thread_ap_sig_182();
    void thread_ap_sig_232();
    void thread_ap_sig_241();
    void thread_ap_sig_254();
    void thread_ap_sig_263();
    void thread_ap_sig_272();
    void thread_ap_sig_281();
    void thread_ap_sig_290();
    void thread_ap_sig_301();
    void thread_ap_sig_312();
    void thread_ap_sig_321();
    void thread_ap_sig_336();
    void thread_ap_sig_354();
    void thread_ap_sig_363();
    void thread_ap_sig_375();
    void thread_ap_sig_384();
    void thread_ap_sig_408();
    void thread_ap_sig_440();
    void thread_ap_sig_450();
    void thread_ap_sig_463();
    void thread_ap_sig_473();
    void thread_ap_sig_483();
    void thread_ap_sig_77();
    void thread_ap_sig_cseq_ST_st10_fsm_9();
    void thread_ap_sig_cseq_ST_st11_fsm_10();
    void thread_ap_sig_cseq_ST_st12_fsm_11();
    void thread_ap_sig_cseq_ST_st17_fsm_16();
    void thread_ap_sig_cseq_ST_st18_fsm_17();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st2_fsm_1();
    void thread_ap_sig_cseq_ST_st33_fsm_32();
    void thread_ap_sig_cseq_ST_st34_fsm_33();
    void thread_ap_sig_cseq_ST_st37_fsm_36();
    void thread_ap_sig_cseq_ST_st38_fsm_37();
    void thread_ap_sig_cseq_ST_st3_fsm_2();
    void thread_ap_sig_cseq_ST_st44_fsm_43();
    void thread_ap_sig_cseq_ST_st45_fsm_44();
    void thread_ap_sig_cseq_ST_st46_fsm_45();
    void thread_ap_sig_cseq_ST_st47_fsm_46();
    void thread_ap_sig_cseq_ST_st48_fsm_47();
    void thread_ap_sig_cseq_ST_st49_fsm_48();
    void thread_ap_sig_cseq_ST_st4_fsm_3();
    void thread_ap_sig_cseq_ST_st50_fsm_49();
    void thread_ap_sig_cseq_ST_st54_fsm_53();
    void thread_ap_sig_cseq_ST_st55_fsm_54();
    void thread_ap_sig_cseq_ST_st56_fsm_55();
    void thread_ap_sig_cseq_ST_st5_fsm_4();
    void thread_ap_sig_cseq_ST_st60_fsm_59();
    void thread_ap_sig_cseq_ST_st61_fsm_60();
    void thread_ap_sig_cseq_ST_st62_fsm_61();
    void thread_ap_sig_cseq_ST_st6_fsm_5();
    void thread_ap_sig_cseq_ST_st7_fsm_6();
    void thread_ap_sig_cseq_ST_st8_fsm_7();
    void thread_ap_sig_cseq_ST_st9_fsm_8();
    void thread_cumsum_V_cast_fu_385_p1();
    void thread_cumsum_V_fu_417_p2();
    void thread_exitcond1_fu_559_p2();
    void thread_exitcond_fu_583_p2();
    void thread_grp_fu_352_p0();
    void thread_grp_fu_355_p2();
    void thread_grp_fu_373_p2();
    void thread_grp_fu_379_p2();
    void thread_grp_fu_615_p1();
    void thread_grp_fu_615_p10();
    void thread_grp_fu_633_p0();
    void thread_grp_fu_633_p1();
    void thread_grp_fu_633_p10();
    void thread_i_1_fu_565_p2();
    void thread_isNeg_fu_460_p3();
    void thread_j_1_fu_589_p2();
    void thread_loc_V_1_fu_447_p1();
    void thread_node_count_address0();
    void thread_node_count_ce0();
    void thread_node_count_d0();
    void thread_node_count_we0();
    void thread_node_output_address0();
    void thread_node_output_ce0();
    void thread_node_output_d0();
    void thread_node_output_we0();
    void thread_p_Result_s_fu_485_p3();
    void thread_p_Val2_s_fu_433_p1();
    void thread_r_V_2_fu_548_p3();
    void thread_rhs_V_cast_fu_555_p1();
    void thread_sh_assign_1_cast_cast_fu_499_p1();
    void thread_sh_assign_1_cast_fu_496_p1();
    void thread_sh_assign_1_fu_477_p3();
    void thread_sh_assign_fu_454_p2();
    void thread_tmp10_cast_fu_411_p1();
    void thread_tmp11_cast_fu_414_p1();
    void thread_tmp9_fu_405_p2();
    void thread_tmp_10_cast_fu_401_p1();
    void thread_tmp_10_fu_621_p1();
    void thread_tmp_12_cast_fu_579_p1();
    void thread_tmp_13_cast_fu_604_p1();
    void thread_tmp_2_cast_fu_595_p1();
    void thread_tmp_2_fu_571_p3();
    void thread_tmp_2_i_i_i_fu_492_p1();
    void thread_tmp_3_cast_fu_388_p1();
    void thread_tmp_4_fu_599_p2();
    void thread_tmp_4_i_i_i_cast_fu_473_p1();
    void thread_tmp_4_i_i_i_fu_468_p2();
    void thread_tmp_6_fu_518_p3();
    void thread_tmp_6_i_i_i_fu_502_p1();
    void thread_tmp_7_i_i_i_fu_506_p2();
    void thread_tmp_8_cast_fu_398_p1();
    void thread_tmp_8_fu_526_p1();
    void thread_tmp_9_fu_530_p4();
    void thread_tmp_9_i_i_i_fu_512_p2();
    void thread_tmp_fu_392_p2();
    void thread_tmp_i_fu_423_p2();
    void thread_tmp_i_i_i_i_cast_fu_451_p1();
    void thread_tmp_s_fu_540_p3();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
