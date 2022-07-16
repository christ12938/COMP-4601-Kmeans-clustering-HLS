// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __kmeans_x_data_H__
#define __kmeans_x_data_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct kmeans_x_data_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 32;
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


   SC_CTOR(kmeans_x_data_ram) {
        ram[0] = "0b10111111110000010001010011110111";
        ram[1] = "0b10111111100011000011001100100001";
        ram[2] = "0b10111111100100110100001111000100";
        ram[3] = "0b10111101000001000000110100000110";
        ram[4] = "0b10111111001010101100100111001001";
        ram[5] = "0b10111111101101010110000110001010";
        ram[6] = "0b10111111000001011110100100101001";
        ram[7] = "0b10111111000101001000101011111100";
        ram[8] = "0b10111110101011000011111101110001";
        ram[9] = "0b10111111111110011000010100111101";
        ram[10] = "0b10111111001110100101001001111000";
        ram[11] = "0b10111110100110101011111001101100";
        ram[12] = "0b10111111001111001011100000100111";
        ram[13] = "0b10111111101111011011010110110001";
        ram[14] = "0b10111111111010011101000100100010";
        ram[15] = "0b10111110001101110011110001000001";
        ram[16] = "0b10111111111101011101100100111101";
        ram[17] = "0b10111110110010000111000100010011";
        ram[18] = "0b10111111000111010100110010101110";
        ram[19] = "0b10111111110111111011001100000011";
        ram[20] = "0b10111110100011110100010001010110";
        ram[21] = "0b10111110100001110100010001010101";
        ram[22] = "0b10111111100000111111101100110111";
        ram[23] = "0b10111111101010000110011011100001";
        ram[24] = "0b10111111110101111011010100000011";
        ram[25] = "0b00111111101011101100010001100011";
        ram[26] = "0b01000000000010010010001110000101";
        ram[27] = "0b01000000001000110000000101011011";
        ram[28] = "0b01000000000110000001110100001001";
        ram[29] = "0b00111111111001100010100100011110";
        ram[30] = "0b00111111101011111111000100110100";
        ram[31] = "0b00111111110111110000001010110010";
        ram[32] = "0b00111111101000001110001011000110";
        ram[33] = "0b01000000001101001111110011110000";
        ram[34] = "0b01000000001110010110010110010100";
        ram[35] = "0b00111111111100011101001001101000";
        ram[36] = "0b01000000001111101001100000010110";
        ram[37] = "0b00111111111011010011101101000100";
        ram[38] = "0b01000000001100111001100010101010";
        ram[39] = "0b00111111101101001110101110011101";
        ram[40] = "0b01000000000111110001011100100011";
        ram[41] = "0b00111111111101110000110110111101";
        ram[42] = "0b00111111101101101011100011111001";
        ram[43] = "0b00111111101010111010101000010001";
        ram[44] = "0b00111111101100110101010011101011";
        ram[45] = "0b01000000001110110000010100101010";
        ram[46] = "0b00111111100010011000000000100111";
        ram[47] = "0b00111111110111010110100110011110";
        ram[48] = "0b01000000001010101001010111100011";
        ram[49] = "0b01000000000111010110100001001111";


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


SC_MODULE(kmeans_x_data) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 50;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


kmeans_x_data_ram* meminst;


SC_CTOR(kmeans_x_data) {
meminst = new kmeans_x_data_ram("kmeans_x_data_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~kmeans_x_data() {
    delete meminst;
}


};//endmodule
#endif
