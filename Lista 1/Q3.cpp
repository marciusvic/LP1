/**
 * @file Q3.cpp
 * @brief Programa que calcula o número harmônico Hn de um número n, onde Hn = 1/1 + 1/2 + 1/3 + ... + 1/n
 * @author Márcio Victor
 * @since 22/04/2023
 * @date 22/04/2023
 * @sa google.com.br
 */

#include <iostream>
#include <math.h>

using namespace std;

/**
 * Função que calcula o número harmônico Hn de um número n.
 * @param n O número limite para calcular o número harmônico.
 * @return O número harmônico Hn de n.
 */
double numero_harmonico(double n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return ((1 / n) + numero_harmonico(n - 1));
    }
}

/**
 * Função principal.
 */
int main()
{

    double n = 0;

    std::cout << "Digite um número real positivo: ";
    std::cin >> n;

    std::cout << "Hn = " << numero_harmonico(n);

    return 0;
}
