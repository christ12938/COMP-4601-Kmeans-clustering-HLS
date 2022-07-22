// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __kmeans_x_data_V_H__
#define __kmeans_x_data_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct kmeans_x_data_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 13;
  static const unsigned AddressRange = 50;
  static const unsigned AddressWidth = 6;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in <sc_lv<AddressWidth> > address1;
sc_core::sc_in <sc_logic> ce1;
sc_core::sc_out <sc_lv<DataWidth> > q1;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(kmeans_x_data_V_ram) {
        ram[0] = "0b1100111110111";
        ram[1] = "0b1101110011110";
        ram[2] = "0b1101101100101";
        ram[3] = "0b1111111011110";
        ram[4] = "0b1110101010100";
        ram[5] = "0b1101001010100";
        ram[6] = "0b1110111101000";
        ram[7] = "0b1110110101101";
        ram[8] = "0b1111010100111";
        ram[9] = "0b1100000110011";
        ram[10] = "0b1110100010110";
        ram[11] = "0b1111011001010";
        ram[12] = "0b1110100001101";
        ram[13] = "0b1101000010010";
        ram[14] = "0b1100010110001";
        ram[15] = "0b1111101001000";
        ram[16] = "0b1100001010001";
        ram[17] = "0b1111001101111";
        ram[18] = "0b1110110001010";
        ram[19] = "0b1100100000010";
        ram[20] = "0b1111011100001";
        ram[21] = "0b1111011110001";
        ram[22] = "0b1101111100000";
        ram[23] = "0b1101010111100";
        ram[24] = "0b1100101000010";
        ram[25] = "0b0010101110110";
        ram[26] = "0b0100010010010";
        ram[27] = "0b0101000110000";
        ram[28] = "0b0100110000001";
        ram[29] = "0b0011100110001";
        ram[30] = "0b0010101111111";
        ram[31] = "0b0011011111000";
        ram[32] = "0b0010100000111";
        ram[33] = "0b0101101001111";
        ram[34] = "0b0101110010110";
        ram[35] = "0b0011110001110";
        ram[36] = "0b0101111101001";
        ram[37] = "0b0011101101001";
        ram[38] = "0b0101100111001";
        ram[39] = "0b0010110100111";
        ram[40] = "0b0100111110001";
        ram[41] = "0b0011110111000";
        ram[42] = "0b0010110110101";
        ram[43] = "0b0010101011101";
        ram[44] = "0b0010110011010";
        ram[45] = "0b0101110110000";
        ram[46] = "0b0010001001100";
        ram[47] = "0b0011011101011";
        ram[48] = "0b0101010101001";
        ram[49] = "0b0100111010110";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();


SC_METHOD(prc_write_1);
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


void prc_write_1()
{
    if (ce1.read() == sc_dt::Log_1) 
    {
            if(address1.read().is_01() && address1.read().to_uint()<AddressRange)
              q1 = ram[address1.read().to_uint()];
            else
              q1 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(kmeans_x_data_V) {


static const unsigned DataWidth = 13;
static const unsigned AddressRange = 50;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in <sc_lv<AddressWidth> > address1;
sc_core::sc_in<sc_logic> ce1;
sc_core::sc_out <sc_lv<DataWidth> > q1;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


kmeans_x_data_V_ram* meminst;


SC_CTOR(kmeans_x_data_V) {
meminst = new kmeans_x_data_V_ram("kmeans_x_data_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->address1(address1);
meminst->ce1(ce1);
meminst->q1(q1);

meminst->reset(reset);
meminst->clk(clk);
}
~kmeans_x_data_V() {
    delete meminst;
}


};//endmodule
#endif
