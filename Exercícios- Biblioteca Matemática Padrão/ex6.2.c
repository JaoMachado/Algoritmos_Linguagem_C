#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float base;
    float expoente;
    float resultado;

    printf("Base: ");
    scanf("%f", &base);
    printf("Expoente:", &expoente);
    scanf("%f", &expoente);

    printf("%.2f ^ %.2f = %.2f", base, expoente, pow(base, expoente));
    
    return 0;
}