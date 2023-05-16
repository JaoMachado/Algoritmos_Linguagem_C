#include <stdio.h>
#include <stdlib.h>

int absoluto(int n);

int main(){
    int array[5];

    for(int i = 0; i < 5; i++){
        printf("n%d: ", i);
        scanf("%d", &array[i]);
        array[i] = absoluto(array[i]);
    }

    for(int i = 0; i < 5; i++){
        
    }


    return 0;
}

int absoluto(int n){
    return n < 0 ? -n : n;
}
