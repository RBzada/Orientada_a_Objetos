#include <stdio.h>

typedef struct{
    int ligaleve;
    float pressao;
}pneus;

typedef struct{
    float tamanho;
    int valvulas;
    char *fabricante;
}motores;

typedef struct{
    int abs;
    char numserie[50];
}freios;


typedef struct{
    int id;
    char modelo[50];
    motores motor;
    freios freio;
    pneus pneu[5];
}Carro;


int main(){
    Carro meucarro;
    meucarro.id = 12345;
    meucarro.motor.valvulas = 0;
    meucarro.freio.abs = 0;
    meucarro.pneu[0].pressao = 22.8;

    printf("O id do carro: %d\n", meucarro.id);
    printf("O carro tem %d valvulas.\n", meucarro.motor.valvulas);

    return 0;
}