#include <iostream>
#include <string>

using namespace std;


int main(int const argc, char const *const argv[]) {

	try {

		int age = 15;

		if(age >= 18) {
			cout << " Accress granted, you are old enough ..." << endl;
		} else {
			throw (505);
		}

	} catch(int num) {
		cout << " Access denied, you must be at leat 18 years old ..."  << endl;
		cout << " error number is: " << num << endl; 
	}

	cout << " The End ..." << endl;

	return EXIT_SUCCESS;
}