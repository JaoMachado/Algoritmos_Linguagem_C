/*
    Exercícios Entrada e Saída Padrão Formatados
    Aluno: João Pedro Machado Silva
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int diagonalMaior;
    int diagonalMenor;
    int area;

    printf("Valor da diagonal maior do losango:(número inteiro)");
    scanf("%d", &diagonalMaior);

    printf("Valor da base menor do losango:(número inteiro)");
    scanf("%d", &diagonalMenor);

    area = diagonalMaior * diagonalMenor / 2;

    printf("Area = %d", area);
    
    return 0;
}