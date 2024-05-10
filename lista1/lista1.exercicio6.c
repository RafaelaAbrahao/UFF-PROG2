#include <stdio.h>
#include <math.h>

void calculo_raizes(float a, float b, float c) {
    float delta = b * b - 4 * a * c;

    if (delta > 0) {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raizes sao: %.2f e %.2f\n", x1, x2);
    } else if (delta == 0){
        float x = -b / (2 * a);
        printf("A raiz e: %.2f\n", x);
    } else {
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-delta) / (2 * a);
        printf("As raizes complexas sao: %.2f + %.2fi e %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
    }
}

int main (){

    float a, b, c;

    printf("Digite os coeficientes de (a, b e c) da equacao ax^2 + bx + c = 0:\n");
    scanf("%f %f %f", &a, &b, &c);

    calculo_raizes(a, b, c);

    return 0;

}