#include <stdio.h>
#include <stdlib.h>

float calculo_m(int n, float *vet);
int cont_maior_que_m(int n, float *vet, float media);
float *alocar_v(int tam);
float *acima_m(int n, float *vet, int *tam);

int main() {
    int tam;
    float vet[100];
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    printf("Digite os numeros do vetor: \n");
    for (int i = 0; i < tam; i++) {
        scanf("%f", &vet[i]);
    }

    float *resposta = acima_m(tam, vet, &tam);

    if (resposta != NULL) {
        printf("Vetor com oselementos acima da media:\n");
        for (int i = 0; i < tam; i++) {
            printf("%.2f ", resposta[i]);
        }
        printf("\n");
        free(resposta);
    }

    return 0;
}

float calculo_m(int n, float *vet) {
    float soma = 0.0;
    for (int i = 0; i < n; i++) {
        soma += vet[i];
    }
    return soma / n;
}

int cont_maior_que_m(int n, float *vet, float media) {
    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (vet[i] > media) {
            contador++;
        }
    }
    return contador;
}

float *alocar_v(int tam) {
    float *vetor = (float *)malloc(tam * sizeof(float));
    return vetor;
}

float *acima_m(int n, float *vet, int *tam) {
    float media = calculo_m(n, vet);
    int num_maiores = cont_maior_que_m(n, vet, media);

    float *vet_resposta = alocar_v(num_maiores);
    if (vet_resposta == NULL) {
        return NULL;
    }

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (vet[i] > media) {
            vet_resposta[j] = vet[i];
            j++;
        }
    }

    *tam = num_maiores;
    return vet_resposta;
}