#include <iostream>

int* get_array();

int main(void) {

    puts("\nRamin Just Keep Going ...");
    puts("--------------------------");

    int* num;

    num = get_array();
    for (size_t i = 0; i < 10; i++) {
        std::cout << "for index: " << i << " -->> number is: " << num[i] << std::endl;
    }

    puts("\n The End ...\n\n");
    return EXIT_SUCCESS;
}

int* get_array() {
    int* numbers = (int*)malloc(sizeof(int) * 10);
    for (int i = 0; i < 10;i++) {
        *(numbers + i) = i + 10;
    }
    return numbers;
}
