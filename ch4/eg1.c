/* Show the output produced by each of the following program fragments. Assume that i, j,
and k are int variables.

(a) i = 5; j = 3;
    printf("%d %d", i / j, i % j);

(b) i = 2; j = 3;
    printf("%d", (i + 10) % j);

(c) i = 7; j = 8; k = 9;
    printf("%d", (i + 10) % k / j);

(d) i = 1; j = 2; k = 3;
    printf("%d", (i + 5) % (j + 2) / k); 
    
My answers are: 
(a) 1 2 
(b) 0
(c) 1
(d) 0 */

#include <stdio.h>

int main(void) {
    printf("(a) %d %d\n", 5 / 3, 5 % 3);
    printf("(b) %d\n", (2 + 10) % 3);
    printf("(c) %d\n", (7 + 10) % 9 / 8);
    printf("(d) %d\n", (1 + 5) % (2 + 2) / 3);
    return 0;
}

/* Output is: 
(a) 1 2
(b) 0
(c) 1
(d) 0 
Which is correct! */
