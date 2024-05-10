#include <stdio.h>

void preenche(int *vet, int n) {
    for (int i = 0; i < n; i++) {
        printf("Preencha a posicao %d do vetor: ", i);
        scanf("%d", &vet[i]);
    }
}

void pos(int *vet, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d esta na posizao %d\n", vet[i], i);
    }
}

int pesquisa(int *vet, int n, int valor) {
    for (int i = 0; i < n; i++) {
        if (vet[i] == valor) {
            return i;
        }
    }
    return -1;
}
void troca(int * vet, int n){
    for(int i = 0; i < n; i++){
        if(i != 0){
            vet[i] = vet[i] + vet[i-1];
        }
    }
}
int main() {
    int vet[7];
    int val;
    int pes;
    printf("Digite um valor para pesquisa: ");
    scanf("%d", &val);
    preenche(vet, 7);
    pos(vet, 7);
    pes = pesquisa(vet, 7, val);
    if (pes != -1) {
        printf("O valor %d foi encontrado na posicao %d\n", val, pes);
    } else {
        printf("O valor %d nao foi encontrado no vetor\n", val);
    }
    troca(vet, 7);
    for(int i = 0; i < 7; i++){
        printf("%d\n", vet[i]);
    }
    return 0;
}