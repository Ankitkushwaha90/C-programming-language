#include<stdio.h>

int main(){
    FILE * fptr;
    fptr = fopen("newfile.txt", "r");

    char content[1000];

    fgets(content , 1000, fptr);
    printf("%s", content);


    fclose(fptr);

    return 0;
}