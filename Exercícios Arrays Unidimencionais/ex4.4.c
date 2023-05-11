#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    int array[5];

    for(int i=0; i<5; i++){
        printf("Digite um número para posição %d", i);
        scanf("%d", &array[i]);
    }

    printf("Digite um valor para ser encontrado:");
    scanf("%d", &num);

    for(int i=0; i<5; i++){
        if(array[i] == num){
            printf("Indice %d: ACHEI\n", i);
        } else{
            printf("Indice %d: NAO ACHEI\n", i);
        }
    }

    return 0;
}