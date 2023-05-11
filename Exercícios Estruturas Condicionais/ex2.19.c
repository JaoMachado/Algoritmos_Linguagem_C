#include <stdio.h>
#include <stdlib.h>

int main(){
    float celsius, fahrenheit, valorC, valorF;
    char opcao;

    printf("Escolha uma operação de acordo com o menu:\n    C) Celsius -> Fahrenheit;\n    F) Fahrenheit -> Celsius.\n Opção: ");
    scanf(" %c", &opcao);

    switch (opcao)
    {
    case 'C':
        printf("Entre com a temperatura em graus Celsius:");
        scanf("%f", &celsius);
        valorF = 1.8 * celsius + 32;
        printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit", celsius, valorF);
        break;
    case 'F':
        printf("Entre com a temperatura em graus Fahrenheit");
        scanf("%f", &fahrenheit);
        valorC = (fahrenheit - 32) / 1.8;
        printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", fahrenheit, valorC);
        break;
    default:
        printf("Opcao invalida!");
        break;
    }
    return 0;
}