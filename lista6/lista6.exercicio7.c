#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void repeticao(int *vet, int tam);

int main() {

    int tam;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int *vetor = (int*)malloc(tam * sizeof(int));

    printf("Preencha o vetor com valores entre '0' e '9':\n");
    for (int i = 0; i < tam; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
        if (vetor[i] < 0 || vetor[i] > 9) {
            fprintf(stderr, "Por favor, digite um valor entre '0' e '9'.\n");
            exit(1);
        }
    }
    repeticao(vetor, tam);
    free(vetor);

    return 0;
}

void repeticao(int *vet, int tam) {
    printf("Todos os valores que se repetem no vetor:\n");
    bool *repetidos = (bool*)calloc(10, sizeof(bool));

    for (int i = 0; i < tam; i++) {
        for (int j = i + 1; j < tam; j++) {
            if (vet[i] == vet[j] && !repetidos[vet[i]]) {
                printf("%d ", vet[i]);
                repetidos[vet[i]] = true;
                break;
            }
        }
    }
    printf("\n");
    
    free(repetidos);
}