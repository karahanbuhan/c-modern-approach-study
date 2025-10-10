/* Write a program that calculates the remaining balance on a loan after the first, second, and
third monthly payments:
Enter amount of loan: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66
Balance remaining after first payment: $19713.34
Balance remaining after second payment: $19425.25
Balance remaining after third payment: $19135.71
Display each balance with two digits after the decimal point. */

#include <stdio.h>

int main(void) {
    float loan, interest_rate, monthly_payment;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    /* Input we are getting is yearly interest rate so divide by 12 and 100 for percentage, obviously. */
    interest_rate = interest_rate / 12 / 100;

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    loan = loan + loan * interest_rate - monthly_payment;
    printf("Balance remaining after first payment: %.2f\n", loan);

    loan = loan + loan * interest_rate - monthly_payment;
    printf("Balance remaining after second payment: %.2f\n", loan);

    loan = loan + loan * interest_rate - monthly_payment;
    printf("Balance remaining after third payment: %.2f\n", loan);

    return 0;
}
