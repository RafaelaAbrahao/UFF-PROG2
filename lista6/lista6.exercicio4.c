#include <stdio.h>
#include <stdlib.h>

int *premiados(int n, int *inscr, float *t1, int p1, float *t2, int p2, int *tam);

int main() {
    int n;
    printf("Digite a quantidade de participantes: ");
    scanf("%d", &n);

    int *inscricoes = (int *)malloc(n * sizeof(int));
    float *nota1 = (float *)malloc(n * sizeof(float));
    float *nota2 = (float *)malloc(n * sizeof(float));

    printf("Digite as inscricoes dos participantes:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &inscricoes[i]);
    }

    printf("Digite as notas do primeiro teste:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &nota1[i]);
    }

    printf("Digite as notas do segundo teste:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &nota2[i]);
    }

    int tam;
    int *premiados_inscricoes = premiados(n, inscricoes, nota1, 2, nota2, 3, &tam);

    printf("Quantidade de participantes premiados: %d\n", tam);
    printf("Inscricoes dos participantes premiados:\n");
    for (int i = 0; i < tam; i++) {
        printf("%d\n", premiados_inscricoes[i]);
    }

    free(inscricoes);
    free(nota1);
    free(nota2);
    free(premiados_inscricoes);

    return 0;
}

int *premiados(int n, int *inscr, float *t1, int p1, float *t2, int p2, int *tam) {
    float *media = (float *)malloc(n * sizeof(float));
    for (int i = 0; i < n; i++) {
        media[i] = (t1[i] * p1 + t2[i] * p2) / (p1 + p2);
    }

    float maior_media = media[0];
    for (int i = 1; i < n; i++) {
        if (media[i] > maior_media) {
            maior_media = media[i];
        }
    }

    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (media[i] == maior_media) {
            contador++;
        }
    }

    int *premiados = (int *)malloc(contador * sizeof(int));
    if (premiados == NULL) {
        *tam = 0;
        free(media);
        return NULL;
    }

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (media[i] == maior_media) {
            premiados[j] = inscr[i];
            j++;
        }
    }

    *tam = contador;
    free(media);
    return premiados;
}