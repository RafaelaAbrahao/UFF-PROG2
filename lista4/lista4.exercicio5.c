#include <stdio.h>
#define inicio 4.95
void calcula(float dist, float *b1, float *b2){
    *b1 = (dist * 2.50) + inicio;
    *b2 = (dist * 3.00) + inicio;
}

int main() {
    float distancia;
    float ba1, ba2;
    printf("Digite a distancia: ");
    scanf("%f", &distancia);
    calcula(distancia, &ba1, &ba2);
    printf("O preco na bandeira 1 eh %.2f e na bandeira 2 eh %.2f", ba1, ba2);
    return 0;
}
