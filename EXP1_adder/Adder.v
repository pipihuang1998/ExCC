`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:59:19 04/16/2018 
// Design Name: 
// Module Name:    Adder 
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
module Adder(
    input Ai,
    input Bi,
    input Ci,
    output F,
    output C
    );
	wire T1,T2,T3;
	xor U1(T1,Ai,Bi);
	xor U2(F,T1,Ci);
	and A1(T2,Ai,Bi);
	and A2(T3,T1,Ci);
	or O1(C,T2,T3);
	
endmodule
