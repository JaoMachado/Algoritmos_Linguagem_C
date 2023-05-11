/*
    Exercícios Entrada e Saída Padrão Formatados
    Aluno: João Pedro Machado Silva
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int largura;
    int altura;
    int area;
    int perimetro;

    printf("Valor da largura do retângulo(número inteiro):");
    scanf("%d", &largura);

    printf("Valor da altura do retângulo(número inteiro):");
    scanf("%d", &altura);

    area = largura * altura;
    perimetro = 2 * largura + 2 * altura;

    printf("Perimetro = %d\n", perimetro);
    printf("Area = %d", area);
    
    return 0;
}