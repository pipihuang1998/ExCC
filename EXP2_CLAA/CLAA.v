`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:55:57 04/16/2018 
// Design Name: 
// Module Name:    CLAA 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module CLAA(X,Y,C0,F,C4);
		input  [3:0]X,Y;
		input C0;
		output [3:0]F;
		output C4;
		wire [3:1]C;
		carry C1(X,Y,C0,{C4,C});
		Adder A0(X[0],Y[0],C0,F[0]);
		Adder A1(X[1],Y[1],C[1],F[1]);
		Adder A2(X[2],Y[2],C[2],F[2]);
		Adder A3(X[3],Y[3],C[3],F[3]);


endmodule
