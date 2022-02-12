#include <iostream>

using namespace std;

#define array_size 10

int main(void) {

    cout << endl << "Ramin Just Keep Going ..." << endl;
    cout << "--------------------------------" << endl << endl;

    int* ptr = (int*)malloc(sizeof(int) * array_size);
    
    //int len = sizeof(ptr) / sizeof(*ptr);

    for (int i = 0; i < array_size; i++) {
        *(ptr + i) = 10 + i;
    }


    for (int i = 0; i < array_size; i++) {
        cout << "index[" << i << "] is equals to: " << ptr[i] << endl;
    }

    cout << endl << endl << "The End ..." << endl;
    return EXIT_SUCCESS;
}