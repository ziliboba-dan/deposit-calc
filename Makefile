all:depocit-calc

clean:
	rm -rf build/*.o
depocit-calc: build/depocit.o build/main.o
	gcc build/main.o build/depocit.o -o bin/deposit-calc 
build/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/main.o
build/depocit.o: src/depocit.c src/depocit.h
	gcc -Wall -Werror -c src/depocit.c -o build/depocit.o

