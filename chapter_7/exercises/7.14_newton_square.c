#include <math.h>
#include <stdio.h>

int main(void) {
    double y = 1, x, new_y;
    printf("Enter a positive number: ");
    scanf("%lf", &x);
    while (1) {
        new_y = (y + x/y) / 2;
        if (fabs(new_y - y) < 0.0001 * y) {
            break;
        }
        y = new_y;
    }
    printf("Square root: %f\n", new_y);
    return 0;
}
