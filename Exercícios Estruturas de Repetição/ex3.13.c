#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, mult2=0, mult3=0, mult4=0;

    printf("Entre com um número inteiro:");
    scanf("%d", &num1);
    printf("Entre com outro número inteiro:");
    scanf("%d", &num2);

    if(num1 < num2){
        for(int i=num1; i<=num2; i++){
            if(i % 2 == 0){
                mult2++;
            }
            if(i % 3 == 0){
                mult3++;
            }
            if(i % 4 == 0){
                mult4++;
            }
        }
    }
    else{
        for(int i=num1; i>=num2; i--){
            if(i % 2 == 0){
                mult2++;
            }
            if(i % 3 == 0){
                mult3++;
            }
            if(i % 4 == 0){
                mult4++;
            }
        }
    }

    printf("Multiplos de 2: %d\n", mult2);
    printf("Multiplos de 3: %d\n", mult3);
    printf("Multiplos de 4: %d", mult4);

    return 0;
}