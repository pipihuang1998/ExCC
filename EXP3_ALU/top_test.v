`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:41:18 04/28/2018
// Design Name:   top
// Module Name:   D:/Xilinx/project/EXP3_ALU/top_test.v
// Project Name:  EXP3_ALU
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

module top_test;

	// Inputs
	reg [2:0] ALU_OP;
	reg [2:0] AB_SW;
	reg [2:0] F_LED_SW;

	// Outputs
	wire [7:0] LED;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.ALU_OP(ALU_OP), 
		.AB_SW(AB_SW), 
		.F_LED_SW(F_LED_SW), 
		.LED(LED)
	);

	initial begin
		// Initialize Inputs
		ALU_OP = 0;
		AB_SW = 0;
		F_LED_SW = 3'b100;//1...0

		// Wait 100 ns for global reset to finish
		#50;
        
		// Add stimulus here
		ALU_OP = 3'b000;
		AB_SW = 3'b001;
		F_LED_SW = 3'b000; //00000011
		#50;
		
		ALU_OP = 3'b001;
		AB_SW = 3'b001;
		F_LED_SW = 3'b001;//00000110
		#50;
		
		ALU_OP = 3'b010;
		AB_SW = 3'b001;
		F_LED_SW = 3'b000;//00000100
		#50;
		
		ALU_OP = 3'b011;
		AB_SW = 3'b001;
		F_LED_SW = 3'b000;//11111000
		#50;
		
		ALU_OP = 3'b100;
		AB_SW = 3'b100;
		F_LED_SW = 3'b000;//11111110
		#50;
		
		ALU_OP = 3'b100;
		AB_SW = 3'b100;
		F_LED_SW = 3'b011;//11111111
		#50;
		
		ALU_OP = 3'b100;
		AB_SW = 3'b100;
		F_LED_SW = 3'b100;//0...1Òç³ö
		#50;
		
		ALU_OP = 3'b101;
		AB_SW = 3'b100;
		F_LED_SW = 3'b100;//1...0
		#50;
		
		ALU_OP = 3'b110;
		AB_SW = 3'b110;
		F_LED_SW = 3'b010;//00000000
		#50;
		
		ALU_OP = 3'b111;
		AB_SW = 3'b001;
		F_LED_SW = 3'b000;//00111000
		#50;
		
		ALU_OP = 0;
		AB_SW = 0;
		F_LED_SW = 3'b000;//0...0
		
		
	end
      
endmodule

