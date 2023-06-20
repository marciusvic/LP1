#include <iostream>
#include <string>

class Pessoa {
protected:
    int id;
    std::string nome;
    int idade;

public:
    Pessoa(std::string nome, int id, int idade);
    virtual ~Pessoa() {
        std::cout << "Classe Pessoa destruída" << std::endl;
    }
    int getId();
    std::string getNome();
    int getIdade();

    virtual void imprimirDados() = 0; // Método virtual puro
};

Pessoa::Pessoa(std::string nome, int id, int idade) {
    this->nome = nome;
    this->idade = idade;
    this->id = id;
}

int Pessoa::getId() {
    return this->id;
}

std::string Pessoa::getNome() {
    return this->nome;
}

int Pessoa::getIdade() {
    return this->idade;
}

class Estudante : public Pessoa {
private:
    std::string curso;
    int semestre;

public:
    Estudante(std::string nome, int id, int idade, std::string curso, int semestre);
    ~Estudante() {
        std::cout << "Classe Estudante destruída" << std::endl;
    }

    std::string getCurso();
    int getSemestre();

    void imprimirDados() override {
        std::cout << "Estudante:" << std::endl;
        std::cout << "Nome: " << nome << std::endl;
        std::cout << "Idade: " << idade << std::endl;
        std::cout << "ID: " << id << std::endl;
        std::cout << "Curso: " << curso << std::endl;
        std::cout << "Semestre: " << semestre << "º" << std::endl;
    }
};

std::string Estudante::getCurso() {
    return this->curso;
}

int Estudante::getSemestre() {
    return this->semestre;
}

Estudante::Estudante(std::string nome, int id, int idade, std::string curso, int semestre)
    : Pessoa(nome, id, idade) {
    this->curso = curso;
    this->semestre = semestre;
}

class Professor : public Pessoa {
private:
    std::string disciplina;
    std::string formacao;

public:
    Professor(std::string nome, int id, int idade, std::string disciplina, std::string formacao);
    ~Professor() {
        std::cout << "Classe Professor destruída" << std::endl;
    }

    std::string getDisciplina();
    std::string getFormacao();

    void imprimirDados() override {
        std::cout << "Professor:" << std::endl;
        std::cout << "Nome: " << nome << std::endl;
        std::cout << "Idade: " << idade << std::endl;
        std::cout << "ID: " << id << std::endl;
        std::cout << "Disciplina: " << disciplina << std::endl;
        std::cout << "Formação: " << formacao << std::endl;
    }
};

std::string Professor::getDisciplina() {
    return this->disciplina;
}

std::string Professor::getFormacao() {
    return this->formacao;
}

Professor::Professor(std::string nome, int id, int idade, std::string disciplina, std::string formacao)
    : Pessoa(nome, id, idade) {
    this->disciplina = disciplina;
    this->formacao = formacao;
}

int main() {
    std::string nome;
    int idade;
    int id;
    std::string curso;
    int semestre;
    std::string disciplina;
    std::string formacao;

    std::cout << "Digite os dados do estudante:" << std::endl;
    std::getline(std::cin, nome);
    std::cin >> idade;
    std::cin >> id;
    std::cin.ignore();
    std::getline(std::cin, curso);
    std::cin >> semestre;
    std::cin.ignore();

    Estudante marcio(nome, id, idade, curso, semestre);

    std::cout << "Digite os dados do professor:" << std::endl;
    std::getline(std::cin, nome);
    std::cin >> idade;
    std::cin >> id;
    std::cin.ignore();
    std::getline(std::cin, disciplina);
    std::getline(std::cin, formacao);

    Professor patrick(nome, id, idade, disciplina, formacao);

    std::cout << std::endl;
    marcio.imprimirDados();
    std::cout << std::endl;

    std::cout << std::endl;
    patrick.imprimirDados();
    std::cout << std::endl;

    return 0;
}
