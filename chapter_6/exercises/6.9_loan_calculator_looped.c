#include <stdio.h>

int main(void) {
    float amount, interest, payment, num_of_payments;
    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    printf("Enter number of payments: ");
    scanf("%f", &num_of_payments);

    float monthly_interest = (interest / 12) / 100;

    for (; num_of_payments > 0; num_of_payments--) {
        amount = amount - payment + amount * monthly_interest;
        printf("Balance remaining after montly payment: %.2f$\n", amount);
    }

    return 0;
}
