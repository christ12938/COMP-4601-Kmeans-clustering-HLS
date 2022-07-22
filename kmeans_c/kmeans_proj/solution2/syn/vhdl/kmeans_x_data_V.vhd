-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity kmeans_x_data_V_rom is 
    generic(
             DWIDTH     : integer := 13; 
             AWIDTH     : integer := 6; 
             MEM_SIZE    : integer := 50
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of kmeans_x_data_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1100111110111", 1 => "1101110011110", 2 => "1101101100101", 
    3 => "1111111011110", 4 => "1110101010100", 5 => "1101001010100", 
    6 => "1110111101000", 7 => "1110110101101", 8 => "1111010100111", 
    9 => "1100000110011", 10 => "1110100010110", 11 => "1111011001010", 
    12 => "1110100001101", 13 => "1101000010010", 14 => "1100010110001", 
    15 => "1111101001000", 16 => "1100001010001", 17 => "1111001101111", 
    18 => "1110110001010", 19 => "1100100000010", 20 => "1111011100001", 
    21 => "1111011110001", 22 => "1101111100000", 23 => "1101010111100", 
    24 => "1100101000010", 25 => "0010101110110", 26 => "0100010010010", 
    27 => "0101000110000", 28 => "0100110000001", 29 => "0011100110001", 
    30 => "0010101111111", 31 => "0011011111000", 32 => "0010100000111", 
    33 => "0101101001111", 34 => "0101110010110", 35 => "0011110001110", 
    36 => "0101111101001", 37 => "0011101101001", 38 => "0101100111001", 
    39 => "0010110100111", 40 => "0100111110001", 41 => "0011110111000", 
    42 => "0010110110101", 43 => "0010101011101", 44 => "0010110011010", 
    45 => "0101110110000", 46 => "0010001001100", 47 => "0011011101011", 
    48 => "0101010101001", 49 => "0100111010110" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity kmeans_x_data_V is
    generic (
        DataWidth : INTEGER := 13;
        AddressRange : INTEGER := 50;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of kmeans_x_data_V is
    component kmeans_x_data_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    kmeans_x_data_V_rom_U :  component kmeans_x_data_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


