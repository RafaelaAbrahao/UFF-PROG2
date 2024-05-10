#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* cifra_cesar(const char* msg) {
    int len = strlen(msg);

    char* msg_cod = (char*)malloc((len + 1) * sizeof(char));
    if (msg_cod == NULL) {
        fprintf(stderr, "Erro de alocacao de memoria\n");
        exit(1);
    }

    for (int i = 0; i < len; i++) {
        char c = msg[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (c >= 'x' && c <= 'z') {
                msg_cod[i] = c - 23;
            } else if (c >= 'X' && c <= 'Z') {
                msg_cod[i] = c - 23;
            } else {
                msg_cod[i] = c + 3;
            }
        } else {
            msg_cod[i] = c;
        }
    }
    msg_cod[len] = '\0';

    return msg_cod;
}

int main() {
    char msg[100];

    printf("Digite a mensagem para ser codificada: ");
    fgets(msg, sizeof(msg), stdin);

    msg[strcspn(msg, "\n")] = '\0';

    char* msg_cod = cifra_cesar(msg);

    printf("Mensagem codificada: %s\n", msg_cod);

    free(msg_cod);

    return 0;
}