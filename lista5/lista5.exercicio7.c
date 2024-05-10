#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char nome[100];
    char abrev[50] = "";
    char *preposicoes[] = {"do", "da", "dos", "das", "de", "e", "ou", "para", "com"};

    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    char *token = strtok(nome, " ");
    while (token != NULL) {
        int abreviar = 1;
        for (int i = 0; i < sizeof(preposicoes) / sizeof(preposicoes[0]); i++) {
            if (strcmp(token, preposicoes[i]) == 0) {
                abreviar = 0;
                break;
            }
        }

        if (abreviar) {
            strncat(abrev, &token[0], 1);
            strcat(abrev, ".");
        }

        token = strtok(NULL, " ");
    }

    printf("Abreviatura do nome: %s\n", abrev);

    return 0;
}