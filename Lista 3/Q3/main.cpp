/**
 * @file main.cpp
 * @brief Programa principal para ler o arquivo e escrever o resultado no arquivo de saída.
 * @details Programa em C++ que lê um arquivo de entrada com informações de notas de alunos separados por uma tabulação (\t) e escreve um arquivo de saída com o nome do aluno, a média das notas e a situação do aluno (aprovado ou reprovado).
 * @author Márcio Victor
 * @author 20210090869
 * @since 04/06/2023
 * @version 1.0
 */

#include <iostream>
#include "arquivo.h"

/**
 * @brief Função principal.
 * @details A função principal chama a função processarArquivos para ler o arquivo de entrada e escrever o resultado no arquivo de saída.
 */

int main() {
    std::string inputFile = "entrada_q3.txt";
    std::string outputFile = "saida_q3.txt";

    processarArquivos(inputFile, outputFile);
    
    system("pause");
    return 0;
}
