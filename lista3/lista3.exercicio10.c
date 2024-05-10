#include <stdio.h>

float media(int n, float *v) {
    float soma = 0;

    for (int i = 0; i < n; i++) {
        soma += v[i];
    }

    float media = soma / n;

    return media;
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float v[n];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &v[i]);
    }

    float resultado = media(n, v);

    printf("A media dos elementos do vetor eh: %.2f\n", resultado);

    return 0;
}