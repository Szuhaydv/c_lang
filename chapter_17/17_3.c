#include <stdlib.h>
#include <stdio.h>

int *createArray(int n, int initial_value);

int main(void) {
    int *arr = createArray(10, 7);
    for (int i = 0; i < 10; i++) {
        printf("Element %d: %d\n", i, arr[i]);
    }
    free(arr);
    return 0;
}

int *createArray(int n, int initial_value) {
    int *new_arr = malloc(n * sizeof(int));
    for (int *p = new_arr; p < new_arr + n; p++) {
        *p = initial_value;
    }
    return new_arr;
}
