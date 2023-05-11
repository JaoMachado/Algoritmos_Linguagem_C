#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[5];
    int arrayPar[5];
    int arrayImpar[5];
    int atualPar = 0;
    int atualImpar = 0;
    int pares = 0;
    int impares = 0;

    for(int i=0; i < 5; i++){
        printf("Entre com um valor para posição %d do primeiro array:", i);
        scanf("%d", &array[i]);

        if(array[i] % 2 == 0){
            arrayPar[atualPar++] = array[i];
            pares++;
        } else {
            arrayImpar[atualImpar++] = array[i];
            impares;
        }
    }

    if(pares == 0){
        printf("Numeros pares: nao ha.\n");
        printf("Numeros impares: %d %d %d %d %d.\n", arrayImpar[0], arrayImpar[1], arrayImpar[2], arrayImpar[3], arrayImpar[4]);
    } else if(pares == 1){
        printf("Numeros pares: %d.\n", arrayPar[0]);
        printf("Numeros impares: %d %d %d %d.", arrayImpar[0], arrayImpar[1], arrayImpar[2], arrayImpar[3]);
    } else if(pares == 2){
        printf("Numeros pares: %d %d.\n", arrayPar[0], arrayPar[1]);
        printf("Numeros impares: %d %d %d.", arrayImpar[0], arrayImpar[1], arrayImpar[2]);
    } else if(pares == 3){
        printf("Numeros pares: %d %d %d.\n", arrayPar[0], arrayPar[1], arrayPar[2]);
        printf("Numeros impares: %d %d.", arrayImpar[0], arrayImpar[1]);
    } else if(pares == 4){
        printf("Numeros pares: %d %d %d %d.\n", arrayPar[0], arrayPar[1], arrayPar[2], arrayPar[3]);
        printf("Numeros impares: %d.", arrayImpar[0]);
    } else if(pares == 5){
        printf("Numeros pares: %d %d %d %d %d.\n", arrayPar[0], arrayPar[1], arrayPar[2], arrayPar[3], arrayPar[4]);
        printf("Numeros impares: nao ha.");
    }





    return 0;
}