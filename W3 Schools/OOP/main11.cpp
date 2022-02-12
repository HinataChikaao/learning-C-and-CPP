#include <iostream>
#include <string>

using namespace std;


/* Base Class */
class Animal {
public:
	void animalSound() {
		cout << " The animal makes a sound ..." << endl;
	}
};


/* Derived Class */
class Pig : public Animal {
public:
	void animalSound() {
		cout << " The Pig says: wee wee ..." << endl;
	}
};

class Dog : public Animal {
public:
	void animalSound() {
		cout << " The Dog says: hop hop ... " << endl;	
	}
};



int main(int const argc, char const *const argv[]) {

	Animal animal;
	Pig pig;
	Dog dog;

	animal.animalSound();
	pig.animalSound();
	dog.animalSound();


	return EXIT_SUCCESS;
}