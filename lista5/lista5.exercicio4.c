#include <stdio.h>

int main() {
    char palavra[50];
    char letra1, letran;
    int cont = 0;

    printf("Digite uma palavra de ate 50 caracteres: ");
    scanf("%s", palavra);

    letra1 = palavra[0];

    int i = 0;
    while (palavra[i] != '\0') {
        letran = palavra[i];
        cont++;
        i++;
    }

    printf("Primeira letra da palavra: %c\n", letra1);
    printf("Ultima letra da palavra: %c\n", letran);
    printf("Quantidade de letras na palavra: %d\n", cont);

    return 0;
}