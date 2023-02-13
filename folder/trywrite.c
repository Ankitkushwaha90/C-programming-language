#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *ptr = NULL;
    char string[299] = "hello";
    ptr = fopen("myfile.txt", "w");
    fprintf(ptr, "%s", string);
}