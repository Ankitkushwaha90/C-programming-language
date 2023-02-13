#include<stdio.h>
#include<conio.h>

void main(){
	int n,x,rev,rem;

	printf("Enter the value of n\n");
	scanf("%d",&n);
	
	x=n;
	rev=0;
	rem=0;
	clrscr();
	while(0<x){
		rem=x%10;
		rev=rev*10+rem;
		x=x/10;
	}
	
	printf("%d",rev);
//	return 0;
	getch();
	

	
}
