#include <stdio.h> 
#include <string.h>
int main(void) {    
    char a[] = "abc";    
    char b[8];
    strcpy(b, a); /* think "b special equals a" */    
    printf("%s\n", b); /* "abc" will be printed */
    return 0; 
} 