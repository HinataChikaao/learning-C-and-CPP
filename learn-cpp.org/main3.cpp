#include <iostream>

using namespace std;


int main(int const argc, char const *const argv[]) {
	
	enum color {blue, red, green} mycolors;

	mycolors = green;

	cout << mycolors << endl;

	return 0;
}