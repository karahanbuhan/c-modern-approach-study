/* Computes dimensional weight of a box */

#include <stdio.h>

int main(void) {
    int height = 12, length = 10, width = 8, volume = height * length * width;
    /* We are adding 165 before dividing so truncated result is always rounded up */
    printf("Volume (cubic inches): %d\nDimensional Weight (pounds): %d\n", volume, (volume + 165) / 166);
    return 0;
}
