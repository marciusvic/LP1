/**
 * @file primalidade.h
 * @brief Declaração das funções isPrimo e buscaPrimo.
 * @author Márcio Victor
 * @since 22/04/2023
 * @date 22/04/2023
 * @sa google.com.br
 */

#ifndef PRIMALIDADE_H
#define PRIMALIDADE_H

/**
 * @brief Função que verifica se um número inteiro é primo.
 *
 * @param n número inteiro positivo.
 * @param i parâmetro interno para recursão.
 *
 * @return true se o número é primo, false caso contrário.
 */
bool isPrimo(int n, int i = 2);

/**
 * @brief Função que busca o maior número primo menor ou igual a um número dado.
 *
 * @param n número inteiro positivo.
 * @param i parâmetro interno para recursão.
 *
 * @return o maior número primo menor ou igual a n.
 */
int buscaPrimo(int n, int i = 0);

#endif
