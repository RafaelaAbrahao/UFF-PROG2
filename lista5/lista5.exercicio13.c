#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Ola";
    char str2[] = "la";
    char str3[] = "Ola";

    if (strcmp(str1, str3) == 0) {
        printf("str1 e str3 sao strings iguais.\n");
    }

    char *ptr = strchr(str1, 'a');
    if (ptr != NULL) {
        printf("O caractere 'a' foi encontrado em str1 na posicao: %ld\n", ptr - str1);
    }
    char *ptr2 = strstr(str1, str2);
    if (ptr2 != NULL) {
        printf("A substring 'la' foi encontrada em str1.\n");
    }

    return 0;
}