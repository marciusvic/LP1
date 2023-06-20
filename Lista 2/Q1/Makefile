all: main

main: main.cpp tribonacci.o
	g++ -o main main.cpp tribonacci.o

tribonacci.o: tribonacci.cpp tribonacci.h
	g++ -c tribonacci.cpp
