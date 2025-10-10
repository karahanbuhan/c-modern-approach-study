/* Write a program that asks the user to enter a value for x and then displays the value of the
following polynomial: 3x^5 + 2x^4 – 5x^3 – x^2 + 7x – 6 */

#include <stdio.h>

int main(void) {
    int x;

    printf("Enter a value for x: ");
    scanf("%d", &x);

    printf("%d\n", (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6);

    return 0;
}
