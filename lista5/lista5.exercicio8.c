#include <stdio.h>
#include <string.h>

int main() {
    char p1[51], p2[51];
    int substring = 0;

    printf("Digite uma palavra: ");
    scanf("%s", p1);

    printf("Digite outra palavra: ");
    scanf("%s", p2);


    if (strcmp(p1, p2) == 0) {
        printf("Sao iguais.\n");
    } else {
        printf("Sao diferentes.\n");
    }


    for (int i = 0; p1[i] != '\0'; i++) {
        if (p1[i] == p2[0]) {
            substring = 1;
            for (int j = 1; p2[j] != '\0'; j++) {
                if (p1[i + j] != p2[j] || p1[i + j] == '\0') {
                    substring = 0;
                    break;
                    }
                }
            }
        }


    if (substring != 0) {
        printf("A palavra %s eh uma sub string da palavra %s.\n", p2, p1);
    }
    else {
        printf("A palavra %s nao eh uma sub string da palavra %s.\n", p2, p1);
    }

    return 0;
}