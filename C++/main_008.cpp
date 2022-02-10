
/* return array from a function in C/C++ */
/* dynamic memory allocation in C/C++ */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#define array_size 10

char *my_format(char *str, int data...);

int main() {

    /* declare an array */
    int n[array_size];

    /* initializing the array by for loop */
    for (int i = 0; i < array_size; ++i) {
        n[i] = i + 10;
    }

    /* print the title names */
    cout << "Element" << setw(13) << "Value" << endl;

    /* print the value of all the array members in for-loop */
    for (int j = 0; j < array_size; ++j) {
        cout << setw(7) << my_format((char *) "n[%d]", j)
             << setw(15) << "Value: " << n[j] << endl;
    }

    /* print the end message */
    cout << endl << "The End ..." << endl;

    /* return success code (0) and terminate the program */
    return EXIT_SUCCESS;
}

/* ----------------------- */

char *my_format(char *const str, int const data...) {

    /* declare and initialize in dynamic memory allocation way. */
    /* the only way that can return an array from a method. */
    char *my_result = (char *) malloc(sizeof(char) * 64);

    /* initialize the my_result */
    sprintf(my_result, str, data);

    /* return the my_result (array) */
    return my_result;

}