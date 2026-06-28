#include <stdio.h>

int potencia(int base, int exp) {
    int acum = 1;
    for (int j = 1; j <= exp; j++)
        acum *= base;
    return acum;
}

int fatorial(int n) {
    int acum = 1;
    for (int j = 2; j <= n; j++)
        acum *= j;
    return acum;
}

int ehPrimo(int n) {
    if (n < 2) return 0;
    for (int j = 2; j < n; j++)
        if (n % j == 0) return 0;
    return 1;
}

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("\nQuadrado de %d : %d\n", num, potencia(num, 2));
    printf("Fatorial de %d : %d\n",   num, fatorial(num));
    printf("%d %s primo.\n",           num, ehPrimo(num) ? "e" : "nao e");

    return 0;
}
