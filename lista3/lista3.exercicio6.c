#include <stdio.h>

int maiores(int n, int x, int *vet) {
    int cont = 0;

    for (int i = 0; i < n; i++) {
        if (vet[i] > x) {
            cont++;
        }
    }

    return cont;
}

int main() {
    int n, x;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vet[n];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    int cont = maiores(n, x, vet);

    if (cont == 0) {
        printf("Nao existem valores maiores que %d no vetor.\n", x);
    } else {
        printf("Existem %d numeros maiores que %d no vetor.\n", cont, x);
    }

    return 0;
}