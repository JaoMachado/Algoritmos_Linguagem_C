#include <stdio.h>
#include <stdlib.h>

int main(){

    for(int i=0; i<6; i++){
        for(int j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for(int i=5; i>0; i--){
        for(int j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for(int i=1; i<6; i++){
        for(int j=5; j>i; j--){
            printf(" ");
        }

        for(int k=0; k<i; k++){
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");
    
    for(int i=5; i>0; i--){
        for(int j=5; j>i; j--){
            printf(" ");
        }
        for(int j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}