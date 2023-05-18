#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include <math.h>

bool ehPar(int n);
bool ehDivisivel(int dividendo, int divisor);

int main(){
    int array[10];
    bool a;
    bool b;
    int k = 0;

    for(int i = 0; i < 10; i= i + 2){
        printf("n1[%d]", k);
        scanf("%d", &array[i]);
        printf("n2[%d]", k++);
        scanf("%d", &array[i+1]);
    }

    for(int i = 0; i < 10; i = i + 2){
        if(ehPar(array[i]) == true){
            printf("%d eh par e %d ", array[i], array[i]);
        } else {
            printf("%d eh impar e %d ", array[i], array[i]);
        }
        if(ehDivisivel(array[i], array[i+1]) == true){
            printf("eh divisivel por %d", array[i+1]);
        } else {
            printf("nao eh divisivel por %d", array[i+1]);
        }
        printf("\n");
    }



    return 0;
}

bool ehPar(int n){
    if(n % 2 == 0){
        return true;
    }
    return false;
}
bool ehDivisivel(int dividendo, int divisor){
    if(dividendo % divisor == 0){
        return true;
    }
    return false;
}