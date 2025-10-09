/* In the dweight.c program (Section 2.4), which spaces are essential? */

/* Computes dimensional weight of a box */

#include<stdio.h> /* Apparently this is not essential, didn't know */

int main_o(void) { /* int<space>main_o is mandatory as int is a keyword */
    int height = 12, length = 10, width = 8, volume, weight; /* Same goes here int<space>height */

    volume = height * length * width;
    /* We are adding 165 before dividing so truncated result is always rounded up */
    weight = (volume + 165) / 166;

    printf("Volume (cubic inches): %d\nDimensional Weight (pounds): %d\n", volume, weight); /* We have spaces in string literals so they are necessary for correct format */

    return 0; /* return<space>0 is essential as return is a keyword here */
}

/* Thus the main function can compressed into this: */
int main(void){int height=12,length=10,width=8,volume,weight;volume=height*length*width;weight=(volume+165)/166;printf("Volume (cubic inches): %d\nDimensional Weight (pounds): %d\n",volume,weight);return 0;}
