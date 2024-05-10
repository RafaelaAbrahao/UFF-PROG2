#include <stdio.h>

int main() {
    int X[10], Y[10];
    int i;

    printf("Digite os 10 elementos do vetor X:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &X[i]);
    }

    for (i = 0; i < 10; i++) {
        Y[i] = X[9 - i];
    }

    printf("O vetor Y, com os elementos de X invertidos, eh:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", Y[i]);
    }
    printf("\n");

    return 0;
}