#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	
	char str1[] = "This is a first string ";
	char str2[] = "This is a second string";

	
	printf(" before concatenate str1 = %s\n", str1);
	
	strncat(str1, "-  ", 2);
	strncat(str1, str2, strlen(str2));

	printf(" before concatenate str1 = %s\n", str1);




	puts(" The End ...");
	return EXIT_SUCCESS;
}