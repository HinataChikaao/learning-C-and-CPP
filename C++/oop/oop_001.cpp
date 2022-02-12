#include <iostream>

using namespace std;

class Box {
   public:
    double length;
    double breath;
    double height;
};

int main(void) {
    /* code */

    Box box1;
    Box box2;
    double volume;

    box1.length = 5.0;
    box1.breath = 6.0;
    box1.height = 7.0;

    box2.length = 10.0;
    box2.breath = 11.0;
    box2.height = 12.0;

    volume = box1.breath * box1.height * box1.length;
    cout << "Volume for box1 is: " << volume << endl;

    volume = box2.breath * box2.height * box2.length;
    cout << "Volume for box1 is: " << volume << endl;

    cout << endl
         << "The End ..." << endl;
    return EXIT_SUCCESS;
}
