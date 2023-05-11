#include <stdio.h>
#include <stdlib.h>

int main(){
    float peso = 0;
    float media = 0;
    float somaPesos = 0;
    float contador = 0;
    float maiorPeso = 0;

    do{
        printf("Entre com o peso em kg:");
        scanf("%f", &peso);

        if(peso > 0){
            if(peso > 60.00){
                somaPesos = somaPesos + peso;
                contador++;
            }
            if(peso > maiorPeso){
                maiorPeso = peso;
            }
        }

    } while (peso > 0);

    if(contador > 0){
        media = somaPesos / contador;
    }
    
    
    printf("Media dos pesos acima de 60kg: %.2f\n", media);
    printf("A pessoa mais pesada possui %.2fkg", maiorPeso);

    return 0;
}