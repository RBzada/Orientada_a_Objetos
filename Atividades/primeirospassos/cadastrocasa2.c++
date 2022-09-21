#include <iostream>

class casa{
    int numero;
    int quartos;
    bool jardim;

    public:

    // Método construtor
    casa(int num, int quar, bool jar){
        if(num < 0){
            numero = 0;
        }
        else{
            numero  = num;
        }

        if(quar < 0){
            quartos = 0;
        }
        else{
            quartos  = quar;
        }

        jardim = jar;
    }

    // Função para exibir informações da casa
    void print_info(){
        std::cout << "Quantidade de quartos: " << quartos << std::endl;
        std::cout << "Jadim: " << jardim << std::endl;
        std::cout << "Numero: " << numero << std::endl;
    }

    // Setando o numero da casa por função
    void set_numero(int n){
        if(n < 0){
            numero = 0;
        }
        else{
            numero = n;
        }
    }

    // Função para pegar o numero da casa
    int get_numero(){
        return numero;
    }

    // Setando o numero de quartos
    void set_quartos(int n){
        if(n < 0){
            quartos = 0;
        }
        else{
            quartos = n;
        }
    }

    // Função para pegar a quantidade de quartos
    int get_quartos(){
        return quartos;
    }

    // Setando o valor bool de jardim
    void set_jardim(bool b){
        jardim = b;
    }

    // Função para pegar o valor de jardim
    int get_jardim(){
        return jardim;
    }
};


int main(void){
    // Sempre declarar o objeto com os parêmetros feitos no método construtor
    casa minha_casa(300, 3, false);
    minha_casa.print_info();

    return 0;
}