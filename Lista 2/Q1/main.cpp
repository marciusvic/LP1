/**
 * @file main.cpp
 * @brief fazendo chamada da função tribonacci_recursiva para calcular o n-ésimo termo da sequência de Tribonacci
 * @details O programa solicita ao usuário um número n e calcula o n-ésimo termo da sequência de Tribonacci utilizando duas funções diferentes: uma implementação iterativa e outra recursiva. As funções são modularizadas e documentadas usando Doxygen com tags adequadas.
 * @author Márcio Victor
 * @author 20210090869
 * @since 01/05/2023
 * @author Marcio
 * @version 1.0
 */

#include <iostream>
#include "tribonacci.h"

using namespace std;

/**
 * @brief Função principal
 * @details A função solicita ao usuário um número inteiro n, chama as funções tribonacci_iterativa e tribonacci_recursiva para calcular o n-ésimo termo da sequência de Tribonacci e imprime o resultado na tela.
 */
int main()
{
    int n = 0;
    cout << "Digite o valor de N:\n";
    cin >> n;
    cout << "O " << n << "º termo de Tribonacci é: " << tribonacci_recursiva(n) << "\n";

    system("pause");
    return 0;
}
