/**
 * @file escrita.cpp
 * @brief Implementação das funções para escrever resultados em um arquivo
 */

#include <iostream>
#include <fstream>
#include <string>
#include "escrita.h"

/**
 * @brief Escreve o menor, o maior e a média em um arquivo
 * @param menor O menor elemento
 * @param maior O maior elemento
 * @param media A média dos elementos
 * @param nomeArquivo O nome do arquivo de saída
 * @details Abre o arquivo de saída especificado pelo nomeArquivo e escreve o menor, o maior e a média separados por linhas.
 * Se ocorrer algum erro ao abrir o arquivo, exibe uma mensagem de erro.
 */
void escreverResultado(int menor, int maior, double media, const std::string& nomeArquivo) {
    std::ofstream arquivoS(nomeArquivo);

    if (!arquivoS) {
        std::cerr << "Erro ao abrir o arquivo de saída." << std::endl;
        return;
    }

    arquivoS << "menor elemento: " << menor << std::endl;
    arquivoS << "maior elemento: " << maior << std::endl;
    arquivoS << "média elemento: " << media << std::endl;

    arquivoS.close();
}
