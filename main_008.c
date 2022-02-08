#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    /* code */

    int a;
    char str[50];

    printf(" Enter an Iteger value: ");
    scanf("%d", &a);
    assert(a >= 10);
    printf(" Integer enterd is: %d\n", a);

    printf(" Enter String: ");
    scanf("%s", str);
    assert(str != NULL);
    printf(" String enterd is: %s", str);

    puts("------------------------------------");
    return EXIT_SUCCESS;
}
