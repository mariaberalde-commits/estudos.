#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    double preco;
    int quantidade;
} Produto;

int main(void) {
    int n;
    printf("Quantos produtos deseja cadastrar? ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    getchar();

    Produto produtos[100];
    if (n > 100) n = 100;

    for (int i = 0; i < n; i++) {
        printf("\nNome do produto %d: ", i + 1);
        if (!fgets(produtos[i].nome, sizeof(produtos[i].nome), stdin)) return 0;
        size_t ln = strlen(produtos[i].nome);
        if (ln > 0 && produtos[i].nome[ln-1] == '\n') produtos[i].nome[ln-1] = '\0';

        printf("Preco: ");
        if (scanf("%lf", &produtos[i].preco) != 1) return 0;
        printf("Quantidade: ");
        if (scanf("%d", &produtos[i].quantidade) != 1) return 0;
        getchar();
    }

    for (int i = 0; i < n; i++) {
        double total = produtos[i].preco * produtos[i].quantidade;
        double desconto = total * 0.10;
        double total_com_desconto = total - desconto;

        printf("\nProduto %d: %s\n", i + 1, produtos[i].nome);
        printf("Valor total em estoque: R$ %.2f\n", total);
        printf("Valor com 10%% de desconto: R$ %.2f\n", total_com_desconto);
    }

    return 0;
}
