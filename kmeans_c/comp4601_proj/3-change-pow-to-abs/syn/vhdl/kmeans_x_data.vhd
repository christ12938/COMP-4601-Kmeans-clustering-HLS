-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity kmeans_x_data_rom is 
    generic(
             DWIDTH     : integer := 32; 
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


architecture rtl of kmeans_x_data_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "10111111110000010001010011110111", 
    1 => "10111111100011000011001100100001", 
    2 => "10111111100100110100001111000100", 
    3 => "10111101000001000000110100000110", 
    4 => "10111111001010101100100111001001", 
    5 => "10111111101101010110000110001010", 
    6 => "10111111000001011110100100101001", 
    7 => "10111111000101001000101011111100", 
    8 => "10111110101011000011111101110001", 
    9 => "10111111111110011000010100111101", 
    10 => "10111111001110100101001001111000", 
    11 => "10111110100110101011111001101100", 
    12 => "10111111001111001011100000100111", 
    13 => "10111111101111011011010110110001", 
    14 => "10111111111010011101000100100010", 
    15 => "10111110001101110011110001000001", 
    16 => "10111111111101011101100100111101", 
    17 => "10111110110010000111000100010011", 
    18 => "10111111000111010100110010101110", 
    19 => "10111111110111111011001100000011", 
    20 => "10111110100011110100010001010110", 
    21 => "10111110100001110100010001010101", 
    22 => "10111111100000111111101100110111", 
    23 => "10111111101010000110011011100001", 
    24 => "10111111110101111011010100000011", 
    25 => "00111111101011101100010001100011", 
    26 => "01000000000010010010001110000101", 
    27 => "01000000001000110000000101011011", 
    28 => "01000000000110000001110100001001", 
    29 => "00111111111001100010100100011110", 
    30 => "00111111101011111111000100110100", 
    31 => "00111111110111110000001010110010", 
    32 => "00111111101000001110001011000110", 
    33 => "01000000001101001111110011110000", 
    34 => "01000000001110010110010110010100", 
    35 => "00111111111100011101001001101000", 
    36 => "01000000001111101001100000010110", 
    37 => "00111111111011010011101101000100", 
    38 => "01000000001100111001100010101010", 
    39 => "00111111101101001110101110011101", 
    40 => "01000000000111110001011100100011", 
    41 => "00111111111101110000110110111101", 
    42 => "00111111101101101011100011111001", 
    43 => "00111111101010111010101000010001", 
    44 => "00111111101100110101010011101011", 
    45 => "01000000001110110000010100101010", 
    46 => "00111111100010011000000000100111", 
    47 => "00111111110111010110100110011110", 
    48 => "01000000001010101001010111100011", 
    49 => "01000000000111010110100001001111" );


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

entity kmeans_x_data is
    generic (
        DataWidth : INTEGER := 32;
        AddressRange : INTEGER := 50;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of kmeans_x_data is
    component kmeans_x_data_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    kmeans_x_data_rom_U :  component kmeans_x_data_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


