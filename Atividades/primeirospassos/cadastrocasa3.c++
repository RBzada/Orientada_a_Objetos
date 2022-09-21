#include <iostream>

class casa{
    int numero;
    int quartos;
    bool jardim;

    public:

    // Método construtor
    // Para que o objeto seja criado sem parâmetros, tendo o método construtor, deve-se 
    // colocar os valores iguais a um valor
    casa(int num = 0, int quar = 0, bool jar = 0){
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
    // Pode-se omitir parâmetros dependendo da posição que está o "default"
    // Não pode ter tipo casa(int quarto=0, int numero, bool jardim), pois o 
    //compilador não sabe qual o valor que vai para cada campo
    // Sempre colocar o valor padrão da direita para a esquerda
    casa minha_casa;
    minha_casa.print_info();

    return 0;
}