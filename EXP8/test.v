`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:01:38 06/04/2018
// Design Name:   CPU
// Module Name:   D:/Xilinx/project/EXP8/test.v
// Project Name:  EXP8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg clk;
	reg rst;
	reg [1:0] sw;

	// Outputs
	wire [7:0] led;
	wire ZF;
	wire OF;
	//wire [31:0]inst_code;
	// Instantiate the Unit Under Test (UUT)
	CPU uut (
		.clk(clk), 
		.rst(rst), 
		.sw(sw), 
		.led(led), 
		.ZF(ZF), 
		.OF(OF)
		//.inst_code(inst_code)
	);
	always #50 clk=~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;
		sw = 0;

		// Wait 100 ns for global reset to finish
		#20;
      rst = 0;
		sw=0;
		
		// Add stimulus here

	end
      
endmodule

