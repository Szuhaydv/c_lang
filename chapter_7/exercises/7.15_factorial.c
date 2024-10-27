#include <stdio.h>

int main(void) {
    int prod = 1, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        prod *= i;
    }
    printf("Factorial of %d: %d\n", n, prod);
    return 0;
}
