#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 40

int read_line(char str[], int n);

int main(void) {
    char text[MAX_LEN + 1];
    printf("Enter some text: ");
    read_line(text, MAX_LEN);
    printf("%s\n", text);
    return 0;
}

int read_line(char str[], int n) {
    int ch, i = 0;
    while (isspace(ch = getchar()))
        ;
    str[i++] = ch;
    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
