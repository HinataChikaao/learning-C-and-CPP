#include <iostream>
#include <string>

using namespace std;


int main(int const argc, char const *const argv[]) {

	string cars[] = {"Benz", "BMW", "Volvo", "Opel"};

	cout << sizeof(cars) / sizeof(*cars) << endl;

	
	return EXIT_SUCCESS;
}