#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota;
    float mediaAritmetica;
    float somaNotas;

    printf("Forneça a nota de 10 alunos:");

    for(int i=1; i<11; i++){
        printf("Nota %d:", i);
        scanf("%f", &nota);

        somaNotas = somaNotas + nota;
    }

    mediaAritmetica= somaNotas/10;
    printf("A media aritmetica das dez notas e: %.2f", mediaAritmetica);

    return 0;
}