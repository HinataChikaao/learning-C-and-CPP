#include <postgresql/libpq-fe.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    /* code */
    
    int ver = PQlibVersion();
    printf(" postgersql driver version is: %d", ver);
    
    
    return EXIT_SUCCESS;
}
