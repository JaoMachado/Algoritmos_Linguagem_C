#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string[40];

    printf("Sentenca: ");
    fgets(string, 40, stdin);

    printf("Primeiro caractere: %c\n", string[0]);
    printf("Ultimo caractere: %c\n", string[strlen(string)-2]);
    printf("Numero de caracteres: %d", strlen(string)-1);

    return 0;
}