#include <stdio.h>

int main(void) {
    int a,b;
    char ch;
    printf("Enter an operation: ");
    scanf("%d %c%d", &a, &ch, &b);
    if (ch == '/') {
        int n = a, m = b;
        while (n != 0) {
            int remainder = m % n;
            m = n;
            n = remainder;
        }
        printf("In lowest terms: %d/%d\n", a/m, b/m);
    } else if (ch == '+') {
        printf("Result is: %d\n", a + b);
    } else if (ch == '*') {
        printf("Result is: %d\n", a * b);
    } else {
        printf("Result is: %d\n", a - b);
    }
    return 0;
}
