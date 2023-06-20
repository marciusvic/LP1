/**
 * @file fatorial.cpp
 * @brief Implementação da função fatorial.
 * @author Márcio Victor
 * @since 22/04/2023
 * @date 22/04/2023
 * @sa google.com.br
 */

#include "fatorial.h"

/**
 * @brief Função que calcula o fatorial de um número inteiro.
 *
 * @param n número inteiro positivo.
 *
 * @return o fatorial de n.
 */
int fatorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fatorial(n - 1);
    }
}
