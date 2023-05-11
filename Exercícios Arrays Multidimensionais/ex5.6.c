#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[2] [3];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("array[%d] [%d]:", i, j);
            scanf("%d", &array[i] [j]);
        }
    }

    printf("\nM:\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            if(j == 2){
                printf("%03d", array[i] [j]);
            } else {
                printf("%03d ", array[i] [j]);
            }
            
        }
        
        printf("\n");
    }
    printf("\nMt:\n");
    for(int i = 0; i < 1; i++){
        for(int j = 0; j < 3; j++){
            if(i == 0 && j == 2){
                printf("%03d %03d", array[i] [j], array[1] [j]);
            } else {
                printf("%03d %03d\n", array[i] [j], array[1] [j]);
            }
            
        }
        
        
        printf("\n");
    }

    return 0;
}