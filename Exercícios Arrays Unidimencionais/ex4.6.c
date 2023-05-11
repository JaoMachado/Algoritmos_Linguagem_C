#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    int somatorio;
    int array[5];
    int array1[5];
    int atual=0;

    for(int i=0; i<5; i++){
        printf("Digite um número para posição %d", i);
        scanf("%d", &array[i]);
    }

    printf("Digite um valor para ser encontrado:");
    scanf("%d", &num);

    for(int i=0; i<5; i++){
        if(array[i] == num){
            somatorio++;
            array1[atual++] = i;
        }
    }

    if(somatorio == 0){
        printf("O array nao contem o valor %d.", num);
    } else if(somatorio == 1){
        printf("O valor %d foi encontrado no indice %d do array.", num, array1[0]); 
    }else if(somatorio == 2){
        printf("O valor %d foi encontrado nos indices %d e %d do array.", num, array1[0], array1[1]); 
    }else if(somatorio == 3){
        printf("O valor %d foi encontrado nos indices %d, %d e %d do array.", num, array1[0], array1[1], array1[2]); 
    }else if(somatorio == 4){
        printf("O valor %d foi encontrado nos indices %d, %d, %d e %d do array.", num, array1[0], array1[1], array1[2], array1[3]); 
    }else if(somatorio == 5){
        printf("O valor %d foi encontrado nos indices %d, %d, %d, %d e %d do array.", num, array1[0], array1[1], array1[2], array1[3], array1[4]); 
    }
    
    return 0;
}