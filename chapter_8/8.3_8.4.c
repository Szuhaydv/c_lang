#include <stdbool.h>
#include <stdio.h>

int main(void) {
    bool weekend[] = { [0] = true, [6] = true };
    for (int i = 0; i < sizeof(weekend) / sizeof(weekend[0]); i++) {
        printf("Index %d: %d\n", i, weekend[i]);
    }
    return 0;
}
