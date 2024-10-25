#include <stdio.h>

int main(void) {
    int num_of_days, start_day;
    printf("Enter number of days: ");
    scanf("%d", &num_of_days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_day);
    for (int i = 1; i < start_day; i++) {
        printf("   ");
    }
    for (int i = 1; i <= num_of_days; i++) {
        if ((start_day + i - 1) % 7 == 0) {
            printf("%2d\n", i);
        } else {
            printf("%2d ", i);
        }
    }
    printf("\n");
    return 0;
}
