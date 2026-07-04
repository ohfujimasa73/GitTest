#include <stdio.h>

int subtract(int a, int b);

int main() {
    int result = subtract(1, 2);
    printf("%d\n", result);

    return 0;
}

int subtract(int a, int b) {
    return a - b;
}
