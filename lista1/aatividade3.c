#include <stdio.h>

struct Produto {
    char nome[100];
    float preco;
    int quantidade;
};

int main() {
    int n;
    printf("Quantos produtos? ");
    scanf("%d", &n);

    struct Produto p[100];

    for (int i = 0; i < n; i++) {
        printf("\nProduto %d\n", i + 1);
        printf("Nome      : ");
        scanf(" %[^\n]", p[i].nome);
        printf("Preco     : ");
        scanf("%f", &p[i].preco);
        printf("Quantidade: ");
        scanf("%d", &p[i].quantidade);
    }

    for (int i = 0; i < n; i++) {
        float total        = p[i].preco * p[i].quantidade;
        float desconto     = total * 0.10;
        float comDesconto  = total - desconto;

        printf("\nProduto: %s\n", p[i].nome);
        printf("Valor total em estoque    : R$ %.2f\n", total);
        printf("Valor com 10%% de desconto : R$ %.2f\n", comDesconto);
    }

    return 0;
}