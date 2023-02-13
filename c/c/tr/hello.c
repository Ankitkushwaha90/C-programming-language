#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("create.txt", "w");
    // fputs("this is new line enter your system", fptr);

    fclose(fptr);
    return 0;
}