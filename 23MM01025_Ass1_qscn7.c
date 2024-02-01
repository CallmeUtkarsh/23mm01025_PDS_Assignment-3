#include<stdio.h>

int main(){
    float M,N,K;  // T:final score  // M:marks obtained  // W:attendence weight   // N:number of classes attended   // K:number of classes conducted
    printf("enter the number of marks obtained :\n");
    scanf("%f",&M);
    printf("enter the number of classes conducted :\n");
    scanf("%f",&K);
    printf("enter the number of classes attended :\n");
    scanf("%f",&N);
    float W=N/K;
    float T=M*W;
    if(M<=100 && M>=0 && N<=K){
        if(T>=90){
            printf("grade : EX");
        }
        else if(T>=80 && T<=89){
            printf("grade : A");
        }
        else if(T>=70 && T<=79){
            printf("grade : B");
        }
        else if(T>=60 && T<=69){
            printf("grade : C");
        }
        else if(T>=50 && T<=59){
            printf("grade : D");
        }
        else if(T>=40 && T<=49){
            printf("grade : P");
        }
        else{
            printf("grade : F");
        }
    }
    else{
        printf("invalid values were entered");
    }
    return 0;
}