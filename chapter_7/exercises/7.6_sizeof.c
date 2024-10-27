#include <stdio.h>

int main(void) {
    printf("Size of int: %lu\nSize of short: %lu\nSize of long: %lu\nSize of float: %lu\nSize of double: %lu\nSize of long double: %lu\n", (unsigned long) sizeof(int), (unsigned long) sizeof(short), (unsigned long) sizeof(long), (unsigned long) sizeof(float), (unsigned long) sizeof(double), (unsigned long) sizeof(long double));
    return 0;
}
