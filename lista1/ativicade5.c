#include <stdio.h>

struct Produto {
    char nome[100];
    float preco;
    int quantidade;
    float valorEstoque;
};

int main() {
    int n;
    printf("Quantidade de produtos: ");
    scanf("%d", &n);

    struct Produto p[100];
    float totalGeral = 0;
    int idxMaior = 0;

    for (int i = 0; i < n; i++) {
        printf("\nProduto %d\n", i + 1);
        printf("Nome      : ");
        scanf(" %[^\n]", p[i].nome);
        printf("Preco     : ");
        scanf("%f", &p[i].preco);
        printf("Quantidade: ");
        scanf("%d", &p[i].quantidade);

        p[i].valorEstoque = p[i].preco * p[i].quantidade;
        totalGeral += p[i].valorEstoque;

        if (p[i].valorEstoque > p[idxMaior].valorEstoque)
            idxMaior = i;
    }

    printf("\n========== TABELA DE ESTOQUE ==========\n");
    printf("%-30s | %10s | %10s | %12s\n", "Produto", "Preco", "Quantidade", "Valor Est.");
    printf("--------------------------------------------------------------\n");
    for (int i = 0; i < n; i++)
        printf("%-30s | %10.2f | %10d | %12.2f\n",
               p[i].nome, p[i].preco, p[i].quantidade, p[i].valorEstoque);

    printf("--------------------------------------------------------------\n");
    printf("Total geral: R$ %.2f\n\n", totalGeral);
    printf("Maior estoque : %s (R$ %.2f)\n", p[idxMaior].nome, p[idxMaior].valorEstoque);

    return 0;
}