/*
    Exercícios Entrada e Saída Padrão Formatados
    Aluno: João Pedro Machado Silva
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int valorBase;
    int valorAltura;
    int area;

    printf("Valor da base do triângulo:(número inteiro)");
    scanf("%d", &valorBase);

    printf("Valor da altura do triângulo:(número inteiro)");
    scanf("%d", &valorAltura);

    area = valorBase * valorAltura / 2;

    printf("Area = %d", area);
    
    return 0;
}