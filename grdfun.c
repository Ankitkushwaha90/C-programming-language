#include <stdio.h>
// Questions : Write a program in C to accept a grade and declare the equivalent description:

int main(){
	
	char grd;
	printf("Enter the character of grad:\n");
	scanf("%c", &grd);
	
	switch(grd){
		case 'A':
			printf("Excellent");
			break;
		case 'B':
			printf("Very Good");
			break;

		case 'C':
			printf("Good");
			break;

		case 'D':
			printf("Avarage");
			break;

		case 'F':
			printf("Fail");
			break;

		default:
			printf("this is out of value");
			break;

}



}