#include <stdio.h>

#define MAX_LEN 100

int main(void) {
    char ch, current = 0, a[MAX_LEN], word_len = 0, mark_id = 0;
    printf("Enter a sentence: ");
    while ((ch = getchar()) != '.' && ch != '!' && ch != '?' && current < MAX_LEN) {
        a[current++] = ch;
    }
    mark_id = current;
    a[current--] = ch;
    for (; current >= 0; current--) {
        if (a[current] == ' ' || current == 0) {
            if (current == 0) {
                current = -1;
                word_len += 1;
            }
            for (int i = current + 1; i < current + 1 + word_len; i++) {
                putchar(a[i]);
            }
            if (current != -1) {
                putchar(' ');
            }
            word_len = 0;
        } else {
            word_len += 1;
        }
    }
    putchar(a[mark_id]);
    putchar('\n');
    return 0;
}
