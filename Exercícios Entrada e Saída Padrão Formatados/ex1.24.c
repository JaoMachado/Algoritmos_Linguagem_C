/*
    Exercícios Entrada e Saída Padrão Formatados
    Aluno: João Pedro Machado Silva
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float valorHrAula;
    float qtdAulas;
    float descontoINSS;
    float salarioLiquido;

    printf("Valor da Hora/Aula:");
    scanf("%f", &valorHrAula);

    printf("Quantidade de Aulas:");
    scanf("%f", &qtdAulas); 

    printf("Porcentagem de desconto do INSS:");
    scanf("%f", &descontoINSS);    

    salarioLiquido = valorHrAula * qtdAulas;
    salarioLiquido =  salarioLiquido - (salarioLiquido * descontoINSS/100);

    printf("Salario Liquido: %.2f", salarioLiquido);

    return 0;
}