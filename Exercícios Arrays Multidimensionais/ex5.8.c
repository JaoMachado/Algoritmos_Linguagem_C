#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    int x = 0;
    
    printf("Numero entre 1 e 100:");
    scanf("%d", &num);
    printf("\n");

    if(num < 1 || num > 100){
        printf("Numero incorreto!");
    } else{
        for(int i = 1; i <= num; i++){
            for(int j = 1; j <= num; j++){
                x = i;

                if( j < x){
                    x = j;
                }
                if(num-i+1 < x){
                    x = num-i+1;
                }
                if(num-j+1 < x){
                    x = num-j+1;
                }
                if(j == num){
                    printf("%3d", x);
                } else {
                    printf("%3d ", x);
                }
                
            }
            printf("\n");
        }
    }
    return 0;
}