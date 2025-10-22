/* Repeat Exercise 5 for C99. */

/* What is the value of each of the following expressions in C89? (Give all possible values if
an expression may have more than one value.)
(a) 8 % 5
(b) -8 % 5
(c) 8 % -5
(d) -8 % -5 */

/* My answers are:
(a) 3
(b) -3
(c) 3
(d) -3 */

#include <stdio.h>

int main(void) {
    int i = 8, j = 5;
    printf("(a) %d\n(b) %d\n(c) %d\n(d) %d\n", i % j, -i % j, i % -j, -i % -j);
    return 0;
}
