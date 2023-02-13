#include<stdio.h>

int main(){
    int x,y,z;
    printf("Enter the value of x::\n");
    scanf("%d", &x);
    printf("Enter the value of y:: \n");
    scanf("%d", &y);
    printf("Enter the value of z:: \n");
    scanf("%d", &z);

    if((z*z)==(y*y)+(x*x) || (y*y) == (z*z) + (x*x) || (x*x) == (y*y)+(z*z)){
        printf("it is right angle triangle\n");
    }else if(z==y && z==x && y == x){
        printf("it is equilater triangle \n");

    }else if(z==y || x==y || y== z){
        printf("it is isosceles triangle \n");
    }else{
        printf("Again Enter the type of only interger value\n ");
    }
}