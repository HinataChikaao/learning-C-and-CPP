#include <iostream>
#include <string>

using namespace std;

int main(int const argc, char const *const argv[]) {

	string name = "Yasamin";


	for(char ch : name) {
		cout << ch << endl << "-" << endl;
	}

	for (int i = 0; i < name.length(); ++i) {
		cout << name[i] << " - ";
	}

	cout << endl;

	name[0] = 'J';
	cout << name << endl;

	
	return EXIT_SUCCESS;
}