#include <stdio.h>

int main (){
    int n, t1 = 1, t2 = 1, tn;

    printf("Digite o numero de termos para a sequencia Fibonacci: ");
    scanf("%d", &n);

    if (n <= 0){
        printf("Numero invalido, forceneca um numero maior que 0.\n");
        return 1;
    }

    printf("Os %d primeiros termos da sequencia fibonacci sao: \n", n);

    if (n >= 1){
        printf("%d ", t1);
    }

    if (n >= 2){
        printf("%d ", t2);
    }

    for (int i = 3; i <= n; i++){
        tn = t1 + t2;
        printf("%d ", tn);
        t1 = t2;
        t2 = tn;
    }

    return 0;
}