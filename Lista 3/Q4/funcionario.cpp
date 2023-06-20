/**
 * @file funcionario.cpp
 * @brief Implementação da classe Funcionario.
 */

#include "funcionario.h"

/**
 * @brief Construtor da classe Funcionario.
 * @param codigo Código do funcionário.
 * @param nome Nome do funcionário.
 * @param departamento Código do departamento do funcionário.
 * @param salario Salário do funcionário.
 */
Funcionario::Funcionario(std::string codigo, std::string nome, char departamento, float salario) {
    this->codigo = codigo;
    this->nome = nome;
    this->departamento = departamento;
    this->salario = salario;
}
