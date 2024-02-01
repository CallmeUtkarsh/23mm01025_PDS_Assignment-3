#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&b+c>a&&c+a>b){
    printf("%d %d %d are the sides of the triangle",a,b,c);
    }
    else{
    printf("The input numbers are not the sides of the triangle");
    }
    
}