/**
 * @file main.cpp
 * @brief Programa principal que utiliza as funções de fatorial e busca de números primos.
 * @author Márcio Victor
 * @since 22/04/2023
 * @date 22/04/2023
 * @sa google.com.br
 */

#include <iostream>
#include "fatorial.h"
#include "primalidade.h"

using namespace std;

/**
 * @brief Função principal.
 *
 * @return Valor de retorno da função.
 */
int main()
{
    int valor = 0;

    cin >> valor;

    valor = fatorial(valor);

    valor = buscaPrimo(valor);

    cout << valor << endl;

    system("pause");

    return 0;
}
