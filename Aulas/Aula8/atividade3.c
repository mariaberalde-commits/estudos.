#include <stdio.h>

void regressiva(int n) {
    if (n == 0) {
        printf("Vai!\n");
        return;
    }
    printf("%d ", n);
    regressiva(n - 1);
}

void progressiva(int n) {
    if (n == 0) return;
    progressiva(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    printf("Digite n: ");
    scanf("%d", &n);

    printf("\nRegressiva : ");
    regressiva(n);

    printf("Progressiva: ");
    progressiva(n);
    printf("\n");

    return 0;
}
