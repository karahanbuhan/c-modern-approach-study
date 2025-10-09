/* Write a program that computes the volume of a sphere with a 10-meter radius, using the for-
mula v = 4/3πr3. Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What hap-
pens?) */

#include <stdio.h>

#define PI 3.1415926535f

int main(void) {
    float radius = 10.0f;
    float volume = radius * radius * radius * PI * 4.0f/3.0f;
    /* float volume = radius * radius * radius * PI * 4/3; The program worked as expected even as 4/3 because radius is float thus 4 is promoted to 4.0f */
    /* float volume = 4/3 * radius * radius * radius * PI; However this breaks the program as 4/3 is now 1 as it started directly from integer operation */
    printf("Volume of the sphere is: %.2fm3\n", volume);
    return 0;
}
