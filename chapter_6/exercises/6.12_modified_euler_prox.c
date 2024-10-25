#include <stdio.h>

int main(void) {
    float sum = 1.0f, denom = 1.0f, diff, i = 1.0f;
    printf("Enter difference: ");
    scanf("%f", &diff);
    while (1.0f / denom >= diff) {
        sum += 1.0f / denom;
        printf("Iteration %f, value: %f\n", i, sum);
        denom *= (i + 1.0f);
        i++;
    }
    return 0;
}
