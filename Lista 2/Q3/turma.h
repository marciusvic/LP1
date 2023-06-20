/**
 * @file turma.h
 * @brief Declaração da classe Turma.
 */

#ifndef TURMA_H
#define TURMA_H

#include "aluno.h"

/**
 * @class Turma
 * @brief Representa uma turma com capacidade, vagas e lista de alunos.
 */
class Turma {
private:
    int capacidade; /**< Capacidade total da turma */
    int vagas; /**< Número de vagas disponíveis na turma */
    Aluno *alunos; /**< Lista de alunos da turma */

public:
    /**
     * @brief Construtor da classe Turma.
     * @param _capacidade A capacidade total da turma.
     * @param _vagas O número de vagas disponíveis na turma.
     */
    Turma(int _capacidade, int _vagas);

    /**
     * @brief Destrutor da classe Turma.
     */
    ~Turma();

    /**
     * @brief Define a capacidade total da turma.
     * @param _capacidade A capacidade total da turma.
     */
    void setCapacidade(int _capacidade);

    /**
     * @brief Define o número de vagas disponíveis na turma.
     * @param _vagas O número de vagas disponíveis na turma.
     */
    void setVagas(int _vagas);

    /**
     * @brief Preenche os dados de um aluno na posição especificada.
     * @param i A posição do aluno na lista de alunos.
     * @param matricula A matrícula do aluno.
     * @param nome O nome do aluno.
     * @param nota1 A nota da primeira avaliação do aluno.
     * @param nota2 A nota da segunda avaliação do aluno.
     * @param nota3 A nota da terceira avaliação do aluno.
     */
    void preencherAluno(int i, int matricula, std::string nome, float nota1, float nota2, float nota3);

    /**
     * @brief Ordena a lista de alunos por matrícula.
     */
    void ordenarPorMatricula();

    /**
     * @brief Imprime os dados dos alunos da turma, ordenados por matrícula.
     */
    void imprimirAlunos();
};

#endif
