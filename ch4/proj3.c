/* Rewrite the program in Programming Project 2 so that it prints the reversal of a three-digit
number without using arithmetic to split the number into digits. */

/* Extend the program in Programming Project 1 to handle three-digit numbers. */

/* Write a program that asks the user to enter a two-digit number, then prints the number with
its digits reversed. A session with the program should have the following appearance:
Enter a two-digit number: 281
The reversal is: 182
Read the number using %d, then break it into two digits. */

#include <stdio.h>

int main(void) {
    int n1, n2, n3;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &n1, &n2, &n3);

    printf("The reversal is: %d%d%d\n", n3, n2, n1);

    return 0;
}
