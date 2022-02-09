#include <stdio.h>
#include <stdlib.h>

int main(void) {
    /* code */

    int *a = (int *)malloc(sizeof(int) * 5);
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;
    a[3] = 3;
    a[4] = 4;

    for (size_t i = 0; i < 5; i++) {
        printf(" a[%ld] = %d\n", i, a[i]);
    }

    a = (int *)malloc(sizeof(int) * 50);

    size_t len = (&a)[1] - a;

    puts("---------------------------------------");
    printf(" the address is: %ls\n", &a[0]);
    printf(" the size of array is: %ld\n", len);
    puts("---------------------------------------");

    for (size_t i = 0; i < 50; i++) {
        printf(" a[%ld] = %d\n", i, a[i]);
    }

    return EXIT_SUCCESS;
}
