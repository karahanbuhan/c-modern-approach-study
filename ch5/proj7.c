/* Write a program that finds the largest and smallest of four integers entered by the user:
Enter four integers: 21 43 10 35
Largest: 43
Smallest: 10
Use as few if statements as possible. */

#include <stdio.h>

int main(void) {
    int i1, i2, i3, i4, small1, small2, big1, big2, min, max;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

    /* Tournament Method makes most sense here, we will pick winners and compare */
    if (i1 > i2) {
        big1 = i1;
        small1 = i2;
    } else {
        big1 = i2;
        small1 = i1;
    }

    if (i3 > i4) {
        big2 = i3;
        small2 = i4;
    } else {
        big2 = i4;
        small2 = i3;
    }

    if (big1 > big2) {
        max = big1;
    } else {
        max = big2;
    }

    if (small1 < small2) {
        min = small1;
    } else {
        min = small2;
    }

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);

    return 0;
}
