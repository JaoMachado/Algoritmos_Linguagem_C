#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int horas;
    int minutos;
    int segundos;
} Hora;

Hora gerarHora( int quantidadeSegundos );
void imprimirHora( const Hora *hora );

int main() {
    int segundos;
    Hora hora;

    printf("Segundos: ");
    scanf("%d", &segundos);

    hora = gerarHora(segundos);

    imprimirHora(&hora);
    
    return 0;
}

Hora gerarHora( int quantidadeSegundos ){
    Hora hora;
    int resto;

    hora.horas = quantidadeSegundos / 3600;
    resto = quantidadeSegundos % 3600;
    hora.minutos = resto / 60;
    hora.segundos = resto % 60;

    return hora;
}

void imprimirHora( const Hora *hora ){
    printf("\nHora correspondente: %02d:%02d:%02d", hora->horas, hora->minutos, hora->segundos);
}
