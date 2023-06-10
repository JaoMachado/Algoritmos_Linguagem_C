#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string[40];

    printf("Sentenca: ");
    fgets(string, 40, stdin);

    for(int i = 1; i < strlen(string)-1; i += 2){
        if(string[i] == ' '){
            printf(" ' ',");
        } else if(i == strlen(string)-2){
            printf(" %c", string[i]);
        } else if(i == strlen(string)-3){
            printf(" %c", string[i]);
        }else {
            printf(" %c,", string[i]);
        }
    }
}