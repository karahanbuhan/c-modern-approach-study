/* Write a program that prompts the user to enter two dates and then indicates
which date comes earlier on the calendar: Enter first date (mm/dd/yy): 3/6/08
Enter second date (mm/dd/yy): 5/17/07
5/17/07 is earlier than 3/6/08 */

#include <stdio.h>

int main(void) {
    int m1, d1, y1, m2, d2, y2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &m1, &d1, &y1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &m2, &d2, &y2);

    /* This check only supports comparing years for same century, you can
     * compare 19*76* to 19*85* or 20*01* to 20*15* but vice versa */
    /* Uses scalar packing (ISO 8601 integer) to avoid irregular month length
     * calculations and cascading checks */
    if (y1 * 10000 + m1 * 100 + d1 > y2 * 10000 + m2 * 100 + d2) {
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", m2, d2, y2, m1, d1,
               y1);
    } else {
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", m1, d1, y1, m2, d2,
               y2);
    }

    return 0;
}
