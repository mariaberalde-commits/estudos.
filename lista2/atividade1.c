#include <stdio.h>

int fatorial(int n) {
    if (n == 0)
        return 1;
    return n * fatorial(n - 1);
}

int main() {
    printf("fatorial(4) = %d\n", fatorial(4));
    return 0;
}