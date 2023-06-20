/**
 * @file aluno.h
 * @brief Declaração da classe Aluno.
 */

#ifndef ALUNO_H
#define ALUNO_H

#include <string>

/**
 * @class Aluno
 * @brief Representa um aluno com matrícula, nome e notas.
 */
class Aluno {
private:
    int matricula; /**< Matrícula do aluno */
    std::string nome; /**< Nome do aluno */
    float nota1; /**< Nota da primeira avaliação */
    float nota2; /**< Nota da segunda avaliação */
    float nota3; /**< Nota da terceira avaliação */

public:
    /**
     * @brief Define a matrícula do aluno.
     * @param _matricula A matrícula do aluno.
     */
    void setMatricula(int _matricula);

    /**
     * @brief Define o nome do aluno.
     * @param _nome O nome do aluno.
     */
    void setNome(std::string _nome);

    /**
     * @brief Define a nota da primeira avaliação do aluno.
     * @param _nota1 A nota da primeira avaliação.
     */
    void setNota1(float _nota1);

    /**
     * @brief Define a nota da segunda avaliação do aluno.
     * @param _nota2 A nota da segunda avaliação.
     */
    void setNota2(float _nota2);

    /**
     * @brief Define a nota da terceira avaliação do aluno.
     * @param _nota3 A nota da terceira avaliação.
     */
    void setNota3(float _nota3);

    /**
     * @brief Obtém a matrícula do aluno.
     * @return A matrícula do aluno.
     */
    int getMatricula();

    /**
     * @brief Obtém o nome do aluno.
     * @return O nome do aluno.
     */
    std::string getNome();

    /**
     * @brief Obtém a nota da primeira avaliação do aluno.
     * @return A nota da primeira avaliação.
     */
    float getNota1();

    /**
     * @brief Obtém a nota da segunda avaliação do aluno.
     * @return A nota da segunda avaliação.
     */
    float getNota2();

    /**
     * @brief Obtém a nota da terceira avaliação do aluno.
     * @return A nota da terceira avaliação.
     */
    float getNota3();

    /**
     * @brief Calcula a média das notas do aluno.
     * @return A média das notas.
     */
    float getMedia();
};

#endif

