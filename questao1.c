#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int numeros;

    printf("Insira a quantidade de numeros serao exibidos na sequencia de fibonacci: ");
    scanf("%d", &numeros);

    for (int i = 0; i < numeros; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}