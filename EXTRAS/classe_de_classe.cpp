#include <iostream>
#include <string>

class Produto{
    protected:
        std::string nome;
        float preco;
        std::string marca;
        std::string descricao;
        std::string dataDeFabricacao;
    public:
        Produto(std::string nome, float preco, std::string marca, std::string descricao, std::string dataDeFabricacao);
        ~Produto(){
            std::cout << "destruído";
        };
        std::string getNome();
        float getPreco();
        std::string getMarca();
        std::string getDescricao();
        std::string getDataDeFabricacao();
};
Produto::Produto(std::string nome, float preco, std::string marca, std::string descricao, std::string dataDeFabricacao){
    this->nome = nome;
    this->preco = preco;
    this->marca = marca;
    this->descricao = descricao;
    this->dataDeFabricacao = dataDeFabricacao;
}

std::string Produto::getNome(){
    return this->nome ;
}
float Produto::getPreco(){
    return this->preco;
}
std::string Produto::getMarca(){
    return this->marca;
}
std::string Produto::getDescricao(){
    return this->descricao;
}
std::string Produto::getDataDeFabricacao(){
    return this->dataDeFabricacao;
}

class ProdutoDuravel : public Produto{
    protected:
        std::string materialPredominante;
        std::string durabilidade;
    public:
    ProdutoDuravel(std::string nome, float preco, std::string marca, std::string descricao, std::string dataDeFabricacao, std::string materialPredominante, std::string durabilidade);
    ~ProdutoDuravel(){
        std::cout << "destruído";
    };
    std::string getMaterialPredominante();
    std::string getDurabilidade();
};
ProdutoDuravel::ProdutoDuravel(std::string nome, float preco, std::string marca, std::string descricao, std::string dataDeFabricacao, std::string materialPredominante, std::string durabilidade):Produto(nome, preco, marca, descricao, dataDeFabricacao){
        this->materialPredominante = materialPredominante;
        this-> durabilidade = durabilidade;
}

std::string ProdutoDuravel::getMaterialPredominante(){
    return this->materialPredominante;
}

std::string ProdutoDuravel::getDurabilidade(){
    return this->durabilidade;
}

class ProdutoNaoDuravel : public Produto{
    protected:
        std::string dataDeValidade;
        std::string genero;
    public:
        ProdutoNaoDuravel(std::string nome, float preco, std::string marca, std::string descricao, std::string dataDeFabricacao, std::string dataDeValidade, std::string genero);
        ~ProdutoNaoDuravel(){
            std::cout << "destruído";
        };
        std::string getDataDeValidade();
        std::string getGenero();
};

ProdutoNaoDuravel::ProdutoNaoDuravel(std::string nome, float preco, std::string marca, std::string descricao, std::string dataDeFabricacao, std::string dataDeValidade, std::string genero):Produto( nome, preco, marca, descricao, dataDeFabricacao){
    this-> dataDeValidade = dataDeValidade;
    this-> genero = genero;
}
std::string ProdutoNaoDuravel::getDataDeValidade(){
    return this-> dataDeValidade;
}
std::string ProdutoNaoDuravel::getGenero(){
    return this-> genero;
}

class Celular : public ProdutoDuravel{
    private:
        std::string modelo;
    public:
        Celular(std::string nome, float preco, std::string marca, std::string descricao, std::string dataDeFabricacao, std::string materialPredominante, std::string durabilidade, std::string modelo);
        ~Celular(){
            std::cout << "destruído";
        };
        std::string getModelo();
};

Celular::Celular(std::string nome, float preco, std::string marca, std::string descricao, std::string dataDeFabricacao, std::string materialPredominante, std::string durabilidade, std::string modelo):ProdutoDuravel(nome, preco, marca, descricao, dataDeFabricacao, materialPredominante, durabilidade){
    this->modelo = modelo;
}

std::string Celular::getModelo(){
    return this->modelo;
}

int main(){
    std::string nome;
    float preco;
    std::string marca;
    std::string descricao;
    std::string dataDeFabricacao;
    std::string materialPredominante;
    std::string durabilidade;
    std::string modelo;
    
    std::getline(std::cin, nome);
    std::cin >> preco;
    std::cin.ignore();
    std::getline(std::cin, marca);
    std::getline(std::cin, descricao);
    std::getline(std::cin, dataDeFabricacao);
    std::getline(std::cin, materialPredominante);
    std::getline(std::cin, durabilidade);
    std::getline(std::cin, modelo);
    
    Celular celular = Celular(nome, preco, marca, descricao, dataDeFabricacao, materialPredominante, durabilidade, modelo);
    
    std::cout << celular.getNome() << std::endl;
    std::cout << celular.getPreco() << std::endl;
    std::cout << celular.getMarca() << std::endl;
    std::cout << celular.getDescricao() << std::endl;
    std::cout << celular.getDataDeFabricacao() << std::endl;
    std::cout << celular.getMaterialPredominante() << std::endl;
    std::cout << celular.getDurabilidade() << std::endl;
    std::cout << celular.getModelo() << std::endl;
    return 0;
}
