#include <stdio.h>
#include <stdlib.h>

int main() {
    /**/

    int size = 100;
    int *const a = (int *)malloc(sizeof(int) * size);

    for (int i = 0; i < size; i++) {
        a[i] = i + 10;
    }

    for (int i = 0; i < size; i++) {
        printf(" a[%d] = %d\n", i, a[i]);
    }

    int len = sizeof(a) / sizeof(a[0]);
    printf(" Size of array is: %d", len);

    printf("\n\n The End ... \n\n");
    return EXIT_SUCCESS;
}
