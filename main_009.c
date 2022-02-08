#include <stdio.h>
#include <stdlib.h>

int main(void) {
    /* code */

    char ch;
    printf(" Enter a character: ");
    while ((ch = getchar()) != EOF) {
        printf(" the character you type is: %c\n", ch);
        printf(" Enter a character: ");
    }

    return EXIT_SUCCESS;
}
