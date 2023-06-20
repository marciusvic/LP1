#ifndef NOMES_H
#define NOMES_H

#include <vector>
#include <string>

/**
 * @file nomes.h
 * @brief Declaração das funções para ler e exibir nomes a partir de um arquivo
 */

void lerNomesArquivo(const std::string& nomeArquivo, std::vector<std::string>& nomes);
void exibirNomes(const std::vector<std::string>& nomes);

#endif
