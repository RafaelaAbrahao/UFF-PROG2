#include <stdio.h>

int main(){


    char op;
    float n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
     printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    printf("Digite + para somar os dois numeros\nDigite - para subtrair os dois numeros\nDigite * para multiplicar os dois numeros\nDigite / para dividir os dois numeros\n");
    scanf(" %c", &op);

    switch (op) {

        case '+' :
            printf("O resultado da soma eh: %.2f\n", n1 + n2);
            break;

        case '-':
            printf("Resultado: %.2f\n", n1 - n2);
            break;

       case '/' :
            if (n2 != 0) {
                printf("Resultado: %.2f\n", n1 / n2);
            } else {
                printf("A operacao eh invalida\n");
            }
            break;

        case '*' :
            printf("Resultado: %.2f\n", n1 * n2);
            break;

        default:
            printf("Operacao eh invalida\n");
            break;

    }

    return 0;

}
