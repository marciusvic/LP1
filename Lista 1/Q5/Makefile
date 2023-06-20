all: main

main: main.cpp fatorial.o primalidade.o
	g++ -o main main.cpp fatorial.o primalidade.o

fatorial.o: fatorial.cpp fatorial.h
	g++ -c fatorial.cpp

primalidade.o: primalidade.cpp primalidade.h
	g++ -c primalidade.cpp
