#include <stdio.h>
#include <string.h>

int main() {
    char nome[51], endereco[51], tel[21], informacoes[201];

    printf("Digite seu nome: ");
    scanf("%[^\n]s", nome);

    printf("Digite seu endereco: ");
    scanf(" %[^\n]s", endereco);

    printf("Digite seu telefone: ");
    scanf("%s", tel);

    strcpy(informacoes, "Nome: ");
    strcat(informacoes, nome);
    strcat(informacoes, "\nEndereco: ");
    strcat(informacoes, endereco);
    strcat(informacoes, "\nTelefone: ");
    strcat(informacoes, tel);

    printf("%s\n", informacoes);

    return 0;
}