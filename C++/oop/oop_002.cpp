#include <iostream>

using namespace std;

class Box {
   public:
    /* peroperties */
    double length;
    double breadth;
    double height;

    /* member functions declaration */
    double getVolume(){
        return length * height * breadth;
    }
    void setLength(double len);
    void setBreadth(double brd);
    void setHeight(double hei);
};

/* member function definitions */
/* double Box::getVolume() {
    return length * height * breadth;
}
 */
void Box::setLength(double len) {
    this->length = len;
}

void Box::setHeight(double hei) {
    this->height = hei;
}

void Box::setBreadth(double brd) {
    this->breadth = brd;
}

int main(void) {
    /* code */

    Box box1;
    Box box2;

    box1.setBreadth(5.0);
    box1.setHeight(6.0);
    box1.setLength(7.0);

    box2.setBreadth(15.0);
    box2.setHeight(16.0);
    box2.setLength(17.0);

    cout << "Box one volume is: " << box1.getVolume() << endl;
    cout << "Box two volume is: " << box2.getVolume() << endl;

    cout << endl
         << "The End ..." << endl;
    return EXIT_SUCCESS;
}
