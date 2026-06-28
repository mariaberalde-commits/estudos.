#include <stdio.h>

float somar(float a, float b) {
    float resultado = a + b;
    return resultado;
}

float subtrair(float a, float b) {
    float resultado = a - b;
    return resultado;
}

float multiplicar(float a, float b) {
    float resultado = a * b;
    return resultado;
}

float dividir(float a, float b) {
    if (b == 0) {
        printf("Erro: divisao por zero nao e permitida.\n");
        return 0;
    }
    float resultado = a / b;
    return resultado;
}

int main() {
    float num1, num2;

    printf("Valor A: ");
    scanf("%f", &num1);
    printf("Valor B: ");
    scanf("%f", &num2);

    printf("\nA + B = %.2f\n", somar(num1, num2));
    printf("A - B = %.2f\n", subtrair(num1, num2));
    printf("A * B = %.2f\n", multiplicar(num1, num2));
    printf("A / B = %.2f\n", dividir(num1, num2));

    return 0;
}
