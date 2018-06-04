`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:41:18 05/24/2018
// Design Name:   EXP7
// Module Name:   D:/sophomore/computer composition/EXP7/test.v
// Project Name:  EXP7
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: EXP7
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
	wire [7:2] pc;

	// Instantiate the Unit Under Test (UUT)
	EXP7 uut (
		.clk(clk), 
		.rst(rst), 
		.sw(sw), 
		.led(led),
		.pc(pc)
	);
always #50 clk=~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;
		sw = 0;

		// Wait 100 ns for global reset to finish
		   
		// Add stimulus here
		//#50;rst = 1;
		#50;rst =0;
		#50;sw = 2'b00;
		
		
		#50;sw = 2'b00;
		
		
		#50;sw = 2'b00;
		
		
		#50;sw = 2'b00;
		
	end
      
endmodule

