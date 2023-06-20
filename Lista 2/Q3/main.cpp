/**
 * @file main.cpp
 * @brief Programa principal para gerenciar uma turma de alunos. 
 * @details O programa inicia solicitando ao usuário a capacidade total da turma e o número de vagas disponíveis. Em seguida, cria-se uma instância da classe Turma com a capacidade e número de vagas informados. O usuário então insere os dados de cada aluno, como matrícula, nome e notas. Os dados são armazenados na instância da turma através do método `preencherAluno()`. Após o preenchimento dos alunos, a lista de alunos é impressa na ordem crescente de matrícula usando o método `imprimirAlunos()` da classe Turma. Por fim, é exibida a lista de alunos ordenada e o programa é encerrado.
 * @author Márcio Victor
 * @author 20210090869
 * @since 06/05/2023
 * @author Marcio
 * @version 1.0
 */

#include <iostream>
#include "turma.h"

/**
 * @brief Função principal
 * @details A função solicita ao usuário um número inteiro para definir a capacidade da turma, a seguir ela solicita um número y que representa o numero de vagas. Em seguida o programa solicida ao usuario os respectivos dados de cada aluno, e então ele organiza os dados em uma lista de alunos e imprime os dados dos alunos na ordem crescente de matrícula.
 */

int main() {
    int capacidadeTurma;
    std::cout << "Digite a capacidade da turma: ";
    std::cin >> capacidadeTurma;

    int numVagas;
    std::cout << "Digite o número de vagas disponíveis: ";
    std::cin >> numVagas;

    Turma turma(capacidadeTurma, numVagas);

    int numAlunosPreenchidos = capacidadeTurma - numVagas;
    for (int i = 0; i < numAlunosPreenchidos; i++) {
        int matricula;
        std::string nome;
        float nota1, nota2, nota3;

        std::cout << "Digite os dados do aluno " << (i + 1) << ":" << std::endl;
        std::cout << "Matrícula: ";
        std::cin >> matricula;
        std::cout << "Nome: ";
        std::cin >> nome;
        std::cout << "Nota 1: ";
        std::cin >> nota1;
        std::cout << "Nota 2: ";
        std::cin >> nota2;
        std::cout << "Nota 3: ";
        std::cin >> nota3;

        turma.preencherAluno(i, matricula, nome, nota1, nota2, nota3);
    }

    turma.imprimirAlunos();

    system("pause");

    return 0;
}
