#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1;
    float n2;
    float n3;
    float menor;

    printf("Entre com o primeiro número:");
    scanf("%f", &n1);
    printf("Entre com o segundo número:");
    scanf("%f", &n2);
    printf("Entre com o terceiro número:");
    scanf("%f", &n3);

    if(n1 < n2){
        if(n1 < n3){
            menor = n1;
        } 
        else{
            menor = n3;
        }
    } 
    else if(n2 < n3){
        menor = n2;
    } 
    else{
        menor = n3;
    }

    if(menor == n1){
        printf("A soma dos dois numeros maiores fornecidos e %.2f", n2 + n3);
    } 
    else if(menor == n2){
        printf("A soma dos dois numeros maiores fornecidos e %.2f", n1 + n3);
    } 
    else if(menor == n3){
        printf("A soma dos dois numeros maiores fornecidos e %.2f", n2 + n1);
    }

    return 0;
}
