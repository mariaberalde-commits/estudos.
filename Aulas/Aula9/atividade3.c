#include <stdio.h>

int somaDigitos(int n) {
    if (n == 0) return 0;
    return (n % 10) + somaDigitos(n / 10);
}

int main() {
    int num;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    printf("Soma dos digitos de %d = %d\n", num, somaDigitos(num));

    return 0;
}
