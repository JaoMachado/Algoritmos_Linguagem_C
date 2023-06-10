#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool contem( const char *fonte, const char *aPesquisar );


int main(){
    char string[40];
    char pesquisa[40];

    printf("String fonte: ");
    fgets(string, 40, stdin);
    string[strlen(string)-1] = '\0';

    printf("\nString a pesquisar: ");
    fgets(pesquisa, 40, stdin);
    pesquisa[strlen(pesquisa)-1] = '\0';

    printf("\n\"%s\" %s contida em \"%s\"", pesquisa, contem(string, pesquisa) ? "esta" : "nao esta", string);

    return 0;
}

bool contem( const char *fonte, const char *aPesquisar ){
    int tamanhoPesquisa = strlen(aPesquisar);

    for (int i = 0; i < strlen(fonte); i++) { 
        if (fonte[i] == aPesquisar[0]) { 
            int t = i; 
            for (int j = 0; j < tamanhoPesquisa; j++) { 
                
                if (fonte[i] != aPesquisar[j]) { 
                    i = t;
                    break;
                }
                if (j == tamanhoPesquisa-1) {
                    return true;
                }
                i++;
            }
        }
    }

    return false;
}