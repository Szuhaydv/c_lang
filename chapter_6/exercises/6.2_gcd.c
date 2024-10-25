#include <stdio.h>

int main(void) {
    int n, m;
    printf("Enter two numbers: ");
    scanf("%d%d", &n, &m);
    while (n != 0) {
        int remainder = m % n;
        m = n;
        n = remainder;
    }
    printf("Greatest common divisor: %d\n", m);
    return 0;
}
