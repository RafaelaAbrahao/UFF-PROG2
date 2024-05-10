#include <stdio.h>
#include <math.h>

int main() {
    float n;

    printf("Insira um numero com pontos para ser arredondado: ");
    scanf("%f", &n);

    float arredondar_cima = ceil(n);
    printf("O arredondamento para cima de %.2f eh %.2f\n", n, arredondar_cima);

    float arredondar_baixo = floor(n);
    printf("O arredondamento para baixo de %.2f eh %.2f\n", n, arredondar_baixo);

    return 0;
}