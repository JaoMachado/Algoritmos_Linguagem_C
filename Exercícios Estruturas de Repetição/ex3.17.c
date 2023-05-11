#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=0, b=1, aux=0, termo;
    
    printf("Entre com o termo desejado:");
    scanf("%d", &termo);
    
    if(termo == 0){
        printf("Fibonacci de 0 e 1");
    }
    else{
        for(int i=1; i<=1000000; i++){
            aux = a + b;
            a = b;
            b = aux;
        
            if(termo == i){
            printf("Fibonacci de %d e %d", i, aux);
            }
        }
    }

    return 0;
}