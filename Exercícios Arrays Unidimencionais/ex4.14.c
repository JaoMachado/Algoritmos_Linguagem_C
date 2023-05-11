#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[10];
    int atual = 1;
    int contador = 10;
    int cont;

    for(int i = 0; i < 10; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < contador; i++){
        if(array[i] % 2 == 0){
            atual = i;
            for(int j = i + 1; j < 10; j++){
                array[atual++] = array[j];
            }
            contador--;
        }
        if(array[i] % 2 == 0){
            atual = i;
            for(int j = i + 1; j < 10; j++){
                array[atual++] = array[j];
            }
            contador--;
        }
    }

    for(int i = 0; i < contador ; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}