#include <iostream>

class retangulo{
    int base;
    int altura;

    public:

    //Método construtor
    retangulo(float b = 0, float h = 0){
        std::cout <<  "Contruindo retangulo";
        std::cout << b << "X" << h << std::endl;
        base = b;
        altura = h;
    }

    //Método destrutor
    ~retangulo(){
        std::cout << "Destruindo retangulo";
        std::cout << base << "X" << altura << std::endl;
        base = 0;
        altura = 0;
    }

    void set_base(float b){
        base = b;
    }

    int get_base(){
        return base;
    }

    void set_altura(float h){
        altura = h;
    }

    int get_altura(){
        return altura;
    }

    float area(){
        return (base * altura);
    }

    float perimetro(){
        return ((2 * base) + (2 * altura));
    }
};


int main(void){
    float base, altura;

    std::cout << "Digite o valor da base: ";
    std::cin >> base;
    std::cout << "Digite o valor da altura: ";
    std::cin >> altura;

    // Declarando normalmente
    retangulo meu_retangulo(base, altura);

    std::cout << "\nA area do retangulo eh: " << meu_retangulo.area() << std::endl;
    std::cout << "O perimetro do retangulo eh: " << meu_retangulo.perimetro() << std::endl;

    // Declarando por ponteiro
    // Mesmo que os parametros sejam obrigatorio, quando declara como ponteiro não precisa 
    // colocar parametros
    retangulo* ret = new retangulo(base, altura);
    ret->set_base(base);
    ret->set_altura(altura);

    std::cout << "\nA area do retangulo eh: " << ret->area() << std::endl;
    std::cout << "O perimetro do retangulko eh: " << ret->perimetro() << std::endl;

    // Após utilizar a variável deve-se liberar a posição da memória
    delete ret;
}