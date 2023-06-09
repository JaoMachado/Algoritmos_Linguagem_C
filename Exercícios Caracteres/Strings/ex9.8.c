#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char strings[3] [40];
    char string[40];
    int comp;

    for(int i = 0; i < 3; i++){
        printf("String %d: \n", i + 1);
        fgets(strings[i], 40, stdin);
        strings[i] [strlen(strings[i])-1] = '\0';
    }

    if(strcmp(strings[0], strings[1]) > 0){
        strcpy(string, strings[0]);
        strcpy(strings[0], strings[1]);
        strcpy(strings[1], string);
    }

    if(strcmp(strings[1], strings[2]) > 0){
        strcpy(string, strings[1]);
        strcpy(strings[1], strings[2]);
        strcpy(strings[2], string);
    }
    
    if(strcmp(strings[0], strings[1]) > 0){
        strcpy(string, strings[0]);
        strcpy(strings[0], strings[1]);
        strcpy(strings[1], string);
    }
    
    printf("%s, %s e %s", strings[0], strings[1], strings[2]);
    
    return 0;
}