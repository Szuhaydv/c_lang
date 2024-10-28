#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define TABLE_SIZE 10

int main(void) {
    char table[TABLE_SIZE][TABLE_SIZE], letter = 'A', available[4] = {1,1,1,1}, position[2] = {0,0};
    // init table
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            table[i][j] = '.';
        }
    }
    srand((unsigned) time(NULL));

    table[0][0] = 'A';

    // walk the table (available keeps track of LeftRightUpDown)
    while (available[0] || available[1] || available[2] || available[3]) {
        if (letter == 'Z') {break;} // only runs until uppercase letteres are available
        switch (rand() % 4) {
            case 0: // we move left
                if (!available[0] || position[1]-1 < 0 || table[position[0]][position[1]-1] != '.') {
                    available[0] = false;
                    break;
                } else {
                    letter++;
                    table[position[0]][position[1]-1] = letter;
                    available[1] = false; // we can't move back where we came from
                    available[0] = true; available[2] = true; available[3] = true;
                    position[1] -= 1;
                    break;
                }
            case 1: // we move right
                if (!available[1] || position[1]+1 > 9 || table[position[0]][position[1]+1] != '.') {
                    available[1] = false;
                    break;
                } else {
                    letter++;
                    table[position[0]][position[1]+1] = letter;
                    available[0] = false; // we can't move back where we came from
                    available[1] = true; available[2] = true; available[3] = true;
                    position[1] += 1;
                    break;
                }
            case 2: // we move up
                if (!available[2] || position[0]-1 < 0 || table[position[0]-1][position[1]] != '.') {
                    available[2] = false;
                    break;
                } else {
                    letter++;
                    table[position[0]-1][position[1]] = letter;
                    available[3] = false; // we can't move back where we came from
                    available[0] = true; available[1] = true; available[2] = true;
                    position[0] -= 1;
                    break;
                }
            case 3: // we move down
                if (!available[3] || position[0]+1 > 9 || table[position[0]+1][position[1]] != '.') {
                    available[3] = false;
                    break;
                } else {
                    letter++;
                    table[position[0]+1][position[1]] = letter;
                    available[2] = false; // we can't move back where we came from
                    available[0] = true; available[1] = true; available[3] = true;
                    position[0] += 1;
                    break;
                }
        }
    }

    // print the table
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            putchar(table[i][j]);
        }
        putchar('\n');
    }

    return 0;
}
