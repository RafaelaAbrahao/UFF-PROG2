#include <stdio.h>

float CalculoMedia(float p1, float p2, float p3){
        return (p1 + p2 + p3) / 3;
    } 

int notasValidas(float p1, float p2, float p3){
    if (p1 < 0 || p1 > 10 || p2 < 0 || p2 > 10 || p3 < 0 || p3 > 10){
        return 0;
    }
    return 1;
}

int main(){
    float p1, p2, p3;
    printf("Digite a nota da P1: \n");
    scanf("%f", &p1);
    printf("Digite a nota da P2: \n");
    scanf("%f", &p2);
    printf("Digite a nota da P3: \n");
    scanf("%f", &p3);

    if (!notasValidas(p1, p2, p3)) {
        printf("A nota inserida e invalida, digite uma nota entre 0 e 10.\n");
        return 1;
    }

    float media = CalculoMedia(p1, p2, p3);
    printf("A media do aluno e: %.2f\n", media);

    if (media >= 6) {
        printf("O aluno esta aprovado!\n");
    } else {
        printf("O aluno esta reprovado ");
    

        if (media >= 4) {
            printf("e tem direito a VS.\n");
        } else {
            printf("e nao tem direito a VS.\n");
        }
    }
    return 0;
}