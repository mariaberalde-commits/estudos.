#include <stdio.h>

#define MAX_PROD 100

struct Produto {
    char nome[100];
    float preco;
    int quantidade;
};

int main() {
    struct Produto catalogo[MAX_PROD];
    int n;

    printf("Numero de produtos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nProduto %d:\n", i + 1);
        printf("  Nome      : ");
        scanf(" %99[^\n]", catalogo[i].nome);
        printf("  Preco     : ");
        scanf("%f", &catalogo[i].preco);
        printf("  Quantidade: ");
        scanf("%d", &catalogo[i].quantidade);
    }

    printf("\n%-15s %10s %5s %12s\n", "Produto", "Preco", "Qtd", "Total");
    printf("-----------------------------------------\n");

    float totalGeral = 0;
    int idxMaior = 0;

    for (int i = 0; i < n; i++) {
        float subtotal = catalogo[i].preco * catalogo[i].quantidade;
        printf("%-15s R$%8.2f %5d R$%9.2f\n",
               catalogo[i].nome, catalogo[i].preco, catalogo[i].quantidade, subtotal);
        totalGeral += subtotal;

        if (subtotal > catalogo[idxMaior].preco * catalogo[idxMaior].quantidade)
            idxMaior = i;
    }

    float maiorTotal = catalogo[idxMaior].preco * catalogo[idxMaior].quantidade;

    printf("-----------------------------------------\n");
    printf("Total geral   : R$%.2f\n", totalGeral);
    printf("Maior estoque : %s (R$%.2f)\n", catalogo[idxMaior].nome, maiorTotal);

    return 0;
}
