all: main

main: main.cpp departamento.o funcionario.o
	g++ -o main main.cpp departamento.o funcionario.o

departamento.o: departamento.cpp departamento.h
	g++ -c departamento.cpp

funcionario.o: funcionario.cpp funcionario.h
	g++ -c funcionario.cpp