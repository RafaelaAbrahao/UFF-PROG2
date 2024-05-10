#include <stdio.h>

int main(){

    int i, n, contador = 0, total = 0;

    printf("Digite a quantiade de numeros impares para serem somados: \n");
    scanf("%d", &n);

    if (n <= 0) {
        printf("A operaçao nao pode ser feita.");
        return 1;
    }

    for (i = 1; contador < n; i += 2) {
        total += i;
        contador++;
    }

    printf("A soma dos primeiros %d numeros impares eh: %d\n", n, total);

    return 0;
}