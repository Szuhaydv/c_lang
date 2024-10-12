#include <stdio.h>

int main(void) {
    int hours, minutes;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);
    if (hours >= 12) {
        if (hours != 12) {
            hours -= 12;
        }
        printf("Equivalent 12-hour time: %d:%.2d PM\n", hours, minutes);
    } else {
        printf("Equivalent 12-hour time: %d:%.2d AM\n", hours, minutes);
    }

    return 0;
}
