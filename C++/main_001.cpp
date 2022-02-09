#include <iostream>

void display_array(int* arr, int len);

int main(void) {

    int my_array[] = { 0,1,2,3,4,5,6,7,8,9 };
    int len = sizeof(my_array) / sizeof(*my_array);

    display_array(my_array, len);

    return EXIT_SUCCESS;
}

void display_array(int* arr, int len) {
    for (int i = 0; i < len; i++) {
        std::cout << "number index:" << i << " --> is equals to:" << arr[i] << std::endl;
    }
}
