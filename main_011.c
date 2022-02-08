#include <stdio.h>
#include <stdlib.h>

int main(void) {
    /* code */

    char msg[256];
    sprintf(msg, "%s = %d", "1 + 2", 3);
    printf(" %s\n", msg);

    return EXIT_SUCCESS;
}
