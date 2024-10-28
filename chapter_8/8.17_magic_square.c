#include <stdio.h>

int main(void) {
    int size, position[2];
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &size);

    int m_square[size][size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            m_square[i][j] = -1;
        }
    }

    position[0] = 1; position[1] = size / 2 - 1;
    for (int i = 0; i < size * size; i++) {
        int x = position[1] + 1 == size ? 0 : position[1] + 1;
        int y = position[0] - 1 == -1 ? size - 1 : position[0] - 1;
        if (m_square[y][x] != -1) {
            x = position[1];
            y = position[0] + 1 == size ? 0 : position[0] + 1;
        }
        m_square[y][x] = i + 1;
        position[0] = y; position[1] = x;
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%5d", m_square[i][j]);
        }
        putchar('\n');
    }
    return 0;
}
