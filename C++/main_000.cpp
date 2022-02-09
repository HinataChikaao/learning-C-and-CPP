#include <iostream>
#include <string>
#include <string.h>
#include <errno.h>

using namespace std;

int main(void) {

    char message[] = "I am a C/C++ Programmer ...";
    string my_message = "I am a C/C++ and Assembly Programmer ...";

    cout << endl << "Hello C++" << endl;
    printf("Hello C++ programming ...\n");
    cout << message << endl;
    cout << my_message << endl;

    FILE* file;
    file = fopen("yasamin.txt", "w");
    if (file == NULL) {
        printf(" error(%d): %s", errno, strerror(errno));
    }

    fwrite(message, (size_t)1, strlen(message), file);

    fclose(file);


    cout << endl << "The End ..." << endl << endl;
    return EXIT_SUCCESS;
}


