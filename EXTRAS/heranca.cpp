#include <iostream>
#include <string>

class Pessoa {
protected:
    int id;
    std::string nome;
    int idade;

public:

    Pessoa(std::string nome, int id, int idade);
    ~Pessoa(){
        std::cout << "classe Pessoa destruída" <<std::endl;
    }
    int getId();
    std::string getNome();
    int getIdade();
};

Pessoa::Pessoa(std::string nome, int id, int idade){
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

class Estudante : public Pessoa{
private:
    std::string curso;
    int semestre;
    
public:
    Estudante(std::string nome, int id, int idade, std::string curso, int semestre);
    ~Estudante(){
        std::cout << "classe Estudante destruida" << std::endl;
    }
    
    std::string getCurso();
    int getSemestre();
};

std::string Estudante::getCurso(){
    return this-> curso;
}
int Estudante::getSemestre(){
    return this-> semestre;
}

Estudante::Estudante(std::string nome, int id, int idade, std::string curso, int semestre):Pessoa(nome, id, idade){
    this->curso = curso;
    this->semestre = semestre;
}


int main() {
    int id = 0;
    std::string nome;
    int idade = 0;
    std::string curso;
    int semestre;
    
    std::getline(std::cin, nome);
    std::cin >> idade;
    std::cin >> id;
    std::cin.ignore();
    std::getline(std::cin, curso);
    std::cin >> semestre;
    
    Estudante marcio = Estudante(nome, id, idade, curso, semestre);
    
    std::cout << "Nome: " << marcio.getNome() << std::endl;
    std::cout << "Idade: " << marcio.getIdade() << std::endl;
    std::cout << "ID: " << marcio.getId() << std::endl;
    std::cout << "Curso: " << marcio.getCurso() << std::endl;
    std::cout << "Semestre: " << marcio.getSemestre() << "º" << std::endl;
    

    return 0;
}