#include <stdio.h>
#include <ctype.h>

int verificarEmail(char s[]) {
    int i = 0;
    int letras_ou_numeros = 0;
    int ponto_sequencial = 0;

    if (!isalpha(s[0]))
        return 0;

    while (s[i] != '\0') {
        if (!isalnum(s[i]) && s[i] != '.' && s[i] != '-' && s[i] != '_')
            return 0;

        if (s[i] == '.' && s[i + 1] == '.')
            ponto_sequencial = 1;

        if (isalnum(s[i]))
            letras_ou_numeros++;

        i++;
    }

    if (s[i - 1] == '.')
        return 0;

    if (letras_ou_numeros < 2)
        return 0;

    if (ponto_sequencial)
        return 0;

    return 1;
}

int main() {
    char email[65];

    printf("Digite a parte local do e-mail: ");
    scanf("%s", email);

    if (verificarEmail(email))
        printf("O e-mail eh valido.\n");
    else
        printf("O e-mail nao eh valido.\n");

    return 0;
}