/**
 * @file calculos.cpp
 * @brief Implementação das funções para realizar cálculos em um vetor de números inteiros
 */

#include <vector>
#include "calculos.h"

/**
 * @brief Encontra o menor elemento em um vetor de números inteiros
 * @param numeros O vetor de números inteiros
 * @return O menor elemento no vetor
 * @details Percorre o vetor e compara cada elemento com o menor valor encontrado até o momento. Retorna o menor valor encontrado.
 */
int encontrarMenor(const std::vector<int>& numeros) {
    int menor = numeros[0];

    for (int i = 1; i < 10; ++i) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    return menor;
}

/**
 * @brief Encontra o maior elemento em um vetor de números inteiros
 * @param numeros O vetor de números inteiros
 * @return O maior elemento no vetor
 * @details Percorre o vetor e compara cada elemento com o maior valor encontrado até o momento. Retorna o maior valor encontrado.
 */
int encontrarMaior(const std::vector<int>& numeros) {
    int maior = numeros[0];

    for (int i = 1; i < 10; ++i) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    return maior;
}

/**
 * @brief Calcula a média dos elementos em um vetor de números inteiros
 * @param numeros O vetor de números inteiros
 * @return A média dos elementos no vetor
 * @details Percorre o vetor e acumula a soma dos elementos. Divide a soma pelo número de elementos para obter a média.
 */
double calcularMedia(const std::vector<int>& numeros) {
    int soma = 0;

    for (int i = 0; i < 10; ++i) {
        soma += numeros[i];
    }

    return static_cast<double>(soma) / 10.0;
}
