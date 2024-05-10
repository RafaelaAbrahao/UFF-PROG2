#include <stdio.h>

int main() {
    int i=5, *p;
    p = &i;
    printf("Endereco de memoria de i em hexadeciamal: %x\nO valor de '*p + 2': %d\nO valor de '3 * *p': %d", p, *p+2, 3**p);

    return 0;
}