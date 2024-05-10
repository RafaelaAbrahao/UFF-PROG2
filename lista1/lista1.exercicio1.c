#include <stdio.h>

int main() {
    int totalsegundos, horas, minutos, segundos;

    printf("Digite o total de segundos: ");
    scanf("%d", &totalsegundos);

    horas = totalsegundos / 3600;
    totalsegundos %= 3600;
    minutos = totalsegundos / 60;
    segundos = totalsegundos % 60;

    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundos);

    return 0;
}