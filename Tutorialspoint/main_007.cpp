#include <iostream>

using std::cout;
using std::endl;

int main(void) {

    /* declare and assign the size of array */
    int const size = 10;

    /* declare and assign array of integer numbers */
    int numbers[size] = { 1,2,3,4,5,6,7,8,9,0 };

    /* declare a pointer */
    int* ptr;

    /* initialize ptr pointer to point to the array address */
    ptr = numbers;

    /* print the address and the value of each element of the array */
    for (int i = 0; i < size; i++) {
        cout << "The Address of numbers[" << i << "] is: ";
        cout << ptr << endl;
        cout << "The value of   numbers[" << i << "] is: ";
        cout << *ptr << endl;

        cout << endl;
        ptr++;
    }

    /* display the end message */
    cout << endl << "The End ..." << endl;

    /* return the success code (0) and terminate the program */
    return EXIT_SUCCESS;
}
