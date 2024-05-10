#include <stdio.h>
#include <string.h>

int main() {
    char string[21], caractere;
    int i, j;

    printf("Digite a string: ");
    scanf("%20s", string);
    printf("Qual caractere deseja remover: ");
    scanf(" %c", &caractere);

    for (i = j = 0; string[i] != '\0'; i++) {
        if (string[i] != caractere) {
            string[j++] = string[i];
        }
    }
    string[j] = '\0';

    printf("String resultante: %s\n", string);

    return 0;
}
