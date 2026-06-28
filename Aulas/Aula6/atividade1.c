#include <stdio.h>

struct Produto {
    char titulo[100];
    float custo;
    int estoque;
};

int main() {
    struct Produto p;

    printf("Nome do produto: ");
    scanf(" %99[^\n]", p.titulo);

    printf("Preco unitario: ");
    scanf("%f", &p.custo);

    printf("Unidades em estoque: ");
    scanf("%d", &p.estoque);

    float valorTotal = p.custo * p.estoque;

    printf("\nNome       : %s\n", p.titulo);
    printf("Preco      : R$ %.2f\n", p.custo);
    printf("Quantidade : %d\n", p.estoque);
    printf("---------------------------------\n");
    printf("Valor total em estoque : R$ %.2f\n", valorTotal);

    return 0;
}
