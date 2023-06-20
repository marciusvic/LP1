#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

/**
 * @file funcionario.h
 * @brief Declaração da classe Funcionario.
 */

class Funcionario {
public:
    std::string codigo;
    std::string nome;
    char departamento;
    float salario;

    Funcionario(std::string codigo, std::string nome, char departamento, float salario);
};

#endif
