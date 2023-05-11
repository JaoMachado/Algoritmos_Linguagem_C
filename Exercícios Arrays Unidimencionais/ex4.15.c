#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[5];
    int array1[5];
    int arrayInterseccao[5];
    int cont = 0;

    for(int i = 0; i < 5; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("array1[%d]: ", i);
        scanf("%d", &array1[i]);
    }

    for(int i=0; i < 5;i++){
        for(int j=0;j < 5;j++){
            if(array[i] == array1[j]){
                arrayInterseccao[cont++] = array[i];
            }
        }
    }

    if(cont == 0){
        printf("Nao ha interseccao entre os elementos dos dois arrays fornecidos!");
    } else {
            for(int i = 0; i < cont-1; i++){
                printf("arrayInterseccao[%d] = %d\n", i, arrayInterseccao[i]);
        }
        
    }

    return 0;
}