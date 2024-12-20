#include <limits.h>
#include <stdio.h>

// Change the MAX type and the format specifier for other values

int main(void) {
    short prod = 1, n = 2;
    while (prod < SHRT_MAX / n) {
        prod *= n;
        n++;
    }
    printf("Largest possible n: %hd\n", n - 1);
    return 0;
}
