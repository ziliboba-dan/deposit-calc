all:deposit-calc deposit-calc-test

.PHONY: clean

clean:
	rm -rf build/*.o
	rm -rf bin/*

deposit-calc: build/src/deposit.o build/src/main.o
	gcc build/src/main.o build/src/deposit.o -o bin/deposit-calc 

build/src/main.o: src/main.c src/deposit.h
	gcc -Wall -Werror -c src/main.c -o build/src/main.o

build/src/depocit.o: src/deposit.c src/deposit.h
	gcc -Wall -Werror -c src/depocit.c -o build/src/deposit.o

deposit-calc-test: build/test/depocit_test.o build/test/main.o build/test/validation_test.o
	gcc build/test/depocit_test.o build/test/main.o build/test/validation_test.o -o bin/deposit-calc

build/test/depocit_test.o: test/deposit_test.c 
	gcc -Wall -Werro -I thirdparty src -c test/deposit_test.c -o build/test/deposit_test.o

build/test/main.o: test/main.c build/test/validation_test.o
	gcc -Wall -Werro -I thirdparty src -c test/deposit_test.c -o build/test/main.o

build/test/validation_test.o: test/validation_test.c build/test/main.o build/test/deposit_test.o
	gcc -Wall -Werro -I thirdparty src -c test/deposit_test.c -o build/test/validation_test.o



	
