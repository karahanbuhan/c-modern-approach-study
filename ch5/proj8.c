/* The following table shows the daily flights from one city to another:
Departure time  Arrival time
8:00 a.m.       10:16 a.m.
9:43 a.m.       11:52 a.m.
11:19 a.m.      1:31 p.m.
12:47 p.m.      3:00 p.m.
2:00 p.m.       4:08 p.m.
3:45 p.m.       5:55 p.m.
7:00 p.m.       9:20 p.m.
9:45 p.m.       11:58 p.m.
Write a program that asks user to enter a time (expressed in hours and minutes,
using the 24- hour clock). The program then displays the departure and arrival
times for the flight whose departure time is closest to that entered by the
user: Enter a 24-hour time: 13:15 Closest departure time is 12:47 p.m., arriving
at 3:00 p.m. */

#include <stdio.h>

int main(void) {
    /* The reason we have so much variables from d(eparture)1 to a(rrival8) is
    that I wanted to make the table easy to update without changing control
    logic, you can just set different departure and arrivals and they are still
    mapped d1
    -> a1, d2 -> a2...*/
    int d1, d2, d3, d4, d5, d6, d7, d8, a1, a2, a3, a4, a5, a6, a7, a8;
    int hour, minute, i;
    int current_diff, min_diff;
    int cd, cd_h, cd_m, ca, ca_h, ca_m;

    /* Simple timestamp logic will fit here, we will use minutes as the smallest
     * unit */
    d1 = 8 * 60;
    d2 = 9 * 60 + 43;
    d3 = 11 * 60 + 19;
    d4 = 12 * 60 + 47;
    d5 = 14 * 60 + 00;
    d6 = 15 * 60 + 45;
    d7 = 19 * 60;
    d8 = 21 * 60 + 45;
    a1 = 10 * 60 + 16;
    a2 = 11 * 60 + 52;
    a3 = 13 * 60 + 31;
    a4 = 15 * 60;
    a5 = 16 * 60 + 8;
    a6 = 17 * 60 + 55;
    a7 = 21 * 60 + 20;
    a8 = 23 * 60 + 58;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    i = hour * 60 + minute;

    /* Simply compare each difference and save to minimum if minimum */
    ca = a1;
    cd = d1;

    min_diff = d1 > i ? d1 - i : i - d1;
    /* Support for circular day system to get the closest departure time from
     * yesterday */
    if (min_diff > 720) {
        min_diff = 1440 - min_diff;
    }

    current_diff = (d2 > i ? d2 - i : i - d2);
    if (current_diff > 720) {
        /* So if input is 01:00 and departure is 23:45, the current_dif will be
         * 1365, we subtract from 24 hours to find 1 hour 45 minutes, the
         * circular distance */
        current_diff = 1440 - current_diff;
    }
    if (min_diff > current_diff) {
        min_diff = current_diff;
        ca = a2;
        cd = d2;
    }

    current_diff = (d3 > i ? d3 - i : i - d3);
    if (current_diff > 720) {
        current_diff = 1440 - current_diff;
    }
    if (min_diff > current_diff) {
        min_diff = current_diff;
        ca = a3;
        cd = d3;
    }

    current_diff = (d4 > i ? d4 - i : i - d4);
    if (current_diff > 720) {
        current_diff = 1440 - current_diff;
    }
    if (min_diff > current_diff) {
        min_diff = current_diff;
        ca = a4;
        cd = d4;
    }

    current_diff = (d5 > i ? d5 - i : i - d5);
    if (current_diff > 720) {
        current_diff = 1440 - current_diff;
    }
    if (min_diff > current_diff) {
        min_diff = current_diff;
        ca = a5;
        cd = d5;
    }

    current_diff = (d6 > i ? d6 - i : i - d6);
    if (current_diff > 720) {
        current_diff = 1440 - current_diff;
    }
    if (min_diff > current_diff) {
        min_diff = current_diff;
        ca = a6;
        cd = d6;
    }

    current_diff = (d7 > i ? d7 - i : i - d7);
    if (current_diff > 720) {
        current_diff = 1440 - current_diff;
    }
    if (min_diff > current_diff) {
        min_diff = current_diff;
        ca = a7;
        cd = d7;
    }

    current_diff = (d8 > i ? d8 - i : i - d8);
    if (current_diff > 720) {
        current_diff = 1440 - current_diff;
    }
    if (min_diff > current_diff) {
        min_diff = current_diff;
        ca = a8;
        cd = d8;
    }

    cd_h = cd / 60;
    cd_m = cd % 60;
    ca_h = ca / 60;
    ca_m = ca % 60;
    /* Convert back to 12-hour time */
    printf("Closest departure time is ");
    if (cd_h == 0) {
        printf("12:%02d a.m.", cd_m);
    } else if (cd_h == 12) {
        printf("12:%02d p.m.", cd_m);
    } else if (cd_h > 12) {
        printf("%d:%02d p.m.", cd_h - 12, cd_m);
    } else {
        printf("%d:%02d a.m.", cd_h, cd_m);
    }
    printf(", arriving at ");
    if (ca_h == 0) {
        printf("12:%02d a.m.\n", ca_m);
    } else if (ca_h == 12) {
        printf("12:%02d p.m.\n", ca_m);
    } else if (ca_h > 12) {
        printf("%d:%02d p.m.\n", ca_h - 12, ca_m);
    } else {
        printf("%d:%02d a.m.\n", ca_h, ca_m);
    }

    return 0;
}
