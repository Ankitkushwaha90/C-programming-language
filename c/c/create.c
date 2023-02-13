#include<stdio.h>

int main(){

	char hello[100] = "create web";
	char Wel[100] = "welcomegg";
	char new3[100];
	
	int i,j;
	i=0; j=0;
	
	while( hello[i] != '\0'){
		new3[j] = hello[i];
		i++;
		j++;
	}
	i=0;
	while( Wel[i] != '\0'){
		new3[j]=Wel[i];
		i++;
		j++;
	}
	
	new3[j] = '\0';
	printf("%s",new3);

	for(int i=0;i<20;i++){
		for(int j=0; j<i; j++){
			char t;
			t = j;
			printf(" %c ",t);
		}
		printf("\n");
	}

	return 0;

}