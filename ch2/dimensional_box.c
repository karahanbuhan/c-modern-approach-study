#include <stdio.h>

int main() {
    int height, length, width, volume, weight;
    height = 12;
    length = 10;
    width = 8;

    volume = height * length * width;
    /* We are adding +165 before dividing so truncated result is always rounded up */
    weight = (volume + 165) / 166;

    printf("Volume (m3): %d\nDimensional Weight (pounds): %d\n", volume, weight);

    return 0;
}