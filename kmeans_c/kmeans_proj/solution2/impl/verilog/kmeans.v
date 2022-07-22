// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="kmeans,hls_ip_2020_1,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020-clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=6.320063,HLS_SYN_LAT=432,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=728,HLS_SYN_LUT=1172,HLS_VERSION=2020_1}" *)

module kmeans (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        centroids_x_V_address0,
        centroids_x_V_ce0,
        centroids_x_V_we0,
        centroids_x_V_d0,
        centroids_x_V_q0,
        centroids_x_V_address1,
        centroids_x_V_ce1,
        centroids_x_V_we1,
        centroids_x_V_d1,
        centroids_x_V_q1,
        centroids_y_V_address0,
        centroids_y_V_ce0,
        centroids_y_V_we0,
        centroids_y_V_d0,
        centroids_y_V_q0,
        centroids_y_V_address1,
        centroids_y_V_ce1,
        centroids_y_V_we1,
        centroids_y_V_d1,
        centroids_y_V_q1
);

parameter    ap_ST_fsm_state1 = 31'd1;
parameter    ap_ST_fsm_state2 = 31'd2;
parameter    ap_ST_fsm_state3 = 31'd4;
parameter    ap_ST_fsm_state4 = 31'd8;
parameter    ap_ST_fsm_state5 = 31'd16;
parameter    ap_ST_fsm_state6 = 31'd32;
parameter    ap_ST_fsm_state7 = 31'd64;
parameter    ap_ST_fsm_state8 = 31'd128;
parameter    ap_ST_fsm_state9 = 31'd256;
parameter    ap_ST_fsm_state10 = 31'd512;
parameter    ap_ST_fsm_state11 = 31'd1024;
parameter    ap_ST_fsm_state12 = 31'd2048;
parameter    ap_ST_fsm_state13 = 31'd4096;
parameter    ap_ST_fsm_state14 = 31'd8192;
parameter    ap_ST_fsm_state15 = 31'd16384;
parameter    ap_ST_fsm_state16 = 31'd32768;
parameter    ap_ST_fsm_state17 = 31'd65536;
parameter    ap_ST_fsm_state18 = 31'd131072;
parameter    ap_ST_fsm_state19 = 31'd262144;
parameter    ap_ST_fsm_state20 = 31'd524288;
parameter    ap_ST_fsm_state21 = 31'd1048576;
parameter    ap_ST_fsm_state22 = 31'd2097152;
parameter    ap_ST_fsm_state23 = 31'd4194304;
parameter    ap_ST_fsm_state24 = 31'd8388608;
parameter    ap_ST_fsm_state25 = 31'd16777216;
parameter    ap_ST_fsm_state26 = 31'd33554432;
parameter    ap_ST_fsm_state27 = 31'd67108864;
parameter    ap_ST_fsm_state28 = 31'd134217728;
parameter    ap_ST_fsm_state29 = 31'd268435456;
parameter    ap_ST_fsm_state30 = 31'd536870912;
parameter    ap_ST_fsm_state31 = 31'd1073741824;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [0:0] centroids_x_V_address0;
output   centroids_x_V_ce0;
output   centroids_x_V_we0;
output  [16:0] centroids_x_V_d0;
input  [16:0] centroids_x_V_q0;
output  [0:0] centroids_x_V_address1;
output   centroids_x_V_ce1;
output   centroids_x_V_we1;
output  [16:0] centroids_x_V_d1;
input  [16:0] centroids_x_V_q1;
output  [0:0] centroids_y_V_address0;
output   centroids_y_V_ce0;
output   centroids_y_V_we0;
output  [16:0] centroids_y_V_d0;
input  [16:0] centroids_y_V_q0;
output  [0:0] centroids_y_V_address1;
output   centroids_y_V_ce1;
output   centroids_y_V_we1;
output  [16:0] centroids_y_V_d1;
input  [16:0] centroids_y_V_q1;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[0:0] centroids_x_V_address0;
reg centroids_x_V_ce0;
reg centroids_x_V_we0;
reg[0:0] centroids_x_V_address1;
reg centroids_x_V_ce1;
reg centroids_x_V_we1;
reg[0:0] centroids_y_V_address0;
reg centroids_y_V_ce0;
reg centroids_y_V_we0;
reg[0:0] centroids_y_V_address1;
reg centroids_y_V_ce1;
reg centroids_y_V_we1;

(* fsm_encoding = "none" *) reg   [30:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [5:0] x_data_V_address0;
reg    x_data_V_ce0;
wire   [12:0] x_data_V_q0;
reg   [5:0] y_data_V_address0;
reg    y_data_V_ce0;
wire   [12:0] y_data_V_q0;
wire   [1:0] i_fu_262_p2;
wire    ap_CS_fsm_state2;
reg   [16:0] p_Val2_3_reg_586;
wire    ap_CS_fsm_state3;
reg   [16:0] p_Val2_5_reg_591;
reg   [16:0] centroids_x_V_load_reg_596;
reg   [16:0] centroids_y_V_load_reg_601;
wire   [5:0] i_3_fu_298_p2;
reg   [5:0] i_3_reg_609;
wire    ap_CS_fsm_state4;
wire   [63:0] zext_ln31_fu_304_p1;
reg   [63:0] zext_ln31_reg_614;
wire   [0:0] icmp_ln30_fu_292_p2;
reg   [12:0] p_Val2_2_reg_629;
wire    ap_CS_fsm_state5;
reg   [12:0] p_Val2_4_reg_634;
wire   [16:0] min_distance_V_fu_370_p2;
reg   [16:0] min_distance_V_reg_639;
wire    ap_CS_fsm_state6;
wire   [16:0] add_ln703_fu_430_p2;
reg   [16:0] add_ln703_reg_644;
wire   [1:0] i_4_fu_447_p2;
reg   [1:0] i_4_reg_652;
wire    ap_CS_fsm_state8;
wire   [5:0] j_fu_459_p2;
reg   [5:0] j_reg_660;
wire    ap_CS_fsm_state9;
wire   [0:0] icmp_ln49_fu_453_p2;
wire   [0:0] icmp_ln57_fu_472_p2;
reg   [0:0] icmp_ln57_reg_680;
wire   [17:0] zext_ln1148_fu_482_p1;
wire   [16:0] mean_value_x_V_1_fu_538_p3;
wire    ap_CS_fsm_state10;
wire   [16:0] mean_value_y_V_1_fu_546_p3;
wire   [15:0] count_1_fu_554_p3;
reg   [5:0] data_cluster_id_address0;
reg    data_cluster_id_ce0;
reg    data_cluster_id_we0;
wire   [0:0] data_cluster_id_d0;
wire   [0:0] data_cluster_id_q0;
reg   [1:0] p_Val2_1_reg_175;
wire   [0:0] icmp_ln19_fu_256_p2;
reg   [5:0] i_1_reg_186;
wire    ap_CS_fsm_state7;
reg   [1:0] i_2_reg_197;
wire    ap_CS_fsm_state31;
reg  signed [16:0] p_Val2_s_reg_209;
wire   [0:0] icmp_ln44_fu_441_p2;
reg  signed [16:0] p_Val2_11_reg_221;
reg   [5:0] j_1_reg_233;
reg   [15:0] tmp_V_reg_244;
wire   [63:0] zext_ln20_fu_268_p1;
wire   [63:0] zext_ln50_fu_465_p1;
wire   [63:0] zext_ln58_fu_562_p1;
wire   [16:0] zext_ln728_fu_286_p1;
wire   [0:0] trunc_ln728_fu_274_p1;
wire   [10:0] shl_ln_fu_278_p3;
wire  signed [16:0] sext_ln1265_fu_310_p1;
wire   [16:0] sub_ln703_fu_313_p2;
wire   [0:0] tmp_fu_318_p3;
wire   [16:0] sub_ln703_4_fu_326_p2;
wire  signed [16:0] sext_ln1265_1_fu_340_p1;
wire   [16:0] sub_ln703_1_fu_343_p2;
wire   [0:0] tmp_1_fu_348_p3;
wire   [16:0] sub_ln703_5_fu_356_p2;
wire   [16:0] p_Val2_7_fu_362_p3;
wire   [16:0] p_Val2_6_fu_332_p3;
wire   [16:0] sub_ln703_2_fu_376_p2;
wire   [0:0] tmp_2_fu_381_p3;
wire   [16:0] sub_ln703_6_fu_389_p2;
wire   [16:0] sub_ln703_3_fu_403_p2;
wire   [0:0] tmp_3_fu_408_p3;
wire   [16:0] sub_ln703_7_fu_416_p2;
wire   [16:0] select_ln4_2_fu_422_p3;
wire   [16:0] select_ln4_fu_395_p3;
wire  signed [17:0] grp_fu_486_p0;
wire   [16:0] grp_fu_486_p1;
wire  signed [17:0] grp_fu_496_p0;
wire   [16:0] grp_fu_496_p1;
wire   [1:0] zext_ln50_1_fu_502_p1;
wire  signed [16:0] sext_ln1265_2_fu_512_p1;
wire  signed [16:0] sext_ln1265_3_fu_522_p1;
wire   [0:0] icmp_ln50_fu_506_p2;
wire   [16:0] mean_value_x_V_fu_516_p2;
wire   [16:0] mean_value_y_V_fu_526_p2;
wire   [15:0] count_fu_532_p2;
wire   [16:0] grp_fu_486_p2;
wire   [16:0] grp_fu_496_p2;
reg    grp_fu_486_ap_start;
wire    grp_fu_486_ap_done;
reg    grp_fu_496_ap_start;
wire    grp_fu_496_ap_done;
reg   [30:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 31'd1;
end

kmeans_x_data_V #(
    .DataWidth( 13 ),
    .AddressRange( 50 ),
    .AddressWidth( 6 ))
x_data_V_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(x_data_V_address0),
    .ce0(x_data_V_ce0),
    .q0(x_data_V_q0)
);

kmeans_y_data_V #(
    .DataWidth( 13 ),
    .AddressRange( 50 ),
    .AddressWidth( 6 ))
y_data_V_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(y_data_V_address0),
    .ce0(y_data_V_ce0),
    .q0(y_data_V_q0)
);

kmeans_data_clustbkb #(
    .DataWidth( 1 ),
    .AddressRange( 50 ),
    .AddressWidth( 6 ))
data_cluster_id_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(data_cluster_id_address0),
    .ce0(data_cluster_id_ce0),
    .we0(data_cluster_id_we0),
    .d0(data_cluster_id_d0),
    .q0(data_cluster_id_q0)
);

kmeans_sdiv_18s_1cud #(
    .ID( 1 ),
    .NUM_STAGE( 22 ),
    .din0_WIDTH( 18 ),
    .din1_WIDTH( 17 ),
    .dout_WIDTH( 17 ))
kmeans_sdiv_18s_1cud_U1(
    .clk(ap_clk),
    .reset(ap_rst),
    .start(grp_fu_486_ap_start),
    .done(grp_fu_486_ap_done),
    .din0(grp_fu_486_p0),
    .din1(grp_fu_486_p1),
    .ce(1'b1),
    .dout(grp_fu_486_p2)
);

kmeans_sdiv_18s_1cud #(
    .ID( 1 ),
    .NUM_STAGE( 22 ),
    .din0_WIDTH( 18 ),
    .din1_WIDTH( 17 ),
    .dout_WIDTH( 17 ))
kmeans_sdiv_18s_1cud_U2(
    .clk(ap_clk),
    .reset(ap_rst),
    .start(grp_fu_496_ap_start),
    .done(grp_fu_496_ap_done),
    .din0(grp_fu_496_p0),
    .din1(grp_fu_496_p1),
    .ce(1'b1),
    .dout(grp_fu_496_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        i_1_reg_186 <= 6'd0;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        i_1_reg_186 <= i_3_reg_609;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state4) & (icmp_ln30_fu_292_p2 == 1'd1))) begin
        i_2_reg_197 <= 2'd0;
    end else if ((1'b1 == ap_CS_fsm_state31)) begin
        i_2_reg_197 <= i_4_reg_652;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state8) & (icmp_ln44_fu_441_p2 == 1'd0))) begin
        j_1_reg_233 <= 6'd0;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        j_1_reg_233 <= j_reg_660;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state8) & (icmp_ln44_fu_441_p2 == 1'd0))) begin
        p_Val2_11_reg_221 <= 17'd0;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        p_Val2_11_reg_221 <= mean_value_y_V_1_fu_546_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln19_fu_256_p2 == 1'd0))) begin
        p_Val2_1_reg_175 <= i_fu_262_p2;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        p_Val2_1_reg_175 <= 2'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state8) & (icmp_ln44_fu_441_p2 == 1'd0))) begin
        p_Val2_s_reg_209 <= 17'd0;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        p_Val2_s_reg_209 <= mean_value_x_V_1_fu_538_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state8) & (icmp_ln44_fu_441_p2 == 1'd0))) begin
        tmp_V_reg_244 <= 16'd0;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        tmp_V_reg_244 <= count_1_fu_554_p3;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        add_ln703_reg_644 <= add_ln703_fu_430_p2;
        min_distance_V_reg_639 <= min_distance_V_fu_370_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        centroids_x_V_load_reg_596 <= centroids_x_V_q1;
        centroids_y_V_load_reg_601 <= centroids_y_V_q1;
        p_Val2_3_reg_586 <= centroids_x_V_q0;
        p_Val2_5_reg_591 <= centroids_y_V_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        i_3_reg_609 <= i_3_fu_298_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        i_4_reg_652 <= i_4_fu_447_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state9) & (icmp_ln49_fu_453_p2 == 1'd1))) begin
        icmp_ln57_reg_680 <= icmp_ln57_fu_472_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        j_reg_660 <= j_fu_459_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        p_Val2_2_reg_629 <= x_data_V_q0;
        p_Val2_4_reg_634 <= y_data_V_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state4) & (icmp_ln30_fu_292_p2 == 1'd0))) begin
        zext_ln31_reg_614[5 : 0] <= zext_ln31_fu_304_p1[5 : 0];
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state8) & (icmp_ln44_fu_441_p2 == 1'd1))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state8) & (icmp_ln44_fu_441_p2 == 1'd1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        if ((icmp_ln19_fu_256_p2 == 1'd1)) begin
            centroids_x_V_address0 = 1'd0;
        end else if ((icmp_ln19_fu_256_p2 == 1'd0)) begin
            centroids_x_V_address0 = zext_ln20_fu_268_p1;
        end else begin
            centroids_x_V_address0 = 'bx;
        end
    end else begin
        centroids_x_V_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state31)) begin
        centroids_x_V_address1 = zext_ln58_fu_562_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        centroids_x_V_address1 = 1'd1;
    end else begin
        centroids_x_V_address1 = 'bx;
    end
end

always @ (*) begin
    if ((((1'b1 == ap_CS_fsm_state2) & (icmp_ln19_fu_256_p2 == 1'd1)) | ((1'b1 == ap_CS_fsm_state2) & (icmp_ln19_fu_256_p2 == 1'd0)))) begin
        centroids_x_V_ce0 = 1'b1;
    end else begin
        centroids_x_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state31))) begin
        centroids_x_V_ce1 = 1'b1;
    end else begin
        centroids_x_V_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln19_fu_256_p2 == 1'd0))) begin
        centroids_x_V_we0 = 1'b1;
    end else begin
        centroids_x_V_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state31) & (icmp_ln57_reg_680 == 1'd0))) begin
        centroids_x_V_we1 = 1'b1;
    end else begin
        centroids_x_V_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        if ((icmp_ln19_fu_256_p2 == 1'd1)) begin
            centroids_y_V_address0 = 1'd0;
        end else if ((icmp_ln19_fu_256_p2 == 1'd0)) begin
            centroids_y_V_address0 = zext_ln20_fu_268_p1;
        end else begin
            centroids_y_V_address0 = 'bx;
        end
    end else begin
        centroids_y_V_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state31)) begin
        centroids_y_V_address1 = zext_ln58_fu_562_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        centroids_y_V_address1 = 1'd1;
    end else begin
        centroids_y_V_address1 = 'bx;
    end
end

always @ (*) begin
    if ((((1'b1 == ap_CS_fsm_state2) & (icmp_ln19_fu_256_p2 == 1'd1)) | ((1'b1 == ap_CS_fsm_state2) & (icmp_ln19_fu_256_p2 == 1'd0)))) begin
        centroids_y_V_ce0 = 1'b1;
    end else begin
        centroids_y_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state31))) begin
        centroids_y_V_ce1 = 1'b1;
    end else begin
        centroids_y_V_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln19_fu_256_p2 == 1'd0))) begin
        centroids_y_V_we0 = 1'b1;
    end else begin
        centroids_y_V_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state31) & (icmp_ln57_reg_680 == 1'd0))) begin
        centroids_y_V_we1 = 1'b1;
    end else begin
        centroids_y_V_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        data_cluster_id_address0 = zext_ln50_fu_465_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        data_cluster_id_address0 = zext_ln31_reg_614;
    end else begin
        data_cluster_id_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state9))) begin
        data_cluster_id_ce0 = 1'b1;
    end else begin
        data_cluster_id_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        data_cluster_id_we0 = 1'b1;
    end else begin
        data_cluster_id_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state9) & (icmp_ln49_fu_453_p2 == 1'd1) & (icmp_ln57_fu_472_p2 == 1'd0))) begin
        grp_fu_486_ap_start = 1'b1;
    end else begin
        grp_fu_486_ap_start = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state9) & (icmp_ln49_fu_453_p2 == 1'd1) & (icmp_ln57_fu_472_p2 == 1'd0))) begin
        grp_fu_496_ap_start = 1'b1;
    end else begin
        grp_fu_496_ap_start = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        x_data_V_address0 = zext_ln50_fu_465_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        x_data_V_address0 = zext_ln31_fu_304_p1;
    end else begin
        x_data_V_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state4))) begin
        x_data_V_ce0 = 1'b1;
    end else begin
        x_data_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        y_data_V_address0 = zext_ln50_fu_465_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        y_data_V_address0 = zext_ln31_fu_304_p1;
    end else begin
        y_data_V_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state4))) begin
        y_data_V_ce0 = 1'b1;
    end else begin
        y_data_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_CS_fsm_state2) & (icmp_ln19_fu_256_p2 == 1'd0))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            if (((1'b1 == ap_CS_fsm_state4) & (icmp_ln30_fu_292_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state8 : begin
            if (((1'b1 == ap_CS_fsm_state8) & (icmp_ln44_fu_441_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end
        end
        ap_ST_fsm_state9 : begin
            if (((1'b1 == ap_CS_fsm_state9) & (icmp_ln57_fu_472_p2 == 1'd1) & (icmp_ln49_fu_453_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state31;
            end else if (((1'b1 == ap_CS_fsm_state9) & (icmp_ln49_fu_453_p2 == 1'd1) & (icmp_ln57_fu_472_p2 == 1'd0))) begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state15 : begin
            ap_NS_fsm = ap_ST_fsm_state16;
        end
        ap_ST_fsm_state16 : begin
            ap_NS_fsm = ap_ST_fsm_state17;
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state18;
        end
        ap_ST_fsm_state18 : begin
            ap_NS_fsm = ap_ST_fsm_state19;
        end
        ap_ST_fsm_state19 : begin
            ap_NS_fsm = ap_ST_fsm_state20;
        end
        ap_ST_fsm_state20 : begin
            ap_NS_fsm = ap_ST_fsm_state21;
        end
        ap_ST_fsm_state21 : begin
            ap_NS_fsm = ap_ST_fsm_state22;
        end
        ap_ST_fsm_state22 : begin
            ap_NS_fsm = ap_ST_fsm_state23;
        end
        ap_ST_fsm_state23 : begin
            ap_NS_fsm = ap_ST_fsm_state24;
        end
        ap_ST_fsm_state24 : begin
            ap_NS_fsm = ap_ST_fsm_state25;
        end
        ap_ST_fsm_state25 : begin
            ap_NS_fsm = ap_ST_fsm_state26;
        end
        ap_ST_fsm_state26 : begin
            ap_NS_fsm = ap_ST_fsm_state27;
        end
        ap_ST_fsm_state27 : begin
            ap_NS_fsm = ap_ST_fsm_state28;
        end
        ap_ST_fsm_state28 : begin
            ap_NS_fsm = ap_ST_fsm_state29;
        end
        ap_ST_fsm_state29 : begin
            ap_NS_fsm = ap_ST_fsm_state30;
        end
        ap_ST_fsm_state30 : begin
            ap_NS_fsm = ap_ST_fsm_state31;
        end
        ap_ST_fsm_state31 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln703_fu_430_p2 = (select_ln4_2_fu_422_p3 + select_ln4_fu_395_p3);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state31 = ap_CS_fsm[32'd30];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign centroids_x_V_d0 = zext_ln728_fu_286_p1;

assign centroids_x_V_d1 = grp_fu_486_p2[16:0];

assign centroids_y_V_d0 = zext_ln728_fu_286_p1;

assign centroids_y_V_d1 = grp_fu_496_p2[16:0];

assign count_1_fu_554_p3 = ((icmp_ln50_fu_506_p2[0:0] === 1'b1) ? count_fu_532_p2 : tmp_V_reg_244);

assign count_fu_532_p2 = (tmp_V_reg_244 + 16'd1);

assign data_cluster_id_d0 = (($signed(add_ln703_reg_644) < $signed(min_distance_V_reg_639)) ? 1'b1 : 1'b0);

assign grp_fu_486_p0 = p_Val2_s_reg_209;

assign grp_fu_486_p1 = zext_ln1148_fu_482_p1;

assign grp_fu_496_p0 = p_Val2_11_reg_221;

assign grp_fu_496_p1 = zext_ln1148_fu_482_p1;

assign i_3_fu_298_p2 = (i_1_reg_186 + 6'd1);

assign i_4_fu_447_p2 = (i_2_reg_197 + 2'd1);

assign i_fu_262_p2 = (p_Val2_1_reg_175 + 2'd1);

assign icmp_ln19_fu_256_p2 = ((p_Val2_1_reg_175 == 2'd2) ? 1'b1 : 1'b0);

assign icmp_ln30_fu_292_p2 = ((i_1_reg_186 == 6'd50) ? 1'b1 : 1'b0);

assign icmp_ln44_fu_441_p2 = ((i_2_reg_197 == 2'd2) ? 1'b1 : 1'b0);

assign icmp_ln49_fu_453_p2 = ((j_1_reg_233 == 6'd50) ? 1'b1 : 1'b0);

assign icmp_ln50_fu_506_p2 = ((zext_ln50_1_fu_502_p1 == i_2_reg_197) ? 1'b1 : 1'b0);

assign icmp_ln57_fu_472_p2 = ((tmp_V_reg_244 == 16'd0) ? 1'b1 : 1'b0);

assign j_fu_459_p2 = (j_1_reg_233 + 6'd1);

assign mean_value_x_V_1_fu_538_p3 = ((icmp_ln50_fu_506_p2[0:0] === 1'b1) ? mean_value_x_V_fu_516_p2 : p_Val2_s_reg_209);

assign mean_value_x_V_fu_516_p2 = ($signed(sext_ln1265_2_fu_512_p1) + $signed(p_Val2_s_reg_209));

assign mean_value_y_V_1_fu_546_p3 = ((icmp_ln50_fu_506_p2[0:0] === 1'b1) ? mean_value_y_V_fu_526_p2 : p_Val2_11_reg_221);

assign mean_value_y_V_fu_526_p2 = ($signed(sext_ln1265_3_fu_522_p1) + $signed(p_Val2_11_reg_221));

assign min_distance_V_fu_370_p2 = (p_Val2_7_fu_362_p3 + p_Val2_6_fu_332_p3);

assign p_Val2_6_fu_332_p3 = ((tmp_fu_318_p3[0:0] === 1'b1) ? sub_ln703_4_fu_326_p2 : sub_ln703_fu_313_p2);

assign p_Val2_7_fu_362_p3 = ((tmp_1_fu_348_p3[0:0] === 1'b1) ? sub_ln703_5_fu_356_p2 : sub_ln703_1_fu_343_p2);

assign select_ln4_2_fu_422_p3 = ((tmp_3_fu_408_p3[0:0] === 1'b1) ? sub_ln703_7_fu_416_p2 : sub_ln703_3_fu_403_p2);

assign select_ln4_fu_395_p3 = ((tmp_2_fu_381_p3[0:0] === 1'b1) ? sub_ln703_6_fu_389_p2 : sub_ln703_2_fu_376_p2);

assign sext_ln1265_1_fu_340_p1 = $signed(p_Val2_4_reg_634);

assign sext_ln1265_2_fu_512_p1 = $signed(x_data_V_q0);

assign sext_ln1265_3_fu_522_p1 = $signed(y_data_V_q0);

assign sext_ln1265_fu_310_p1 = $signed(p_Val2_2_reg_629);

assign shl_ln_fu_278_p3 = {{trunc_ln728_fu_274_p1}, {10'd0}};

assign sub_ln703_1_fu_343_p2 = ($signed(sext_ln1265_1_fu_340_p1) - $signed(p_Val2_5_reg_591));

assign sub_ln703_2_fu_376_p2 = ($signed(sext_ln1265_fu_310_p1) - $signed(centroids_x_V_load_reg_596));

assign sub_ln703_3_fu_403_p2 = ($signed(sext_ln1265_1_fu_340_p1) - $signed(centroids_y_V_load_reg_601));

assign sub_ln703_4_fu_326_p2 = (17'd0 - sub_ln703_fu_313_p2);

assign sub_ln703_5_fu_356_p2 = (17'd0 - sub_ln703_1_fu_343_p2);

assign sub_ln703_6_fu_389_p2 = (17'd0 - sub_ln703_2_fu_376_p2);

assign sub_ln703_7_fu_416_p2 = (17'd0 - sub_ln703_3_fu_403_p2);

assign sub_ln703_fu_313_p2 = ($signed(sext_ln1265_fu_310_p1) - $signed(p_Val2_3_reg_586));

assign tmp_1_fu_348_p3 = sub_ln703_1_fu_343_p2[32'd16];

assign tmp_2_fu_381_p3 = sub_ln703_2_fu_376_p2[32'd16];

assign tmp_3_fu_408_p3 = sub_ln703_3_fu_403_p2[32'd16];

assign tmp_fu_318_p3 = sub_ln703_fu_313_p2[32'd16];

assign trunc_ln728_fu_274_p1 = p_Val2_1_reg_175[0:0];

assign zext_ln1148_fu_482_p1 = tmp_V_reg_244;

assign zext_ln20_fu_268_p1 = p_Val2_1_reg_175;

assign zext_ln31_fu_304_p1 = i_1_reg_186;

assign zext_ln50_1_fu_502_p1 = data_cluster_id_q0;

assign zext_ln50_fu_465_p1 = j_1_reg_233;

assign zext_ln58_fu_562_p1 = i_2_reg_197;

assign zext_ln728_fu_286_p1 = shl_ln_fu_278_p3;

always @ (posedge ap_clk) begin
    zext_ln31_reg_614[63:6] <= 58'b0000000000000000000000000000000000000000000000000000000000;
end

endmodule //kmeans
