#include <iostream>

using namespace std;

int square(int n);

int main(int argc, char const *const argv[]) {

	int a = 10;
	int result = square(a);
	cout << "Result of square is: " << result << endl;

	return EXIT_SUCCESS;
}

int square(int n) {
	return n * n;
}