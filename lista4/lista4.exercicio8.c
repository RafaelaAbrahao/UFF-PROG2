#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    const int tam = 6;

    int n[tam];
    for (int i = 0; i < tam; i++) {
        n[i] = rand() % 100;
    }

    int *pInicio = n;
    int *pFinal = n + tam - 1;

    while (pInicio < pFinal) {
        printf("Elemento inicial: %d\t Elemento final: %d\n", *pInicio, *pFinal);
        pInicio++;
        pFinal--;
    }

    return 0;
}