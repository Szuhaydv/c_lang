#include <stdio.h>
#define PI 3.14f

int main(void) {
    float radius;
    printf("Radius of sphere: ");
    scanf("%f", &radius);
    printf("Volume of sphere: %.2f\n", 4.0f / 3.0f * PI * radius * radius * radius);
    return 0;
}
