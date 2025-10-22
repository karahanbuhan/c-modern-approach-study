/* Would the upc.c program still work if the expression 9 - ((total - 1) % 10) were
replaced by (10 - (total % 10)) % 10? */

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

    check_digit = (10 - ((3*(s1 + i2 + i4 + j1 + j3 + j5) + (i1 + i3 + i5 + j2 + j4)) % 10)) % 10;  
    /* This new algorithm works perfectly as if the total % 10 = 0 and 10-0=10 but we modulo once more so 10 % 10 = 0,
    and other results such as 6 % 10 = 6 even they are smaller than 10.
    check_digit = 9 - ((3*(s1 + i2 + i4 + j1 + j3 + j5) + (i1 + i3 + i5 + j2 + j4)) - 1) % 10; */
    printf("Check digit: %d\n", check_digit);
    /* For example 0 42100 00566 generates the check digit of 10 which is not a single symbol so invalid */

    return 0;
}
