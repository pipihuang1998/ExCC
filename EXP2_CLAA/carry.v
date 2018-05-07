`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:56:47 04/16/2018 
// Design Name: 
// Module Name:    carry 
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
module carry(X,Y,C0,C);
		input  [3:0]X,Y;
		input C0;
		output [4:1]C;
		wire  [3:0]G,P;
		
		and A0(G[0],X[0],Y[0]),
			 A1(G[1],X[1],Y[1]),
			 A2(G[2],X[2],Y[2]),
			 A3(G[3],X[3],Y[3]);
		or O0(P[0],X[0],Y[0]),
			O1(P[1],X[1],Y[1]),
			O2(P[2],X[2],Y[2]),
			O3(P[3],X[3],Y[3]);
		assign C[1]=G[0]|(P[0]&C0),
				 C[2]=G[1]|(P[1]&G[0])|(P[1]&P[0]&C0),
		       C[3]=G[2]|(P[2]&G[1])|(P[2]&P[1]&G[0])|(P[2]&P[1]&P[0]&C0),
	          C[4]=G[3]|(P[3]&G[2])|(P[3]&P[2]&G[1])|(P[3]&P[2]&P[1]&G[0])|(P[3]&P[2]&P[1]&P[0]&C0);


endmodule