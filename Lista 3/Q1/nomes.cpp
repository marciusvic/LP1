/**
 * @file nomes.cpp
 * @brief Implementação das funções para ler e exibir nomes a partir de um arquivo
 */

#include "nomes.h"
#include <iostream>
#include <fstream>

/**
 * @brief Lê os nomes de um arquivo e armazena em um vetor
 * @param nomeArquivo O nome do arquivo a ser lido
 * @param nomes Um vetor para armazenar os nomes lidos
 * @details Abre o arquivo de entrada especificado pelo nomeArquivo e lê os nomes linha por linha, armazenando-os no vetor nomes.
 * Se ocorrer algum erro ao abrir o arquivo, exibe uma mensagem de erro.
 */
void lerNomesArquivo(const std::string& nomeArquivo, std::vector<std::string>& nomes) {
    std::ifstream arquivoE;
    arquivoE.open(nomeArquivo);

    if (arquivoE.is_open()) {
        for (int i = 0; i < nomes.size(); ++i) {
            std::getline(arquivoE, nomes[i]);
        }

        arquivoE.close();
    } else {
        std::cerr << "Erro ao abrir o arquivo de entrada." << std::endl;
    }
}

/**
 * @brief Exibe os nomes armazenados em um vetor
 * @param nomes O vetor contendo os nomes a serem exibidos
 * @details Percorre o vetor de nomes e exibe cada nome em uma linha separada.
 */
void exibirNomes(const std::vector<std::string>& nomes) {
    for (const std::string& nome : nomes) {
        std::cout << nome << std::endl;
    }
}
