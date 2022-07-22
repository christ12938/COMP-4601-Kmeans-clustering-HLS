############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
############################################################
open_project comp4601_proj
set_top kmeans
add_files ./codes/kmeans_non_static.cpp
add_files -tb codes/kmeans_tb_non_static.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7z020-clg484-1}
create_clock -period 10 -name default
source "./comp4601_proj/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
