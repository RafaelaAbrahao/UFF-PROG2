#include <stdio.h>

#define max 100

int main() {
    int idades[max];
    float alturas[max];
    char sexos[max];
    int num_pessoa, i;
    int m_20_35 = 0, h_altura = 0;
    float soma_altura = 0, media_altura, variancia_altura = 0;

    printf("Quantas pessoas deseja cadastrar? (max %d): ", max);
    scanf("%d", &num_pessoa);

    for (i = 0; i < num_pessoa; i++) {
        printf("\nDados da pessoa %d:\n", i + 1);

        printf("Idade: ");
        scanf("%d", &idades[i]);

        printf("Altura (em metros): ");
        scanf("%f", &alturas[i]);

        printf("Sexo (M/F): ");
        scanf(" %c", &sexos[i]);

        if (sexos[i] == 'F' && idades[i] >= 20 && idades[i] <= 35) {
            m_20_35++;
        }

        if (sexos[i] == 'M' && alturas[i] > 1.80) {
            h_altura++;
        }

        soma_altura += alturas[i];
    }

    media_altura = soma_altura / num_pessoa;

    for (i = 0; i < num_pessoa; i++) {
        variancia_altura += (alturas[i] - media_altura) * (alturas[i] - media_altura);
    }
    variancia_altura /= num_pessoa;

    printf("\nMulheres com idade entre 20 e 35 anos: %d\n", m_20_35);
    printf("Homens com altura maior que 1,80m: %d\n", h_altura);
    printf("Variancia da altura: %.2f\n", variancia_altura);

    return 0;
}

//NAO FUNCIONA :(