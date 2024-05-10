#include <stdio.h>
#include <string.h>

int main() {
    char string[21];
    int t, i;

    printf("Digite a string: ");
    scanf("%20s", string);
    t = strlen(string);

    printf("String ao contrario: ");
    for(i = t - 1; i >= 0; i--) {
        printf("%c", string[i]);
    }

    return 0;
}
