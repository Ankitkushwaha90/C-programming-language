#include<stdio.h>

int main(){
    int i, n;
    i=1;
    printf("Enter value of n \n");
    scanf("%d", &n);
    while(i<=n){
        int j=1;
        while(j<=i){
            printf("%d",j);
            j++;
        }
        printf("\n");
        i++;
    }
}