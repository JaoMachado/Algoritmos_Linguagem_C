#include <stdio.h>
#include <stdlib.h>

int main(){
    float somatorio = 0;
    float produtorio = 1;
    float array[5];

    for(int i=0; i<5; i++){
        printf("Digite um número para posição %d", i);
        scanf("%f", &array[i]);
    }

    for(int i=0; i<5; i++){
        somatorio = somatorio + array[i];
        produtorio = produtorio * array[i];
    }

    printf("Somatorio: %.2f\n", somatorio);
    printf("Produtorio: %.2f", produtorio);


    return 0;
}