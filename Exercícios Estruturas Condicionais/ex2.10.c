#include <stdio.h>
#include <stdlib.h>

int main(){
    float lado1;
    float lado2;
    float lado3;

    printf("Entre com a primeira medida decimal(A):");
    scanf("%f", &lado1);
    printf("Entre com a segunda medida decimal(B):");
    scanf("%f", &lado2);
    printf("Entre com a terceira medida decimal(C):");
    scanf("%f", &lado3);

    if(lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1){
        if(lado1 == lado2 && lado1 == lado3){
            printf("Triangulo EQUILATERO");
        }
        else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
            printf("Triangulo ISOSCELES");
        }
        else{
            printf("Triangulo ESCALENO");
        }
    } 
    else{
        printf("As medidas fornecidas dos lados nao representam um triangulo valido!");
    }
    return 0;
}
