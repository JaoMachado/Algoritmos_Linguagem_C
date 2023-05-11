#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    int menorNumero = 0;
    int maiorNumero = 0;
    int somatorio = 0;

    do{
        printf("Entre com um valor:");
        scanf("%d", &numero);
        somatorio++;

        if(numero >= 0){
            if(somatorio == 1){
                maiorNumero = numero;
                menorNumero = numero;
            }
            if(numero > maiorNumero){
                maiorNumero = numero;
            } 
            if(numero <= menorNumero){
                menorNumero = numero;
            }
        }

    } while(numero > 0);

    printf("Menor numero: %d\n", menorNumero);
    printf("Maior numero: %d", maiorNumero);


    return 0;
}