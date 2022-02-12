#include <iostream>
#include <string>

using namespace std;

class MyClass {
public:
	void myMethod() {
		cout << "Hello World!" << endl;
	}
};



int main(int argc, char const *argv[]) {
	
	MyClass myObj;

	myObj.myMethod();


	return 0;
}