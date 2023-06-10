#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int contarOcorrencias( const char *str, char c );

int main(){
    char string[40];

    printf("Frase: ");
    fgets(string, 40, stdin);

    printf("A/a: %d\n", contarOcorrencias(string, 'a'));
    printf("E/e: %d\n", contarOcorrencias(string, 'e'));
    printf("I/i: %d\n", contarOcorrencias(string, 'i'));
    printf("O/o: %d\n", contarOcorrencias(string, 'o'));
    printf("U/u: %d", contarOcorrencias(string, 'u'));
    
    return 0;
}

int contarOcorrencias( const char *str, char c ){
    int ocorrencias = 0;

    for(int i = 0; i < strlen(str)-1; i++){
        if(str[i] == c || str[i] == toupper(c)){
            ocorrencias++;
        }
    }

    return ocorrencias;
}