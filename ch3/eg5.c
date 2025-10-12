/* Suppose that we call scanf as follows:
scanf("%f%d%f", &x, &i, &y);
If the user enters
12.3 45.6 789
what will be the values of x, i, and y after the call? (Assume that x and y are float vari-
ables and i is an int variable.) */

/* I think, values of x, i, and y will be 12.3, 45, and 0.6 respectively? CORRECT! */

#include <stdio.h>

int main(void) {
    float x, y;
    int i;
    scanf("%f%d%f", &x, &i, &y);
    printf("%f %d % f\n", x, i, y);
    return 0;
}
