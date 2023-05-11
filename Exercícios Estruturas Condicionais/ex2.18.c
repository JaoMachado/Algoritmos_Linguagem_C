#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2;
    char operacao;

    printf("Digite um número decimal:");
    scanf("%f", &n1);
    printf("Digite outro número decimal:");
    scanf("%f", &n2);
    printf("Escolha uma operacao de acordo com o menu:\n    +) Adicao;\n    -) Subtracao;\n    *) Multiplicacao;\n    /) Divisao.\nOperacao:");
    scanf(" %c", &operacao);

    switch (operacao){
    case '+':
        printf("%.2f + %.2f = %.2f", n1, n2, n1 + n2);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f", n1, n2, n1 - n2);
        break;
    case '*':
        printf("%.2f * %.2f = %.2f", n1, n2, n1 * n2);
        break;
    case '/':
        printf("%.2f / %.2f = %.2f", n1, n2, n1 / n2);
        break;
    default:
        printf("Opcao invalida!");
        break;
    }
    return 0;
}