#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Ola Mundo";
    int i, contador;

    for (i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            contador ++;
            printf("O caractere '%c' é maiúsculo.\n", str[i]);
        }
    }

    printf("Total de letras maiusculas: %d", contador);
    return 0;
}