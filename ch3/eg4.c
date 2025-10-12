/* Suppose that we call scanf as follows:
scanf("%d%f%d", &i, &x, &j);
If the user enters
10.3 5 6
what will be the values of i, x, and j after the call? (Assume that i and j are int variables
and x is a float variable.) */

/* I think, values of i, x, and j will be 1 0.3 and 5 respectively? WRONGGG! */

#include <stdio.h>

int main(void) {
    int i, j;
    float x;
    scanf("%d%f%d", &i, &x, &j);
    printf("%d %f % d\n", i, x, j);
    return 0;
}

/* Apparently it was 10 0.3 and 5 by order. 10 was read and .3 was just converted to 0.3 and then 5 */