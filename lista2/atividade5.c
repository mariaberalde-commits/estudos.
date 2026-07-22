#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0)
        return a;
    return mdc(b, a % b);
}

int main() {
    printf("mdc(48, 18) = %d\n", mdc(48, 18));
    return 0;
}