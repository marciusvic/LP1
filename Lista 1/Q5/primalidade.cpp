/**
 * @file primalidade.cpp
 * @brief Implementação das funções isPrimo e buscaPrimo.
 * @author Márcio Victor
 * @since 22/04/2023
 * @date 22/04/2023
 * @sa google.com.br
 */

#include "primalidade.h"

/**
 * @brief Função que verifica se um número inteiro é primo.
 *
 * @param n número inteiro positivo.
 * @param i parâmetro interno para recursão.
 *
 * @return true se o número é primo, false caso contrário.
 */
bool isPrimo(int n, int i)
{
    if (n <= 2)
    {
        return (n == 2) ? true : false;
    }
    if (n % i == 0)
    {
        return false;
    }
    if (i * i > n)
    {
        return true;
    }
    return isPrimo(n, i + 1);
}

/**
 * @brief Função que busca o maior número primo menor ou igual a um número dado.
 *
 * @param n número inteiro positivo.
 * @param i parâmetro interno para recursão.
 *
 * @return o maior número primo menor ou igual a n.
 */
int buscaPrimo(int n, int i)
{
    if (isPrimo(n - i))
    {
        return n - i;
    }
    return buscaPrimo(n, i + 1);
}
