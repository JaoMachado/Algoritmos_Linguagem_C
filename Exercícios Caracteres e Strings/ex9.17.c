#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarPalavras( const char *str );

int main(){
    char string[40];
    
    printf("Frase: ");
    fgets(string, 40, stdin);

    printf("\nQuantidade de palavras: %d", contarPalavras(string));
    return 0;
}

int contarPalavras( const char *str ){
    int palavras = 1;
    for(int i = 0; i < strlen(str)-1; i++){
        if(str[i] == ' '){
            palavras++;
        }
    }
    return palavras;
}