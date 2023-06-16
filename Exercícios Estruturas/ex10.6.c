#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int vermelho;
    int verde;
    int azul;
} Cor;

Cor novaCor( int vermelho, int verde, int azul );
void imprimirCor( const Cor *c );

int main() {
    int vermelho;
    int verde;
    int azul;
    Cor corNova;

    printf("Vermelho: ");
    scanf("%d", &vermelho);

    printf("Verde: ");
    scanf("%d", &verde);

    printf("Azul: ");
    scanf("%d", &azul);

    corNova = novaCor(vermelho, verde, azul);

    imprimirCor(&corNova);

    return 0;
}

Cor novaCor( int vermelho, int verde, int azul ){
    Cor corNova;

    if(vermelho >= 0 && vermelho <= 255){
        corNova.vermelho = vermelho;
    } else if(vermelho < 0){
        corNova.vermelho = 0;
    } else{
        corNova.vermelho = 255;
    }

    if(verde >= 0 && verde <= 255){
        corNova.verde = verde;
    } else if(verde < 0){
        corNova.verde = 0;
    } else{
        corNova.verde = 255;
    }

    if(azul >= 0 && azul <= 255){
        corNova.azul = azul;
    } else if(azul < 0){
        corNova.azul = 0;
    } else{
        corNova.azul = 255;
    }

    return corNova;
}

void imprimirCor( const Cor *c ){
    printf("Cor: rgb( %d, %d, %d )", c->vermelho, c->verde, c->azul);
}