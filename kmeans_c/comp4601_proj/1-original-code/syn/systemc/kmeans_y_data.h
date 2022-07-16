// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __kmeans_y_data_H__
#define __kmeans_y_data_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct kmeans_y_data_ram : public sc_core::sc_module {

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


   SC_CTOR(kmeans_y_data_ram) {
        ram[0] = "0b10111111111011000111111100101000";
        ram[1] = "0b10111111110110100000011001101100";
        ram[2] = "0b10111110100111111001010110000000";
        ram[3] = "0b10111101100011011101110111011111";
        ram[4] = "0b10111110111110100000100111001101";
        ram[5] = "0b10111111100001010110001010000100";
        ram[6] = "0b10111111101011001000000010111001";
        ram[7] = "0b10111100100000101001110000011111";
        ram[8] = "0b10111110111111100100011000010111";
        ram[9] = "0b10111111111100111111100110000011";
        ram[10] = "0b10111111100101110100111010000000";
        ram[11] = "0b10111111111101000110110110011000";
        ram[12] = "0b10111111100111001000111100000000";
        ram[13] = "0b10111111010101111101000011110110";
        ram[14] = "0b10111110111000000010101101101100";
        ram[15] = "0b10111111010010000010110000000010";
        ram[16] = "0b10111111100111111100001001101101";
        ram[17] = "0b10111110101000001101011000110110";
        ram[18] = "0b10111111111011110001001101011011";
        ram[19] = "0b10111111101101111010010010101001";
        ram[20] = "0b10111111101001111010100001001000";
        ram[21] = "0b10111111011001101101111001010010";
        ram[22] = "0b10111111101000110111101101100010";
        ram[23] = "0b10111111100100101000100000000010";
        ram[24] = "0b10111111110001000101101101111001";
        ram[25] = "0b01000000001111111010100011101010";
        ram[26] = "0b00111111101011111110001111110100";
        ram[27] = "0b01000000001111100000011001110111";
        ram[28] = "0b01000000000000010000111010100000";
        ram[29] = "0b01000000000010001110010000101001";
        ram[30] = "0b00111111110000011001110010111011";
        ram[31] = "0b00111111100111111010101110001101";
        ram[32] = "0b01000000000100110000101100010111";
        ram[33] = "0b01000000001101111011001110011100";
        ram[34] = "0b00111111100101000000110000110101";
        ram[35] = "0b01000000000010000101011000110010";
        ram[36] = "0b00111111101101000011101100100011";
        ram[37] = "0b00111111100010100110010100101010";
        ram[38] = "0b01000000000011110111010110010100";
        ram[39] = "0b01000000001011100000010100000101";
        ram[40] = "0b00111111101110010100110101010011";
        ram[41] = "0b00111111100101001001011000011010";
        ram[42] = "0b00111111101100111010000111111010";
        ram[43] = "0b00111111101011000100010001101000";
        ram[44] = "0b00111111101111000000010000101110";
        ram[45] = "0b01000000000101000011011101110010";
        ram[46] = "0b01000000000101001011100110110011";
        ram[47] = "0b01000000000111011110010000000010";
        ram[48] = "0b00111111101001010110011011111011";
        ram[49] = "0b01000000000110010010011010110100";


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


SC_MODULE(kmeans_y_data) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 50;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


kmeans_y_data_ram* meminst;


SC_CTOR(kmeans_y_data) {
meminst = new kmeans_y_data_ram("kmeans_y_data_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~kmeans_y_data() {
    delete meminst;
}


};//endmodule
#endif
