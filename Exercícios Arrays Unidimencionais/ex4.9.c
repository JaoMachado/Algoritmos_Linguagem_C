#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[5];
    int arrayInv[5];
    int x = 4;

    for(int i=0; i < 5; i++){
        printf("Entre com um valor para posição %d do primeiro array:", i);
        scanf("%d", &array[i]);
    }

    for(int j=0; j < 5; j++){
        arrayInv[j] = array[x--];
        printf("arrayInv[%d] = %d\n", j, arrayInv[j]);
    }



    return 0;
}