#include<stdio.h>

int main(){
    char grad;
    printf("Enter for value of grade in character::\n");
    scanf("%c", &grad);
    
    switch (grad)
    {
    case 'A':
        printf("EXCELLENT\n");
        break;
    
    case 'B':
        printf("VERY GOOD\n");
        break;
    
    case 'C':
        printf("GOOD \n");
        break;
    
    case 'D':
        printf("AVERAGE\n");
        break;
    
    case 'F':
        printf("FAIL\n");
        break;
    
    default:
        break;
    }
}