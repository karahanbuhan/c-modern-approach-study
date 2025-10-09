/*
 * Which of the following are not legal C identifiers?
 * (a) 100_bottles
 * (b) _100_bottles
 * (c) one__hundred__bottles
 * (d) bottles_by_the_hundred_
*/

int main(void) {
    int 100_bottles, _100_bottles, one__hundred__bottles, bottles_by_the_hundred;
    /* As the compiler reports, (a) 100_bottles is not legal as it starts with numbers. */
}
