#include <stdio.h>
#include <stdlib.h>

int *alunos_aprovados(int n, int *notas, float *mat, int *tam);

int main() {
    int n;
    printf("Digite o numero total de alunos: ");
    scanf("%d", &n);

    int *matriculas = (int *)malloc(n * sizeof(int));
    float *notas = (float *)malloc(n * sizeof(float));

    printf("Digite as matriculas dos alunos:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &matriculas[i]);
    }

    printf("Digite as notas finais dos alunos:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &notas[i]);
    }

    int tam;
    int *aprovados = alunos_aprovados(n, matriculas, notas, &tam);

    printf("Numero de alunos aprovados: %d\n", tam);
    printf("Matricula(s) do(s) aluno(s) aprovado(s):\n");
    for (int i = 0; i < tam; i++) {
        printf("%d\n", aprovados[i]);
    }

    free(matriculas);
    free(notas);
    free(aprovados);

    return 0;
}

int *alunos_aprovados(int n, int *mat, float *notas, int *tam) {
    int cont = 0;
    for (int i = 0; i < n; i++) {
        if (notas[i] >= 5.0) {
            cont++;
        }
    }

    int *aprovados = (int *)malloc(cont * sizeof(int));
    if (aprovados == NULL) {
        *tam = 0;
        return NULL;
    }

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (notas[i] >= 5.0) {
            aprovados[j] = mat[i];
            j++;
        }
    }

    *tam = cont;
    return aprovados;
}