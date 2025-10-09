/* Modify the program of Programming Project 2 so that it prompts the user to enter the radius
of the sphere. */

#include <stdio.h>

#define PI 3.1415926535f

int main(void) {
    float radius, volume;

    printf("Enter radius of the sphere: ");
    scanf("%f", &radius);

    volume = radius * radius * radius * PI * (4.0f/3.0f);
    printf("Volume of the sphere is: %.2fm3\n", volume);

    return 0;
}
