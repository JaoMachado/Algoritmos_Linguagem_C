#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string[40];

    printf("Sentenca: ");
    fgets(string, 40, stdin);

    for(int i = 0; i < 5; i++){
        printf("%s", string);
    }

    return 0;
}