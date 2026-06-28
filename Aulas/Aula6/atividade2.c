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

    float soma = 0;
    printf("\n%-22s %s\n", "Aluno", "Nota");
    printf("--------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-22s %.2f\n", lista[i].nome, lista[i].nota);
        soma += lista[i].nota;
    }
    printf("--------------------------------\n");

    float media = soma / n;
    printf("Media da turma        : %.2f\n", media);

    int acima = 0;
    for (int i = 0; i < n; i++)
        if (lista[i].nota > media) acima++;

    printf("Alunos acima da media : %d\n", acima);

    return 0;
}
