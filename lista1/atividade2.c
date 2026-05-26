#include <stdio.h>

typedef struct {
    char time1[50];
    char time2[50];
    int gols1;
    int gols2;
} Placar;

int main(void) {
    Placar jogo;

    printf("Nome do primeiro time: ");
    if (scanf("%49[^]", jogo.time1) != 1) return 1;
    getchar();
    printf("Nome do segundo time: ");
    if (scanf("%49[^]", jogo.time2) != 1) return 1;
    getchar();
    printf("Gols do %s: ", jogo.time1);
    if (scanf("%d", &jogo.gols1) != 1) return 1;
    printf("Gols do %s: ", jogo.time2);
    if (scanf("%d", &jogo.gols2) != 1) return 1;

    printf("\nPlacar: %s %d x %d %s\n", jogo.time1, jogo.gols1, jogo.gols2, jogo.time2);
    if (jogo.gols1 > jogo.gols2) {
        printf("Vencedor: %s\n", jogo.time1);
    } else if (jogo.gols2 > jogo.gols1) {
        printf("Vencedor: %s\n", jogo.time2);
    } else {
        printf("Empate\n");
    }

    return 0;
}
