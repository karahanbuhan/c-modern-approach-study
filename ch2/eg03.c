/* Condense the dweight.c program by (1) replacing the assignments to height,
length, and width with initializers and (2) removing the weight variable, instead cal-
culating (volume + 165) / 166 within the last printf. */

#include <stdio.h>

int main(void) {
    int height = 12, length = 10, width = 8, volume = height * length * width;
    /* We are adding 165 before dividing so truncated result is always rounded up */
    printf("Volume (cubic inches): %d\nDimensional Weight (pounds): %d\n", volume, (volume + 165) / 166);
    return 0;
}
