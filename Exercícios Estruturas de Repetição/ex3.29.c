#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor;
    int valor1;
    int divisao = 0;
    char opcao;

    do{
        printf("N1: ");
        scanf("%d", &valor);
        printf("N2: ");
        scanf("%d", &valor1);

        do{
            if(valor1 == 0){
                printf("Nao existe divisao inteira por zero!\n");
                printf("Entre novamente com N2: ");
                scanf("%d", &valor1);
            }    
        } while(valor1 == 0);

        divisao = valor / valor1;
        printf("%d / %d = %d\n", valor, valor1, divisao);

        printf("Voce deseja realizar outro calculo? (S/N): ");
        scanf("%1s", &opcao);

    } while(opcao != 'N');

    return 0;
}