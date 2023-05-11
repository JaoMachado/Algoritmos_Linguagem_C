/*
    Exercícios Entrada e Saída Padrão Formatados
    Aluno: João Pedro Machado Silva
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numPrimeiro;
    int numSegundo;
    int mediaAritmetica;

    printf("Primeiro Número Inteiro:");
    scanf("%d", &numPrimeiro);

    printf("Segundo Número Inteiro:");
    scanf("%d", &numSegundo);

    mediaAritmetica = (numPrimeiro + numSegundo) / 2;

    printf("Media aritmetica: %d", mediaAritmetica);

    return 0;
}