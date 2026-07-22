#include <stdio.h>

struct Aluno {
    char nome[100];
    float n1, n2, n3;
    float media;
};

float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3.0;
}

/* Ordenacao por selecao — maior media primeiro */
void ordenarPorMedia(struct Aluno turma[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int idxMaior = i;
        for (int j = i + 1; j < n; j++) {
            if (turma[j].media > turma[idxMaior].media)
                idxMaior = j;
        }
        if (idxMaior != i) {
            struct Aluno tmp  = turma[i];
            turma[i]          = turma[idxMaior];
            turma[idxMaior]   = tmp;
        }
    }
}

int main() {
    int n;
    printf("Quantidade de alunos: ");
    scanf("%d", &n);

    struct Aluno turma[100];

    for (int i = 0; i < n; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("Nome  : ");
        scanf(" %[^\n]", turma[i].nome);
        printf("Nota 1: ");
        scanf("%f", &turma[i].n1);
        printf("Nota 2: ");
        scanf("%f", &turma[i].n2);
        printf("Nota 3: ");
        scanf("%f", &turma[i].n3);
        turma[i].media = calcularMedia(turma[i].n1, turma[i].n2, turma[i].n3);
    }

    ordenarPorMedia(turma, n);

    printf("\nBoletim - ordem de ranking:\n");
    printf("%-4s %-30s %6s %6s %6s %8s\n", "#", "Nome", "N1", "N2", "N3", "Media");
    printf("------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-4d %-30s %6.2f %6.2f %6.2f %8.2f\n",
               i + 1, turma[i].nome,
               turma[i].n1, turma[i].n2, turma[i].n3, turma[i].media);
    }

    return 0;
}