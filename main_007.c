#include <stdio.h>
#include <stdlib.h>

void sort_array(int *const a, int const len, int (*compare)(int, int));
void swap(int *const x, int *const y);
void display_array(int const *const x, char const *const name, int const len);
int assending(int x, int y);
int dessending(int x, int y);

void swap(int *const x, int *const y);

int main(void) {
    /* code */

    int num[] = {2, 8, 6, 5, 4, 3, 9};
    int const len = (&num)[1] - num;

    int (*f[2])(int, int) = {assending, dessending};

    for (int i = 0; i < 2; i++) {
        sort_array(num, len, f[i]);
        display_array(num, "num", len);
    }

    return EXIT_SUCCESS;
}

void sort_array(int *const a, int const len, int (*compare)(int, int)) {
    for (int j = 0; j < len; j++) {
        for (int i = 0; i < len - 1; i++) {
            if ((*compare)(a[i], a[i + 1])) {
                swap(a + i, a + i + 1);
            }
        }
    }
}

void swap(int *const x, int *const y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void display_array(int const *const x, char const *const name, int const len) {
    for (int i = 0; i < len; i++) {
        printf(" %s[%d] = %d\n", name, i, x[i]);
    }
}

int assending(int x, int y) {
    return x > y;
}

int dessending(int x, int y) {
    return x < y;
}