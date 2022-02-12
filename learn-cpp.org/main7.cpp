#include <iostream>

using namespace std;

int main(int argc, char const *const agrv[]) {


	/* the value we are searching */
	int searched = 5;

	/* the variable to which we will write user's guesses */
	int given = -1;


	cout << " This is simple guessing game ..." << endl;
	//cout << " Please enter a number: ";


	while(searched != given) {

		/* Read a value from the keyboard */
		cout << " Please enter a number: ";
		cin >> given;
		//cout << " Thank you for your guess ..." << endl;
	}

	cout << " You found the courrect number. Good bye ..." << endl;

	return EXIT_SUCCESS;
}