`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:03:39 05/07/2018
// Design Name:   top
// Module Name:   D:/Xilinx/project/EXP4_Regs/top_1.v
// Project Name:  EXP4_l
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
	reg [4:0] Addr;
	reg Write_Reg;
	reg [1:0] choose;
	reg CLK;
	reg Reset;
	reg A_B;

	// Outputs
	wire [7:0] LED;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.Addr(Addr), 
		.Write_Reg(Write_Reg), 
		.choose(choose), 
		.CLK(CLK), 
		.Reset(Reset), 
		.A_B(A_B), 
		.LED(LED)
	);
	
	
	always
	begin
	#50;
	CLK = ~CLK;
	end 
	
	initial begin
	CLK=0;
	
		// Initialize Inputs
		Addr = 0;
		Write_Reg = 0;
		choose = 0;
		CLK = 0;
		Reset = 1;
		A_B = 0;

		// Wait 100 ns for global reset to finish
		#20;
        
		// Add stimulus here
		Addr = 5'd0;
		Write_Reg = 1;
		choose = 0;
		Reset = 0;
		A_B = 0;
		#50;//xie [0]=0000_000F
		
		Addr = 5'd0;
		Write_Reg = 0;
		choose = 0;
		Reset = 0;
		A_B = 1;
		#50;//11111111
		
		Addr = 5'd1;
		Write_Reg = 1;
		choose = 1;
		Reset = 0;
		A_B = 0;
		#50;//xie [1]=0000_0DB0
		
		Addr = 5'd1;
		Write_Reg = 0;
		choose = 0;
		Reset = 0;
		A_B = 0;//10110000
		#50;
		
		Addr = 5'd1;
		Write_Reg = 0;
		choose = 1;
		Reset = 0;
		A_B = 0;//00001101
		#50;
		
		//µ»…œÃ¯—ÿ
		#50
		Addr = 5'd3;
		Write_Reg = 1;
		choose = 3;
		Reset = 0;
		A_B = 0;
		#50;//xie [3]=FFFFFFFF
		
		Addr = 5'd3;
		Write_Reg = 0;
		choose = 3;
		Reset = 0;
		A_B = 0;
		#50;//11111111
		
		
		
		
	end
      
endmodule

