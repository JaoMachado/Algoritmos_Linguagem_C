#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[3] [3];
    int array1[3] [3];
    int array2[3] [3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("array[%d] [%d]", i, j);
            scanf("%d", &array[i] [j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("array1[%d] [%d]", i, j);
            scanf("%d", &array1[i] [j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            array2[i] [j] = array[i] [j] + array1[i] [j];
        }
    }

    printf("\narray1:       array2:       arraySoma:\n");

    for(int i = 0; i < 3; i++){
        if(i == 0){
            for(int j = 0; j < 3; j++){
                printf("%03d ", array[i] [j]);  
            }
            printf("  ");
            for(int j = 0; j < 3; j++){
                printf("%03d ", array1[i] [j]);  
            }
            printf("  ");
            for(int j = 0; j < 3; j++){
                if(j == 2){
                    printf("%03d", array2[i] [j]);
                } else{
                    printf("%03d ", array2[i] [j]);
                }    
            }   
            printf("\n");
        } else if(i==1){
            for(int j = 0; j < 3; j++){
                printf("%03d ", array[i] [j]);  
            }
            printf("+ ");
            for(int j = 0; j < 3; j++){
                printf("%03d ", array1[i] [j]);  
            }
            printf("= ");
            for(int j = 0; j < 3; j++){
                if(j == 2){
                    printf("%03d", array2[i] [j]);
                } else{
                    printf("%03d ", array2[i] [j]);
                }    
            }
            printf("\n");
        } else{
            for(int j = 0; j < 3; j++){
                printf("%03d ", array[i] [j]);  
            }
            printf("  ");
            for(int j = 0; j < 3; j++){
                printf("%03d ", array1[i] [j]);  
            }
            printf("  ");
            for(int j = 0; j < 3; j++){
                if(j == 2){
                    printf("%03d", array2[i] [j]);
                } else{
                    printf("%03d ", array2[i] [j]);
                }    
            }
        }
        
    }

    return 0;
}