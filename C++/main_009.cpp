#include <iostream>

using namespace std;

int *get_array(unsigned int const array_size);

int main(void) {
    /* code */

    int const size = 10;
    int *my_array;

    cout << "-------------------------------" << endl;

    my_array = get_array(size);
    for (int i = 0; i < size; i++) {
        cout << "array[" << i << "] = " << *(my_array + i) << endl;
    }

    cout << "-------------------------------" << endl;

    my_array = &get_array(size)[size - 1];
    for (int i = 0; i < size; i++) {
        cout << "array[" << (size - 1) - i << "] = " << *(my_array - i) << endl;
    }

    cout << "-------------------------------" << endl;

    cout << endl
         << "The End" << endl;
    return EXIT_SUCCESS;
}

int *get_array(unsigned int const array_size) {
    if (array_size < 1) return nullptr;
    int *numbers = (int *)malloc(sizeof(int) * array_size);
    for (unsigned int i = 0; i < array_size; i++) {
        *(numbers + i) = i + 10;
    }
    return numbers;
}