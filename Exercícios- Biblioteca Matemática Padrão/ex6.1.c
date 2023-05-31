#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a;
    int b;
    int c;
    float delta;
    float x1;
    float x2;
    
    printf("a: ");
    scanf("%d", &a);
    if(a == 0){
        printf("\nNao existe equacao do segundo grau!");
    } else{
        printf("b: ");
        scanf("%d", &b);
        printf("c: ");
        scanf("%d", &c);

        delta = pow(b, 2) - 4 * a * c;

        if(delta < 0){
            printf("Delta: %.2f\n", delta);
            printf("S = {}");
        } else{
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            if(delta == 0){
                printf("Delta: %.2f\n", delta);
                printf("S = {%.2f}", fmin(x1, x2));
            }else{
                printf("Delta: %.2f\n", delta);
                printf("S = {%.2f, %.2f}", fmin(x1, x2), fmax(x1, x2));
            }
            
        }

        
    }
    return 0;
}