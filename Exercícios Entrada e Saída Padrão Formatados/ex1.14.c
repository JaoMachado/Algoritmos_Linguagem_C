/*
    Exercícios Entrada e Saída Padrão Formatados
    Aluno: João Pedro Machado Silva
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float lado;
    float area;
    float perimetro;

    printf("Valor do lado(número decimal):");
    scanf("%f", &lado);

    area = lado * lado;
    perimetro = 4 * lado;

    printf("Perimetro = %.2f\n", perimetro);
    printf("Area = %.2f", area);

    return 0;
}