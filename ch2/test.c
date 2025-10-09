#include <stdio.h>

#define PI 3.14159f
#define RECIPROCAL_OF_PI (1.0f / PI)

int main() {
    printf("Reciprocal of PI is: %.5f\n",
         RECIPROCAL_OF_PI);
    return 0;
}