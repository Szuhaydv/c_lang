#include <stdio.h>

int main(void) {
    int wind_speed;
    printf("What is the windspeed? ");
    scanf("%d", &wind_speed);
    if (wind_speed < 1) {
        printf("The wind is calm");
    } else if (wind_speed < 4) {
        printf("The air is light");
    } else if (wind_speed < 28) {
        printf("Having a breeze");
    } else if (wind_speed < 48) {
        printf("There is a gale outside");
    } else if (wind_speed < 64) {
        printf("Stormy weather");
    } else {
        printf("Careful! Hurricane");
    }

    return 0;
}
