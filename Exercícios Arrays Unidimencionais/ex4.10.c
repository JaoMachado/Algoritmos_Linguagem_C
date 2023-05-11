#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[5];
    int arrayCopia[5];
    int valor;
    int atual = 0;

    for(int i=0; i < 5; i++){
        printf("Entre com um valor para posição %d do primeiro array:", i);
        scanf("%d", &array[i]);
    }

    printf("Copiar maiores que:");
    scanf("%d", &valor);

    for(int i=0; i < 5; i++){
        if(array[i] > valor){
            arrayCopia[atual] = array[i];
            printf("arrayCopia[%d] = %d\n", atual, arrayCopia[atual]);
            atual++;
        }
    }

    if(atual == 0){
        printf("Nao houve copia!");
    }

    return 0;
}