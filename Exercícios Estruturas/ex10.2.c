#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct{
    int dia; 
    int mes; 
    int ano;
} Data;

bool ehBissexto( int ano);
int diaDoAno( const Data *data );

int main() {
    Data d;

    printf(" Data:\n");

    printf("dia: ");
    scanf("%d", &d.dia);

    printf("mes: ");
    scanf("%d", &d.mes);

    printf("ano: ");
    scanf("%d", &d.ano);

    printf("O dia do ano da data %02d/%02d/%02d eh %d.", d.dia, d.mes, d.ano, diaDoAno(&d));

    return 0;
}

bool ehBissexto( int ano ){
    if((ano % 400 == 0 || ano % 4 == 0) && ano % 100 != 0){
        return true;
    }
    return false;
}

int diaDoAno( const Data *data ){
    int diasPorMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int diaAno = 0;

    if(ehBissexto(data->ano)){
        diasPorMes[1] = 29;
    }

    for(int i = 0; i < data->mes - 1; i++){
        diaAno += diasPorMes[i];
    }

    diaAno += data->dia;

    return diaAno;

}