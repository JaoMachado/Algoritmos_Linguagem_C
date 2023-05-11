#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2;

    printf("Entre com um número inteiro:");
    scanf("%d", &num1);
    printf("Entre com outro número inteiro:");
    scanf("%d", &num2);

    if(num1 <= num2){
        for(num1; num1<=num2; num1++){
            printf("%d ", num1);
        }
    }
    else{
        for(num1; num1>=num2; num1--){
            printf("%d ", num1);
        }
    }

    return 0;
}