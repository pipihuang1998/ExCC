`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:41:57 04/16/2018
// Design Name:   CLAA
// Module Name:   D:/Xilinx/project/EXP2_CLAA/CLAA_1.v
// Project Name:  EXP2_CLAA
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CLAA
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CLAA_1;

	// Inputs
	reg [3:0] X;
	reg [3:0] Y;
	reg C0;

	// Outputs
	wire [3:0] F;
	wire C4;

	// Instantiate the Unit Under Test (UUT)
	CLAA uut (
		.X(X), 
		.Y(Y), 
		.C0(C0), 
		.F(F), 
		.C4(C4)
	);

	initial begin
		// Initialize Inputs
		X = 4'd0;
		Y = 4'd0;
		C0 = 0;//0 0000

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		X = 4'd1;
		Y = 4'd1;//0 0010
		C0 = 0;
		#100;
		X = 4'd5;
		Y = 4'd3;//0 1000
		C0 = 0;
		#100;
		X = 4'd2;
		Y = 4'd4;//0 0110
		C0 = 0;
		#100;
		X = 4'd8;
		Y = 4'd7;//0 1111
		C0 = 0;
		#100;
		X = 4'd8;
		Y = 4'd8;//1 0000
		C0 = 0;
		#100;
		X = 4'd8;
		Y = 4'd8;
		C0 = 1;//1 0001
		#100;
		X = 4'd8;
		Y = 4'd9;
		C0 = 1;//1 0010
		#100;
	end
      
endmodule

