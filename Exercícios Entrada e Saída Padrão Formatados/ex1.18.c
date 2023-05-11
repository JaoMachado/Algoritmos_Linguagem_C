/*
    Exercícios Entrada e Saída Padrão Formatados
    Aluno: João Pedro Machado Silva
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float diagonalMaior;
    float diagonalMenor;
    float area;

    printf("Valor da diagonal maior do losango:(número decimal)");
    scanf("%f", &diagonalMaior);

    printf("Valor da base menor do losango:(número decimal)");
    scanf("%f", &diagonalMenor);

    area = diagonalMaior * diagonalMenor / 2;

    printf("Area = %.2f", area);
    
    return 0;
}