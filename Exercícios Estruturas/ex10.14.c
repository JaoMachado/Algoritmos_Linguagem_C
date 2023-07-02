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
bool contem( const Retangulo *r, const Ponto *p );

int main() {
    Ponto p1Retangulo;
    Ponto p2Retangulo;
    Ponto p[5];
    Retangulo r;
    int x;
    int y;

    printf("Ponto superior esquerdo\n");
    printf("    x: ");
    scanf("%d", &p1Retangulo.x);
    printf("    y: ");
    scanf("%d", &p1Retangulo.y);
    
    printf("\nPonto superior esquerdo\n");
    printf("    x: ");
    scanf("%d", &p2Retangulo.x);
    printf("    y: ");
    scanf("%d", &p2Retangulo.y);

    printf("Pontos: \n");
    for(int i = 0; i < 5; i++){
        printf("    Ponto %d\n", i+1);
            printf("        x: ");
            scanf("%d", &p[i].x);
            printf("        y: ");
            scanf("%d", &p[i].y);
    }

    r = novoRetangulo(&p1Retangulo, &p2Retangulo);
   

    for(int i = 0; i < 5; i++){
        printf("(%+02d, %+02d): %s\n", p[i].x, p[i].y, contem(&r, &p[i]) == true ? "contido!" : "nao contido!");
    }

    return 0;
}

Retangulo novoRetangulo( const Ponto *sEsq, const Ponto *iDir ){
    Retangulo r;
    r.superiorEsquerdo = *sEsq;
    r.inferiorDireito = *iDir;
    return r;
}

bool contem( const Retangulo *r, const Ponto *p ){
    if((r->superiorEsquerdo.x <= p->x) && (r->superiorEsquerdo.y >= p->y) 
        && (r->inferiorDireito.x >= p->x) && (r->inferiorDireito.y <= p->y)){
            return true;
        }
    return false;
}