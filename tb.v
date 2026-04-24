

module tb;

reg  [1:0] a;
reg        en;
wire [3:0] y;

decoder dut (
    .a(a),
    .en(en),
    .y(y)
);

initial begin
    $dumpfile("decoder.vcd");
    $dumpvars(0,tb_decoder);

    en = 0; a = 0; #10;
    en = 1; a = 0; #10;
    en = 1; a = 1; #10;
    en = 1; a = 2; #10;
    en = 1; a = 3; #10;

    $finish;
end

initial begin
    $monitor("time=%0t en=%b a=%b y=%b",$time,en,a,y);
end

endmodule
