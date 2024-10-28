#include <stdio.h>

#define MAX_LEN 100

int main(void) {
    char ch, a[MAX_LEN];
    short sentence_len = 0, word_len = 0;
    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n' && sentence_len < MAX_LEN) {
        a[sentence_len] = ch;
        if (ch == '.' || ch == '!' || ch == '?') {
            break;
        }
        sentence_len++;
    }
    for (int i = sentence_len - 1; i >= 0; i--) {
        word_len += 1;
        if (a[i] == ' ') {
            for (int j = i + 1; j < i + word_len; j++) {
                putchar(a[j]);
            }
            putchar(' ');
            word_len = 0;
        } else if (i == 0) {
            for (int j = 0; j < word_len; j++) {
                putchar(a[j]);
            }
        }
    }
    putchar(a[sentence_len]);
    putchar('\n');
    return 0;
}
