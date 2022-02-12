#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int const argc, char const *const argv[]) {
	
	/* create a text string, which is used to output the text file */
	string text;

	/* read from text file */
	ifstream myFile("yasamin.txt");

	while (getline(myFile, text)) {
		cout << text << endl;
	}


	return EXIT_SUCCESS;
}