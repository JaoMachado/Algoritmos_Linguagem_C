#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool saoAmigos(int n1, int n2);

int main(){
    int array[5] [2];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 2; j++){
            printf("n%d[%d]", j+1, i);
            scanf("%d", &array[i][j]);
        }
    }

    for(int i = 0; i < 5; i++){
        if(saoAmigos(array[i][0], array[i] [1]) == true){
            printf("%d e %d sao amigos\n", array[i][0], array[i] [1]);
        } else{
            printf("%d e %d nao sao amigos\n", array[i][0], array[i] [1]);
        }
    }

    return 0;
}

bool saoAmigos(int n1, int n2){
    int somaN1 = 1;
    for(int i = 2; i < n1; i++){
        if(n1 % i == 0){
            somaN1 += i;
        }
    }
    int somaN2 = 1;
    for(int i = 2; i < n2; i++){
        if(n2 % i == 0){
            somaN2 += i;
        }
    }
    if(somaN1 == n2 && somaN2 == n1){
        return true;
    }
    return false;
}