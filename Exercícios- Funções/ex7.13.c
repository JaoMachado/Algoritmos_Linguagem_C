#include <stdio.h>
#include <stdlib.h>

void classificaTrinca(int n1, int n2, int n3);

int main(){
    int array[3] [3];
    int resultados[3];

    for(int i = 0; i < 3; i++){
        for(int j = 1; j < 4; j++){
            printf("n%d[%d]", j, i);
            scanf("%d", &array[i] [j-1]);
        }
    }

    for(int i = 0; i < 3; i++){
        classificaTrinca(array[i] [0], array[i] [1], array[i] [2]);
    }

    return 0;
}

void classificaTrinca(int n1, int n2, int n3){
    int menor = n1;
    int medio = n2;
    int maior = n3;
    int temp;

    if(menor > medio){
        temp = menor;
        menor = medio;
        medio = temp;
    }
    if(medio > maior){
        temp = medio;
        medio = maior;
        maior = temp;
    }
    if(menor > medio){
        temp = menor;
        menor = medio;
        medio = temp;
    }
    printf("%d, %d e %d: %d <= %d <= %d\n", n1, n2, n3, menor, medio, maior);
}