/* Only one of the expressions ++i and i++ is exactly the same as (i += 1); which is it?
Justify your answer. */

/* It is ++i because i += 1 is same as (i = i + 1) which also returns the value i + 1 as a RValue,
however i++ is just i as the expression. */

#include <stdio.h>

int main(void) {
    int i;

    i = 10;
    printf("%d ", i += 1);
    i = 10;
    printf("%d\n", ++i);

    i = 10;
    printf("%d ", i += 1);
    i = 10;
    printf("%d\n", i++);

    return 0;
}

/* As you can see in the answer, even the i becomes same after the calculation, rvalues are not. */
