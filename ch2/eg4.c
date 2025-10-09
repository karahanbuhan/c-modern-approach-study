/* Write a program that declares several int and float variables—without initializing
them—and then prints their values. Is there any pattern to the values? (Usually there isn’t.) */

#include <stdio.h>

int main(void) {
    int a, b, c, d, e, f, g, h, i, j, k, l;
    float m, n, o, p, r, s, t, u, v, w, x, y, z;

    printf("Integers: %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", a, b, c, d, e, f, g, h, i, j, k, l);
    printf("Floats: %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f, %f\n", m, n, o, p, r, s, t, u, v, w, x, y, z);

    return 0;
}

/* An output of this program looks like this:
 *
 * Integers: -276283216, 1, -276283368, 1, 1839787896, 268435455, 644893, 1, -276283368, 1, -276283056, 1
 * Floats: 6535585207098205668527570944.000000, 0.000000, 0.000000, 0.000000, -84334674621049496966793265152.000000, 0.000000, -454197359438129928481928118272.000000, 0.000000, -0.000000, 0.000000, 2.000000, 0.000000, -154811715913845471882642456576.000000  
 *
 * It is not as if there is an exact pattern but lots of 1s, 0.00000s and huge numbers both negative and positive. Output would probably change
 * if you were to run this program in another machine, with another compiler and at another time. I guess.
*/