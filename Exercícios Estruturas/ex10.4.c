#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float real;
    float imaginario;
} Complexo;

Complexo somar( const Complexo *c1, const Complexo *c2 );
void imprimirComplexo( const Complexo *c );

int main() {
    Complexo complexo1;
    Complexo complexo2;
    Complexo complexo3;

    printf("Complexo 1:\n");
    printf(" Parte real: ");
    scanf("%f", &complexo1.real);
    printf(" Parte imaginaria: ");
    scanf("%f", &complexo1.imaginario);

    printf("\nComplexo 2:\n");
    printf(" Parte real: ");
    scanf("%f", &complexo2.real);
    printf(" Parte imaginaria: ");
    scanf("%f", &complexo2.imaginario);

    complexo3 = somar(&complexo1, &complexo2);

    imprimirComplexo(&complexo1);
    printf("i) + ");
    imprimirComplexo(&complexo2);
    printf("i) = ");
    imprimirComplexo(&complexo3);
    printf("i)");

    return 0;
}

Complexo somar( const Complexo *c1, const Complexo *c2 ){
    Complexo complexo3;

    complexo3.real = c1->real + c2->real;

    complexo3.imaginario = c1->imaginario + c2->imaginario;

    return complexo3;
}

void imprimirComplexo( const Complexo *c ){
    printf("(%.2f + %.2f", c->real, c->imaginario);
}
