#include <stdio.h>
#include <string.h>

int validaString(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))) {
            return 0;
        }
    }
    return 1;
}



void exibirSenhaAsteriscos(char *senha) {
    for (int i = 0; senha[i] != '\0'; i++) {
        printf("*");
    }
    printf("\n");
}



int main() {
    char usuarioCadastrado[9], senhaCadastrada[9], aster[9];
    int tamanho;


    printf("Cadastro de usuario:\n");

    do {
        printf("Digite o nome de usuario (maximo de %d caracteres, apenas letras e numeros): ", 8);
        scanf("%s", usuarioCadastrado);
    } while (!validaString(usuarioCadastrado) || strlen(usuarioCadastrado) > 8);



    do {
        printf("Digite a senha (maximo de %d caracteres, apenas letras e numeros): ", 8);
        scanf("%s", senhaCadastrada);
    } while (!validaString(senhaCadastrada) || strlen(senhaCadastrada) > 8);

    printf("\n");


    printf("Verificacao de login:\n");
    char usuarioLogin[8+1];
    char senhaLogin[8+1];

    printf("Digite o nome de usuario: ");
    scanf("%s", usuarioLogin);

    printf("Digite a senha: ");
    scanf("%s", senhaLogin);

    printf("\n");



    if (strcmp(usuarioCadastrado, usuarioLogin) == 0 && strcmp(senhaCadastrada, senhaLogin) == 0) {
        tamanho = strlen(usuarioLogin);
        for (int i = 0; i < tamanho; i++) {
        aster[i] = '*';
        }
    printf("Acesso Permitido\nUsuario: %s\nSenha: %s", usuarioLogin, aster);
    }

    else {
        printf("Acesso negado!\n");
    }

    return 0;
}