#include <stdio.h>

int main(void) {
    float current = 0, average = 0;
    char ch;
    int num_of_words = 0;
    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n') {
        if (ch == ' ' || ch == '.') {
            average = ((average * num_of_words) + current) / (num_of_words + 1);
            num_of_words++;
            current = 0;
        } else {
            current += 1;
        }
    }
    printf("Average word length: %f\n", average);
    return 0;
}
