#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void removerLetra( char *str, char c );

int main(){
    char c;
    char string[40];
    
    printf("Frase: ");
    fgets(string, 40, stdin);

    printf("\nCaractere: ");
    scanf(" %c", &c);
    getchar();

    removerLetra(string, c);

    printf("%s", string);

    return 0;
}

void removerLetra( char *str, char c ){
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == c || str[i] == toupper(c)){
            for(int j = i; j < strlen(str); j++){
                str[j] = str[j+1];
            }
        }
    }
}