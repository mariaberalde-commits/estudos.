#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    float n1, n2, n3;
    float media;
    char conceito;
} Aluno;

Aluno calcularMedia(Aluno a) {
    a.media = (a.n1 + a.n2 + a.n3) / 3.0f;
    return a;
}

char definirConceito(float media) {
    if (media >= 8.0f) return 'A';
    if (media >= 6.5f) return 'B';
    if (media >= 5.0f) return 'C';
    return 'D';
}

void imprimirAluno(Aluno a) {
    printf("%-30s %.2f %.2f %.2f  Media: %.2f Conceito: %c\n",
           a.nome, a.n1, a.n2, a.n3, a.media, a.conceito);
}

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    getchar(); // consume newline
    for (int i = 0; i < N; ++i) {
        Aluno a;
        if (!fgets(a.nome, sizeof(a.nome), stdin)) break;
        // remove trailing newline
        size_t ln = strlen(a.nome);
        if (ln > 0 && a.nome[ln-1] == '\n') a.nome[ln-1] = '\0';
        if (scanf("%f %f %f", &a.n1, &a.n2, &a.n3) != 3) break;
        getchar(); // consume newline after numbers
        a = calcularMedia(a);
        a.conceito = definirConceito(a.media);
        imprimirAluno(a);
    }
    return 0;
}
