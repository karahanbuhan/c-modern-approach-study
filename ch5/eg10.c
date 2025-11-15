/* What output does the following program fragment produce? (Assume that i is an integer
variable.)

i = 1;
switch (i % 3) {
case 0: printf("zero");
case 1: printf("one");
case 2: printf("two");
} */

/* It is going to print onetwo as remainder will be 1 because you can't do any division so number itself. It is going to
also print two because of the missing break. */

#include <stdio.h>

int main(void) {
    int i = 1;
    switch (i % 3) {
    case 0: printf("zero");
    case 1: printf("one");
    case 2: printf("two");
    }

    printf("\n");

    return 0;
}
