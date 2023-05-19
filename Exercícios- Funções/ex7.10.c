#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calculaDigito(int n);

int main(){
    int n;
    printf("Numero: ");
    scanf("%d", &n);

    printf("Digito verificador de %d: %d", n, calculaDigito(n));


    return 0;
}

int calculaDigito(int n){
    int milhares;
    int centenas;
    int dezenas;
    int unidades;
    int soma;
    int resultado;
    milhares = n/1000;
    centenas = (n - milhares * 1000)/100;
    dezenas = (n - milhares * 1000 - centenas * 100)/10;
    unidades = n - milhares * 1000 - centenas * 100 - dezenas * 10;

    soma = unidades * 2 + dezenas * 3 + centenas * 4 + milhares * 5;
    resultado = soma % 11;

    if(11 - resultado == 10 ||11 - resultado == 11){
        return 0;
    } 

    return 11 - resultado;
}