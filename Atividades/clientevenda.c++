#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class cliente{
    long cpf;
    int telefone;

public:
    cliente(long c, int tel):cpf(c), telefone(tel){
        cout << "Cliente de cpf: " << cpf << " criado" << endl; 
    }

    ~cliente(){
        cout << "Cliente de cpf: " << cpf << "removido" << endl;
    }

    long get_cpf(){
        return cpf;
    }

    void set_cpf(long c){
        cpf = c;
    }

    int get_telefone(){
        return telefone;
    }

    void set_telefone(int tel){
        telefone = tel;
    }
};

class item {
	int codigo;
	int quantidade;
	float preco_unitario;

public:
    item(int cod = 0, int qtd = 0, float precouni = 0):codigo(cod), quantidade(qtd), preco_unitario(precouni){
        cout << "Produto de codigo " << codigo << "criado" << endl;
    }

    ~item(){
        cout << "Produto de codigo " << codigo << "removido" << endl;
    }

    int get_codigo(){
        return codigo;
    }

    void set_codigo(int cod){
        codigo = cod;
    }

    int get_quantidade(){
        return quantidade;
    }

    void set_quantidade(int qtd){
        quantidade = qtd;
    }

    float get_preco_unitario(){
        return preco_unitario;
    }

    void set_preco_unitario(int precouni){
        preco_unitario = precouni;
    }
};

class venda {
	int quantidade_prod;
	int forma_pagamento;
	cliente* cli_venda;
	item* produtos;

public:	

    venda(int qtd_prod, int pag, cliente* cvenda, item* prod): quantidade_prod(qtd_prod), forma_pagamento(pag){
        cli_venda = new cliente(cvenda->get_cpf(), cvenda->get_telefone());
        produtos = prod;
        cout << "Venda com " << qtd_prod << " produto(s) criada" << endl;
    }

    ~venda(){
        delete cli_venda;
        delete[] produtos;
    }

    int get_quantidade_prod(){
        return quantidade_prod;
    }

    void set_quantidade_prod(int qtd_p){
        quantidade_prod = qtd_p;
    }

    int get_forma_pagamento(){
        return forma_pagamento;
    }

    void set_forma_pagamento(int pag){
        forma_pagamento = pag;
    }

    cliente* get_cli_venda(){
        return cli_venda;
    }

    void set_cli_venda(cliente* c){
        cli_venda = c;
    }

    item* get_produtos(){
        return produtos;
    }

    void set_produtos(item* prod){
        produtos = prod;
    }
};

int main(void){
    long cpf_cliente;
	int tel_cliente;
	int qtd_prod;
	int forma_pag;

    cliente* cliente_venda;
	item* produtos;
	venda* minha_venda;


    cout << "Digite o cpf do cliente: ";
    cin >> cpf_cliente;

    cout << "Digite o telefone do cliente: ";
    cin >> tel_cliente;

    cliente_venda = new cliente(cpf_cliente, tel_cliente);

    cout << "Digite a forma de pagamento (1 para dinheiro 0 para cartao): ";
    cin >> forma_pag;

    cout << "Digite a quantidade de produtos da venda:";
    cin >> qtd_prod;

    produtos = new item[qtd_prod];

    cout << "Digite as informacoes dos produtos: " << endl;

    for (int i = 0; i < qtd_prod; i++){
        int codigo;
	    int quantidade;
	    float preco_unitario;

        cout << "Digite o codigo do produto: ";
        cin >> codigo;

        cout << "Digite a quantidade de produto: ";
        cin >> quantidade;

        cout << "Digite o preco unitario do produto: ";
        cin >> preco_unitario;

        produtos[i].set_codigo(codigo);
        produtos[i].set_quantidade(quantidade);
        produtos[i].set_preco_unitario(preco_unitario);
    }

    minha_venda = new venda(qtd_prod, forma_pag, cliente_venda, produtos);

    cout << endl << endl;

    cout << "Cpf do cliente: " << cliente_venda->get_cpf() << endl;
    cout << "Telefone do cliente: " << cliente_venda->get_telefone() << endl;
    cout << "Quantidade de produtos: " << qtd_prod << endl;
    cout << "Forma de pagamento: " << forma_pag << endl;


    for (int i = 0; i < qtd_prod; i++){
        cout << "Qtd de produtos: " << produtos[i].get_quantidade() << endl;
		cout << "Preco unitario: " << produtos[i].get_preco_unitario()<< endl;
    }

    cout << "Total da venda foi: ";
    float valor_final = 0;
    for (int i = 0; i < qtd_prod; i++){
        valor_final += (produtos[i].get_quantidade() * produtos[i].get_preco_unitario());
    }

    cout << valor_final;

   

}