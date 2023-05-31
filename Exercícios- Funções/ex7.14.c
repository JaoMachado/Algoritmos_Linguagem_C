#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void imprimeDuplaClassificada(int n1, int n2, bool emOrdemCrescente);

int main(){
    int array[5] [2];

    for(int i = 0; i < 5; i++){
        for(int j = 1; j < 3; j++){
            printf("n%d[%d]", i, j);
            scanf("%d", &array[i] [j-1]);
        }
    }

    for(int i = 0; i < 5; i++){
        if(i % 2 == 0){
            imprimeDuplaClassificada(array[i][0], array[i][1], true);
        } else {
            imprimeDuplaClassificada(array[i][0], array[i][1], false);
        }
    }
    return 0;
}

void imprimeDuplaClassificada(int n1, int n2, bool emOrdemCrescente){
    if(emOrdemCrescente == true){
        if(n1 > n2){
            printf("%d e %d: %d <= %d\n", n1, n2, n2, n1);
        } else {
            printf("%d e %d: %d <= %d\n", n1, n2, n1, n2);
        }
    } else if(emOrdemCrescente == false) {
        if(n1 > n2){
            printf("%d e %d: %d >= %d\n", n1, n2, n1, n2);
        } else {
            printf("%d e %d: %d >= %d\n", n1, n2, n2, n1);
        }
        
    }
}