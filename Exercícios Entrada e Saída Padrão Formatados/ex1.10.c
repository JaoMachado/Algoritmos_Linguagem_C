/*
    Exercícios Entrada e Saída Padrão Formatados
    Aluno: João Pedro Machado Silva
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int baseMaior;
    int baseMenor;
    int altura;
    int area;

    printf("Valor da base maior do trapézio:(número inteiro)");
    scanf("%d", &baseMaior);

    printf("Valor da base menor do trapézio:(número inteiro)");
    scanf("%d", &baseMenor);

    printf("Valor da altura do trapézio:(número inteiro)");
    scanf("%d", &altura);

    area = (baseMaior + baseMenor) * altura / 2;

    printf("Area = %d", area);
    
    return 0;
}