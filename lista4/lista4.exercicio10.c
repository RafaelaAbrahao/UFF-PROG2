#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int vetor[n], vetor2[n];
    int contotimo = 0, contbom = 0, contregular = 0, contruim = 0, contpessimo = 0;
    int somaruim = 0, contidade = 0, velhopessimo = 0, velhootimo = 0, velhoruim = 0;
    float mediaruim, dif2;
    int difidade;
    float dif;

    for (int i = 0; i < n; i++) {
        printf("Insira sua idade e 1 para otimo, 2 para bom, 3 para regular, 4 para ruim ou 5 para pessimo: ");
        scanf("%d %d", &vetor[i], &vetor2[i]);

        if (vetor2[i] == 1) {
            contotimo++;
            if (vetor[i] > velhootimo) {
                velhootimo = vetor[i];
            }
        } else if (vetor2[i] == 2) {
            contbom++;
        } else if (vetor2[i] == 3) {
            contregular++;
        } else if (vetor2[i] == 4) {
            contruim++;
            somaruim += vetor[i];
            contidade++;
            if (vetor[i] > velhoruim) {
                velhoruim = vetor[i];
            }
        } else {
            contpessimo++;
            if (vetor[i] > velhopessimo) {
                velhopessimo = vetor[i];
            }
        }
    }

    mediaruim = (float)somaruim / contidade;
    dif = (float)contbom / n * 100;
    dif2 = (float)contregular / n * 100;

    if (velhootimo > velhoruim) {
        difidade = velhootimo - velhoruim;
    } else {
        difidade = velhoruim - velhootimo;
    }

    printf("%d pessoa(s) acharam o filme otimo\n", contotimo);

    if (contbom > contregular) {
        printf("De todas as notas, %.2f por cento das pessoas votaram em bom, tendo %.2f por cento a mais do que pessoas que votaram em regular\n", dif, (dif - dif2));
    }
    else if (contbom < contregular) {
    printf("De todas as notas, %.2f das pessoas votaram em regular, tendo %.2f por cento a mais que pessoas que votarem em bom\n", dif2, (dif2 - dif));
  }
  else{
    printf("A quantidade de pessoas que acharam bom e a de pessoas que acharam regular eh a mesma\n.");
  }
  printf("%.2f eh a media de idade das pessoas que acharam ruim\n", mediaruim);
  printf("%.2f por cento das pessoas acharam o filme pessimo e %d foi a pessoa mais velha que votou pessimo\n", ((float)contpessimo / n * 100), velhopessimo);
  printf("A diferenca de idade entre a pessoa mais velha que votou ruim e a pessoa mais velha que votou otimo eh %d\n", difidade);
}