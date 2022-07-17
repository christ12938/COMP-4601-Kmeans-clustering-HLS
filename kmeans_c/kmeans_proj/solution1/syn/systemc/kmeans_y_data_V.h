// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __kmeans_y_data_V_H__
#define __kmeans_y_data_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct kmeans_y_data_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 13;
  static const unsigned AddressRange = 50;
  static const unsigned AddressWidth = 6;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(kmeans_y_data_V_ram) {
        ram[0] = "0b1100010011100";
        ram[1] = "0b1100100101111";
        ram[2] = "0b1111011000000";
        ram[3] = "0b1111110111001";
        ram[4] = "0b1111000001011";
        ram[5] = "0b1101111010100";
        ram[6] = "0b1101010011011";
        ram[7] = "0b1111111101111";
        ram[8] = "0b1111000000011";
        ram[9] = "0b1100001100000";
        ram[10] = "0b1101101000101";
        ram[11] = "0b1100001011100";
        ram[12] = "0b1101100011011";
        ram[13] = "0b1110010100000";
        ram[14] = "0b1111000111111";
        ram[15] = "0b1110011011111";
        ram[16] = "0b1101100000001";
        ram[17] = "0b1111010111110";
        ram[18] = "0b1100010000111";
        ram[19] = "0b1101001000010";
        ram[20] = "0b1101011000010";
        ram[21] = "0b1110001100100";
        ram[22] = "0b1101011100100";
        ram[23] = "0b1101101101011";
        ram[24] = "0b1100111011101";
        ram[25] = "0b0101111111010";
        ram[26] = "0b0010101111111";
        ram[27] = "0b0101111100000";
        ram[28] = "0b0100000010000";
        ram[29] = "0b0100010001110";
        ram[30] = "0b0011000001100";
        ram[31] = "0b0010011111101";
        ram[32] = "0b0100100110000";
        ram[33] = "0b0101101111011";
        ram[34] = "0b0010010100000";
        ram[35] = "0b0100010000101";
        ram[36] = "0b0010110100001";
        ram[37] = "0b0010001010011";
        ram[38] = "0b0100011110111";
        ram[39] = "0b0101011100000";
        ram[40] = "0b0010111001010";
        ram[41] = "0b0010010100100";
        ram[42] = "0b0010110011101";
        ram[43] = "0b0010101100010";
        ram[44] = "0b0010111100000";
        ram[45] = "0b0100101000011";
        ram[46] = "0b0100101001011";
        ram[47] = "0b0100111011110";
        ram[48] = "0b0010100101011";
        ram[49] = "0b0100110010010";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(kmeans_y_data_V) {


static const unsigned DataWidth = 13;
static const unsigned AddressRange = 50;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


kmeans_y_data_V_ram* meminst;


SC_CTOR(kmeans_y_data_V) {
meminst = new kmeans_y_data_V_ram("kmeans_y_data_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~kmeans_y_data_V() {
    delete meminst;
}


};//endmodule
#endif
