#include <stdlib.h>
#include <stdio.h>

int main(void) {
    char array[3][5], ch;
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    printf("Enter a date: ");
    for (int i = 0; i < 3; i++) {
        int j = 0;
        while ((ch = getchar()) != '\n' && ch != '/') {
            array[i][j++] = ch;
        }
        array[i][j] = '\0';
    }
    printf("You entered the date %s %s, %s\n", months[atoi(array[0]) - 1], array[1], array[2]);
    return 0;
}
