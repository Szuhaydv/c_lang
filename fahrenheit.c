#include <stdio.h>
#define FREEZING_POINT 32
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) {
    float fahrenheit, celsius;

    printf("Enter temperature in F: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_POINT) * SCALE_FACTOR;
    printf("The temperature in C: %.2f\n", celsius);

    return 0;
}
