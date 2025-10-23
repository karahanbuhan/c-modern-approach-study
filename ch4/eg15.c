/* Give the values of i and j after each of the following expression statements has been 
executed. (Assume that i has the value 1 initially and j has the value 2.)
(a) i += j;
(b) i--;
(c) i * j / i;
(d) i % ++j; */

/* My answer is
(a) i = 3, j = 2
(b) i = 2, j = 2
(c) i = 2, j = 2
(d) i = 2, j = 3 */

#include <stdio.h>

int main(void) {
    int i = 1, j = 2;

    i += j;
    printf("(a) i = %d, j = %d\n", i, j);
    i--;
    printf("(b) i = %d, j = %d\n", i, j);
    i * j / i;
    printf("(c) i = %d, j = %d\n", i, j);
    i % ++j;
    printf("(d) i = %d, j = %d\n", i, j);

    return 0;
}

/* Answers are the same! */
