#include <stdio.h>

int mdc(int X, int Y) {

    if (Y == 0)
        return X;

    return mdc(Y, X % Y);
}

int main() {
    int x, y;

    printf("Digite dois numeros inteiros para calcular o MDC:\n");
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);

    printf("O MDC de %d e %d eh: %d\n", x, y, mdc(x, y));

    return 0;
}