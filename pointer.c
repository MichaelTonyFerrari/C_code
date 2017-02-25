#include <stdio.h>
#include <string.h>

// Pointers allow us to point to a memory address 

int main(){

	char str[20];
	char *one;
	char *two; 

	// Copy hello everyone into str 
	strcpy(str, "Hello Everyone\n");
	
	// Set first pointr to start of str array 
	one = str;
	printf(one);

	// Set the second one 2 bytes further in the array 	
	two = one + 2; 
	printf(two);
	
	strcpy(two, "y you guys!\n");
	printf(one);

}

