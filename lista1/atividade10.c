#include <stdio.h>
#include <string.h>

#define MAX_NOME 100

typedef struct {
    char nome[MAX_NOME];
    float n1, n2, n3;
    float media;
} Aluno;

void calcularMedia(Aluno *a) {
    a->media = (a->n1 + a->n2 + a->n3) / 3.0f;
}

void ordenarPorNota(Aluno turma[], int n) {
    // seleção: do maior para o menor (decrescente) pela média
    for (int i = 0; i < n - 1; ++i) {
        int idxMax = i;
        for (int j = i + 1; j < n; ++j) {
            if (turma[j].media > turma[idxMax].media) idxMax = j;
        }
        if (idxMax != i) {
            Aluno tmp = turma[i];
            turma[i] = turma[idxMax];
            turma[idxMax] = tmp;
        }
    }
}

int main(void) {
    int n;
    if (printf("Quantidade de alunos: ") < 0) return 0;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    getchar(); // consumir newline

    Aluno turma[n];
    for (int i = 0; i < n; ++i) {
        printf("Aluno %d nome: ", i+1);
        if (!fgets(turma[i].nome, MAX_NOME, stdin)) return 0;
        // remover newline
        turma[i].nome[strcspn(turma[i].nome, "\n")] = '\0';
        printf("Notas (3) separadas por espaço: ");
        if (scanf("%f %f %f", &turma[i].n1, &turma[i].n2, &turma[i].n3) != 3) return 0;
        getchar();
        calcularMedia(&turma[i]);
    }

    ordenarPorNota(turma, n);

    printf("\nBoletim - ordem de ranking:\n");
    for (int i = 0; i < n; ++i) {
        printf("%2d. %s - Notas: %.2f, %.2f, %.2f - Media: %.2f\n",
               i+1, turma[i].nome, turma[i].n1, turma[i].n2, turma[i].n3, turma[i].media);
    }

    return 0;
}
