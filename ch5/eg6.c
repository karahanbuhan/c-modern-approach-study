/* Is the following if statement legal?
if (n == 1-10)
printf("n is between 1 and 10\n");
If so, what does it do when n is equal to 5? */

/* It is legal but again, not what the print statement says. 
(5 == 1-10)
(5 == -9)
0 */

#include <stdio.h>

int main(void) {
    int n = 5;

    /* 5 is between 1 and 10 yet condition returns 0 */
    if (n == 1-10) {
        printf("n is between 1 and 10\n");
    }

    return 0;
}
