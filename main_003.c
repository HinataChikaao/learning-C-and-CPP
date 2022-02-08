#include <stdio.h>
#include <stdlib.h>

/* Ramin, Just keep going ... */

int main(void) {
    /* code */

    int *a = (int *) malloc(sizeof(int) * 7);
    size_t len = sizeof(a) / sizeof(a[0]);

    for (size_t i = 0; i < len; i++) {
        a[i] = i;
    }

    for (size_t i = 0; i < len; i++) {
        printf(" a[%ld] = %d\n", i, a[i]);
    }

    puts("\n");

    printf(" index zero address is: %p\n", (void *) a);
    printf(" index [0]  address is: %p\n", (void *) &a[0]);
    puts("****************");
    printf(" index zero value is: %d\n", *a);
    printf(" index [0] value is : %d\n", a[0]);

    puts("---------------------------------------------------");
    return EXIT_SUCCESS;
}
