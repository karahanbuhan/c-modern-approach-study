/* The algorithm for computing the UPC check digit ends with the following steps:
Subtract 1 from the total.
Compute the remainder when the adjusted total is divided by 10.
Subtract the remainder from 9.
It’s tempting to try to simplify the algorithm by using these steps instead:
Compute the remainder when the total is divided by 10.
Subtract the remainder from 10.
Why doesn’t this technique work? */

/* Computes a Universal Product Code check digit */

#include <stdio.h>

int main(void) {
    int s1, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, check_digit;
    
    printf("Enter the first (single) digit: ");
    scanf("%1d", &s1);

    printf("Enter the first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

    printf("Enter the second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    check_digit = 10 - (3*(s1 + i2 + i4 + j1 + j3 + j5) + (i1 + i3 + i5 + j2 + j4)) % 10;
    /* This total - 1 is required to prevent the check digit to not be 10 basically, if we weren't to use it; multiples of 10 would cause this issue
    check_digit = 9 - ((3*(s1 + i2 + i4 + j1 + j3 + j5) + (i1 + i3 + i5 + j2 + j4)) - 1) % 10; */
    printf("Check digit: %d\n", check_digit);
    /* For example 0 42100 00566 generates the check digit of 10 which is not a single symbol so invalid */
    /* Total being multiples of 10 causes the remainder to be 0 thus 10-0=10 as the check digit */

    return 0;
}
