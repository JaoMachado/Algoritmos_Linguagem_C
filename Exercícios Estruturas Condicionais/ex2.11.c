#include <stdio.h>
#include <stdlib.h>

int main(){
    float a;
    float b;
    float y;

    printf("Entre com o primeiro ângulo, alfa(α) (valor decimal):");
    scanf("%f", &a);
    printf("Entre com o segundo ângulo, beta(β) (valor decimal):");
    scanf("%f", &b);
    printf("Entre com o terceiro ângulo, gama(γ) (valor decimal):");
    scanf("%f", &y);

    if(a + b + y == 180){
        if(a == 90 || b == 90 || y == 90){
            printf("Triangulo RETANGULO");
        }
        else if(a > 90 || b > 90 || y > 90){
            printf("Triangulo OBTUSANGULO");
        }
        else{
            printf("Triangulo ACUTANGULO");
        }
    } 
    else{
        printf("As medidas fornecidas dos angulos nao representam um triangulo valido!");
    }
    return 0;
}
