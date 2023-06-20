/**
 * @file departamento.cpp
 * @brief Implementação da classe Departamento.
 */

#include <iostream>
#include <iomanip>
#include "Departamento.h"

/**
 * @brief Construtor da classe Departamento.
 * @param codigo Código do departamento.
 */
Departamento::Departamento(char codigo) {
    this->codigo = codigo;
}

/**
 * @brief Adiciona um funcionário ao departamento.
 * @param funcionario Objeto Funcionario a ser adicionado.
 */
void Departamento::adicionarFuncionario(Funcionario funcionario) {
    funcionarios.push_back(funcionario);
}

/**
 * @brief Calcula a folha de pagamento do departamento.
 * @return Valor total da folha de pagamento.
 */
float Departamento::calcularFolhaPagamento() {
    float total = 0.0;
    for (const Funcionario& funcionario : funcionarios) {
        total += funcionario.salario;
    }
    return total;
}

/**
 * @brief Imprime a folha de pagamento do departamento.
 */
void Departamento::imprimirFolhaPagamento() {
    std::cout << "FOLHA DE PAGAMENTO DEPTO " << codigo << ":" << std::endl;
    std::cout << "FUNCIONAL\tNOME\tDEPTO\tSALARIO" << std::endl;
    for (const Funcionario& funcionario : funcionarios) {
        std::cout << funcionario.codigo << "\t\t" << funcionario.nome << "\t" << funcionario.departamento << "\t" << std::fixed << std::setprecision(2) << funcionario.salario << std::endl;
    }
    float total = calcularFolhaPagamento();
    std::cout << "VALOR TOTAL: R$ " << total << std::endl;
    std::cout << std::endl;
}
