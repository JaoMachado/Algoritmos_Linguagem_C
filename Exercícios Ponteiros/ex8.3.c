#include <stdio.h>
#include <stdlib.h>

void decompoeTempo( int totalSeg, int *horas, int *minutos, int *seg );

int main(){
    int totalSeg;
    int horas;
    int minutos;
    int seg;

    printf("Total de segundos: ");
    scanf("%d", &totalSeg);

    decompoeTempo(totalSeg, &horas, &minutos, &seg);

    printf("%d  segundo(s) corresponde(m) a:\n    %d hora(s)\n    %d minuto(s)\n    %d segundo(s)", totalSeg, horas, minutos, seg);

    return 0;
}

void decompoeTempo( int totalSeg, int *horas, int *minutos, int *seg ){
    *horas = totalSeg / 3600;
    *minutos = (totalSeg % 3600) / 60;
    *seg = (totalSeg % 3600) % 60;
}