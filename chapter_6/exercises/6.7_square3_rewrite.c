#include <stdio.h>

int main(void) {
    int n;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i += 1) {
        printf("%10d%10d\n", i, i*i);
    }
    return 0;
}
