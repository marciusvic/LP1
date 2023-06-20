/**
 * @file main.cpp
 * @brief Contém a função principal do programa que lê dados de funcionários de um arquivo e imprime a folha de pagamento por departamento.
 * @details Programa em C++ que lê dados de funcionários de um arquivo e imprime a folha de pagamento por departamento.
 * @author Márcio Victor
 * @author 20210090869
 * @since 04/06/2023
 * @version 1.0
 */

#include <iostream>
#include <fstream>
#include <vector>
#include "Funcionario.h"
#include "Departamento.h"

/**
 * @brief Copia os dados de funcionários de um arquivo para um vetor de objetos Funcionario.
 * @param fl Ponteiro para o arquivo de dados.
 * @param n Número de funcionários a serem lidos.
 * @param pessoal Vetor de objetos Funcionario onde os dados serão armazenados.
 */
void copia_dados(FILE* fl, int n, std::vector<Funcionario>& pessoal) {
    char codigo[100];
    char nome[100];
    char departamento;
    float salario;

    for (int i = 0; i < n; i++) {
        fscanf(fl, "%s\t%s\t%c\t%f\n", codigo, nome, &departamento, &salario);
        pessoal.push_back(Funcionario(codigo, nome, departamento, salario));
    }
}

/**
 * @brief Imprime a folha de pagamento de um determinado departamento.
 * @param n Número total de funcionários.
 * @param pessoal Vetor de objetos Funcionario com os dados dos funcionários.
 * @param depto Código do departamento a ser impresso.
 */
void imprime_folha_pagamento(int n, const std::vector<Funcionario>& pessoal, char depto) {
    Departamento departamento(depto);

    for (const Funcionario& funcionario : pessoal) {
        if (funcionario.departamento == depto) {
            departamento.adicionarFuncionario(funcionario);
        }
    }

    departamento.imprimirFolhaPagamento();
}

/**
 * @brief Função principal do programa.
 * @return 0 em caso de sucesso, 1 em caso de erro ao abrir o arquivo.
 */
int main() {
    std::FILE* arquivo = std::fopen("dados_funcionarios.txt", "r");
    if (!arquivo) {
        std::cout << "Erro ao abrir o arquivo." << std::endl;
        return 1;
    }

    int num_funcionarios;
    std::fscanf(arquivo, "%d\n", &num_funcionarios);

    std::vector<Funcionario> funcionarios;
    copia_dados(arquivo, num_funcionarios, funcionarios);

    std::fclose(arquivo);

    imprime_folha_pagamento(num_funcionarios, funcionarios, 'A');
    imprime_folha_pagamento(num_funcionarios, funcionarios, 'B');
    imprime_folha_pagamento(num_funcionarios, funcionarios, 'C');

    std::system("pause");
    return 0;
}
