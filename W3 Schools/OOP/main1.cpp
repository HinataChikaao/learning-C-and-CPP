#include <iostream>
#include <string>

using namespace std;

class myClass {
public:
	int myNum;
	string myString;
	
};


int main(int argc, char const *argv[]) {
	
	myClass myObj;

	myObj.myNum = 110;
	myObj.myString = "I am C++ Developer.";


	cout << myObj.myNum << " - " << myObj.myString << endl;


	return EXIT_SUCCESS;
}