#include <stdio.h>

void fizzBuzz(int n) {
    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz");
        } else if (i % 3 == 0) {
            printf("Fizz");
        } else if (i % 5 == 0) {
            printf("Buzz");
        } else {
            printf("%d", i);
        }
        if (i < n) printf("\n");
    }
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    fizzBuzz(n);
    return 0;
}
