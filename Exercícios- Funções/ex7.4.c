#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int lePositivo();
int somatorio(int n);

int main(){
    int numeros[5];
    int somatorios[5];

    for(int i = 0; i < 5; i++){
        printf("n[%d]", i);
        numeros[i] = lePositivo();
        somatorios[i] = somatorio(numeros[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("Somatorio de 1 a %d: %d\n", numeros[i], somatorios[i]);
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

int somatorio(int n){
    int somatorio = 0;
    for(int i = 1; i <= n; i++){
        somatorio = somatorio + i;
    }
    return somatorio;
}