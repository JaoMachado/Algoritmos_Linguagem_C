#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void substring( char *recorte, const char *origem, int inicio, int fim );

int main(){
    char string[40];
    char recorte[40];
    int inicio;
    int fim;

    printf("String: ");
    fgets(string, 40, stdin);
    string[strlen(string)-1] = '\0';

    printf("\nInicio: ");
    scanf("%d", &inicio);

    printf("\nFim: ");
    scanf("%d", &fim);

    substring(recorte, string, inicio, fim);
    printf("Recorte: %s", recorte);

    return 0;
}

void substring( char *recorte, const char *origem, int inicio, int fim ){
    int j = 0;
    if(fim <= inicio || inicio >= strlen(origem)-1){
        strcpy(recorte, origem);
        return;
    }
    for(int i = inicio; i < fim; i++){
        recorte[j++] = origem[i];
    }
}