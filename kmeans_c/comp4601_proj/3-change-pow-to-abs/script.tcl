############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
############################################################
open_project comp4601_proj
set_top kmeans
add_files kmeans.cpp
add_files kmeans.h
add_files -tb kmeans_tb.cpp
open_solution "3-change-pow-to-abs"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
#source "./comp4601_proj/3-change-pow-to-abs/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
