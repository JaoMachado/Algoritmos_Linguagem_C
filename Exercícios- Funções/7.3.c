#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float maiorNumero(float n1, float n2);

int main(){
    float numeros[10] = {1};
    float maiores[5];
    int j = 0;
    int k = 0;

    for(int i = 0; i < 10; i=i+2){
            do{
                printf("n1[%d]", j);
                scanf("%f", &numeros[i]);
                if(numeros[i] < 0){
                    printf("Entre com um valor positivo!");
                }
            } while(numeros[i] < 0);
            do{
                printf("n2[%d]", j);
                scanf("%f", &numeros[i+1]);
                if(numeros[i+1] < 0){
                    printf("Entre com um valor positivo!");
                }
            } while(numeros[i+1] < 0);

            maiores[j++] = maiorNumero(numeros[i], numeros[i+1]);
    }
    for(int j = 0; j < 10; j = j +2){
        if(maiores[k] == -1.00){
           printf("%.2f, %.2f: Eles sao iguais\n", numeros[j], numeros[j+1]);
        } else{
            printf("%.2f, %.2f: O maior valor e %.2f\n", numeros[j], numeros[j+1], maiores[k]);
        }
        k++;
    }

    return 0;
}

float maiorNumero(float n1, float n2){
    if(n1 > n2){
        return n1;
    } else if(n1 < n2){
        return n2;
    } else { 
        return -1.00;
    }
}
