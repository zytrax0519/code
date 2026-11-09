#include <stdio.h>

int main() {
    int a = 20;
    int b = 6;

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a > 10 && b < 10: %d\n", a > 10 && b < 10);

    if (a > 10 && b < 10) {
        printf("a > 10 ba b < 10: true\n");
    } else {
        printf("a > 10 ba b < 10: false\n");
    }

    return 0;
}
