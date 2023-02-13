#include <stdio.h>
#include <conio.h>

void main(){
    int i = 9;
    clrscr();

    printf("The value of i is: %d\n", i);
    printf("The address of i is: %u\n", &i);
    printf("The value at the address of i is: %d\n", *(&i));

    getch();
}