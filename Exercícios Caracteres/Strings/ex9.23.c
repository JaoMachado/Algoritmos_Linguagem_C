#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimirCaixa( const char *str );

int main(){
    char string[40];

    printf("String: ");
    fgets(string, 40, stdin);
    string[strlen(string)-1] = '\0';

    imprimirCaixa(string);

    return 0;
}

void imprimirCaixa( const char *str ){
    printf("++==");
    for(int i = 0; i < strlen(str); i++){
        printf("=");
    }
    printf("++");

    printf("\n|| ");
    printf("%s", str);
    printf(" ||\n");

    printf("++==");
    for(int i = 0; i < strlen(str); i++){
        printf("=");
    }
    printf("++");
}