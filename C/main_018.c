#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {


    puts(" Ramin, Just keep going ...");
    puts("---------------------------");

    FILE* file;
    char msg[] = "Mariam and Yasamin";
    char err_msg[64];

    file = fopen("test.txt", "w");
    if (file == NULL) {
        sprintf(err_msg, "error (%d) exp: %s\n", errno, strerror(errno));
        perror(err_msg);
        exit(-1);
        }

    fwrite(msg, 1, strlen(msg), file);
    fclose(file);

    puts("\n The End ...\n");
    return EXIT_SUCCESS;
    }
