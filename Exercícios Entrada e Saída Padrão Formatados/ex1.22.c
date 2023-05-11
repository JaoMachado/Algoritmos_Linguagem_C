/*
    Exercícios Entrada e Saída Padrão Formatados
    Aluno: João Pedro Machado Silva
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float valorProduto;
    float valorDesconto;

    printf("valor do Produto:");
    scanf("%f", &valorProduto);

    valorDesconto = valorProduto - (valorProduto * 0.09);

    printf("Preco de venda com 9%% de desconto: %.2f", valorDesconto);

    return 0;
}