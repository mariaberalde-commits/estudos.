#include <stdio.h>

struct Pessoa {
    char nome[100];
    int idade;
    float altura;
};

int main() {
    int n;
    printf("Quantos cadastros? ");
    scanf("%d", &n);

    struct Pessoa p[100];

    for (int i = 0; i < n; i++) {
        printf("\nCadastro %d\n", i + 1);
        printf("Nome  : ");
        scanf(" %[^\n]", p[i].nome);
        printf("Idade : ");
        scanf("%d", &p[i].idade);
        printf("Altura: ");
        scanf("%f", &p[i].altura);
    }

    for (int i = 0; i < n; i++) {
        printf("\n--- Ficha %d ---\n", i + 1);
        printf("Nome  : %s\n", p[i].nome);
        printf("Idade : %d anos\n", p[i].idade);
        printf("Altura: %.2f m\n", p[i].altura);
    }

    return 0;
}