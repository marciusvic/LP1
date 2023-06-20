/**
 * @file main.cpp
 * @brief Programa principal para preencher um arquivo.
 * @details Programa em C++ que preencha um vetor de 4 cadeias de caracteres (strings) com informações vindas de um arquivo de entrada e imprima cada elemento do vetor na saída padrão.
 * @author Márcio Victor
 * @author 20210090869
 * @since 04/06/2023
 * @version 1.0
 */
#include "nomes.h"
#include <vector>
#include <string>

/**
 * @brief Função principal
 * @details A função solicita ao usuário o nome do arquivo de entrada, lê os nomes do arquivo de entrada e os armazena em um vetor, e exibe os nomes na saída padrão.
 */

int main() {
    const std::string nomeArquivo = "nomes.txt";
    const int quantidadeNomes = 4;
    std::vector<std::string> nomes(quantidadeNomes);

    lerNomesArquivo(nomeArquivo, nomes);
    exibirNomes(nomes);

    system("pause");
    return 0;
}
