#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;

    printf("Entre com um número inteiro menor ou igual a 0");
    scanf("%d", &num);

    if(num > 0){
        printf("Valor incorreto (positivo)");
    }
    else{
        for(num; num<=0; num++){
            printf(" %d", num);
        }
    }

    return 0;
}