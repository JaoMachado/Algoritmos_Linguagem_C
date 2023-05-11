#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1;
    int num2;

    printf("Entre com um número:");
    scanf("%d", &num1);
    printf("Entre com outro número:");
    scanf("%d", &num2);

    if(num1 <= num2){
        printf("Ordem crescente: %d <= %d", num1, num2);
    }
    else{
        printf("Ordem crescente: %d <= %d", num2, num1);
    }

    return 0;
}
