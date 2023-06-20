/**
 * @file aluno.cpp
 * @brief Implementação dos métodos da classe Aluno.
 */

#include "aluno.h"

void Aluno::setMatricula(int _matricula) {
    matricula = _matricula;
}

void Aluno::setNome(std::string _nome) {
    nome = _nome;
}

void Aluno::setNota1(float _nota1) {
    nota1 = _nota1;
}

void Aluno::setNota2(float _nota2) {
    nota2 = _nota2;
}

void Aluno::setNota3(float _nota3) {
    nota3 = _nota3;
}

int Aluno::getMatricula() {
    return matricula;
}

std::string Aluno::getNome() {
    return nome;
}

float Aluno::getNota1() {
    return nota1;
}

float Aluno::getNota2() {
    return nota2;
}

float Aluno::getNota3() {
    return nota3;
}

float Aluno::getMedia() {
    return ((nota1 + nota2 + nota3) / 3);
}
