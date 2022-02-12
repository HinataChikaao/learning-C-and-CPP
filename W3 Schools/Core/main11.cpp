#include <iostream>
#include <string>

using namespace std;


int main(int const argc, char const *const argv[]) {

	string food = "Pizza";
	string *ptr = &food;

	cout << endl;
	cout << " food    is: " << food << endl;
	cout << " food   ref: " << &food << endl;
	cout << endl;
	cout << " ptr     is:" << *ptr << endl;
	cout << " ptr ref to:" <<  ptr << endl;
	cout << " ptr ref is:" << &ptr << endl;


	
	return EXIT_SUCCESS;
}