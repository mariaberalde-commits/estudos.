#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 100

int main(void) {
    int N;
    printf("Quantidade de alunos: ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Numero invalido.\n");
        return 1;
    }
  
    int c; while ((c = getchar()) != '\n' && c != EOF) {}

    char **names = malloc(N * sizeof(char*));
    double *grades = malloc(N * sizeof(double));
    if (!names || !grades) {
        printf("Memoria insuficiente.\n");
        return 1;
    }

    for (int i = 0; i < N; ++i) {
        names[i] = malloc(MAX_NAME);
        if (!names[i]) { printf("Memoria insuficiente.\n"); return 1; }
        printf("Aluno %d nome: ", i+1);
        if (!fgets(names[i], MAX_NAME, stdin)) strcpy(names[i], "");
      
        size_t L = strlen(names[i]);
        if (L > 0 && names[i][L-1] == '\n') names[i][L-1] = '\0';

        printf("Aluno %d nota: ", i+1);
        if (scanf("%lf", &grades[i]) != 1) {
            grades[i] = 0.0;
        }
        while ((c = getchar()) != '\n' && c != EOF) {}
    }

    printf("\nTabela de alunos:\n");
    printf("%-4s %-30s %6s\n", "#", "Nome", "Nota");
    for (int i = 0; i < N; ++i) {
        printf("%-4d %-30s %6.2f\n", i+1, names[i], grades[i]);
    }

    double sum = 0.0; int aprovados = 0;
    for (int i = 0; i < N; ++i) {
        sum += grades[i];
        if (grades[i] >= 7.0) aprovados++;
    }
    double media = sum / N;
    printf("\nMedia da turma: %.2f\n", media);
    printf("Aprovados (nota >= 7): %d\n", aprovados);

    for (int i = 0; i < N; ++i) free(names[i]);
    free(names); free(grades);
    return 0;
}
