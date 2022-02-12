#include <iostream>
#include <string>

using namespace std;

class User {

public:
	User() {
		cout << " I am in the User class constructor ..." << endl;
	}
};


int main(int const argc, char const *const argv[]) {

	User user;

	return EXIT_SUCCESS;
}