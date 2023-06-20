#include <iostream>

template <class T>
void maxMin(T v[], int n, T& ma, T& me) {
    ma = v[0]; // Inicializa ma com o primeiro elemento do vetor
    me = v[0]; // Inicializa me com o primeiro elemento do vetor

    for (int i = 1; i < n; i++) {
        if (v[i] > ma) {
            ma = v[i]; // Atualiza ma se encontrarmos um valor maior
        } else if (v[i] < me) {
            me = v[i]; // Atualiza me se encontrarmos um valor menor
        }
    }
}

int main() {
    int vetorInteiro[] = {10, 5, 7, 3, 8};
    int tamanhoInteiro = sizeof(vetorInteiro) / sizeof(vetorInteiro[0]);
    int maximoInteiro, minimoInteiro;

    maxMin(vetorInteiro, tamanhoInteiro, maximoInteiro, minimoInteiro);

    std::cout << "Maior valor: " << maximoInteiro << std::endl;
    std::cout << "Menor valor: " << minimoInteiro << std::endl;

    double vetorDouble[] = {3.14, 2.71, 1.618, 0.707};
    int tamanhoDouble = sizeof(vetorDouble) / sizeof(vetorDouble[0]);
    double maximoDouble, minimoDouble;

    maxMin(vetorDouble, tamanhoDouble, maximoDouble, minimoDouble);

    std::cout << "Maior valor: " << maximoDouble << std::endl;
    std::cout << "Menor valor: " << minimoDouble << std::endl;

    return 0;
}
