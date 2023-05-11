#include <stdio.h>
#include <stdlib.h>

int main(){
    float saldoInicial;
    int operacao;
    float valor = 0;

    printf("Saldo Inicial:");
    scanf("%f", &saldoInicial);

    do{
        printf("Operacoes:\n    1) Deposito;\n    2)Saque;\n    1)Fim.");
        scanf("%d", &operacao);

        if(operacao == 1 || operacao == 2){
            if(operacao == 1){
                printf("Valor a Depositar:");
                scanf("%f", &valor);
                saldoInicial = saldoInicial + valor;
            } else if(operacao == 2){
                printf("Valor a Sacar:");
                scanf("%f", &valor);
                saldoInicial = saldoInicial - valor;
            }
        } else if(operacao != 3){
            printf("Operacao invalida.");
        }    

    } while (operacao != 3);

    if(saldoInicial == 0){
        printf("Saldo final: R$%.2f\n", saldoInicial);
        printf("Sem saldo.");
    } else if(saldoInicial < 0){
        saldoInicial = saldoInicial * -1;
        printf("Saldo final: -R$%.2f\n", saldoInicial);
        printf("Conta devedora.");
    } else {
        printf("Saldo final: R$%.2f\n", saldoInicial);
        printf("Conta preferencial.");
    }
    
    

    

    

    return 0;
}