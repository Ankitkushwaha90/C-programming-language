#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *ptr = NULL;
	char string[340000] = "This content was produced by Tutorial 64.c";

	// **********Reading a file*****
	//ptr = fopen("myfile.txt","r");
	//fscanf(ptr, "%s", string);
	//printf("The content of this file has %s\n", string);
	
	//***************append file "a"
	//ptr = fopen("myfile.txt", "w");
	ptr = fopen("myfile.txt", "a");
	fprintf(ptr, "%s", string);
	

	return 0;
}