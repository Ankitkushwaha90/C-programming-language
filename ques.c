#include <stdio.h>

int main(){
	printf(" 12. Write a program in C to accept a grade and declare the equivalent description:  \n");
	 char notes[15];
	printf("Enter the grad:");
	char grd;
	
	scanf("%c", &grd);
	grd =  toupper(grd);
	switch(grd){
		
		case 'A':
			printf("EXCELLENT");
			break;

		case 'B':
			printf("VERY GOOD");
			break;

		case 'C':
			printf("GOOD");
			break;
		
		case 'D':
			printf("ABERAGE");
			break;
		
		case 'F':
			printf("FAIL");
			break;
		default:
			printf("this is not define");
			break;
	}
}