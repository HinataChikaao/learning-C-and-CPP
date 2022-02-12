#include <iostream>
#include <string>

using namespace std;


class Test {
public:
	int x;
	int y;
};


int main(int const argc, char const *const argv[]) {


	Test test;

	test.x = 100;
	test.y = 200;

	cout << test.x << endl << test.y << endl;

	return EXIT_SUCCESS;
}