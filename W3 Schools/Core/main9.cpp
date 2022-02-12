#include <iostream>
#include <string>

using namespace std;


int main(int const argc, char const *const argv[]) {

	//string food = "Pizza";
	//string &meal = food;

	int a = 10;
	int *b = &a;

	//cout << " value of food: " << food << endl;
	//cout << " value of meal: " << meal << endl;

	*b = 11;

	cout << " value of a: " << a << endl;
	cout << " value of b: " << *b << endl;

	
	return EXIT_SUCCESS;
}