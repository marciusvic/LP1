#include <iostream>
#include <string>
#include <fstream>
#include <vector>

class Funcionario {
private:
    std::string nome;
    double salario;

public:
    Funcionario(std::string nome, double salario) {
        this->nome = nome;
        this->salario = salario;
    }

    std::string getNome() {
        return nome;
    }

    double getSalario() {
        return salario;
    }

    bool compararPorSalario(Funcionario& f1, Funcionario& f2) {
        return f1.getSalario() < f2.getSalario();
    }
    
    void ordenarFuncionariosMaiorParaMenor(Funcionario* funcionarios, int numFuncionarios) {
        for (int i = 0; i < numFuncionarios - 1; ++i) {
            for (int j = 0; j < numFuncionarios - i - 1; ++j) {
                if (compararPorSalario(funcionarios[j], funcionarios[j + 1])) {
                    std::swap(funcionarios[j], funcionarios[j + 1]);
                }
            }
        }
    }
    
    void ordenarFuncionariosMenorParaMaior(Funcionario* funcionarios, int numFuncionarios) {
        ordenarFuncionariosMaiorParaMenor(funcionarios, numFuncionarios);
    
        int inicio = 0;
        int fim = numFuncionarios - 1;
    
        while (inicio < fim) {
            std::swap(funcionarios[inicio], funcionarios[fim]);
            inicio++;
            fim--;
        }
    }
    
    void imprimirFuncionarios(Funcionario* funcionarios, int numFuncionarios, int opcao) {
        if(opcao == 1){
            ordenarFuncionariosMaiorParaMenor(funcionarios, numFuncionarios);
        }
        if(opcao == 2){
            ordenarFuncionariosMenorParaMaior(funcionarios, numFuncionarios);
        }
    
        for (int i = 0; i < numFuncionarios; ++i) {
            std::cout << "Nome: " << funcionarios[i].getNome() << ", Salário: " << funcionarios[i].getSalario() << std::endl;
        }
    }
    
    Funcionario operator+(double valor) {
        double novoSalario = salario + (salario * valor / 100);
        return Funcionario(nome, novoSalario);
    }
    
    friend std::ostream& operator<<(std::ostream& os, const Funcionario& funcionario) {
        os << "Nome: " << funcionario.nome << ", Salário: " << funcionario.salario;
        return os;
    }
};
int main() {
    std::vector<Funcionario> funcionarios;

    std::cout << "Digite os dados dos funcionarios (nome salario). Digite 'fim' para encerrar a entrada.\n";

    std::string nome;
    double salario;

    while (true) {
        std::cin >> nome;
        if (nome == "fim") {
            break;
        }
        std::cin >> salario;

        funcionarios.push_back(Funcionario(nome, salario));
    }

    std::ofstream file("funcionarios.txt");

    if (file.is_open()) {
        for (const auto& funcionario : funcionarios) {
            file << funcionario << "\n";
        }

        file.close();
    } else {
        std::cout << "Failed to open the file." << std::endl;
        return 1;
    }

    std::ifstream inputFile("funcionarios.txt");

    if (inputFile.is_open()) {
        std::string nome;
        double salario;

        while (inputFile >> nome >> salario) {
            funcionarios.push_back(Funcionario(nome, salario));
        }

        inputFile.close();
    } else {
        std::cout << "Failed to open the file." << std::endl;
        return 1;
    }

    funcionarios[0] = funcionarios[0] + 10;
    std::cout << funcionarios[0];

    std::cout<<"\nEm que ordem voce deseja ver os funcionarios?\n1 - Do maior salário, para o menor\n2 - Do menor salário, para o maior\n3 - Na ordem em que digitei\n";
    int opcao;
    std::cin >> opcao;
    funcionarios[0].imprimirFuncionarios(funcionarios.data(), funcionarios.size(), opcao);

    return 0;
}
/*exemplo de entrada:
João 2500.0
Maria 3000.0
Pedro 2000.0
Ana 3500.0
Carlos 2800.0
fim
*/