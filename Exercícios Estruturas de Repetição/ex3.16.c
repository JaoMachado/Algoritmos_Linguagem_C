#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=0, b=1, aux=0;

    printf("1 ");

    for(int i=0; i<=18; i++){
        aux = a + b;
        a = b;
        b = aux;
        printf("%d ", aux);
    }

    return 0;
}