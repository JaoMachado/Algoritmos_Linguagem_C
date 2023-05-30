#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[10];
    int posicao;

    for(int i = 0; i < 10; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    do{
        printf("Posição a ser removida (0 a 9):");
        scanf("%d", &posicao);
        if(posicao < 0 || posicao > 9){
            printf("Posicao invalida, forneca novamente!");
        }

    } while(posicao > 9);

    for(int i = posicao + 1; i < 10; i++){
        array[i-1] = array[i];
    }

    for(int i = 0; i < 9; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}