/* Computes the dimensional weight of a box from input provided by the user */

#include <stdio.h>

#define INCHES_PER_POUND 166

int main() {
    int height, length, width, volume, weight;

    printf("Enter height of the box: ");
    scanf("%d", &height);

    printf("Enter length of the box: ");
    scanf("%d", &length);

    printf("Enter width of the box: ");
    scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("Volume (cubic inches): %d\nDimensional Weight (pounds): %d\n", volume, weight);

    return 0;
}