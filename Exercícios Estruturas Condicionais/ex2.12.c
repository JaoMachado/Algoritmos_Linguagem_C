#include <stdio.h>
#include <stdlib.h>

int main(){
    int homem1;
    int homem2;
    int mulher1;
    int mulher2;
    int homemMenor;
    int homemMaior;
    int mulherMenor;
    int mulherMaior;
    
    printf("Entre com a idade do primeiro homem:");
    scanf("%d", &homem1);
    printf("Entre com a idade do segundo homem:");
    scanf("%d", &homem2);
    printf("Entre com a idade da primeira mulher:");
    scanf("%d", &mulher1);
    printf("Entre com a idade da segunda mulher:");
    scanf("%d", &mulher2);
    
    if(homem1 < homem2){
        homemMenor = homem1;
        homemMaior = homem2;
    } 
    else {
        homemMenor = homem2;
        homemMaior = homem1;
    }
    
    if(mulher1 < mulher2){
        mulherMenor = mulher1;
        mulherMaior = mulher2;
    } 
    else {
        mulherMenor = mulher2;
        mulherMaior = mulher1;
    }
    
    printf("Idade homem mais velho + idade mulher mais nova: %d\n", homemMaior + mulherMenor);
    printf("Idade homem mais novo * idade mulher mais velha: %d", homemMenor * mulherMaior);
    
    return 0;
}
