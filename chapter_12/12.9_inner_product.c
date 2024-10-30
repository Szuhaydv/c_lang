#include <stdio.h>

double inner_product(double *a, double *b, int n) {
    double result = 0;
    for (double *i = a, *j = b; i < a + n; i++, j++) {
        result += *i * *j;
    }
    return result;
}

int main(void) {
    double result, a[] = {2,4,6,8}, b[] = {1,3,5,9};
    result = inner_product(a, b, 4);
    printf("Your result: %.0f\n", result);
    return 0;
}
