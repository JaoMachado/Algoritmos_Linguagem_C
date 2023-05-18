#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int lePositivo();
bool ehTriangulo(int ladoA, int ladoB, int ladoC);
int tipoTriangulo(int ladoA, int ladoB, int ladoC);

int main(){
    int lados[5] [3];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            printf("lado%d[%d]", j+1, i);
            lados[i] [j] = lePositivo();
        }
    }

    for(int i = 0; i < 5; i++){
        if(ehTriangulo(lados[i] [0], lados[i] [1], lados[i] [2]) == false){
            printf("Valores %d, %d e %d: nao formam um triangulo\n", lados[i] [0], lados[i] [1], lados[i] [2]);
        } else {
            if(tipoTriangulo(lados[i] [0], lados[i] [1], lados[i] [2]) == 1){
                printf("Valores %d, %d e %d: triangulo equilatero\n", lados[i] [0], lados[i] [1], lados[i] [2]);
            } else if(tipoTriangulo(lados[i] [0], lados[i] [1], lados[i] [2]) == 2){
                printf("Valores %d, %d e %d: triangulo isosceles\n", lados[i] [0], lados[i] [1], lados[i] [2]);
            } else{
                printf("Valores %d, %d e %d: triangulo escaleno\n", lados[i] [0], lados[i] [1], lados[i] [2]);
            }
        }
    }
    return 0;
}

int lePositivo(){
    int num;
    do{
        scanf("%d", &num);
        if(num < 0){
            printf("Entre com um valor positivo:");
        }
    }while(num < 0);
    return num;
}

bool ehTriangulo(int ladoA, int ladoB, int ladoC){
    if(ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA){
        return true;
    }
    return false;
}

int tipoTriangulo(int ladoA, int ladoB, int ladoC){
    if(ladoA == ladoB && ladoA == ladoC){
            return 1;
        }
        else if(ladoA == ladoB || ladoA == ladoC || ladoB == ladoC){
            return 2;
        }
        else{
            return 3;
        }
}