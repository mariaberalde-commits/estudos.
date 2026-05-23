#include <stdio.h>

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

int dividir(float a, float b, float *resultado) {
    if (b == 0.0f) return 0; // falha: divisor zero
    *resultado = a / b;
    return 1; // sucesso
}

int main(void) {
    float x, y;
    printf("Digite dois numeros: ");
    if (scanf("%f %f", &x, &y) != 2) {
        printf("Entrada invalida\n");
        return 1;
    }

    printf("Soma: %.6g\n", somar(x, y));
    printf("Subtracao: %.6g\n", subtrair(x, y));
    printf("Multiplicacao: %.6g\n", multiplicar(x, y));

    float div;
    if (dividir(x, y, &div))
        printf("Divisao: %.6g\n", div);
    else
        printf("Divisao: erro - divisor zero\n");

    return 0;
}