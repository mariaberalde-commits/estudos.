#include <stdio.h>

struct Jogador {
    char nome[100];
    int pontos;
};

int main() {
    int n;
    printf("Quantidade de jogadores: ");
    scanf("%d", &n);

    struct Jogador jogadores[100];

    for (int i = 0; i < n; i++) {
        printf("\nJogador %d\n", i + 1);
        printf("Nome  : ");
        scanf(" %[^\n]", jogadores[i].nome);
        printf("Pontos: ");
        scanf("%d", &jogadores[i].pontos);
    }

    int idxMaior = 0, idxMenor = 0;
    for (int i = 1; i < n; i++) {
        if (jogadores[i].pontos > jogadores[idxMaior].pontos) idxMaior = i;
        if (jogadores[i].pontos < jogadores[idxMenor].pontos) idxMenor = i;
    }

    printf("\nJogador com mais pontos  : %s (%d pts)\n",
           jogadores[idxMaior].nome, jogadores[idxMaior].pontos);
    printf("Jogador com menos pontos : %s (%d pts)\n",
           jogadores[idxMenor].nome, jogadores[idxMenor].pontos);

    return 0;
}