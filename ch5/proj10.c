/* Using the switch statement, write a program that converts a numerical grade
into a letter grade: Enter numerical grade: 84 Letter grade: B Use the following
grading scale: A = 90–100, B = 80–89, C = 70–79, D = 60–69, F = 0–59. Print an
error message if the grade is larger than 100 or less than 0. */

#include <stdio.h>

int main(void) {
    int i;
    printf("Enter numerical grade: ");
    scanf("%d", &i);

    if (i > 100) {
        printf("Error, grade cannot be larger than 100!\n");
        return 0;
    } else if (i < 0) {
        printf("Error, grade cannot be lesser than 0!\n");
        return 0;
    }

    printf("Letter grade: ");
    switch (i / 10) {
        case 9:
        case 10:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        default:
            printf("F");
            break;
    }
    printf("\n");

    return 0;
}
