#include <stdio.h>
#include <stdbool.h>

#define MAX_NUM 10

bool segment_layout[MAX_NUM][7] = {
    {true, true, false, true, true, true, true}, // 0
    {[3] = true, [6] = true}, // 1
    {true, false, true, true, true, true}, // 2
    {true, false, true, true, false, true, true}, // 3
    {false, true, true, true, [6] = true}, // 4
    {true, true, true, [5] = true, true}, // 5
    {true, true, true, false, true, true, true}, // 6
    {true, [3] = true, [6] = true}, // 7
    {true, true, true, true, true, true, true}, // 8
    {true, true, true, true, false, true, true} // 9
};

char digits[4][MAX_NUM * 4];


void clearDigitsArray(void);
void processDigit(int digit, int position);
void printDigitsArray(void);

int main(void) {
    char numbers[MAX_NUM], ch;
    int length = 0;
    printf("Enter a number: ");
    while (length < 10 && (ch = getchar()) != '\n') {
        if (ch >= '0' && ch <= '9') {
            numbers[length++] = ch;
        }
    }
    clearDigitsArray();
    for (int i = 0; i < length; i++) {
        processDigit(numbers[i] - '0', i);
    }
    printDigitsArray();
}

void clearDigitsArray(void) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < MAX_NUM; j++) {
            digits[i][j] = ' ';
        }
    }
}

void processDigit(int digit, int position) {
    int segment_id = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = position * 4; j < position * 4 + 4; j++) {
            int j_mod = j - position * 4;
            if ((i == 0 && j_mod == 0) || (i == 0 && j_mod == 2) || j_mod == 3) {
                digits[i][j] = ' ';
            } else if (segment_layout[digit][segment_id]) {
                if (j_mod == 1) {
                    digits[i][j] = '_';
                } else {
                    digits[i][j] = '|';
                }
                segment_id++;
            } else {
                digits[i][j] = ' ';
                segment_id++;
            }
        }
    }
}

void printDigitsArray(void) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < MAX_NUM * 4; j++) {
            putchar(digits[i][j]);
        }
        putchar('\n');
    }
}
