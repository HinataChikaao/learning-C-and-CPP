#include <iostream>
#include <string>

using namespace std;

class Car {
public:
	string brand;
	string model;
	int year;
};



int main(int argc, char const *argv[]) {
	
	Car bmw;
	Car ford;

	bmw.brand = "BMW";
	bmw.model = "X5";
	bmw.year = 1999;

	ford.brand = "Ford";
	ford.model = "Mustang";
	ford.year = 1969;

	cout << " My BMW is: " << bmw.brand << " - " << bmw.model << " - " << bmw.year << endl;
	cout << " My Ford is: " << ford.brand << " - " << ford.model << " - " << ford.year << endl;


	return EXIT_SUCCESS;
}