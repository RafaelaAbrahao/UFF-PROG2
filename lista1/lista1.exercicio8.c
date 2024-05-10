#include <stdio.h>

int total_notas(int valor) {
    
    int nota_100, nota_50, nota_20, nota_10, nota_5, nota_2, nota_1;

    nota_100 = valor / 100;
    valor %= 100;

    nota_50 = valor / 50;
    valor %= 50;

    nota_20 = valor / 20;
    valor %= 20;

    nota_10 = valor / 10;
    valor %= 10;

    nota_5 = valor / 5;
    valor %= 5;

    nota_2 = valor / 2;
    valor %= 2;

    nota_1 = valor;

    printf("Notas de R$100: %d\n", nota_100);
    printf("Notas de R$50: %d\n", nota_50);
    printf("Notas de R$20: %d\n", nota_20);
    printf("Notas de R$10: %d\n", nota_10);
    printf("Notas de R$5: %d\n", nota_5);
    printf("Notas de R$2: %d\n", nota_2);
    printf("Notas de R$1: %d\n", nota_1);

    return nota_100 + nota_50 + nota_20 + nota_10 + nota_5 + nota_2 + nota_1;
}

int main() {
    int valor;

    printf("Digite o valor em reais: ");
    scanf("%d", &valor);

    int total = total_notas(valor);
    printf("Total de notas: %d\n", total);

    return 0;
}