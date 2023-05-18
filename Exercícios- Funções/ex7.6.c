#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int lePositivo();
int somaDivisores(int n);

int main(){
    int array[5];
    int divisores[5];

    for(int i = 0; i < 5; i++){
        printf("n[%d]", i);
        array[i] = lePositivo();
        divisores[i] = somaDivisores(array[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("Soma dos divisores de %d: %d\n", array[i], divisores[i]);
    }

    return 0;
}

int lePositivo(){
    int num;
    do{
        scanf("%d", &num);
        if(num < 0){
            printf("Entre com um valor positivo:");
        }
    }while(num < 0);
    return num;
}

int somaDivisores(int n){
    int soma = 1;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            soma += i;
        }
    }
    return soma;
}