#include <iostream>

using namespace std;

int main() {
	
	int a = 5;
	int *b = 0;

	cout << endl;

	cout << " \"b\" is initialized and pointing to memmory-address: " << b << endl << endl;

	b = &a;

	cout << " \"a\" is stored at memmory-address: " << &a << endl;
	cout << " \"b\" is stored at memmory-address: " << &b << endl;
	cout << " \"b\" is pointing to memmory-address now: " << b << endl << endl;
	cout << " the value of a is: " << a << endl;
	cout << " the value of the area \"b\" is pointing to is: " << *b << endl << endl;

	*b = 10;

	cout << " \"a\" is still stored at memmory-address: " << &a << endl;
	cout << " \"b\" is still stored at memmory-address: " << &b << endl;
	cout << " \"b\" is still pointing to memmory-address: " << b << endl << endl;

	cout << " the value of \"a\" is now: " << a << endl;
	cout << " the value of the area \"b\" is pointing to is now: " << *b << endl;


	return EXIT_SUCCESS;
}