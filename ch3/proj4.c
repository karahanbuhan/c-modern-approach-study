/* Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-
xxxx and then displays the number in the form xxx.xxx.xxx:
Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
You entered 404.817.6900 */

#include <stdio.h>

int main(void) {
    int part1, part2, part3;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%3d) %3d-%4d", &part1, &part2, &part3);

    printf("You entered %.3d.%.3d.%.4d\n", part1, part2, part3);

    return 0;
}
