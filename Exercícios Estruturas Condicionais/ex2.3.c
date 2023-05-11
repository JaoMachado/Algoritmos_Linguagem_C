#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero1;
    int numero2;

    printf("Entre com um número:");
    scanf("%d", &numero1);
    printf("Entre com outro número:");
    scanf("%d", &numero2);

    if(numero1 < numero2){
        printf("Ordem decrescente: %d >= %d\n", numero2, numero1);
    }
    else{
        printf("Ordem decrescente: %d >= %d", numero1, numero2);
    }

    return 0;
}
