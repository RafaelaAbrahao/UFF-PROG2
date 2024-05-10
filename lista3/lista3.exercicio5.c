#include <stdio.h>

float max_vet(int n, float *vet) {
    float max = vet[0];

    for (int i = 1; i < n; i++) {
        if (vet[i] > max) {
            max = vet[i];
        }
    }
    return max;
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float vet[n];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &vet[i]);
    }

    float max = max_vet(n, vet);

    printf("O maior elemento do vetor eh: %.2f\n", max);

    return 0;
}