#include "tribonacci.h"

/**
 * @brief Calcula o n-ésimo termo da sequência de Tribonacci de forma iterativa
 * @details A função recebe um número inteiro n como parâmetro e utiliza um loop for para calcular o enésimo termo da sequência de Tribonacci.
 * @param n Número inteiro que indica qual termo da sequência de Tribonacci deve ser calculado
 * @return O n-ésimo termo da sequência de Tribonacci
 * @example Exemplo de entrada: n = 7; Exemplo de saída: 4
 */
int tribonacci_iterativa(int n)
{
    int termo1 = 0, termo2 = 1, termo3 = 1, enesimoTermo = 0;
    if (n == 0 or n == 1 or n == 2)
    {
        return termo1;
    }
    else if (n == 3 or n == 4)
    {
        return termo2;
    }
    else
    {
        for (int i = 5; i <= n; i++)
        {
            enesimoTermo = termo1 + termo2 + termo3;
            termo1 = termo2;
            termo2 = termo3;
            termo3 = enesimoTermo;
        }
        return enesimoTermo;
    }
}

/**
 * @brief Calcula o n-ésimo termo da sequência de Tribonacci de forma recursiva
 * @details A função recebe um número inteiro n como parâmetro e utiliza recursão para calcular o enésimo termo da sequência de Tribonacci.
 * @param n Número inteiro que indica qual termo da sequência de Tribonacci deve ser calculado
 * @return O n-ésimo termo da sequência de Tribonacci
 * @example Exemplo de entrada: n = 7; Exemplo de saída: 4
 */
int tribonacci_recursiva(int n)
{
    if (n <= 4)
    {
        if (n <= 2)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return (tribonacci_recursiva(n - 1) + tribonacci_recursiva(n - 2) + tribonacci_recursiva(n - 3));
    }
}
