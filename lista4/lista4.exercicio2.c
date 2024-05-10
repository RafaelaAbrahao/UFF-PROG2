#include <stdio.h>

int main() {
    int R[5], S[10], X[5];
    int i, j, k = 0;
    int found;

    printf("Digite 5 elementos para o vetor R:\n");
    for (i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &R[i]);
    }

    printf("Digite 10 elementos para o vetor S:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &S[i]);
    }

    for (i = 0; i < 5; i++) {
        found = 0;
        for (j = 0; j < 10; j++) {
            if (R[i] == S[j]) {
                found = 1;
                break;
            }
        }
        if (found) {
            int duplicado = 0;
            for (j = 0; j < k; j++) {
                if (R[i] == X[j]) {
                    duplicado = 1;
                    break;
                }
            }
            if (!duplicado) {
                X[k++] = R[i];
            }
        }
    }

    printf("Os elementos comuns dos vetores R e S sao: \n");
    for (i = 0; i < k; i++) {
        printf("%d ", X[i]);
    }
    printf("\n");

    return 0;
}