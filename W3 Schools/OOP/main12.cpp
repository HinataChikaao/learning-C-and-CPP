#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main(int const argc, char const *const argv[]) {

	ofstream myFile("yasamin.txt");

	myFile << "This is first line" << endl;
	myFile << "This is second line" << endl;

	myFile.close();


	return EXIT_SUCCESS;
}
