#include <stdio.h>

int gcd(int a, int b) {
    if (b > a) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    if (b == 0) {
        return a;
    }
    return gcd(b, a%b);
}

int main(void) {
    printf("GCD of 318, 4152: %d\n", gcd(318, 4152));
    return 0;
}
