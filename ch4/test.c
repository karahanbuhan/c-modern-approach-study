#include <stdio.h>

int main(void) {
    int i = 3, j = 7, k = 2, a = 1, b = 3, c = 9, d = 11, e = 13, f = 17;
    
    printf("%d\n", i += j += k);

    a = b += c++ - d + --e / -f;
    printf("%d\n", a);

    i = 3, j = 7, k = 2, a = 1, b = 3, c = 9, d = 11, e = 13, f = 17;
    a = (b += (((c++) - d) + ((--e) / (-f))));
    printf("%d\n", a);

    return 0;
}
