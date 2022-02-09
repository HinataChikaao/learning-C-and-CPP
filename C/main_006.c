#include <stdio.h>
#include <stdlib.h>

int main(void) {
    /* code */

    int a = 110;
    int *const p = &a;

    *p = 120;

    printf(" the value of a is: %d\n", a);
    printf(" the value of p is: %d\n", *p);

    return EXIT_SUCCESS;
}
