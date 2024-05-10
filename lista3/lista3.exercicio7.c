#include <stdio.h>

int main() {
    int *pti;
    int veti[] = {10, 7, 2, 6, 3};
    pti = veti;

    printf("a) *pti eh igual a 10: %s\n", *pti == 10 ? "Verdadeiro" : "Falso");

    printf("b) *(pti+2) eh igual a 2: %s\n", *(pti + 2) == 2 ? "Verdadeiro" : "Falso");

    printf("c) pti[4] eh igual a 3: %s\n", pti[4] == 3 ? "Verdadeiro" : "Falso");

    printf("d) pti[1] eh igual a 10: %s\n", pti[1] == 10 ? "Verdadeiro" : "Falso");

    printf("e) *(veti+3) eh igual a 6: %s\n", *(veti + 3) == 6 ? "Verdadeiro" : "Falso");

    return 0;
}