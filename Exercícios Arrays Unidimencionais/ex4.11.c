#include <stdio.h>
#include <stdlib.h>

int main(){
    int qtd;
    int array[10];
    int atual = 4;
    int valor;

    for(int i = 0; i < 100000; i++){
        printf("Quantidade de elementos (1 a 9):");
        scanf("%d", &qtd);
        if( qtd > 0 && qtd < 10){
            break;
        } else {
            printf("Quantidade incorreta, forneca novamente!");
        }
    }

    for(int i = 0; i < qtd; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    for(int i = qtd; i > 0; i--){
        array[i] = array[atual--];
    }

    printf("Valor que sera inserido:");
    scanf("%d", &valor);

    array[0] = valor;

    for(int i = 0; i < qtd + 1; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}