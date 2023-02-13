#include<stdio.h>
#include<conio.h>

int main(){
    int i,j,z,c,m;
    printf("Enter the range for table i & j \n");
    scanf("%d%d", &i, &j);

    for(z=1; z<=10; z++){
        for(m=i; m<=j; m++){
            c=m*z;
            printf("%dX%d=%d\t",m,z,c);
        }
        printf("\n");
    }
    getch();
}