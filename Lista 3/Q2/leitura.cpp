/**
 * @file leitura.cpp
 * @brief Implementação das funções para ler números de um arquivo
 */

#include <iostream>
#include <fstream>
#include <vector>
#include "leitura.h"

/**
 * @brief Lê números de um arquivo e armazena em um vetor
 * @param numeros O vetor para armazenar os números lidos
 * @param nomeArquivo O nome do arquivo de entrada
 * @details Abre o arquivo de entrada especificado pelo nomeArquivo e lê 10 números inteiros, armazenando-os no vetor numeros.
 * Se ocorrer algum erro ao abrir o arquivo, exibe uma mensagem de erro.
 */
void lerNumeros(std::vector<int>& numeros, const std::string& nomeArquivo) {
    std::ifstream arquivoE(nomeArquivo);

    if (!arquivoE) {
        std::cerr << "Erro ao abrir o arquivo de entrada." << std::endl;
        return;
    }

    for (int i = 0; i < 10; ++i) {
        arquivoE >> numeros[i];
    }

    arquivoE.close();
}
