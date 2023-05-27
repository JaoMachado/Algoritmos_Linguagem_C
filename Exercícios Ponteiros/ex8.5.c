#include <stdio.h>
#include <stdlib.h>

int buscar( const int *a, int n, int chave );

int main(){
    int a[10];
    int chave;

    for(int i = 0; i < 10; i++){
        printf("n[%d]", i);
        scanf("%d", &a[i]);
    }

    printf("Buscar por: ");
    scanf("%d", &chave);

    if(buscar(a, 10, chave) == -1){
        printf("O valor %d nao foi encontrado.", chave);
    } else{
        printf("O valor %d foi encontrado na posicao %d.", chave, buscar(a, 10, chave));
    }

    return 0;
}

int buscar( const int *a, int n, int chave ) {
    for(int i = 0; i < n; i++){
        if(a[i] == chave){
            return i;
        }
    }
    return -1;
}