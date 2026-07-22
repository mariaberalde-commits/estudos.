#include <stdio.h>

int contarChar(char s[], int i, char c) {
    if (s[i] == '\0')
        return 0;
    int encontrou = (s[i] == c) ? 1 : 0;
    return encontrou + contarChar(s, i + 1, c);
}

int main() {
    printf("contarChar(banana, a) = %d\n", contarChar("banana", 0, 'a'));
    return 0;
}