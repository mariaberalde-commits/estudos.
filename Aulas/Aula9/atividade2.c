#include <stdio.h>
#include <string.h>

void inverter(char s[], int ini, int fim) {
    if (ini >= fim) return;

    char aux = s[ini];
    s[ini]   = s[fim];
    s[fim]   = aux;

    inverter(s, ini + 1, fim - 1);
}

int main() {
    char texto[200];
    printf("Digite uma palavra ou frase: ");
    scanf(" %199[^\n]", texto);

    printf("Original : %s\n", texto);
    inverter(texto, 0, strlen(texto) - 1);
    printf("Invertida: %s\n", texto);

    return 0;
}
