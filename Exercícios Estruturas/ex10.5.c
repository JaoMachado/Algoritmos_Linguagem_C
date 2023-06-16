#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float numerador;
    float denominador;
} Fracao;

Fracao somar( const Fracao *f1, const Fracao *f2 );
Fracao subtrair( const Fracao *f1, const Fracao *f2 );
Fracao multiplicar( const Fracao *f1, const Fracao *f2 );
Fracao dividir( const Fracao *f1, const Fracao *f2 );
void imprimirFracao( const Fracao *f );


int main() {
    Fracao fracao1;
    Fracao fracao2;
    Fracao fSoma;
    Fracao fSub;
    Fracao fMult;
    Fracao fDiv;

    printf("Fracao 1:\n");
    printf(" Numerador: ");
    scanf("%f", &fracao1.numerador);
    printf(" Denominador: ");
    scanf("%f", &fracao1.denominador);

    printf("\nFracao 2:\n");
    printf(" Numerador: ");
    scanf("%f", &fracao2.numerador);
    printf(" Denominador: ");
    scanf("%f", &fracao2.denominador);

    fSoma = somar(&fracao1, &fracao2);
    fSub = subtrair(&fracao1, &fracao2);
    fMult = multiplicar(&fracao1, &fracao2);
    fDiv= dividir(&fracao1, &fracao2);

    imprimirFracao(&fracao1);
    printf(" + ");
    imprimirFracao(&fracao2);
    printf(" = ");
    imprimirFracao(&fSoma);

    printf("\n");
    imprimirFracao(&fracao1);
    printf(" - ");
    imprimirFracao(&fracao2);
    printf(" = ");
    imprimirFracao(&fSub);

    printf("\n");
    imprimirFracao(&fracao1);
    printf(" * ");
    imprimirFracao(&fracao2);
    printf(" = ");
    imprimirFracao(&fMult);

    printf("\n");
    imprimirFracao(&fracao1);
    printf(" / ");
    imprimirFracao(&fracao2);
    printf(" = ");
    imprimirFracao(&fDiv);

    return 0;
}

Fracao somar( const Fracao *f1, const Fracao *f2 ){
    Fracao fSoma;

    fSoma.numerador = (f1->numerador * f2->denominador) + (f2->numerador * f1->denominador);
    fSoma.denominador = f1->denominador * f2->denominador;

    return fSoma;
}

Fracao subtrair( const Fracao *f1, const Fracao *f2 ){
    Fracao fSub;
    
    fSub.numerador = (f1->numerador * f2->denominador) - (f2->numerador * f1->denominador);
    fSub.denominador = f1->denominador * f2->denominador;

    return fSub;
}

Fracao multiplicar( const Fracao *f1, const Fracao *f2 ){
    Fracao fMult;
    
    fMult.numerador = f1->numerador * f2->numerador;
    fMult.denominador = f1->denominador * f2->denominador;

    return fMult;
}

Fracao dividir( const Fracao *f1, const Fracao *f2 ){
    Fracao fDiv;
    
    fDiv.numerador = f1->numerador * f2->denominador;
    fDiv.denominador = f1->denominador * f2->numerador;

    return fDiv;
}

void imprimirFracao( const Fracao *f ){
    printf("%.2f/%.2f", f->numerador, f->denominador);
}
