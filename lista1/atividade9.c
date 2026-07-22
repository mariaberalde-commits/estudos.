#include <stdio.h>

struct Aluno {
    char nome[100];
    float n1, n2, n3;
    float media;
    char conceito;
};

float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3.0;
}

char definirConceito(float media) {
    if (media >= 8.0) return 'A';
    if (media >= 6.5) return 'B';
    if (media >= 5.0) return 'C';
    return 'D';
}

void imprimirAluno(struct Aluno a) {
    printf("%-30s %.2f %.2f %.2f  Media: %.2f  Conceito: %c\n",
           a.nome, a.n1, a.n2, a.n3, a.media, a.conceito);
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

        turma[i].media    = calcularMedia(turma[i].n1, turma[i].n2, turma[i].n3);
        turma[i].conceito = definirConceito(turma[i].media);
    }

    printf("\n%-30s %6s %6s %6s  %8s  %s\n",
           "Nome", "N1", "N2", "N3", "Media", "Conceito");
    printf("----------------------------------------------------------------\n");
    for (int i = 0; i < n; i++)
        imprimirAluno(turma[i]);

    return 0;
}