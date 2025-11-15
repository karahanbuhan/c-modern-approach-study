/* The following if statement is unnecessarily complicated. Simplify it as much as possible.
if (age >= 13)
if (age <= 19)
teenager = true;
else
teenager = false;
else if (age < 13)
teenager = false; */

/* What we want is a statement to say if age is between (inclusive) 13 to 19 teenager, else is not. */

#include <stdio.h>

int main(void) {
    int age = 17, teenager = (age >= 13) - (age > 19);

    printf("%d years old is%s a teenager.\n", age, teenager ? "" : "n't");

    return 0;
}
