#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    int pontos;
} Jogador;

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;
    if (N <= 0) return 0;

    Jogador maior, menor, cur;
    // read first player
    if (scanf("%99s %d", maior.nome, &maior.pontos) != 2) return 0;
    menor = maior;

    for (int i = 1; i < N; ++i) {
        if (scanf("%99s %d", cur.nome, &cur.pontos) != 2) break;
        if (cur.pontos > maior.pontos) maior = cur;
        if (cur.pontos < menor.pontos) menor = cur;
    }

    printf("Jogador com mais pontos: %s %d\n", maior.nome, maior.pontos);
    printf("Jogador com menos pontos: %s %d\n", menor.nome, menor.pontos);
    return 0;
}
