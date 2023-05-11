#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[5];
    int array1[5];
    int arraySoma[5];

    for(int i=0; i < 5; i++){
        printf("Entre com um valor para posição %d do primeiro array:", i);
        scanf("%d", &array[i]);
    }

    for(int i=0; i < 5; i++){
        printf("Entre com um valor para posição %d do segundo array:", i);
        scanf("%d", &array1[i]);
    }

    for(int i=0; i < 5; i++){
        arraySoma[i] = array[i] + array1[i];
        printf("arraySoma[%d] = %d\n", i, arraySoma[i]);
    }
    

    return 0;
}