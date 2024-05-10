#include <stdio.h>

int main (){

    float a_float, b_float, c_float;

    a_float = 3;
    b_float = a_float / 2;
    c_float = b_float + 3.1;

    printf("O valor de c eh %.1f, se todos os valores forem do tipo float.\n", c_float);

    int a_int, b_int, c_int;

    a_int = 3;
    b_int = a_int / 2;
    c_int = b_int + 3.1;

    printf("O valor de c eh %.1d, se todos os valores forem do tipo int.\n", c_int);

    int a_misto;
    float b_misto, c_misto;

    a_misto = 3;
    b_misto = a_misto / 2;
    c_misto = b_misto + 3.1;

    printf("O valor de c eh %.1f, se o tipo de 'a' for int e o tipo de 'b' e 'c' forem float.\n", c_misto);

    return 0;

}