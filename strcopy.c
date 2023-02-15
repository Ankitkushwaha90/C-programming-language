#include<stdio.h>
#include<string.h>

int main(){
	char hello[10] = "welcome";
	char hey[10];
	printf("%s\n", strcpy(hey, hello));
	printf("%s", hey);
	return 0;
}
