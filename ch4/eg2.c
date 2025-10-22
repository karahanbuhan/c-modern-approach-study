/* If i and j are positive integers, does (-i)/j always have the same value as -(i/j)? Jus-
tify your answer. */

/* Unfortunately no, dividing negative numbers can have undefined behaviour in C89 */

#include <stdio.h>

int main(void) {
    int i = 9, j = 7;
    printf("%d, %d\n", (-i)/j, -(i/j));
    return 0;
}
