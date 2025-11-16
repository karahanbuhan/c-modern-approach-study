/* Modify the upc.c program of Section 4.1 so that it checks whether a UPC is valid. After
the user enters a UPC, the program will display either VALID or NOT VALID. */

/* Rewrite the upc.c program of Section 4.1 so that the user enters 11 digits at one time,
instead of entering one digit, then five digits, and then another five digits.
Enter the first 11 digits of a UPC: 01380015173
Check digit: 5 */

/* Computes a Universal Product Code check digit */

#include <stdio.h>

int main(void) {
    int s1, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, c1, check_digit;
    
    printf("Enter UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &s1, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &c1);

    check_digit = 9 - ((3*(s1 + i2 + i4 + j1 + j3 + j5) + (i1 + i3 + i5 + j2 + j4)) - 1) % 10;
    if (check_digit == c1) {
        printf("VALID\n");
    } else {
        printf("NOT VALID\n");
    }

    return 0;
}
