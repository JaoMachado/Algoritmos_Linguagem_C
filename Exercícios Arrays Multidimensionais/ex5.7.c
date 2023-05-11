#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[3] [2];
    int array1[2] [3];
    int arrayMult[3] [3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("array[%d] [%d]:", i, j);
            scanf("%d", &array[i] [j]);
        }  
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("array1[%d] [%d]:", i, j);
            scanf("%d", &array1[i] [j]);
        }  
    }
    for(int i = 0; i < 3; i++){
        if(i == 0){
            for(int j = 0; j < 3; j++){
                arrayMult[0] [j] = (array[i] [i] * array1[i] [j]) + (array[i] [1] * array1[1] [j]);
            }
        } else if(i == 1){
            for(int j = 0; j < 3; j++){
                arrayMult[i] [j] = (array[i] [0] * array1[0] [j]) + (array[i] [i] * array1[1] [j]);
            }
        } else {
            for(int j = 0; j < 3; j++){
                arrayMult[i] [j] = (array[i] [0] * array1[0] [j]) + (array[i] [1] * array1[1] [j]);
            }
        }
    }

    printf("A x B =\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(j == 2){
                printf("%03d", arrayMult[i] [j]);
            } else {
                printf("%03d ", arrayMult[i] [j]);
            } 
        }
        printf("\n");
    }
    
    return 0;
}