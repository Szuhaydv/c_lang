#include <stdio.h>
#define INCHES_PER_POUND 166
/* Sample program calculating the dimensional weight of a box */

int main(void) {
    int width, height, length, volume, dweight;

    printf("Width of box: ");
    scanf("%d", &width);
    printf("Height of box: ");
    scanf("%d", &height);
    printf("Length of box: ");
    scanf("%d", &length);
    volume = width * height * length;
    dweight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("Volume of box: %d\n", volume);
    printf("Dimensional weigth (pounds): %d\n", dweight);

    return 0;
}
