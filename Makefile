all:depocit-calc

clean:
	rm -rf build/*.o
depocit-calc: depocit.o main.o
	gcc build/main.o build/depocit.o -o bin/deposit-calc 
main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/main.o
depocit.o: src/depocit.c src/depocit.h
	gcc -Wall -Werror -c src/depocit.c -o build/depocit.o

