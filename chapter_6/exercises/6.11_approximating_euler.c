#include <stdio.h>

int main(void) {
    float sum = 1.0f, denom = 1.0f;
    int iterations;
    printf("Enter number of iterations: ");
    scanf("%d", &iterations);
    for (int i = 1; i <= iterations; i++) {
        sum += 1.0f / denom;
        printf("Iteration %d, value: %f\n", i, sum);
        denom *= (i + 1.0f);
    }
    return 0;
}
