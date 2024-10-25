#include <stdio.h>

int main(void) {
    int a,b;
    printf("Enter a fraction: ");
    scanf("%d/%d", &a, &b);
    int n = a, m = b;
    while (n != 0) {
        int remainder = m % n;
        m = n;
        n = remainder;
    }
    printf("In lowest terms: %d/%d\n", a/m, b/m);
    return 0;
}
