/* Supply parentheses to show how a C compiler would interpret each 
of the following expressions.
(a) a * b - c * d + e
(b) a / b % c / d
(c) - a - b + c - + d
(d) a * - b / c - d 

My answers are:
(a) (((a * b) - (c * d)) + e)
(b) (((a / b) % c) / d)
(c) ((((-a) - b) + c) - (+d))
(d) (((a * (-b)) / c) - d) */

#include <stdio.h>

int main(void) {
    int a = -6, b = 5, c = 19, d = 33, e = 11;

    printf("(a) %d %d\n" , a * b - c * d + e, (((a * b) - (c * d)) + e));
    printf("(b) %d %d\n", a / b % c / d, (((a / b) % c) / d));
    printf("(c) %d %d\n", - a - b + c - + d, ((((-a) - b) + c) - (+d)));
    printf("(d) %d %d\n", a * - b / c - d, (((a * (-b)) / c) - d));
    
    return 0;
}

/* Looks correct! Both answers are the same. */
