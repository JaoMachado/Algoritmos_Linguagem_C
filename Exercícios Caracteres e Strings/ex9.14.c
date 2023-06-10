#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void tornarMaiuscula( char *str );

int main(){
    char string[40];

    printf("Frase: ");
    fgets(string, 40, stdin);

    tornarMaiuscula(string);

    printf("%s", string);
    return 0;
}

void tornarMaiuscula( char *str ){
    for(int i = 0; i < strlen(str)-2; i++){
        str[i] = toupper(str[i]);
    }
}