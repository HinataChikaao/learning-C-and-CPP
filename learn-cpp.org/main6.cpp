#include <iostream>

using namespace std;



int main (int argc, char const *const qrgv[]) {

	int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (const int num : numbers) {
		cout << "Number is: " << num << endl;
	}


	return EXIT_SUCCESS;
}