`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:56:34 05/14/2018
// Design Name:   top
// Module Name:   D:/Xilinx/project/EXP5_REG/top_1.v
// Project Name:  EXP5_REG
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module top_1;

	// Inputs
	reg Mem_Read;
	reg Mem_Write;
	reg [7:2] Mem_Addr;
	reg [1:0] MUX;
	reg Clk;
	reg Reset;

	// Outputs
	wire [7:0] LED;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.Mem_Read(Mem_Read), 
		.Mem_Write(Mem_Write), 
		.Mem_Addr(Mem_Addr), 
		.MUX(MUX), 
		.Clk(Clk), 
		.Reset(Reset), 
		.LED(LED)
	);
	initial Clk=0;
	always #25 Clk=~Clk; 
	initial begin
		// Initialize Inputs
		Mem_Read = 0;
		Mem_Write = 0;
		Mem_Addr = 0;
		MUX = 0;
		Reset = 1;

		// Wait 100 ns for global reset to finish
		
      #20;
		// Add stimulus here
		Mem_Read = 0;
		Mem_Write = 1;
		Mem_Addr = 0;
		MUX = 0;
		Reset = 0;
		#50;
		
		Mem_Read = 1;
		Mem_Write = 0;
		Mem_Addr = 0;
		MUX = 0;//00001111
		#50;
		
		Mem_Read = 0;
		Mem_Write = 1;
		Mem_Addr = 1;
		MUX = 1;//
		#50;
		
		Mem_Read = 1;
		Mem_Write = 0;
		Mem_Addr = 1;
		MUX = 0;//10110000
		#50;
		
		Mem_Read = 1;
		Mem_Write = 0;
		Mem_Addr = 1;
		MUX = 1;//00001101
		#50;
		
		Mem_Read = 0;
		Mem_Write = 1;
		Mem_Addr = 2;
		MUX = 2;//
		#50;
		Mem_Read = 1;
		Mem_Write = 0;
		Mem_Addr = 2;
		MUX = 0;//1000_0001
		#50;
		Mem_Read = 1;
		Mem_Write = 0;
		Mem_Addr = 2;
		MUX = 1;//1100_0011 
		#50;
		Mem_Read = 1;
		Mem_Write = 0;
		Mem_Addr = 2;
		MUX = 2;//0011_1100
		#50;
	end
      
endmodule

