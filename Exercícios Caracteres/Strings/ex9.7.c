#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string[10] [40];
    int comparacao;
    int posicao = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Par %d, palavra %d: \n", i+1, j+1);
            fgets(string[posicao], 40, stdin);
            string[posicao][strlen(string[posicao])-1] = '\0';
            posicao++;
        }
    }

    posicao= 0;
    
    for(int i = 0; i < 5; i++){
        printf("%s - %s: ", string[posicao], string[posicao+1]);

        comparacao = strcmp(string[posicao], string[posicao+1]);

        if(comparacao < 0){
            printf("ORDEM CRESCENTE\n");
        } else if(comparacao == 0){
            printf("IGUAIS\n");
        } else{
            printf("ORDEM DECRESCENTE\n");
        }

        posicao += 2;
    } 
    
    return 0;
}