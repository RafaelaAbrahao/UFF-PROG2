#include <stdio.h>

int main() {
    int pulo[] = {1, 2, 3, 4, 5};

    printf("a) *(pulo + 2): %d -> Referencia o valor do terceiro elemento do vetor,\n", *(pulo + 2));

    printf("b) *(pulo + 4): %d -> Referencia o valor do quinto elemento do vetor\n", *(pulo + 4));

    printf("c) pulo + 4: %p -> Referencia o endereco do quinto elemento do vetor\n", pulo + 4);

    printf("d) pulo + 2: %p -> Referencia o endereco do terceiro elemento do vetor\n", pulo + 2);

    printf("Respostas correstas: a) e d)");


    return 0;
}