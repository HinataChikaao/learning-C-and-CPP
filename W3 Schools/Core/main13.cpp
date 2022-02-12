#include <iostream>
#include <string>

using namespace std;


int add(int a, int b);
float add(float a, float b);

int main(int const argc, char const *const argv[]) {

	int r1 = add(110, 120);
	float r2 = add(12.36f, 46.21f);

	cout << r1 << endl;
	cout << r2 << endl;
	
	return EXIT_SUCCESS;
}


int add(int a, int b) {
	return a + b;
}

float add(float a, float b) {
	return a + b;
}