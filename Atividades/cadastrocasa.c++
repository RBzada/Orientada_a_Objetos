#include <iostream>

class casa{
    int numero;
    int quartos;
    bool jardim;

    public:

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
    casa minha_casa;
    int num, quartos, jardim;


    std::cout << "Digite o numero da casa: ";
    std::cin >> num;
    std::cout << "Digite a quatidade de quartos na casa: ";
    std::cin >> quartos;
    std::cout << "Digite se ha ou nao jardim: " ;
    std::cin >> jardim;

    minha_casa.set_numero(num);
    minha_casa.set_quartos(quartos);
    minha_casa.set_jardim(jardim);

    std::cout << std::endl;
    std::cout << "O numero de quartos na casa eh: " << minha_casa.get_quartos() << std::endl;
    std::cout << "O jardim:  " << minha_casa.get_jardim() << std::endl;
    std::cout << "O numero da casa eh: " << minha_casa.get_numero() << std::endl;


    // Também é valido por print_info ser publico:
    std::cout << std::endl;
    minha_casa.print_info();

    return 0;
}