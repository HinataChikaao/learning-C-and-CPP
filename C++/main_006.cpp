#include <iostream>

int main(void) {

    std::string message = "I am a C/C++ Programmer";
    int length = message.size();
    
    std::cout << "message is: " << message << std::endl;
    std::cout << "Size of the message is: " << length << std::endl;

    std::cout << std::endl << "The End ..." << std::endl;
    return EXIT_SUCCESS;
}
