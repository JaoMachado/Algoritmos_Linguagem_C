#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[3] [4];
    int arrayMult[3] [4];
    int num;

    for(int i=0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("array[%d] [%d]:", i, j);
            scanf("%d", &array[i] [j]);
        }
    }

    printf("Multiplicar por:");
    scanf("%d", &num);

    printf("arrayMult:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            arrayMult[i] [j] = num * array[i] [j];
            
            if(j == 3){
                printf("%03d", arrayMult[i][j]);
            } else {
                printf("%03d ", arrayMult[i][j]);
            }
        }
        printf("\n");
    }

    
    return 0;
}