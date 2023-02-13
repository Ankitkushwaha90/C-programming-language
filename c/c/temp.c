#include<stdio.h>

int main(){
    int a;
    printf("Enter value of temperature\n");
    scanf("%d", &a);

    if(a<0){
        printf("Temp < 0 then Freezing Weather\n");
    }else if(a<=9){
        printf("Temp 0-9 then Very Cold weather\n");
    }else if(a<=19){  
        printf("Temp 10-19 then Cold weather\n");
    }
    else if(a<=29){
        printf("Temp 20-29 then Normal in Temp\n");
    }else if(a<=39){
        printf("Temp 30-39 then Its Hot\n");
    }else if(a>=40){
        printf("Temp >=40 then Its Very Hot");
    }else{
        printf("not define\n");
    }
}