#include <stdio.h>

int somaVetor(int v[], int n) {
    if (n == 1) return v[0];
    int meio = n / 2;
    return somaVetor(v, meio) + somaVetor(v + meio, n - meio);
}

int main() {
    int v[5];
    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("  v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    int resRec  = somaVetor(v, 5);

    int resIter = 0;
    for (int i = 0; i < 5; i++)
        resIter += v[i];

    printf("\nSoma (dividir e conquistar) : %d\n", resRec);
    printf("Soma (laco for)             : %d\n",  resIter);
    printf("Resultados %s!\n", resRec == resIter ? "identicos" : "DIVERGEM (verifique o codigo)");

    return 0;
}
