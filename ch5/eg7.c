/* What does the following statement print if i has the value 17? What does it print if i has the
value –17? 

printf("%d\n", i >= 0 ? i : -i); */

/* Answer:
17 >= 0 is 1 so i will be printed thus 17
-17 >= 0 is 0 so -i will be printed thus (-17 * -1) = 17
Basically we have a ternary condition operation to get absolute value here.
*/

#include <stdio.h>

int main(void) {
    int i = -17;
    printf("%d\n", i >= 0 ? i : -i);
    return 0;
}
