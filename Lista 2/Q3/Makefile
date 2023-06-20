all: main

main: main.o aluno.o turma.o
	g++ -o main main.o aluno.o turma.o

aluno.o: aluno.cpp aluno.h
	g++ -c aluno.cpp

turma.o: turma.cpp turma.h
	g++ -c turma.cpp