#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[50];
    printf("Digite a frase: ");
    scanf(" %49[^\n]", frase);
    int tam = strlen(frase);
    for(int i = 0; i < tam; i++){
        frase[i] = tolower(frase[i]);
    }
    int ocorrencias[256] = {0};

    for (int i = 0; i < tam; i++) {
        char letra = frase[i];
        ocorrencias[letra]++;
    }

    for (int i = 0; i < 256; i++) {
        if (ocorrencias[i] > 0) {
            printf("'%c' apareceu %d vezes\n", i, ocorrencias[i]);
        }
    }

    return 0;
}