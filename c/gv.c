#include<stdio.h>

int a=1;  //this is global variable because you can use of this variable in other function.

int hello(){
		printf("a is globle variable  %d\n",a);
	}
int main(){
	hello();
	int b=2; // this is local variable because it can be use only in inner function.
	printf("b is local variable %d\n", b);
}