#include <stdio.h>
#include <string.h>

#define max_espectadores 100

void censo_opniao(char op[]) {
    printf("Opiniao do espectador (otimo, bom, regular, ruim, pessimo): ");
    scanf("%9s", op);
}

int censo_idade() {
    int idade;
    printf("Digite a idade do espectador: ");
    scanf("%d", &idade);
    return idade;
}

int main() {
    int quant_espectadores;
    do {
        printf("Quantidade de espectadores do dia: ");
        scanf("%d", &quant_espectadores);
    } while (quant_espectadores <= 0 || quant_espectadores > max_espectadores);

    int idades[max_espectadores];
    char op[max_espectadores][10];
    int quant_otimo = 0, quant_bom = 0, quant_regular = 0, quant_ruim = 0, quant_pessimo = 0;
    int idade_total_ruim = 0, maior_idade_pessimo = 0, maior_idade_otimo = 0, maior_idade_ruim = 0, idade_otimo_ruim = 0;

    for (int i = 0; i < quant_espectadores; i++) {
        idades[i] = censo_idade();
        
        censo_opniao(op[i]);
        
        if (strcmp(op[i], "otimo") == 0) {
            quant_otimo++;
            if (idades[i] > maior_idade_otimo)
                maior_idade_otimo = idades[i];
        } else if (strcmp(op[i], "bom") == 0) {
            quant_bom++;
        } else if (strcmp(op[i], "regular") == 0) {
            quant_regular++;
        } else if (strcmp(op[i], "ruim") == 0) {
            quant_ruim++;
            idade_total_ruim += idades[i];
            if (idades[i] > maior_idade_ruim)
                maior_idade_ruim = idades[i];
        } else if (strcmp(op[i], "pessimo") == 0) {
            quant_pessimo++;
            if (idades[i] > maior_idade_pessimo)
                maior_idade_pessimo = idades[i];
        }
    }

    float diferencaPercentual = ((float)(quant_bom - quant_regular) / quant_bom) * 100;

    float mediaIdadeRuim = 0;
    if (quant_ruim > 0)
        mediaIdadeRuim = (float)idade_total_ruim / quant_ruim;

    float porcentagemPessimo = ((float)quant_pessimo / quant_espectadores) * 100;

    
    idade_otimo_ruim = maior_idade_otimo - maior_idade_ruim;

    printf("\nQuantidade de respostas otimo: %d\n", quant_otimo);
    printf("Diferenca percentual entre respostas bom e regular: %.2f%%\n", diferencaPercentual);
    printf("Media de idade das pessoas que responderam ruim: %.2f\n", mediaIdadeRuim);
    printf("Porcentagem de respostas pessimo: %.2f%% (Maior idade que utilizou esta opcao: %d)\n", porcentagemPessimo, maior_idade_pessimo);
    printf("Diferenca de idade entre a maior idade que respondeu otimo e a maior idade que respondeu ruim: %d\n", idade_otimo_ruim);

    return 0;
}