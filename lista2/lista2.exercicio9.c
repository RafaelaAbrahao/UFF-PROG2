#include <stdio.h>

int pot(int base, int expoente) {
    int resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

int qnt_digitos(int n) {
    int contador = 0;
    while (n != 0) {
        contador++;
        n /= 10;
    }
    return contador;
}

int inverte(int n){
    int invertido = 0, 
        cont = qnt_digitos(n);

    while (n >= 1){
        invertido = invertido + (n % 10) * pot(10, cont - 1);
        cont--;
        n = n / 10;
    }
    return invertido;

}

int main(){

    int n;
    printf("Digite um numero para ser invertido: ");
    scanf("%d", &n);
    printf("\nO numero invertido eh: %d", inverte(n));
    return 0;
}