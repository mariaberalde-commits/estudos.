#include <stdio.h>

int buscaBinaria(int v[], int n, int alvo) {
    int ini = 0, fim = n - 1;
    while (ini <= fim) {
        int meio = (ini + fim) / 2;
        if (v[meio] == alvo)
            return meio;
        else if (v[meio] < alvo)
            ini = meio + 1;
        else
            fim = meio - 1;
    }
    return -1;
}

int main() {
    int v[] = {1, 3, 5, 7, 9};
    printf("buscaBinaria(5) = %d\n", buscaBinaria(v, 5, 5));
    printf("buscaBinaria(8) = %d\n", buscaBinaria(v, 5, 8));
    return 0;
}