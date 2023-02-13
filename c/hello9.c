#include<stdio.h>
#include<string.h>

struct students
{
    int id;
    double marks;
    char fav_char;
    char name[56];
};



int main(){
    struct students ankit, hello, hey;
    ankit.id = 1;
    hello.id = 2;
    hey.id = 3;
    ankit.marks = 9;
    strcpy(ankit.name, "ankit kushwaha");
    hello.marks = 19;
    hey.marks = 30;
    ankit.fav_char='p';
    hello.fav_char='p';
    hey.fav_char='p';
    printf("ankit name is:>) %s \n", ankit.name);
    return 0;
}