#include <stdio.h>

int main(void) {
    float amount, interest, payment;
    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    float monthly_interest = (interest / 12) / 100;

    amount = amount - payment + amount * monthly_interest;
    printf("Balance remaining after first payment: %.2f$\n", amount);
    amount = amount - payment + amount * monthly_interest;
    printf("Balance remaining after first payment: %.2f$\n", amount);
    amount = amount - payment + amount * monthly_interest;
    printf("Balance remaining after first payment: %.2f$\n", amount);

    return 0;
}
