#include <stdio.h>
#include <stdlib.h>

void classificaDupla(int n1, int n2);

int main(){
    int array[3] [2];
    int resultados[3];

    for(int i = 0; i < 3; i++){
        for(int j = 1; j < 3; j++){
            printf("n%d[%d]", j, i);
            scanf("%d", &array[i] [j-1]);
        }
    }

    for(int i = 0; i < 3; i++){
        classificaDupla(array[i] [0], array[i] [1]);
    }
    return 0;
}

void classificaDupla(int n1, int n2){
    if(n1 < n2){
        printf("%d e %d: %d <= %d\n", n1, n2, n1, n2);
    } else {
        printf("%d e %d: %d <= %d\n", n1, n2, n2, n1);
    }
}