#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c;
    int sum = 0;
    printf("Enter a word: ");
    c = getchar();
    c = toupper(c);
    while (c != '\n') {
        if (
            c == 'A' || c == 'E' || c == 'I' || c == 'L' || c == 'N' || c == 'O' || c == 'R' 
            || c == 'S' || c == 'T' || c == 'U'
        ) {
            sum += 1;
        } else if (c == 'D' || c == 'G') { sum += 2; }
        else if (c == 'B' || c == 'C' || c == 'M' || c == 'P') { sum += 3; }
        else if (c == 'F' || c == 'H' || c == 'V' || c == 'W' || c == 'Y') { sum += 4; }
        else if (c == 'K') { sum += 5; }
        else if (c == 'J' || c == 'X') { sum += 8; }
        else if (c == 'Q' || c == 'Z') { sum += 10; }
        c = getchar();
        c = toupper(c);
    }
    printf("%d\n", sum);
    return 0;
}
