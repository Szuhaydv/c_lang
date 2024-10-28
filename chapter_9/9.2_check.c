#include <stdio.h>

int check(int x, int y, int n) {
    if (x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1) {
        return 1;
    }
    return 0;
}

int main(void) {
    printf("Assert true (1): %d\n", check(2, 4, 5));
    printf("Assert false (0): %d\n", check(-1, 2, 5));
    return 0;
}
