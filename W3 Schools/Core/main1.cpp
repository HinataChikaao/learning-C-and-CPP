#include <iostream>
#include <string>

using namespace std;



int main(int const argc, char const *const argv[]) {


	string name = "Yasamin";
	string family = "Hoobakht";

	string fullName = name.append(" ").append(family);

	cout << fullName << endl;

	
	return EXIT_SUCCESS;
}