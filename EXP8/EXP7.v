`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:32:36 05/24/2018 
// Design Name: 
// Module Name:    EXP7 
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
module EXP7(clk,rst,inst_code);
input clk;
input rst;
output wire [31:0]inst_code;


reg[7:0] pc;
wire [7:0]pcnew;

Inst_ROM my(
	  .clka(clk), // input clka
	  .addra(pc[7:2]), // input [5 : 0] addra
	  .douta(inst_code) // output [31 : 0] douta
	);
assign pcnew = pc+4;
always@(posedge rst or negedge clk)
begin
	if(rst)
		pc <= 0;
	else
		pc <= pcnew;
end

endmodule
