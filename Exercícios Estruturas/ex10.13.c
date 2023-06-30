#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
} Ponto;

typedef struct{
    Ponto superiorEsquerdo;
    Ponto inferiorDireito;
} Retangulo;

Retangulo novoRetangulo( const Ponto *sEsq, const Ponto *iDir );
void mover( Retangulo *r, int x, int y );
void imprimirRetangulo( const Retangulo *r );

int main() {
    Ponto p1;
    Ponto p2;
    Retangulo r;
    int x;
    int y;

    printf("Ponto superior esquerdo\n");
    printf("x: ");
    scanf("%d", &p1.x);
    printf("y: ");
    scanf("%d", &p1.y);
    
    printf("\nPonto superior esquerdo\n");
    printf("x: ");
    scanf("%d", &p2.x);
    printf("y: ");
    scanf("%d", &p2.y);

    printf("Mover em x: ");
    scanf("%d", &x);

    printf("Mover em y: \n");
    scanf("%d", &y);

    r = novoRetangulo(&p1, &p2);

    printf("Retangulo original:\n");
    imprimirRetangulo(&r);
    
    mover(&r, x, y);

    printf("Retangulo movido:\n");
    imprimirRetangulo(&r);

    return 0;
}

Retangulo novoRetangulo( const Ponto *sEsq, const Ponto *iDir ){
    Retangulo r;
    r.superiorEsquerdo = *sEsq;
    r.inferiorDireito = *iDir;
    return r;
}

void mover( Retangulo *r, int x, int y ){
    r->superiorEsquerdo.x += x;
    r->superiorEsquerdo.y += y;
    r->inferiorDireito.x += x;
    r->inferiorDireito.y += y;
}

void imprimirRetangulo( const Retangulo *r ){
    printf("(%+02d, %+02d) =====|\n", r->superiorEsquerdo.x, r->superiorEsquerdo.y);
    printf("|               |\n");
    printf("|               |\n");
    printf("|===== (%+02d, %+02d)\n", r->inferiorDireito.x, r->inferiorDireito.y);
}