/* Modify the broker.c program of Section 5.2 by making both of the following changes:
(a) Ask the user to enter the number of shares and the price per share, instead of the value
of the trade.
(b) Add statements that compute the commission charged by a rival broker ($33 plus 3¢ per
share for fewer than 2000 shares; $33 plus 2¢ per share for 2000 shares or more). Display
the rival’s commission as well as the commission charged by the original broker. */

/* Calculates a broker's commission */

#include <stdio.h>

int main(void) {
    int shares;
    float price, value, comission, rival_comission;

    printf("Enter the number of shares: ");
    scanf("%d", &shares);
    printf("Enter the price per share: ");
    scanf("%f", &price);
    value = price * shares;

    if (value < 2500.00f) {
        comission = 30.0f + value * (1.70f/100.00f);
    } else if (value < 6250.00f) {
        comission = 56 + value * (0.66f/100.00f);
    } else if (value < 20000.00f) {
        comission = 76 + value * (0.34f/100.00f);
    } else if (value < 50000.00f) {
        comission = 100 + value * (0.22f/100.00f);
    } else {
        comission = 255 + value * (0.09f/100.00f);
    }

    if (comission < 39.00f) {
        printf("The minimum comission is $39!\n");
        comission = 39.00f;
    }

    if (shares < 2000) {
        rival_comission = 33.0f + 0.03f * shares;
    } else {
        rival_comission = 33.0f + 0.02f * shares;
    }
    
    printf("Original Broker's Comission: %.2f\n", comission);
    printf("Rival Broker's Comission: %.2f\n", rival_comission);

    return 0;
}
