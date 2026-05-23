#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float preco;
    int quantidade;
    float valor_estoque;
} Produto;

int main() {
    int n;
    
    printf("Quantidade de produtos: ");
    scanf("%d", &n);
    getchar();
    
    Produto produtos[n];
    float total_geral = 0;
    int indice_maior = 0;
    float maior_valor = 0;
    
    for (int i = 0; i < n; i++) {
        printf("\nProduto %d:\n", i + 1);
        printf("Nome: ");
        fgets(produtos[i].nome, sizeof(produtos[i].nome), stdin);
        produtos[i].nome[strcspn(produtos[i].nome, "\n")] = 0;
        
        printf("Preco: ");
        scanf("%f", &produtos[i].preco);
        
        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);
        getchar();
        
        produtos[i].valor_estoque = produtos[i].preco * produtos[i].quantidade;
        total_geral += produtos[i].valor_estoque;
        
        if (produtos[i].valor_estoque > maior_valor) {
            maior_valor = produtos[i].valor_estoque;
            indice_maior = i;
        }
    }
    
    printf("\n========== TABELA DE ESTOQUE ==========\n");
    printf("%-30s | %10s | %10s | %12s\n", "Produto", "Preco", "Quantidade", "Valor Estoque");
    printf("----------------------------------------+------------+------------+--------------\n");
    
    for (int i = 0; i < n; i++) {
        printf("%-30s | %10.2f | %10d | %12.2f\n", 
               produtos[i].nome, produtos[i].preco, produtos[i].quantidade, produtos[i].valor_estoque);
    }
    
    printf("----------------------------------------+------------+------------+--------------\n");
    printf("VALOR TOTAL GERAL: %.2f\n\n", total_geral);
    
    printf("PRODUTO COM MAIOR VALOR EM ESTOQUE:\n");
    printf("Nome: %s\n", produtos[indice_maior].nome);
    printf("Valor: %.2f\n", maior_valor);
    
    return 0;
}