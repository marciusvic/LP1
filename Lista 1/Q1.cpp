/**
 * @file Q1.cpp
 * @brief Programa que calcula a soma dos cubos de 1 a n.
 * @author Márcio Victor
 * @since 22/04/2023
 * @date 22/04/2023
 * @sa google.com.br
 */

#include <iostream>
#include <math.h>

using namespace std;

/**
 * Função que calcula a soma dos cubos de 1 a n.
 * @param n O número limite para calcular a soma dos cubos.
 * @return A soma dos cubos de 1 a n.
 */
int soma_cubos(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (pow(n, 3) + soma_cubos(n - 1));
    }
}

/**
 * Função principal.
 */
int main()
{
    int n = 0;

    std::cout << "Digite um número inteiro positivo: ";
    std::cin >> n;

    std::cout << "A soma dos cubos de 1 a " << n << " é: " << soma_cubos(n) << std::endl;

    return 0;
}
