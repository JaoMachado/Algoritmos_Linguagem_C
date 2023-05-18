#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ehPrimo(int n);

int main(){
    for(int i = 1; i <=20; i++){
        if(ehPrimo(i) == true){
            printf("%d: eh primo\n", i);
        } else if(ehPrimo(i) == false){
            printf("%d: nao eh primo\n", i);
        }
        
    }
    return 0;
}

bool ehPrimo(int n){
    int som = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            som++;
        }
    }
    if(som == 2){
        return true;
    }
    return false;
    }
    