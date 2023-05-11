#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho;

    printf("Digite o tamanho da pirâmide:");
    scanf("%d", &tamanho);

    if(tamanho > 0){
        for(int i=0; i<=tamanho; i++){
            for(int j=tamanho; j>i; j--){
                printf(" ");
            }
            for(int k=0; k<i; k++){
                printf("*");
            }
            for(int z=0; z<i-1; z++){
                printf("*");
            }
            printf("\n");
        }
        
    } else {
        printf("\n");
        for(int i=tamanho; i<0; i++){
            for(int j=tamanho; j<i; j++){
                printf(" ");
            }
            for(int k=0; k>i; k--){
                printf("*");
            }
            for(int z=0; z>i+1; z--){
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}