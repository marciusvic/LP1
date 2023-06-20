/**
 * @file arquivo.cpp
 * @brief Implementação das funções para processar alunos em arquivos
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "arquivo.h"

/**
 * @brief Calcula a média e a situação de um aluno com base em suas notas
 * @param nota1 A primeira nota do aluno
 * @param nota2 A segunda nota do aluno
 * @param nota3 A terceira nota do aluno
 * @param media Variável de saída para armazenar a média do aluno
 * @param situacao Variável de saída para armazenar a situação do aluno (Aprovado ou Reprovado)
 * @details Calcula a média das notas do aluno e determina sua situação com base na média. Se a média for maior ou igual a 7.0, o aluno é considerado aprovado; caso contrário, é considerado reprovado.
 */
void calcularMediaESituacao(double nota1, double nota2, double nota3, double& media, std::string& situacao) {
    media = (nota1 + nota2 + nota3) / 3.0;
    if (media >= 7.0) {
        situacao = "Aprovado";
    } else {
        situacao = "Reprovado";
    }
}

/**
 * @brief Processa um aluno e escreve seu nome, média e situação em um arquivo
 * @param output O fluxo de saída para escrever os resultados
 * @param nome O nome do aluno
 * @param nota1 A primeira nota do aluno
 * @param nota2 A segunda nota do aluno
 * @param nota3 A terceira nota do aluno
 * @details Calcula a média e a situação do aluno utilizando a função calcularMediaESituacao e escreve o nome, a média e a situação no arquivo de saída especificado pelo fluxo de saída.
 */
void processarAluno(std::ofstream& output, const std::string& nome, double nota1, double nota2, double nota3) {
    double media = 0.0;
    std::string situacao;

    calcularMediaESituacao(nota1, nota2, nota3, media, situacao);

    output << std::fixed << std::setprecision(1);
    output << "Nome: " << nome << "\tMédia: " << media << "\tSituação: " << situacao << std::endl;
}

/**
 * @brief Processa alunos em arquivos de entrada e escreve os resultados em um arquivo de saída
 * @param inputFile O nome do arquivo de entrada
 * @param outputFile O nome do arquivo de saída
 * @details Abre o arquivo de entrada e o arquivo de saída especificados pelos nomes de arquivos.
 * Processa cada linha do arquivo de entrada, lendo o nome do aluno e suas notas, e chama a função processarAluno para calcular a média e a situação do aluno e escrever os resultados no arquivo de saída. Ao final do processamento, exibe uma mensagem indicando que o processamento foi concluído.
 */
void processarArquivos(std::string inputFile, std::string outputFile) {
    std::ifstream input(inputFile);
    std::ofstream output(outputFile);

    if (!input.is_open()) {
        std::cout << "Erro ao abrir o arquivo de entrada." << std::endl;
        return;
    }

    if (!output.is_open()) {
        std::cout << "Erro ao abrir o arquivo de saída." << std::endl;
        return;
    }

    std::string line;
    while (std::getline(input, line)) {
        std::stringstream ss(line);
        std::string nome;
        double nota1, nota2, nota3;

        std::getline(ss, nome, '\t');
        ss >> nota1 >> nota2 >> nota3;

        processarAluno(output, nome, nota1, nota2, nota3);
    }

    input.close();
    output.close();

    std::cout << "Processamento concluído. Resultados gravados em " << outputFile << std::endl;
}
