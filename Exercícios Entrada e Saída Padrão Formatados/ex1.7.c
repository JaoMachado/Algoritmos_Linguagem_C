/*
    Exercícios Entrada e Saída Padrão Formatados
    Aluno: João Pedro Machado Silva
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int valorLado;
    int area;
    int perimetro;

    printf("Valor do lado(número inteiro):");
    scanf("%d", &valorLado);

    area = valorLado * valorLado;
    perimetro = 4 * valorLado;

    printf("Perimetro = %d\n", perimetro);
    printf("Area = %d", area);

    return 0;
}