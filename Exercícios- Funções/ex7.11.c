#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool numeroCorreto(int n);
int calculaDigito(int n);
int obtemDigito(int n);
int obtemNumero(int n);

int main(){
    int n;

    printf("Numero: ");
    scanf("%d", &n);

    printf("Numero completo: %d\n", n);
    printf("Numero: %d\n", obtemNumero(n));
    printf("Digito: %d\n", obtemDigito(n));
    printf("Digito calculado: %d\n", calculaDigito(obtemNumero(n)));
    if(numeroCorreto(n) == true){
        printf("O numero fornecido esta correto!");
    } else if(numeroCorreto(n) == false){
        printf("O numero fornecido esta incorreto!");
    }

    return 0;
}

bool numeroCorreto(int n){
    if(calculaDigito(obtemNumero(n)) == obtemDigito(n)){
        return true;
    }
    return false;
}

int obtemNumero(int n){
    int milhares;
    int centenas;
    int dezenas;
    milhares = n/1000;
    centenas = (n - milhares * 1000)/100;
    dezenas = (n - milhares * 1000 - centenas * 100)/10;

    return milhares * 100 + centenas * 10 + dezenas;
}

int obtemDigito(int n){
    return n - n/1000 * 1000 - (n - n/1000 * 1000)/100 * 100 - (n - n/1000 * 1000 - (n - n/1000 * 1000)/100 * 100)/10 * 10;
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