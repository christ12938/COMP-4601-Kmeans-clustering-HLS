############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
############################################################
open_project comp4601_proj
set_top kmeans

add_files kmeans_non_static.cpp
add_files -tb kmeans_tb_non_static.cpp

open_solution "solution1"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default

exit
