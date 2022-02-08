#include <stdio.h>
#include <stdlib.h>

#define SIZEOF(arr) (sizeof(arr) / sizeof(*arr))


int main(void) {
    /* code */

    int a[] = {1,2,3,4,5,6,7,8,9};

    size_t size = SIZEOF(a);
    printf(" the size of array is: %ld\n", size);



    return EXIT_SUCCESS;
}
