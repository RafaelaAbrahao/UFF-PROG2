#include <stdio.h>

int cont_char(char cadeia[], char caractere) {
    int cont = 0;

    for (int i = 0; i <= 20; i++) {
        if (cadeia[i] == caractere) {
            cont++;
        }
    }

    return cont;
}

int main() {
    char cadeia[22];
    char caractere;

    printf("Digite uma cadeia de ate 20 caracteres: ");
    fgets(cadeia, sizeof(cadeia), stdin);

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    int ocorrencias = cont_char(cadeia, caractere);

    printf("O caractere '%c' aparece %d vezes na cadeia.\n", caractere, ocorrencias);

    return 0;
}