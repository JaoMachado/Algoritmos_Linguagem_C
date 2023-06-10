#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter( char *destino, const char *origem );

int main(){
    char string[40];
    char invertida[40];

    printf("String: \n");
    fgets(string, 40, stdin);

    inverter(invertida, string);

    printf("Invertida: %s", invertida);
    
    return 0;
}

void inverter( char *destino, const char *origem ){
    int x = strlen(origem) - 2;

    for(int i = 0; i < strlen(origem) - 1; i++){
        destino[i] = origem[x--];
    }
}