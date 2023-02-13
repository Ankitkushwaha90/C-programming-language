#include<stdio.h>
#include<conio.h>


int main(){
	int total;
	char op;
	printf("Enter the operator:\n");
	scanf("%c", &op);


	int op1, op2;
	
	printf("Enter the value of op1:\n");	
	scanf("%d", &op1);
	printf("Enter the value of op2:\n");
	scanf("%d", &op2);

	switch(op){

			case'+':
				total = op1 + op2;
				printf("value of op1 + op2 is %d", total); 
				break;
			default:
				printf("crass");
				break;




		}
}