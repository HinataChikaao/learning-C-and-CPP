#include <iostream>
#include <string>

using namespace std;


/* Base Class */
class Vehicle {
public:
	string brand;
	void honk() {
		cout << "Tuut, tuut, " << endl;
	}
};


class Car : public Vehicle {
public:
	string model;
};




int main(int const argc, char const *const argv[]) {

	Car myCar;

	myCar.model = "Benz";
	myCar.honk();
	cout << myCar.model << endl;

	return EXIT_SUCCESS;
}