#include<stdio.h>

int main(){
    int days;
    printf("enter number of days took to return the book after the deadline: \n");
    scanf("%d",&days);
    if(days<=5){
        printf("your fine will be 1 rupee.");
    }
    else if(days>5 && days<=10){
        printf("your fine will be 2 rupees.");
    }
    else if(days>10 && days<=30){
        printf("your fine will be 5 rupees.");
    }
    else{
        printf("your membership is cancelled.");
    }
    return 0;
}