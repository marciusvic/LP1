/**
 * @file Q4.cpp
 * @brief Programa que conta quantas vezes um número aparece em uma string de caracteres.
 * @author Márcio Victor
 * @details O programa lê uma string e um caractere, e conta quantas vezes o caractere aparece na string.
 * @since 22/04/2023
 * @date 22/04/2023
 * @sa google.com.br
 */

#include <iostream>
#include <cstring>

using namespace std;

/**
 * Função recursiva que conta quantas vezes um número aparece em uma string de caracteres.
 * @param n O tamanho do vetor de caracteres a ser percorrido.
 * @param vet_num O vetor de caracteres a ser percorrido.
 * @param num_escolhido O número que será contado.
 * @param vezes O número de vezes que o num_escolhido apareceu na string (inicia com 0).
 * @return O número de vezes que o num_escolhido apareceu na string.
 */
int conta_num(int n, char vet_num[], char num_escolhido, int vezes)
{
    if (n == 0)
    {
        if (vet_num[n] == num_escolhido)
        {
            vezes++;
        }
        return vezes;
    }
    else
    {
        if (vet_num[n] == num_escolhido)
        {
            vezes++;
        }
        return conta_num(n - 1, vet_num, num_escolhido, vezes);
    }
}

/**
 * Função principal.
 */
int main()
{
    char vet_num[100];

    char num = 0;
    int vezes = 0;

    std::cout << "Digite um número: ";
    std::cin >> vet_num;

    std::cout << "Digite um caractere para ser contado: ";
    std::cin >> num;

    vezes = conta_num(strlen(vet_num) - 1, vet_num, num, 0);

    std::cout << "O caractere " << num << " apareceu " << vezes << " vezes na string " << vet_num << std::endl;

    return 0;
}
