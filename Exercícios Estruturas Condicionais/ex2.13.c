#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1, nota2, notaopt, m;
    
    printf("Entre com a nota da primeira avaliação:");
    scanf("%f", &nota1);
    printf("Entre com a nota da segunda avaliação:");
    scanf("%f", &nota2);
    printf("Entre com a nota da avaliação optativa(se não realizada, inserir valor negativo):");
    scanf("%f", &notaopt);
    
    if(notaopt > nota1){
        m = (notaopt + nota2)/2;
    } 
    else if(notaopt > nota2){
        m = (notaopt + nota1)/2;
    }
    else {
        m = (nota2 + nota1)/2;
    }
    
    if(m >= 6){
        printf("Media: %.2f\nAprovado!", m);
    }
    else if(4 <= m && m <= 6){
        printf("Media: %.2f\nExame.", m);
    }
    else if(m < 4){
        printf("Media: %.2f\nReprovado...", m);
    }
    
    return 0;
}
