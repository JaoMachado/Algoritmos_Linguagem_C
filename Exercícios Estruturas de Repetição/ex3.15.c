#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, fatorial=0;

    printf("Entre com um número inteiro positivo:");
    scanf("%d", &num);

    if(num < 0){
        printf("Nao ha fatorial de numero negativo.");
    }
    else{
        int i = num;
        for(fatorial = 1; i>1; i--){
            fatorial = fatorial * i;
        }
        printf("%d! = %d", num, fatorial);
    }

    return 0;
}