#include <stdio.h>

int main(void) {
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Polynomial: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
    printf("Result: %d\n", 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6);
    printf("Result (Horner's rule): %d\n", (((((3*x)+2)*x-5)*x-1)*x+7)*x-6);
    return 0;
}
