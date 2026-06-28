#include <stdio.h>

float calcularMedia(float n1, float n2, float n3) {
    float soma = n1 + n2 + n3;
    return soma / 3.0;
}

char definirConceito(float media) {
    char conceito;
    if      (media >= 9.0) conceito = 'A';
    else if (media >= 7.0) conceito = 'B';
    else if (media >= 5.0) conceito = 'C';
    else                   conceito = 'D';
    return conceito;
}

void imprimirSituacao(char nome[], float media, char conceito) {
    char *status = (conceito != 'D') ? "Aprovado" : "Reprovado";
    printf("%-20s  Media: %.2f  Conceito: %c  [%s]\n", nome, media, conceito, status);
}

int main() {
    for (int i = 0; i < 3; i++) {
        char nome[100];
        float nota1, nota2, nota3;

        printf("\nAluno %d\n", i + 1);
        printf("  Nome   : ");
        scanf(" %99[^\n]", nome);
        printf("  Nota 1 : ");
        scanf("%f", &nota1);
        printf("  Nota 2 : ");
        scanf("%f", &nota2);
        printf("  Nota 3 : ");
        scanf("%f", &nota3);

        float media   = calcularMedia(nota1, nota2, nota3);
        char conceito = definirConceito(media);
        imprimirSituacao(nome, media, conceito);
    }

    return 0;
}
