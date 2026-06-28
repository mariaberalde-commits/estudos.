#include <stdio.h>

float calcularMedia(float a, float b, float c) {
    return (a + b + c) / 3.0;
}

int ehPrimo(int n) {
    if (n < 2) return 0;
    for (int j = 2; j < n; j++)
        if (n % j == 0) return 0;
    return 1;
}

int potencia(int base, int exp) {
    int acum = 1;
    for (int j = 0; j < exp; j++)
        acum *= base;
    return acum;
}

void imprimirMenu() {
    printf("\n=== CALCULADORA ===\n");
    printf("1. Calcular media de 3 notas\n");
    printf("2. Verificar se numero e primo\n");
    printf("3. Calcular potencia\n");
    printf("4. Sair\n");
    printf("Opcao: ");
}

int main() {
    int opcao;

    do {
        imprimirMenu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                float a, b, c;
                printf("Nota 1: "); scanf("%f", &a);
                printf("Nota 2: "); scanf("%f", &b);
                printf("Nota 3: "); scanf("%f", &c);
                printf("Media  : %.2f\n", calcularMedia(a, b, c));
                break;
            }
            case 2: {
                int num;
                printf("Numero: "); scanf("%d", &num);
                printf("%d %s primo.\n", num, ehPrimo(num) ? "e" : "nao e");
                break;
            }
            case 3: {
                int base, exp;
                printf("Base    : "); scanf("%d", &base);
                printf("Expoente: "); scanf("%d", &exp);
                printf("%d ^ %d = %d\n", base, exp, potencia(base, exp));
                break;
            }
            case 4:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
