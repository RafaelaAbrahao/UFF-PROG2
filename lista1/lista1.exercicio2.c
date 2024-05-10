#include <stdio.h>

int main()
{

    int n1,n2,n3;
    int maior,menor;
    float soma;

    printf("Digite tres numeros inteiros separados por virgula: ");
    scanf("%d,%d,%d", &n1, &n2, &n3);

    maior = n1;
    menor = n1;

    if (n2 > maior) maior = n2;
    if (n2 < menor) menor = n2;
    if (n3 > maior) maior = n3;
    if (n3 < maior) menor = n3;

    if (n1 % 2 == 0){
        printf("%d e par.\n", n1);
    }

    if (n2 % 2 == 0){
        printf("%d e par.\n", n2);
    }

    if (n3 % 2 == 0){
        printf("%d e par.\n", n3);
    }

    printf("O maior valor e: %d\n", maior);
    printf("O menor valor e: %d\n", menor);


    soma = n1 + n2 + n3;
    float media;
    media = soma/3;
    printf("A media dos valores e: %.2f\n", media);

    return 0;

}
