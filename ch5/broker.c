/* Calculates a broker's commission */

#include <stdio.h>

int main(void) {
    float amount = 0.00f, comission = 0.00f;

    printf("Enter value of trade: ");
    scanf("%f", &amount);

    if (amount < 2500.00f) {
        comission = 30.0f + amount * (1.70f/100.00f);
    } else if (amount < 6250.00f) {
        comission = 56 + amount * (0.66f/100.00f);
    } else if (amount < 20000.00f) {
        comission = 76 + amount * (0.34f/100.00f);
    } else if (amount < 50000.00f) {
        comission = 100 + amount * (0.22f/100.00f);
    } else {
        comission = 255 + amount * (0.09f/100.00f);
    }

    if (comission < 39.00f) {
        printf("The minimum comission is $39!\n");
        comission = 39.00f;
    }
    
    printf("Comission: $%.2f\n", comission);

    return 0;
}
