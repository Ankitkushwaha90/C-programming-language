#include <stdio.h>
#include <conio.h>


int main(){

    int op1, op2;
    float total;
    char op;
	
    printf("Enter the operators:\n");
    scanf("%c",&op); 
    printf("%c",op);

    printf("Enter of value is op1:");
    scanf("%d",&op1);

    printf("Enter of value is op2:");
    scanf("%d",&op2);

	switch (op){
        case'+':
            total = op1 + op2;
            printf("value of op1+op2 is %f", total);
            break;

        case'-':
            total = op1 - op2;
            printf("value of op1-op2 is %f", total);
            break;

        case'*':
            total = op1 * op2;
            printf("value of op1 * op2 is %f", total);
            break;
        case'/':
            total = op1 / op2;
            printf("value of op1 / op2 is %f", total);
            break;
    }


}