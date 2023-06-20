#include <iostream>
#include <string>
#include <vector>

class Pessoa {
private:
    int id;
    std::string nome;
    int idade;

public:
    void setId(int id);
    int getId();
    
    void setNome(std::string nome);
    std::string getNome();
    
    void setIdade(int idade);
    int getIdade();
};

void Pessoa::setId(int id) {
    this->id = id;
}

int Pessoa::getId() {
    return this->id;
}

void Pessoa::setNome(std::string nome) {
    this->nome = nome;
}

std::string Pessoa::getNome() {
    return this->nome;
}

void Pessoa::setIdade(int idade) {
    this->idade = idade;
}

int Pessoa::getIdade() {
    return this->idade;
}

int main() {
    std::vector<Pessoa> pessoas;
    int id = 0;
    std::string nome;
    int idade = 0;

    while (true) {
        std::cout << "Digite o nome (ou 'fim' para encerrar): "<<std::endl;
        std::getline(std::cin, nome);

        if (nome == "fim") {
            break;
        }

        Pessoa pessoa;
        
        pessoa.setNome(nome);
        std::cout << "Digite a idade: "<<std::endl;
        std::cin >> idade;
        pessoa.setIdade(idade);

        std::cout << "Digite o ID: "<<std::endl;
        std::cin >> id;
        std::cin.ignore();
        pessoa.setId(id);

        pessoas.push_back(pessoa);
    }
    std::cout<<"LISTA"<<std::endl;
    std::cout << "============================" << std::endl;
    for (int i = 0; i < pessoas.size(); i++) {
        std::cout << "Nome: " << pessoas[i].getNome() << std::endl;
        std::cout << "Idade: " << pessoas[i].getIdade() << std::endl;
        std::cout << "ID: " << pessoas[i].getId() << std::endl;
        std::cout << "============================" << std::endl;
    }

    return 0;
}