#include <stdio.h>

int divs(int num, int *max, int *min ){
    int i;
    *max = 1;
    *min = num;

    for(i = 2; i <= num / 2; i++){
        if (num % i == 0){

            if (i > *max) {
                *max = i;
            } else {
                *max = *max;
            }
            if (i < *min) {
                *min = i;
            } else {
                *min = *min;
            }
        }
    }

    if(*min == num){
        return 0;
    }else{
        return 1;
    }
}

int main(){
    int num, max, min;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    int primo = divs(num, &max, &min);

    if (primo == 0){
        printf("%d eh um numero primo.\n", num);
    } else{
        printf("%d nao eh um numero primo. Seus divisores sao: %d e %d\n", num, min, max);
    }
    return 0;

}

