#include<stdio.h>

int main(){
	int i, n, flag;
	flag=0;
	printf("Enter the value of check prime number:");
	scanf("%d", &n);

	for(i=2;i<n;i++){
		if(n%i==0){
			printf("not prime no.");
			flag = 1;
			break;
		}

	}


	if(flag==0){
		printf("prime no");
		
	}
}