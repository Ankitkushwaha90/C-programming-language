#include<stdio.h>

int main(){
	int n, multiple;
	printf("Enter for table no.");
	scanf("%d",&n);

	for(int i=1; i<=10;i++){
		multiple = i*n;
		printf("\n %d X %d = %d \n", n,i, multiple);
	}

}