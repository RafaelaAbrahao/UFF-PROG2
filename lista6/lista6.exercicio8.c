#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int *repeticao(int *vet, int tam, int *n);

int main() {
    int tam, *resposta, n = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    int *vetor = (int*)malloc(tam * sizeof(int));

    printf("Preencha o vetor com valores entre '0' e '9':\n");
    for (int i = 0; i < tam; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    resposta = repeticao(vetor, tam, &n);

    printf("Todos os valores que se repetem no vetor:\n");
    for (int i = 0; i < n; i++) {
        printf("%d", resposta[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    free(vetor);
    free(resposta);

    return 0;
}

int *repeticao(int *vet, int tam, int *n) {
    bool *repetidos = (bool*)calloc(10, sizeof(bool));

    int cont = 0;
    for (int i = 0; i < tam; i++) {
        for (int j = i + 1; j < tam; j++) {
            if (vet[i] == vet[j] && !repetidos[vet[i]]) {
                repetidos[vet[i]] = true;
                cont++;
                break;
            }
        }
    }

    int *resposta = (int*)malloc(cont * sizeof(int));

    cont = 0;
    for (int i = 0; i < tam; i++) {
        if (repetidos[vet[i]]) {
            resposta[cont] = vet[i];
            cont++;
            repetidos[vet[i]] = false;
        }
    }

    *n = cont;
    free(repetidos);

    return resposta;
}