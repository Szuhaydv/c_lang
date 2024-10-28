#include <stdio.h>

#define MAX_LEN 80
#define ABC 26

int main(void) {
    char sentence[MAX_LEN], ch;
    int idx = 0, shift;
    printf("Enter message to be encrypted: ");
    while ((ch = getchar()) != '\n') {
        sentence[idx] = ch;
        idx++;
    }
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);
    printf("Encrypted message: ");
    for (int i = 0; i < idx; i++) {
        if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
            putchar('A' + (sentence[i] - 'A' + shift) % ABC);
        } else if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            putchar('a' + (sentence[i] - 'a' + shift) % ABC);
        } else {
            putchar(sentence[i]);
        }
    }
    putchar('\n');
}
