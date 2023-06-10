#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void tornarMinuscula( char *str );

int main(){
    char string[40];

    printf("Frase: ");
    fgets(string, 40, stdin);

    tornarMinuscula(string);

    printf("%s", string);

    return 0;
}

void tornarMinuscula( char *str ){
    for(int i = 0; i < strlen(str)-2; i++){
        str[i] = tolower(str[i]);
    }
}