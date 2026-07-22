#include <stdio.h>

int somaDigitos(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + somaDigitos(n / 10);
}

int main() {
    printf("somaDigitos(472) = %d\n", somaDigitos(472));
    return 0;
}