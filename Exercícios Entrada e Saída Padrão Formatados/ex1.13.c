/*
    Exercícios Entrada e Saída Padrão Formatados
    Aluno: João Pedro Machado Silva
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float primeiroNum;
    float segundoNum;
    float adicao;
    float subtracao;
    float multiplicacao;
    float divisao;

    printf("Primeiro Número Decimal:");
    scanf("%f", &primeiroNum);

    printf("Segundo Número Decimal:");
    scanf("%f", &segundoNum);

    adicao = primeiroNum + segundoNum;
    subtracao = primeiroNum - segundoNum;
    multiplicacao = primeiroNum * segundoNum;
    divisao = primeiroNum / segundoNum;

    printf("%.2f + %.2f = %.2f\n", primeiroNum, segundoNum, adicao);
    printf("%.2f - %.2f = %.2f\n", primeiroNum, segundoNum, subtracao);
    printf("%.2f * %.2f = %.2f\n", primeiroNum, segundoNum, multiplicacao);
    printf("%.2f / %.2f = %.2f\n", primeiroNum, segundoNum, divisao);

    return 0;
}