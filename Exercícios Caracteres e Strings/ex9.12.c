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
    printf("B/b: %d\n", contarOcorrencias(string, 'b'));
    printf("C/c: %d\n", contarOcorrencias(string, 'c'));
    printf("D/d: %d\n", contarOcorrencias(string, 'd'));
    printf("E/e: %d", contarOcorrencias(string, 'e'));

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