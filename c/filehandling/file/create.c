#include<stdio.h>

int main(){
    FILE * fptr;

    fptr = fopen("index.txt", "r");
    
    char content[1000];
    // fputs("this is new of file , include in this text \n", fptr);
    fgets(content, 1000, fptr);

    printf("%s", content);

    fclose(fptr);

    return 0;
}