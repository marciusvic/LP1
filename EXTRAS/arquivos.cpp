#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::ifstream arquivo("dados.txt");

    if (arquivo.is_open()) {
        std::string linha;
        while (std::getline(arquivo, linha)) {
            std::istringstream iss(linha);
            std::string nome, idade, genero;

            if (iss >> nome >> idade >> genero) {
                // Faça o processamento dos dados
                std::cout << "Nome: " << nome << std::endl;
                std::cout << "Idade: " << idade << std::endl;
                std::cout << "Gênero: " << genero << std::endl;
                std::cout << std::endl;
            }
        }

        arquivo.close();
    } else {
        std::cout << "Erro ao abrir o arquivo." << std::endl;
    }

    return 0;
}
