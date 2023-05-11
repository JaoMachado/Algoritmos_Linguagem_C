#include <stdio.h>
#include <stdlib.h>

int main(){
    float num1;
    float num2;
    float soma;

    printf("Entre com um número decimal:");
    scanf("%f", &num1);
    printf("Entre com um número decimal:");
    scanf("%f", &num2);

    soma = num1 + num2;

    if(soma > 10){
        printf("Os numeros fornecidos foram %.2f e %.2f", num1, num2);
    }
    else{
        printf("A subtracao entre %.2f e %.2f e igual a %.2f", num1, num2, num1-num2);
    }
    
    return 0;
}
