############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
############################################################
open_project kmeans_proj
set_top kmeans
add_files kmeans.h
add_files kmeans.cpp
add_files -tb kmeans_tb.cpp -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution3"
set_part {xc7z020-clg484-1}
create_clock -period 10 -name default
source "./kmeans_proj/solution3/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
