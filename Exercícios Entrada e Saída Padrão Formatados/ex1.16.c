/*
    Exercícios Entrada e Saída Padrão Formatados
    Aluno: João Pedro Machado Silva
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float base;
    float altura;
    float area;

    printf("Valor da base do triângulo:(número floateiro)");
    scanf("%f", &base);

    printf("Valor da altura do triângulo:(número floateiro)");
    scanf("%f", &altura);

    area = base * altura / 2;

    printf("Area = %.2f", area);
    
    return 0;
}