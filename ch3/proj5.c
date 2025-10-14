/* Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then
displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns,
and diagonals:
Enter the numbers from 1 to 16 in any order:
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
16 3 2 13
5 10 11 8
9 6 7 12
4 15 14 1
Row sums: 34 34 34 34
Column sums: 34 34 34 34
Diagonal sums: 34 34
If the row, column, and diagonal sums are all the same (as they are in this example), the
numbers are said to form a magic square. The magic square shown here appears in a 1514
engraving by artist and mathematician Albrecht Dürer. (Note that the middle numbers in the
last row give the date of the engraving.) */

#include <stdio.h>

int main(void) {
    int c11, c12, c13, c14, c21, c22, c23, c24, c31, c32, c33, c34, c41, c42, c43, c44;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &c11, &c12, &c13, &c14, &c21, &c22, &c23, &c24, &c31, &c32, &c33, &c34, &c41, &c42, &c43, &c44);

    printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n", c11, c12, c13, c14, c21, c22, c23, c24, c31, c32, c33, c34, c41, c42, c43, c44);
    printf("Row sums: %d %d %d %d\n", c11 + c12 + c13 + c14, c21 + c22 + c23 + c24, c31 + c32 + c33 + c34, c41 + c42 + c43 + c44);
    printf("Column sums: %d % d %d %d\n", c11 + c21 + c31 + c41, c12 + c22 + c32 + c42, c13 + c23 + c33 + c43, c14 + c24 + c34 + c44);
    printf("Diagonal sums: %d %d\n", c11 + c22 + c33 + c44, c14 + c23 + c32 + c41);



    return 0;
}
