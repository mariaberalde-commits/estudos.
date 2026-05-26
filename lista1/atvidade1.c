#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	char nome[100];
	int idade;
	float altura;
} Pessoa;

int main(void) {
	int n = 0;
	printf("Quantos cadastros? ");
	if (scanf("%d", &n) != 1 || n <= 0) return 0;
	int c; while ((c = getchar()) != '\n' && c != EOF);

	Pessoa *p = malloc(sizeof(Pessoa) * n);
	if (p == NULL) return 0;

	for (int i = 0; i < n; i++) {
		printf("\nCadastro %d\n", i+1);
		printf("Digite o nome: ");
		if (fgets(p[i].nome, sizeof(p[i].nome), stdin) == NULL) { free(p); return 0; }
		size_t ln = strlen(p[i].nome);
		if (ln > 0 && p[i].nome[ln-1] == '\n') p[i].nome[ln-1] = '\0';

		printf("Digite a idade: ");
		if (scanf("%d", &p[i].idade) != 1) { free(p); return 0; }
		int ch; while ((ch = getchar()) != '\n' && ch != EOF);
		printf("Digite a altura (ex: 1.75): ");
		if (scanf("%f", &p[i].altura) != 1) { free(p); return 0; }
		while ((ch = getchar()) != '\n' && ch != EOF);
	}

	for (int i = 0; i < n; i++) {
		printf("\n--- Ficha da Pessoa %d ---\n", i+1);
		printf("Nome : %s\n", p[i].nome);
		printf("Idade: %d anos\n", p[i].idade);
		printf("Altura: %.2f m\n", p[i].altura);
	}
	free(p);
	return 0;
}
