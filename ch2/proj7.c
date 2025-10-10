/* Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay
that amount using the smallest number of $20, $10, $5, and $1 bills:
Enter a dollar amount: 93
$20 bills: 4
$10 bills: 1
$5 bills: 0
$1 bills: 3 */

#include <stdio.h>

int main(void) {
    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    printf("$20 bills: %d\n", amount / 20);
    amount %= 20;

    printf("$10 bills: %d\n", amount / 10);
    amount %= 10;

    printf("$5 bills: %d\n", amount / 5);
    amount %= 5; /* The amount is now smaller than 5, thus $1 bills value */

    printf("$1 bills: %d\n", amount);

    return 0;
}
