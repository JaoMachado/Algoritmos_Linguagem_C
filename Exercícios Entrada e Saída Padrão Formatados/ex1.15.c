/*
    Exercícios Entrada e Saída Padrão Formatados
    Aluno: João Pedro Machado Silva
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float valorLargura;
    float valorAltura;
    float area;
    float perimetro;

    printf("Valor da largura do retângulo(número inteiro):");
    scanf("%f", &valorLargura);

    printf("Valor da altura do retângulo(número inteiro):");
    scanf("%f", &valorAltura);

    area = valorLargura * valorAltura;
    perimetro = 2 * valorLargura + 2 * valorAltura;

    printf("Perimetro = %.2f\n", perimetro);
    printf("Area = %.2f", area);
    
    return 0;
}