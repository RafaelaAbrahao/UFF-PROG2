#include<stdio.h>
#include<string.h>

main(void) {
    
    char texto[] = "foi muito facil"; // Inicializa uma string
    int i;

    // Cria um loop para percorrer a string até encontrar o primeiro espaço em branco
    for (i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == ' ') 
            break; // Quando achar o espaço em branco irá quebrar do loop
    }
    i++; // Incrementa i para passar para o próximo caractere após o espaço em branco

    // O loop imprime os caracteres restantes da string a partir de i
    for (; texto[i] != '\0'; i++) {
        printf("%c", texto[i]); // Imprime o caractere atual da string
    }
}