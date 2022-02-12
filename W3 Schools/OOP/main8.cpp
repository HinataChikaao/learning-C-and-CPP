#include <iostream>
#include <string>

using namespace std;

class User {

private:
	long userId;
	string username;
	string password;

public:
	User(long id, string un, string pass); 

	long getUserId(){
		return this->userId;
	}

	string getUsername() {
		return this->username;
	}

	string getPassword() {
		return this->password;
	}
};

User::User(long id, string un, string pass) {
		this->userId = id;
		this->username = un;
		this->password = pass;
}



int main(int const argc, char const *const argv[]) {

	User user(1001, "Mariam", "1234");

	cout << endl << " " << user.getUserId() << " - " << user.getUsername() 
		 << " - " << user.getPassword() << endl << endl;

	return EXIT_SUCCESS;
}