#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float num;

    printf("Numero:");
    scanf("%f", &num);

    printf("Maior inteiro mais proximo: %.2f\n", ceil(num));
    printf("Menor inteiro mais proximo: %.2f\n", floor(num));

    return 0;
}