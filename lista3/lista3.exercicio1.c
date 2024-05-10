#include <stdio.h>

void calc_circulo(float r, float *area, float *circunferencia) {

    float pi = 3.14;
    *area = pi * r * r;
    *circunferencia = 2 * pi * r;
}

int main (){

    float r, circunferencia, area;
    printf("Digite o valor para o raio: ");
    scanf("%f", &r);

    calc_circulo(r, &circunferencia, &area);
    printf("\nO valor da circunferecia eh: %.2f", circunferencia);

    return 0;
}