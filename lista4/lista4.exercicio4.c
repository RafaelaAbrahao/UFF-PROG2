#include <stdio.h>

int pa(int *v, int n) {
    int j = n;
    int cont = 0;
    int dif = v[1] - v[0];
    for(int i = 0; i < n; i++){
        if(v[i] != v[0] + dif * i){
            return 0;
        }
    }
    return dif;
}

int main() {
    int vet[6] = {2, 5, 8, 11, 14, 17};
    int epa = pa(vet, 6);
    printf("Resultado: %d\n", epa);
    return 0;
}