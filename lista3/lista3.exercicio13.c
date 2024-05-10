#include <stdio.h>

int main() {

    int a, b, c, d, x, *ptr = &a;
    float e, f, g, h;
    char v[10];

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);
    printf("Digite o valor de d: ");
    scanf("%d", &d);
    printf("Digite o valor de e: ");
    scanf("%f", &e);
    printf("Digite o valor de f: ");
    scanf("%f", &f);
    printf("Digite o valor de g: ");
    scanf("%f", &g);
    printf("Digite o valor de h: ");
    scanf("%f", &h);

    printf("Digite 10 caracteres para vetor v: ");
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &v[i]);
    }

    printf("Digite o valor de x: ");
    scanf("%d", &x);

 
    (*ptr)++;
    printf("Conteudo do endereco apontado: %d\n", *ptr);

    return 0;
}