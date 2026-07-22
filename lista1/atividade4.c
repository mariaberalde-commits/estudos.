#include <stdio.h>

int main() {
    int n;
    printf("Quantidade de alunos: ");
    scanf("%d", &n);

    char nomes[100][100];
    float notas[100];

    for (int i = 0; i < n; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("Nome : ");
        scanf(" %[^\n]", nomes[i]);
        printf("Nota : ");
        scanf("%f", &notas[i]);
    }

    printf("\nTabela de alunos:\n");
    printf("%-4s %-30s %6s\n", "#", "Nome", "Nota");
    printf("------------------------------------------\n");
    for (int i = 0; i < n; i++)
        printf("%-4d %-30s %6.2f\n", i + 1, nomes[i], notas[i]);

    float soma = 0;
    int aprovados = 0;
    for (int i = 0; i < n; i++) {
        soma += notas[i];
        if (notas[i] >= 7.0) aprovados++;
    }

    printf("------------------------------------------\n");
    printf("Media da turma        : %.2f\n", soma / n);
    printf("Aprovados (nota >= 7) : %d\n", aprovados);

    return 0;
}