#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct{
    int x;
    int y;
} Ponto;

typedef struct{
    Ponto superiorEsquerdo;
    Ponto inferiorDireito;
} Retangulo;

Retangulo novoRetangulo( const Ponto *sEsq, const Ponto *iDir );
bool intercepta( const Retangulo *r1, const Retangulo *r2 );

int main() {
    Ponto p1Retangulo1;
    Ponto p2Retangulo1;
    Ponto p1Retangulo2;
    Ponto p2Retangulo2;
    Retangulo r1;
    Retangulo r2;

    printf("Retangulo 1\n");
    printf("Ponto superior esquerdo\n");
    printf("    x: ");
    scanf("%d", &p1Retangulo1.x);
    printf("    y: ");
    scanf("%d", &p1Retangulo1.y);
    
    printf("\nPonto superior esquerdo\n");
    printf("    x: ");
    scanf("%d", &p2Retangulo1.x);
    printf("    y: ");
    scanf("%d", &p2Retangulo1.y);

    printf("\nRetangulo 2\n");
    printf("Ponto superior esquerdo\n");
    printf("    x: ");
    scanf("%d", &p1Retangulo2.x);
    printf("    y: ");
    scanf("%d", &p1Retangulo2.y);
    
    printf("\nPonto superior esquerdo\n");
    printf("    x: ");
    scanf("%d", &p2Retangulo2.x);
    printf("    y: ");
    scanf("%d", &p2Retangulo2.y);


    r1 = novoRetangulo(&p1Retangulo1, &p2Retangulo1);
    r2 = novoRetangulo(&p1Retangulo2, &p2Retangulo2);

    if(intercepta(&r1, &r2)){
        printf("Os retangulos se interceptam!");
    } else {
        printf("Os retangulos nao se interceptam!");
    }

    return 0;
}

Retangulo novoRetangulo( const Ponto *sEsq, const Ponto *iDir ){
    Retangulo r;
    r.superiorEsquerdo = *sEsq;
    r.inferiorDireito = *iDir;
    return r;
}

bool intercepta( const Retangulo *r1, const Retangulo *r2 ) {
    if((r1->superiorEsquerdo.x > r2->inferiorDireito.x) || (r1->superiorEsquerdo.y < r2->inferiorDireito.y) 
      || (r1->inferiorDireito.x < r2->superiorEsquerdo.x) || (r1->inferiorDireito.y > r2->superiorEsquerdo.y)){
        return false;
    }
    return true;
}