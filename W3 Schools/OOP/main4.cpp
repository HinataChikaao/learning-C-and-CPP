#include <iostream>
#include <string>

using namespace std;


class MyClass {
public:
	void myMethod();
};

void MyClass::myMethod() {
	cout << " I am in the myMethod ..." << endl;
}


int main(int argc, char const *argv[]) {
	
	MyClass myObj;

	myObj.myMethod();


	return 0;
}