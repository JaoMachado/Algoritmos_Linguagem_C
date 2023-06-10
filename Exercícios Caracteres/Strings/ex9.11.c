#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarOcorrencias( const char *str, char c );

int main(){
    char c;

    printf("Caractere: ");
    scanf(" %c", &c);
    getchar();

    while (1) {
        char string[40];

        printf("\nFrase: ");
        fgets(string, 40, stdin);
        string[strlen(string)-1] = '\0';

        if(!strcmp(string, "fim")){
            break;
        }

        printf("\"%s\" tem %d ocorrencia(s) do caractere '%c'", string, contarOcorrencias(string, c), c);

    }

    return 0;
}

int contarOcorrencias( const char *str, char c ){
    int ocorrencias = 0;

    for(int i = 0; i < strlen(str)-1; i++){
        if(str[i] == c){
            ocorrencias++;
        }
    }

    return ocorrencias;
}