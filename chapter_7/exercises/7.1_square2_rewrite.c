#include <math.h>
#include <stdio.h>
#include <limits.h>

int main(void) {
    long i;
    // my system uses 64 bit for long and long long too
    while (i < sqrt(LONG_MAX)) {
        i++;
    }
    printf("The smallest offending value: %ld\n", i);
    return 0;
}
