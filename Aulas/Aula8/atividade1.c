#include <stdio.h>

int soma(int n) {
    if (n == 0)
        return 0;
    return n + soma(n - 1);
}

int main() {
    int num;
    printf("Digite n: ");
    scanf("%d", &num);

    int resultado = soma(num);
    printf("Soma de 1 a %d = %d\n", num, resultado);

    return 0;
}
