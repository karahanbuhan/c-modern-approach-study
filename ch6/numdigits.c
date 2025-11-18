/* Although the while statement appears in C programs much more often than the
do statement, the latter is handy for loops that must execute at least once. To
illustrate this point, let’s write a program that calculates the number of
digits in an integer entered by the user:
Enter a nonnegative integer: 60
The number has 2 digit(s). */

#include <stdio.h>

int main(void) {
    int i, n = 0;

    printf("Enter a nonnegative integer: ");
    scanf("%d", &i);

    do {
        i /= 10;
        n++;
    } while (i > 0);

    printf("The number has %d digit(s).\n", n);

    return 0;
}
