/*
    Exercícios Entrada e Saída Padrão Formatados
    Aluno: João Pedro Machado Silva
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor;

    printf("Digite um valor(número decimal):");
    scanf("%f", &valor);

    printf("\n%f\n", valor);
    printf("%.2f\n", valor);
    printf("%.3f", valor);
    
    return 0;
}