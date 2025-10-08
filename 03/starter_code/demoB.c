#include <stdio.h>

int main(void) {
    int count = 0;
    char letter;
    scanf(" %c", &letter);
    while (letter != 'q') {
        count++;
        scanf(" %c", &letter);
    }

    printf("count: %d\n", count);

    return 0;
}