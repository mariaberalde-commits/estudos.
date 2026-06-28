#include <stdio.h>

int maior(int v[], int n) {
    if (n == 1)
        return v[0];
    int restante = maior(v + 1, n - 1);
    return (v[0] > restante) ? v[0] : restante;
}

int main() {
    int n;
    printf("Quantos elementos? ");
    scanf("%d", &n);

    int v[100];
    for (int i = 0; i < n; i++) {
        printf("  v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    printf("Maior elemento: %d\n", maior(v, n));

    return 0;
}
