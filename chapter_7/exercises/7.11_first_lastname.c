#include <stdio.h>
#include <stdbool.h>

int main(void) {
    char ch, initial = ' ';
    bool is_lastname = false;
    printf("Enter a first and last name: ");
    while((ch = getchar()) != '\n') {
        if (initial == ' ') {
            initial = ch;
        }
        if (ch == ' ') {
            is_lastname = true;
        }
        if (is_lastname) {
            putchar(ch);
        }
    }
    printf(", %c.\n", initial);
    return 0;
}
