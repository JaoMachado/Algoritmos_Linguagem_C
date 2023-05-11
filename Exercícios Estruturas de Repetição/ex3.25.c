#include <stdio.h>
#include <stdlib.h>

int main(){
    float numero;
    float somatorio = 0;
    float media = 0;
    int qtdValores = 0;

    do{
        printf("Entre com um valor:");
        scanf("%f", &numero);

        if(numero > 0){
            somatorio = somatorio + numero;
            qtdValores++;
        }

    } while(numero > 0);

    if(qtdValores > 0){
        media = somatorio / qtdValores;
    }
   

    printf("Somatorio: %.2f\n", somatorio);
    printf("Media: %.2f\n", media);
    printf("Quantidade: %d", qtdValores);

    return 0;
}