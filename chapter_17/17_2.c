#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *duplicate(const char *);

int main(void) {
    char *p;
    p = duplicate("hello");
    if (p == NULL) {
        printf("Not enough memory\n");
    } else {
        printf("%s\n", p);
    }
    free(p);
    return 0;
}

char *duplicate(const char *p) {
    char *new;
    new = malloc(strlen(p) + 1);
    strcpy(new, p);
    return new;
}
