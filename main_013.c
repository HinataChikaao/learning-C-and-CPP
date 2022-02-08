#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	
	char str1[] = "This is a first string ";

	char *result = strchr(str1, 'i');

	puts(result);

	puts(" The End ...");
	return EXIT_SUCCESS;
}