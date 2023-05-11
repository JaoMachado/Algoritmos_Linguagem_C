#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 1;
    int x = 1;
    
    printf("Numero entre 1 e 100:");
    scanf("%d", &num);
    printf("\n");

    if(num < 1 || num > 100){
        printf("Numero incorreto!");
    } else{
        for(int i = 0; i < num; i++){
            x = i+2;
            for(int j = 0; j < num; j++){
                
                if( i < j){
                    x++;
                } else if(i > j){
                    x--;
                } else{
                    x = 1;
                }

                if(j == 0){
                    printf("%3d", x);
                } else {
                    printf(" %3d", x);
                }   
            }
            printf("\n");
        }
    }
    return 0;
}