#include <stdio.h>

int main(void) {
    int amount, twenty_bills, ten_bills, five_bills, dollar_bills;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    twenty_bills = amount / 20;
    amount %= 20;
    ten_bills = amount / 10;
    amount %= 10;
    five_bills = amount / 5;
    amount %= 5;
    dollar_bills = amount;
    printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", twenty_bills, ten_bills, five_bills, dollar_bills);
    return 0;
}
