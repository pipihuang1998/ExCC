`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:04:22 04/16/2018
// Design Name:   Adder
// Module Name:   D:/Xilinx/project/NO1_adder/Adder_1.v
// Project Name:  NO1_adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Adder_1;

	// Inputs
	reg Ai;
	reg Bi;
	reg Ci;

	// Outputs
	wire F;
	wire C;

	// Instantiate the Unit Under Test (UUT)
	Adder uut (
		.Ai(Ai), 
		.Bi(Bi), 
		.Ci(Ci), 
		.F(F), 
		.C(C)
	);

	initial begin
		// Initialize Inputs
		Ai = 0;
		Bi = 0;
		Ci = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		Ai = 0;
		Bi = 0;
		Ci = 1;
		#100;
		Ai = 0;
		Bi = 1;
		Ci = 0;
		#100;
		Ai = 0;
		Bi = 1;
		Ci = 1;
		#100;
		Ai = 1;
		Bi = 0;
		Ci = 0;
		#100;
		Ai = 1;
		Bi = 0;
		Ci = 1;
		#100;
		Ai = 1;
		Bi = 1;
		Ci = 0;
		#100;
		Ai = 1;
		Bi = 1;
		Ci = 1;
		#100;
		
		
	end
      
endmodule

