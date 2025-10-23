/* Extend the program in Programming Project 1 to handle three-digit numbers. */

/* Write a program that asks the user to enter a two-digit number, then prints the number with
its digits reversed. A session with the program should have the following appearance:
Enter a two-digit number: 281
The reversal is: 182
Read the number using %d, then break it into two digits. */

#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a three-digit number: ");
    scanf("%3d", &n);

    printf("The reversal is: %d%d%d\n", n % 10, (n % 100) / 10, n / 100);

    return 0;
}
