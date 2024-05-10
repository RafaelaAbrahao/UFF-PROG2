#include <stdio.h>

int main(){

    int X, Z, soma=0, cont=0;

    printf("Digite um valor para X: \n");
    scanf("%d", &X);
    printf("Digite um valor maior que X para Z: \n");
    scanf("%d", &Z);

    while (Z <= X) {
        printf("Por favor, digite um valor maior que X para Z: \n");
        scanf("%d", &Z);
    }

    while (soma <= Z){
        soma += X;
        X++;
        cont++;

    }
    
    printf("X\tZ\tResposta\n");
    printf("%d\t%d\t%d (", X - cont, Z, cont);
    for (int i = X - cont; i < X - 1; i++) {
        printf("%d+", i);
    }
    printf("%d=%d)\n", X - 1, soma);


    return 0;
}