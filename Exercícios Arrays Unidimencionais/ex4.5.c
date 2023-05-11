#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    int array[5];
    int ocorrencias = 0;

    for(int i=0; i<5; i++){
        printf("Digite um número para posição %d", i);
        scanf("%d", &array[i]);
    }

    printf("Digite um valor para ser encontrado:");
    scanf("%d", &num);

    for(int i=0; i<5; i++){
        if(array[i] == num){
            ocorrencias++;
        }
    }
    
    if(ocorrencias == 1){
        printf("O array contem %d ocorrencia do valor %d.\n", ocorrencias, num);
    } else if (ocorrencias > 1){
        printf("O array contem %d ocorrencias do valor %d.\n", ocorrencias, num);
    } else{
        printf("O array nao contem o valor %d.\n", num);
    }
    

    return 0;
}