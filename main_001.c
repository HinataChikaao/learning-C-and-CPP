#include <stdio.h>
#include <stdlib.h>

int main() {
    /* code */

    int *const x = (int *const)malloc(sizeof(int) * 20);

    for (size_t i = 0; i < 20; i++) {
        x[i] = i + 10;
    }

    for (size_t i = 0; i < 20; i++) {
        printf(" a[%ld] = %d\n", i, x[i]);
    }

    int len = sizeof(x);
    printf("\n The is size of x is: %d\n", len);

    printf("\n\n The End ... \n\n");
    return EXIT_SUCCESS;
}
