#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#include <vector>
#include "funcionario.h"

/**
 * @file departamento.h
 * @brief Declaração da classe Departamento.
 */

class Departamento {
public:
    char codigo;
    std::vector<Funcionario> funcionarios;

    Departamento(char codigo);

    void adicionarFuncionario(Funcionario funcionario);
    float calcularFolhaPagamento();
    void imprimirFolhaPagamento();
};

#endif
