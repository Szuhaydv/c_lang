#include <limits.h>
#include <math.h>
#include <stdio.h>

int main(void) {
    long n = 1;
    char enter;
    while (n < sqrt(LONG_MAX)) {
        printf("Square of '%ld': %ld\n", n, n * n);
        if (n % 24 == 0) {
            printf("Press Enter to continue...");
            enter = getchar();
            if (enter != 10) {
                break;
            }
        }
        n++;
    }
}
