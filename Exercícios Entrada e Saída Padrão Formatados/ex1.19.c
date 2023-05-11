/*
    Exercícios Entrada e Saída Padrão Formatados
    Aluno: João Pedro Machado Silva
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float raio;
    float area;
    float diametro;
    float circunferencia;

    printf("Valor do raio do círculo(número decimal):");
    scanf("%f", &raio);

    area = 3.141592 * (raio * raio);
    diametro = 2 * raio;
    circunferencia = 2 * raio * 3.141592;

    printf("Diametro = %.2f\n", diametro);
    printf("Circunferencia = %.2f\n", circunferencia);
    printf("Area = %.2f", area);

    return 0;
}