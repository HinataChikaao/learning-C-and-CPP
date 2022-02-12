#include <iostream>

using namespace std;

struct MyOwnStructure {

	int property_one;
	int property_two;
	char property_three;
	bool property_four;
};

int main(int argc, char const *argv[]) {

	MyOwnStructure demo1, demo2;

	demo1.property_one = 1;
	demo1.property_two = 2;
	demo1.property_three = 'a';
	demo1.property_four = true;

	demo2.property_one = 10;
	demo2.property_two = 20;
	demo2.property_three = 'b';
	demo2.property_four = false;

	cout << demo1.property_one << demo1.property_two << demo1.property_three << demo1.property_four << endl;
	cout << demo2.property_one << demo2.property_two << demo2.property_three << demo2.property_four << endl;

	
	return EXIT_SUCCESS;
}