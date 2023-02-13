#include<stdio.h>

int main(){
	printf("hello world");

	char hello[100]="create web";
	char Welcome[100]="welcomegg";
	char new3[100];
	
	int i,j;
	i=0; j=0;
	
	while(hello[i]!='/0'){
		new3[j]=hello[i];
		i++;
		j++;
	}
	
	while(welcome[j]!='/0'){
		new3[j]=welcome[i];
		i++;
		j++;
	}
	printf("%s",new3);

}