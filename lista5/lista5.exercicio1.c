#include <stdio.h>

void cont_vogais(char *str, int *vogais) {
    *vogais = 0;

    while (*str) {

        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
            (*vogais)++;
        }
        str++;
    }
}

int main() {
    char str[100];
    int vogais = 0;

    printf("Digite uma string separa por espacos: ");
    fgets(str, 100, stdin);

    cont_vogais(str, &vogais);

    printf("O numero de vogais presentes na string eh: %d\n", vogais);

    return 0;
}