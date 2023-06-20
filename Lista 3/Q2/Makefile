all: main

main: main.cpp escrita.o calculos.o leitura.o
	g++ -o main main.cpp calculos.o leitura.o escrita.o

escrita.o: escrita.cpp escrita.h
	g++ -c escrita.cpp

calculos.o: calculos.cpp calculos.h
	g++ -c calculos.cpp

leitura.o: leitura.cpp leitura.h
	g++ -c leitura.cpp
