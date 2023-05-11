#include <stdio.h>
#include <stdlib.h>

int main(){
    int numLados;
    float medLado;
    float perimetro;
    float area;

    printf("Entre com a quantidade de lados(número inteiro):");
    scanf("%d", &numLados);
    printf("Entre com a medida do lado:");
    scanf("%f", &medLado);

    if(numLados == 3){
        perimetro = medLado * 3;
        printf("TRIANGULO de perimetro %.2f", perimetro);
    } 
    else if(numLados == 4){
        area = medLado * medLado;
        printf("QUADRADO de area %.2f", area);
    } 
    else if(numLados == 5){
        printf("PENTAGONO");
    } 
    else{
        printf("Poligono nao identificado");
    }
    return 0;
}
