#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int tamanho( const char *str );

int main(){
    char string[40];

    printf("String: \n");
    fgets(string, 40, stdin);
    

    printf("%d caractere(s)!", tamanho(string));

    return 0;
}

int tamanho( const char *str ){
    int tamanho = 0;
    for(int i = 0; i < 40; i++){
        if(str[i] == '\n'){
            return tamanho;
        }
        tamanho++;
    }
}