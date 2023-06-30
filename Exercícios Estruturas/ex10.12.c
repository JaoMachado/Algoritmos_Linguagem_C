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
Ponto obterCentro( const Retangulo *r );
void imprimirRetangulo( const Retangulo *r );

int main() {
    Ponto p1;
    Ponto p2;
    Retangulo r;

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

    r = novoRetangulo(&p1, &p2);
    imprimirRetangulo(&r);

    printf("Centro: (%+02d, %+02d)", obterCentro(&r).x, obterCentro(&r).y);

    return 0;
}

Retangulo novoRetangulo( const Ponto *sEsq, const Ponto *iDir ){
    Retangulo r;
    r.superiorEsquerdo = *sEsq;
    r.inferiorDireito = *iDir;
    return r;
}

Ponto obterCentro( const Retangulo *r ){
    Ponto p;
    p.x = (r->superiorEsquerdo.x + r->inferiorDireito.x) / 2;
    p.y = (r->superiorEsquerdo.y + r->inferiorDireito.y) / 2;
    return p;
}

void imprimirRetangulo( const Retangulo *r ){
    printf("(%+02d, %+02d) =====|\n", r->superiorEsquerdo.x, r->superiorEsquerdo.y);
    printf("|               |\n");
    printf("|               |\n");
    printf("|===== (%+02d, %+02d)\n", r->inferiorDireito.x, r->inferiorDireito.y);
}