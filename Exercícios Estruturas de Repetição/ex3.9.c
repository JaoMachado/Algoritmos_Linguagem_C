#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;

    printf("Entre com um número inteiro:");
    scanf("%d", &num);

    for(int i=0; i<11; i++){
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}