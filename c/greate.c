#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,c,d,e;
    printf("Enter value for five numbers \n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    if(a>b && a>c && a>d && a>e){
        printf("a = %d is greater number from other number.\n", a);
    }
    else if(b>a && b>c && b>d && b>e){
        printf("b = %d is greater number from other number.\n", b);
    }else if(c>b && c>a && c>d && c>e){
        printf("c = %d is greater number from other number.\n", c);
    }else if(d>b && d>c && d>a && d>e){
        printf("d = %d is greater number from other number.\n", d);
    }else if(e>b && e>c && e>d && e>a){
        printf("e = %d is greater number from other number.\n", e);
    }

    getch();
}