#include <stdio.h>
#include <string.h>

#define MAX_LEN 40

void censor(char text[]) {
    char *foo = "foo";
    int count = 0;
    while (*text != '\0') {
        for (char *p = text, *p2 = foo; *p == *p2 && *p != '\0'; p++, p2++) {
            if (count == 2 && *p == *p2) {
                for (int i = 0; i < 3; i++) {
                    *text++ = 'x';
                }
                text--;
                count = 0;
            } else {
                count++;
            }
        }
        text++;
    }
}

int main(void) {
    char string[MAX_LEN + 1], ch;
    int n = 0;
    printf("Input a string (max 40 characters): ");
    while (n < MAX_LEN && (ch = getchar()) != '\n') {
        string[n++] = ch;
    }
    string[n] = '\0';
    censor(string);
    printf("Censored: %s\n", string);
    return 0;
}
