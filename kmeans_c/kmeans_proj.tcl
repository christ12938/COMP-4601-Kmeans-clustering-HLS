############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
############################################################
open_project kmeans_proj
set_top kmeans
add_files kmeans.cpp
add_files kmeans.h
add_files -tb kmeans_tb.cpp
open_solution "solution1"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
csynth_design
exit