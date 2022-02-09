#include <iostream>
//#include <string>

using namespace std;

int main(void) {

    string str1 = "Hello";
    string str2 = "world";
    string str3;

    /* string object assignment */
    str3 = str1;
    cout << "str3 is equals to: " << str3 << endl;

    /* string concatenate */
    str3 = str1 + " " + str2;
    cout << "str3 is equals to: " << str3 << endl;
    
    /* getting string size */
    cout << "str3 size is equals to: " << str3.size() << endl;

    /* display end message */
    cout << endl << "The End ..." << endl;
    
    /* return successfull code and end the program */
    return EXIT_SUCCESS;
}
