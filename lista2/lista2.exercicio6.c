#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int n_usuario, n_aleatorio, n_tentativas = 0;

    srand(time(NULL));
    n_aleatorio = rand() % 101;

    printf("Advinhe um numero aleatorio entre 0 e 100. ");
    do {
        printf("Digite sua tentativa: \n");
        scanf("%d", &n_usuario);
        n_tentativas++;

        if (n_usuario < n_aleatorio){
            printf("O numero aleatorio eh maior que o inserido.\n");
        } else if (n_usuario > n_aleatorio){
            printf("O numero aletorio eh menor que o inserido.\n");
        } else{
            printf("Voce acertou o numero aleatorio %d em %d tentativa(s)!", n_aleatorio, n_tentativas);
        }
    } while (n_usuario != n_aleatorio);
    return 0;
}
