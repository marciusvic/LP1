/**
 * @file main.cpp
 * @brief Programa principal para ler os arquivos e escrever o resultado.
 * @details Programa em C++ que preencha um vetor de 10 inteiros com informações vindas de um arquivo e escreva em outro arquivo o menor elemento, o maior elemento, bem como a média dos elementos do vetor
 * @author Márcio Victor
 * @author 20210090869
 * @since 04/06/2023
 * @version 1.0
 */

#include <iostream>
#include <vector>
#include "leitura.h"
#include "calculos.h"
#include "escrita.h"

/**
 * @brief Função principal
 * @details A função solicita ao usuário o nome do arquivo de entrada, lê os números do arquivo de entrada e os armazena em um vetor, calcula o menor elemento, o maior elemento, bem como a média dos elementos do vetor, e escreve essas informações em um arquivo de saída.
 */

int main() {
    std::vector<int> numeros(10);

    lerNumeros(numeros, "numeros.txt");

    int menor = encontrarMenor(numeros);
    int maior = encontrarMaior(numeros);
    double media = calcularMedia(numeros);

    escreverResultado(menor, maior, media, "resultado.txt");

    system("pause");
    return 0;
}
