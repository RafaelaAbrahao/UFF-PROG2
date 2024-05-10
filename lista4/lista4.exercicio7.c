#include <stdio.h>
#include <ctype.h>
#include <string.h>

void CamelCase(char *s) {
    int proxima_letra = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            proxima_letra = 1;
        } else {
            if (proxima_letra) {
                s[i] = toupper(s[i]);
                proxima_letra = 0;
            }
        }
    }
}

int main() {
    char s[100];

    printf("Digite uma frase para ser convertida para o padrao Camel Case:\n");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    CamelCase(s);

    printf("Frase no padrao Camel Case eh: %s\n", s);

    return 0;
}