#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *compactar(char *s);

int main() {
    char entrada[100];
    printf("Digite uma frase qualquer com espacos no comeco e/ou final dela: ");
    fgets(entrada, sizeof(entrada), stdin);

    char *resultado = compactar(entrada);
    if (resultado != NULL) {
        printf("Frase sem espacos desnecessarios: %s\n", resultado);
        free(resultado);
    } else {
        printf("Nao foi possivel alocar a memoria.\n");
    }

    return 0;
}

char *compactar(char *s) {
    int tamanho = strlen(s);
    int comeco = 0;
    int fim = tamanho - 1;

    while (s[comeco] == ' ') {
        comeco++;
    }

    while (s[fim] == ' ' && fim >= comeco) {
        fim--;
    }

    int novo_tamanho = fim - comeco + 1;

    char *nova_cadeia = (char *)malloc((novo_tamanho + 1) * sizeof(char));
    if (nova_cadeia == NULL) {
        return NULL;
    }

    for (int i = 0; i < novo_tamanho; i++) {
        nova_cadeia[i] = s[comeco + i];
    }
    nova_cadeia[novo_tamanho] = '\0';

    return nova_cadeia;
}