/*
    Exercícios Entrada e Saída Padrão Formatados
    Aluno: João Pedro Machado Silva
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    int antecessor;
    int sucessor;

    printf("Forneça um número inteiro:");
    scanf("%d", &num);

    antecessor = num - 1;
    sucessor = num + 1;

    printf("Sucessor de %d: %d\n", num, sucessor);
    printf("Antecessor de %d: %d", num, antecessor);

    return 0;
}