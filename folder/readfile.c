#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *ptr = NULL;
    char string[5009];
    ptr = fopen("myfile.txt","r");
    fscanf(ptr, "%s", string);
    printf(string);
}