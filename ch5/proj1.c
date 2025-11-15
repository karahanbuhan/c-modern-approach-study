/* Write a program that calculates how many digits a number contains:
Enter a number: 374
The number 374 has 3 digits
You may assume that the number has no more than four digits. */

#include <stdio.h>

int main(void) {
    int number, number_abs;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    /* Absolute value is used to support negative numbers as well. The sign won't be counted as digit. */
    number_abs = number >= 0 ? number : -number;
    /* Number cannot have 0 digits so we start with 1 +  */
    printf("The number %d has %d digits\n", number, 1 + (number_abs > 10) + (number_abs > 100) + (number_abs > 1000));

    return 0;
}
