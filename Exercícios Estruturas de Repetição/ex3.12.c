#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, pares, impares;

    printf("Entre com um número inteiro:");
    scanf("%d", &num1);
    printf("Entre com outro número inteiro:");
    scanf("%d", &num2);

    if(num1 < num2){
        for(int i=num1; i<=num2; i++){
            if(i % 2 == 0){
                pares++;
            }
        }
        printf("Numeros pares entre %d e %d: %d", num1, num2, pares);
    }
    else{
        for(int i=num1; i>=num2; i--){
            if(i % 2 == 0){
                pares++;
            }
            else{
                impares++;
            }
        }
        printf("Numeros pares entre %d e %d: %d", num2, num1, pares);
    }

    return 0;
}