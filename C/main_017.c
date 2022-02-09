#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    /* code */

    FILE *file;

    int const msg_size = 64;
    char err_msg[msg_size];
    char file_name[] = "test.txt";
    char mode[] = "r";
    int len;

    memset(err_msg, '\0', msg_size);

    file = fopen(file_name, mode);
    if (file == NULL) {
        sprintf(err_msg, " error(%d) exp: %s for file: <%s>\n", 
        errno, strerror(errno), file_name);
        puts(err_msg);
        exit(-1);
    }

    fseek(file, 0, SEEK_END);
    len = ftell(file);

    printf(" total size of the %s file is: %d bytes.\n", file_name, len);


    puts("\n The End ...\n");
    return EXIT_SUCCESS;
}
