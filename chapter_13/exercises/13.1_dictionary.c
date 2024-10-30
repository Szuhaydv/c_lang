#include <stdio.h>
#include <string.h>

int main(void) {
    char word[21], small[21], large[21];
    _Bool first = 1;
    for (;;) {
        printf("Enter a word: ");
        scanf("%s", word);
        if (first || strcmp(word, small) < 0) {
            strcpy(small, word);
        }
        if (first || strcmp(word, large) > 0) {
            strcpy(large, word);
            first = 0;
        }
        if (strlen(word) == 4) {
            break;
        }
    }
    printf("\nSmallest word: %s\n", small);
    printf("Largest word: %s\n", large);
    return 0;
}
