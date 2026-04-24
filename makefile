compile:
	verilator -Wall --binary --trace decoder.v tb.v
run:
	./obj_dir/Vdecoder
all: compile run
