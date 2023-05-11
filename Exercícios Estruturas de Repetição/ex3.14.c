#include <stdio.h>
#include <stdlib.h>

int main(){
int num1, num2, somatorio=0;

    printf("Entre com um número inteiro:");
    scanf("%d", &num1);
    printf("Entre com outro número inteiro:");
    scanf("%d", &num2);

    if(num1 < num2){
        for(int i=num1;  i<=num2; i++){
            somatorio = somatorio + i;
        }
        printf("Somatorio entre %d e %d: %d\n", num1, num2, somatorio);
    }
    else{
        for(int i=num2;  i<=num1; i++){
            somatorio = somatorio + i;
        }
        printf("Somatorio entre %d e %d: %d\n", num2, num1, somatorio);
    }



    return 0;
}