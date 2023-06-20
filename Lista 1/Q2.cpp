/**
 * @file Q2.cpp
 * @brief Programa que encontra o menor número em um vetor usando recursão.
 * @author Márcio Victor
 * @details O programa pede ao usuário o tamanho do vetor e em seguida pede para o usuário digitar os números para preencher o vetor. Depois disso, é usada uma função recursiva para encontrar o menor número no vetor.
 * @sa google.com.br
 * @since 22/04/2023
 * @date 22/04/2023
 */

#include <iostream>
#include <iomanip>

using namespace std;

/**
 * Função recursiva que encontra o menor número em um vetor.
 * @param n O tamanho do vetor.
 * @param vet O vetor de números inteiros.
 * @param menor O menor número encontrado até o momento.
 * @return O menor número no vetor.
 */
int menor_recursivo(int n, int vet[], int menor)
{
    if (n == 0)
    {
        if (vet[n] < menor)
        {
            menor = vet[n];
        }
        return menor;
    }
    else
    {
        if (vet[n] < menor)
        {
            menor = vet[n];
        }
        return menor_recursivo(n - 1, vet, menor);
    }
}

/**
 * Função principal.
 */
int main()
{
    int n = 0;

    std::cout << "Digite o tamanho do vetor:\n";

    std::cin >> n;

    std::cout << "Digite " << n << " números.\n";

    int vet[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> vet[i];
    }
    int menor = menor_recursivo(n, vet, vet[0]);
    std::cout << "O menor é: " << menor << "\n";
    return 0;
}
