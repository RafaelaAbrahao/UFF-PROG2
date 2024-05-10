#include <stdio.h>

int main(){

    float h_trab, h_valor, sal_semanal;

    printf("Digite oa quantidade de horas trabalhadas na semana: ");
    scanf("%f", &h_trab);
    printf("Digite o valor trabalho/hora: ");
    scanf("%f", &h_valor);

    if (h_trab <= 40){
        sal_semanal = h_trab * h_valor;
    } else if (h_trab <= 60){
        sal_semanal = 40 * h_valor + (h_trab - 40) * h_valor * 1.5;
    } else {
        sal_semanal = 40 * h_valor + 20 * h_valor * 1.5 + (h_trab - 60) * h_valor * 2;
    }

    printf("O salario semanal eh: %.2f", sal_semanal);

    return 0;
}