#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string[40];

    printf("String: ");
    fgets(string, 40, stdin);

    printf("%c, %c, %c, %c.", string[0], string[1], string[2], string[3]);
    return 0;
}