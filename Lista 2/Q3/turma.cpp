/**
 * @file turma.cpp
 * @brief Implementação dos métodos da classe Turma.
 */

#include "turma.h"
#include <iostream>

Turma::Turma(int _capacidade, int _vagas) {
    capacidade = _capacidade;
    vagas = _vagas;
    alunos = new Aluno[capacidade - vagas];
}

Turma::~Turma() {
    delete[] alunos;
}

void Turma::setCapacidade(int _capacidade) {
    capacidade = _capacidade;
}

void Turma::setVagas(int _vagas) {
    vagas = _vagas;
}

void Turma::preencherAluno(int i, int matricula, std::string nome, float nota1, float nota2, float nota3) {
    if (i >= 0 && i < (capacidade - vagas)) {
        alunos[i].setMatricula(matricula);
        alunos[i].setNome(nome);
        alunos[i].setNota1(nota1);
        alunos[i].setNota2(nota2);
        alunos[i].setNota3(nota3);
    }
}

void Turma::ordenarPorMatricula() {
    int numAlunosPreenchidos = capacidade - vagas;
    for (int i = 0; i < numAlunosPreenchidos - 1; i++) {
        for (int j = 0; j < numAlunosPreenchidos - i - 1; j++) {
            if (alunos[j].getMatricula() > alunos[j + 1].getMatricula()) {
                Aluno temp = alunos[j];
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = temp;
            }
        }
    }
}

void Turma::imprimirAlunos() {
    ordenarPorMatricula();
    int numAlunosPreenchidos = capacidade - vagas;
    for (int i = 0; i < numAlunosPreenchidos; i++) {
        Aluno aluno = alunos[i];
        std::cout << "Aluno " << (i + 1) << ":" << std::endl;
        std::cout << "Matrícula: " << aluno.getMatricula() << std::endl;
        std::cout << "Nome: " << aluno.getNome() << std::endl;
        std::cout << "Nota 1: " << aluno.getNota1() << std::endl;
        std::cout << "Nota 2: " << aluno.getNota2() << std::endl;
        std::cout << "Nota 3: " << aluno.getNota3() << std::endl;
        std::cout << std::endl;
    }
}
