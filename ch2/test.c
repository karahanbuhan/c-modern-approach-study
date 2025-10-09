#include <stdio.h>

#define PI 3.14159f
#define RECIPROCAL_OF_PI (1.0f / PI)

int main(void) {
    printf("Reciprocal of PI is: %.5f\n",
         RECIPROCAL_OF_PI);

    float a = 3.2;
    printf("%f\n", a);

    return 0;
}
