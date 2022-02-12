#include <iostream>
#include <string>

using namespace std;

class Person {

private:
	long personId;
	string firstName;
	string lastName;
	int age;

public:
	void setPersonId(long id) {
		this->personId = id;
	}

	long getPersonid() {
		return this->personId;
	}

	void setFirstName(string name) {
		this->firstName = name;
	}

	string getFirstName() {
		return this->firstName;
	}

	void setLastName(string family) {
		this->lastName = family;
	}

	string getLastName() {
		return this->lastName;
	}

	void setAge(int age) {
		this->age = age;
	}

	int getAge() {
		return this->age;
	}

	void dispalyFullname();

};

void Person::dispalyFullname() {
	cout << this->firstName << " " << this->lastName << endl;
}


int main(int argc, char const *argv[]) {

	Person mariam;

	mariam.setFirstName("Mariam");
	mariam.setLastName("Rohani");
	mariam.setAge(40);

	cout << endl;
	mariam.dispalyFullname();


	return 0;
}