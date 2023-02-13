#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *ptr = NULL;
    char string[345] = "this is content for string write 345 this is acutal write.";
    ptr = fopen("myfile.txt","a");
    fprintf(ptr, "%s", string);
}