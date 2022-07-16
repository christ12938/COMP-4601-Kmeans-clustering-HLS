-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity kmeans_y_data_rom is 
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


architecture rtl of kmeans_y_data_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "10111111111011000111111100101000", 
    1 => "10111111110110100000011001101100", 
    2 => "10111110100111111001010110000000", 
    3 => "10111101100011011101110111011111", 
    4 => "10111110111110100000100111001101", 
    5 => "10111111100001010110001010000100", 
    6 => "10111111101011001000000010111001", 
    7 => "10111100100000101001110000011111", 
    8 => "10111110111111100100011000010111", 
    9 => "10111111111100111111100110000011", 
    10 => "10111111100101110100111010000000", 
    11 => "10111111111101000110110110011000", 
    12 => "10111111100111001000111100000000", 
    13 => "10111111010101111101000011110110", 
    14 => "10111110111000000010101101101100", 
    15 => "10111111010010000010110000000010", 
    16 => "10111111100111111100001001101101", 
    17 => "10111110101000001101011000110110", 
    18 => "10111111111011110001001101011011", 
    19 => "10111111101101111010010010101001", 
    20 => "10111111101001111010100001001000", 
    21 => "10111111011001101101111001010010", 
    22 => "10111111101000110111101101100010", 
    23 => "10111111100100101000100000000010", 
    24 => "10111111110001000101101101111001", 
    25 => "01000000001111111010100011101010", 
    26 => "00111111101011111110001111110100", 
    27 => "01000000001111100000011001110111", 
    28 => "01000000000000010000111010100000", 
    29 => "01000000000010001110010000101001", 
    30 => "00111111110000011001110010111011", 
    31 => "00111111100111111010101110001101", 
    32 => "01000000000100110000101100010111", 
    33 => "01000000001101111011001110011100", 
    34 => "00111111100101000000110000110101", 
    35 => "01000000000010000101011000110010", 
    36 => "00111111101101000011101100100011", 
    37 => "00111111100010100110010100101010", 
    38 => "01000000000011110111010110010100", 
    39 => "01000000001011100000010100000101", 
    40 => "00111111101110010100110101010011", 
    41 => "00111111100101001001011000011010", 
    42 => "00111111101100111010000111111010", 
    43 => "00111111101011000100010001101000", 
    44 => "00111111101111000000010000101110", 
    45 => "01000000000101000011011101110010", 
    46 => "01000000000101001011100110110011", 
    47 => "01000000000111011110010000000010", 
    48 => "00111111101001010110011011111011", 
    49 => "01000000000110010010011010110100" );


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

entity kmeans_y_data is
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

architecture arch of kmeans_y_data is
    component kmeans_y_data_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    kmeans_y_data_rom_U :  component kmeans_y_data_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


