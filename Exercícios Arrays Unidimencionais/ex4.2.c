#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    int array[5];
    int arrayMult[5];

    for(int i=0; i<5; i++){
        printf("Digite um número para posição %d", i);
        scanf("%d", &array[i]);
    }

    printf("Multiplicar por:");
    scanf("%d", &num);  

    for(int i=0; i<5; i++){
        printf("arrayMult[%d] = %d\n", i, array[i] * num);
    }

    return 0;
}