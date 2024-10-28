#include <stdio.h>

int day_of_year(int, int, int);

int main(void) {
    printf("Day of the year: %d\n", day_of_year(10, 28, 2024));
    return 0;
}

int day_of_year(int month, int day, int year) {
    int days = 0;
    for (int i = 1; i < month; i++) {
        if (i == 4 || i == 6 || i == 9 || i == 11) {
            days += 30;
        } else if (i == 2) {
            if (year % 4 == 0) {
                days += 29;
            } else {
                days += 28;
            }
        } else {
            days += 31;
        }
    }
    return days += day;
}
