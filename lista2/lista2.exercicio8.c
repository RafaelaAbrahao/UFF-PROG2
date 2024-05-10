#include <stdio.h>

int main() {
    printf("Listagem dos numeros de 4 algarismos com a mesma caracteristica:\n");

    for (int num = 1000; num <= 9999; num++) {
        int parte1 = num / 100;
        int parte2 = num % 100;

        if ((parte1 + parte2) * (parte1 + parte2) == num) {
             printf("%d -> %d + %d = %d -> %d * %d = %d\n", num, parte1, parte2, parte1 + parte2, parte1 + parte2, parte1 + parte2, num);
        }
    }

    return 0;
}