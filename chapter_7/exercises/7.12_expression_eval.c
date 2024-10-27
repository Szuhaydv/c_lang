#include <stdio.h>

int main(void) {
    float num, sum;
    char ch;
    int successful;
    printf("Enter an expression: ");
    scanf("%f", &sum);
    while ((ch = getchar()) != '\n') {
        scanf("%f", &num);
        switch (ch) {
            case '+':
                sum += num;
                break;
            case '-':
                sum -= num;
                break;
            case '*':
                sum *= num;
                break;
            case '/':
                sum /= num;
                break;
            default:
                printf("idk this character:");
                putchar(ch);
        }
    }
    printf("Value of the expression: %f\n", sum);
    return 0;
}
