#include <stdio.h>

int main(){
    FILE * fptr;
    fptr = fopen("newcreatile.txt", "w");

    if(fptr != NULL){
        printf("crete file is newcreatile.txt \n");
    }
    else{
        printf("not file create");
    }
}