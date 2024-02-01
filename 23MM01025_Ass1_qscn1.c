#include<stdio.h>

int main(){
    int integer;
    printf("enter desired integer\n");
    scanf("%d",&integer);
    if(integer>0){
        printf("given integer is positive");
    }
    else if(integer<0){
        printf("given integer is negative");
    }
    else{
        printf("given integer is 0");
    }
    return 0;
}