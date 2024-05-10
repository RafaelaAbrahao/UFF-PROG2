#include <stdio.h>

#define tam 20

int main() {
    int vet1[tam];
    int vet2[tam];
    char op;
    int resultados[tam];

    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < tam; i++) {
        scanf("%d", &vet1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < tam; i++) {
        scanf("%d", &vet2[i]);
    }

    printf("Digite a operacao desejada (+, -, *, /):\n");
    scanf(" %c", &op);

    for (int i = 0; i < tam; i++) {
        switch (op) {
            case '+':
                resultados[i] = vet1[i] + vet2[i];
                break;
            case '-':
                resultados[i] = vet1[i] - vet2[i];
                break;
            case '*':
                resultados[i] = vet1[i] * vet2[i];
                break;
            case '/':
                if (vet2[i] != 0) {
                    resultados[i] = vet1[i] / vet2[i];
                } else {
                    printf("Divisao por zero encontrada.\n");
                    return 1;
                }
                break;
            default:
                printf("Operacao invalida.\n");
                return 1;
        }
    }

    printf("Resultados das operacoes:\n");
    for (int i = 0; i < tam; i++) {
        printf("%d\n", resultados[i]);
    }

    return 0;
}