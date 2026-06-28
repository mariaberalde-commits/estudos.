#include <stdio.h>

int potencia(int base, int exp) {
    if (exp == 0)
        return 1;
    return base * potencia(base, exp - 1);
}

int main() {
    int b, e;
    printf("Base    : "); scanf("%d", &b);
    printf("Expoente: "); scanf("%d", &e);

    printf("%d elevado a %d = %d\n", b, e, potencia(b, e));

    return 0;
}
