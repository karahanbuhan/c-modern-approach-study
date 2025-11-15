/* Is the following if statement legal?
if (n >= 1 <= 10)
printf("n is between 1 and 10\n");
If so, what does it do when n is equal to 0? */

/* It is legal, but will not do what is expected. If n is 0:
(0 >= 1) <= 10
0 <= 10
1 */

#include <stdio.h>

int main(void) {
    int n = 0;

    /* Legal but incorrect for case 0 */
    if (n >= 1 <= 10) {
        printf("n is between 1 and 10\n");
    }

    return 0;
}
