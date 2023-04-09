golden: src/test/c/golden.c
	gcc src/test/c/golden.c -o golden
	
golden_test:
	./golden bf32 -v 

random_test: src/test/c/golden.c
	gcc src/test/c/golden.c -o golden 
	./golden bf32 -v 

verify:
	gcc src/test/c/golden.c -o golden
	./golden bf32 -v
	sbt test >out.log
	awk '/UInt<32>/ {print substr($0, 10, length($0)-10)}' out.log >chiseltest_out.txt

