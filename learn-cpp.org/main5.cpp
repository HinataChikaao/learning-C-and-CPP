#include <iostream>
#include <string>

using namespace std;

int main (int const argc, char const *const argv[]) {


	cout << endl;

	/* declaring s string */
	string message = " Mariam and Yasamin ..."; 

	/* writing the initial value to the console */
	cout << " Initial value of message is: " << message << endl;

	cout << " please enter some text: ";
	/* reading text input from the keyboard */
	getline(cin, message);

	/* writing the given text back to the console */
	cout << " you enter: " << message << endl;

	return EXIT_SUCCESS;


}