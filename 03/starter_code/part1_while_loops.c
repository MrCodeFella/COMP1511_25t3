// part1_while_loops.c
//
// Written by YOUR-NAME (zID), 
// on TODAYS-DATE
//
// This program is a simple demonstration of a count loop in c


#include <stdio.h>

int main(void) {
    // TODO: Write your solution here
    // terminal: 0 1 2 3 4 5 6 7 8 9 10
    // x = 11
    printf("Start of loop!\n");
    int x = 0;
    while (x <= 10) {
        printf("%d\n", x);
        x++;
    }

    printf("End of loop!\n");

    return 0;
}
