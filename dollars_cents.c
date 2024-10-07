#include <stdio.h>

int main(void) {
    float amount;
    printf("Enter the amount: ");
    scanf("%f", &amount);
    printf("Amount after 5%% tax: $%.2f\n", amount * 1.05);
    return 0;
}
