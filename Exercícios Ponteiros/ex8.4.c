#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void decompoeData( int diaDoAno, int ano, int *mes, int *dia );
bool ehBissexto( int ano );

int main(){
    int diaDoAno;
    int ano;
    int mes;
    int dia;

    printf("Dia do ano: ");
    scanf("%d", &diaDoAno);

    printf("Ano: ");
    scanf("%d", &ano);

    decompoeData(diaDoAno, ano, &mes, &dia);

    printf("O dia %d do ano %d cai no dia %d do mes %d.", diaDoAno, ano, dia, mes);
}

void decompoeData( int diaDoAno, int ano, int *mes, int *dia ){
    if(diaDoAno < 32){
        *mes = diaDoAno / 30;
    } else {
        *mes = diaDoAno / 30 + 1;
    }
    
    if(ehBissexto(ano)){
        if(*mes == 2 || *mes == 1){
            *dia = diaDoAno - (*mes - 1) * 31;
        } else {
            *dia = (diaDoAno - (*mes - 1) * 30) - 1;
        }
    } else {
        *dia = diaDoAno - (*mes - 1) * 30;
    }

    return 0;
}

bool ehBissexto( int ano ){
    if(ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0){
        return true;
    }
    return false;
}
