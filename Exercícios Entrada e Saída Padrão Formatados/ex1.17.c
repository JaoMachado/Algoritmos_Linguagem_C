/*
    Exercícios Entrada e Saída Padrão Formatados
    Aluno: João Pedro Machado Silva
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float baseMaior;
    float baseMenor;
    float altura;
    float area;

    printf("Valor da base maior do trapézio:(número decimal)");
    scanf("%f", &baseMaior);

    printf("Valor da base menor do trapézio:(número decimal)");
    scanf("%f", &baseMenor);

    printf("Valor da altura do trapézio:(número decimal)");
    scanf("%f", &altura);

    area = (baseMaior + baseMenor) * altura / 2;

    printf("Area = %.2f", area);
    
    return 0;
}