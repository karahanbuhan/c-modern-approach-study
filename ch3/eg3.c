/* For each of the following pairs of scanf format strings, indicate whether or not the two
strings are equivalent. If they’re not, show how they can be distinguished.
(a) "%d" versus " %d"
(b) "%d-%d-%d" versus "%d -%d -%d"
(c) "%f" versus "%f "
(d) "%f,%f" versus "%f, %f" */

#include <stdio.h>

int main(void) {
    int x, y, z;
    float k, l;

    /* (a) "%d" versus " %d" */
    printf("Enter input for (a) \"%%d\": ");
    scanf("%d", &x);
    printf("%d\n", x);

    printf("Enter input for (a) \" %%d\": ");
    scanf(" %d", &x);
    printf("%d\n", x);
    /* These two format strings are equivalent */

    /* (b) "%d-%d-%d" versus "%d -%d -%d" */
    printf("Enter input for (b) \"%%d-%%d-%%d\": ");
    scanf("%d-%d-%d", &x, &y, &z);
    printf("%d %d %d\n", x, y, z);

    printf("Enter input for (b) \"%%d -%%d -%%d\": ");
    scanf("%d -%d -%d", &x, &y, &z);
    printf("%d %d %d\n", x, y, z);
    /* Latter is more flexible as it supports whitespace between numbers ß*/

    /* (c) "%f" versus "%f " */
    printf("Enter input for (c) \"%%f\": ");
    scanf("%f", &k);
    printf("%f\n", k);

    printf("Enter input for (c) \"%%f \": ");
    scanf("%f ", &k); /* This scanf breaks the program flow as it requires a character that is not number to stop but it stays in the buffer */
    printf("%f\n", k);
    /* Latter format breaks the program as it fills the scanf buffer with invalid characters */

    /* (d) "%f,%f" versus "%f, %f" */
    printf("Enter input for (d) \"%%f,%%f\": ");
    scanf("%f,%f", &k, &l);
    printf("%f %f\n", k, l);

    printf("Enter input for (d) \"%%f, %%f\": ");
    scanf("%f, %f", &k, &l);
    printf("%f %f\n", k, l);
    /* Latter is more flexible and supports whitespace after the comma */

    return 0;
}
