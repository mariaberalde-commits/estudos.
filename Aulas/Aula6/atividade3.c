#include <stdio.h>

#define MAX_ALUNOS 100

struct Aluno {
    char nome[100];
    float nota;
};

int main() {
    struct Aluno lista[MAX_ALUNOS];
    int n;

    printf("Total de alunos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nCadastro do aluno %d:\n", i + 1);
        printf("  Nome : ");
        scanf(" %99[^\n]", lista[i].nome);
        printf("  Nota : ");
        scanf("%f", &lista[i].nota);
    }

    printf("\n%-22s %s\n", "Aluno", "Nota");
    printf("--------------------------------\n");
    for (int i = 0; i < n; i++)
        printf("%-22s %.2f\n", lista[i].nome, lista[i].nota);
    printf("--------------------------------\n");

    int idxMaior = 0, idxMenor = 0;
    for (int i = 1; i < n; i++) {
        if (lista[i].nota > lista[idxMaior].nota) idxMaior = i;
        if (lista[i].nota < lista[idxMenor].nota) idxMenor = i;
    }

    printf("\nMelhor desempenho : %s (%.2f)\n", lista[idxMaior].nome, lista[idxMaior].nota);
    printf("Pior desempenho   : %s (%.2f)\n", lista[idxMenor].nome, lista[idxMenor].nota);

    return 0;
}
