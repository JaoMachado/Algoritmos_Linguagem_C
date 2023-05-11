/*
    Exercícios Entrada e Saída Padrão Formatados
    Aluno: João Pedro Machado Silva
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int primeiroNum;
    int segundoNum;
    int adicao;
    int subtracao;
    int multiplicacao;
    int divisao;

    printf("Primeiro Número Inteiro:");
    scanf("%d", &primeiroNum);

    printf("Segundo Número Inteiro:");
    scanf("%d", &segundoNum);

    adicao = primeiroNum + segundoNum;
    subtracao = primeiroNum - segundoNum;
    multiplicacao = primeiroNum * segundoNum;
    divisao = primeiroNum / segundoNum;

    printf("%d + %d = %d\n", primeiroNum, segundoNum, adicao);
    printf("%d - %d = %d\n", primeiroNum, segundoNum, subtracao);
    printf("%d * %d = %d\n", primeiroNum, segundoNum, multiplicacao);
    printf("%d / %d = %d\n", primeiroNum, segundoNum, divisao);

    return 0;
}