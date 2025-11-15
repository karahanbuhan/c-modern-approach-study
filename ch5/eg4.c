/* Write a single expression whose value is either –1, 0, or +1, depending on whether i is less
than, equal to, or greater than j, respectively. */

#include <stdio.h>

int main(void) {
    int i = 3, j = 5;

    /* One with a ternary conditional operator
    printf("%d\n", i > j ? 1 : i == j ? 0 : -1);
    */

    printf("%d\n", (i > j) - (i < j));

    return 0;
}
