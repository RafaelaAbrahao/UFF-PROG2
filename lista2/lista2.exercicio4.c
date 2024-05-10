#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    char letra_aleatoria, letra_usuario;

    srand(time(NULL));

    letra_aleatoria = 'a' + rand() % 26;

    do{
        printf("Adivinhe uma letra entre 'a' e 'z'\n");
        scanf(" %c", &letra_usuario);

        if (letra_usuario < letra_aleatoria) {
                printf("A letra informada eh menor. Tente de novo: \n");
            } else if (letra_usuario > letra_aleatoria) {
                printf("A letra informada eh maior. Tente de novo: \n");
            } else {
                printf("Parabens! Voce adivinhou a letra '%c'\n", letra_aleatoria);
            }
    } while (letra_usuario != letra_aleatoria);

     return 0;

}