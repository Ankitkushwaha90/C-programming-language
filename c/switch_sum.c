#include<stdio.h>


int main(){
	int op1,op2;
	float total;
	char op;

	printf("Enter operator:");
	scanf("%c", &op);
	printf("\n %c \n", op);

	printf("Enter value of op1:");
	scanf("%d", &op1);

	printf("Enter value of op2:");
	scanf("%d", &op2);

	switch(op){
		case '+':
			total = op1+op2;
			printf("Value of op1+op2 = %f", total);
			break;
		case '-':
			total = op1-op2;
			printf("Value of op1+op2 = %f", total);
			break;
		case '*':
			total = op1*op2;
			printf("Value of op1+op2 = %f", total);
			break;
		case '/':
			total = op1/op2;
			printf("Value of op1+op2 = %f", total);
			break;


	}

	
}