#include <iostream>
#include <string>

using namespace std;

void display_message(string msg = " No Message ...") {
	cout << "Message: " << msg << endl;
}

int main(int const argc, char const *const argv[]) {

	display_message("I am a C/C++ Programmer ...");
	display_message("I am a Assembly Programmer ...");
	display_message();

	
	return EXIT_SUCCESS;
}


