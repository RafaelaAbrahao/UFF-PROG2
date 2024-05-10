#include <stdio.h>
#include <conio.h>

int main() {
    char frase[81];
    char c;
    int i = 0;

    printf("Digite uma frase de no maximo 80 caracteres: ");

    while ((c = getch()) != '\r' && i < 80) {
        frase[i] = c;
        putchar(c);
        i++;
    }
    frase[i] = '\0';

    printf("\nCada palavra da frase separadamente:\n");

    char *ptr = strtok(frase, " ");
    while (ptr != NULL) {
        printf("%s\n", ptr);
        ptr = strtok(NULL, " ");
    }

    return 0;
}