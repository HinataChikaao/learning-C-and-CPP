#include <stdio.h>
#include <stdlib.h>

int main(void) {
    /* code */

    FILE *file;
    char buff[16];
    char *ch;

    file = fopen("main10.c", "r");
    if (file == NULL) {
        perror(" File not found ...");
    } else {
        do {
            ch = fgets(buff, 15, file);
            printf(buff);
        } while (!feof(file));
    }

    fclose(file);

    puts(" The End ...");
    return EXIT_SUCCESS;
}
