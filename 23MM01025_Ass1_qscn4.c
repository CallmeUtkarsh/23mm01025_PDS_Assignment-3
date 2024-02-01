#include<stdio.h>

int main(){
    int x1,x2,x3,y1,y2,y3;
    printf("enter first coordinate\n");
    scanf("%d%d",&x1,&y1);
    printf("enter second coordinate\n");
    scanf("%d%d",&x2,&y2);
    printf("enter third coordinate\n");
    scanf("%d%d",&x3,&y3);
    if(((y2-y1)/(x2-x1))==((y3-y2)/(x3-x2))==((y3-y1)/(x3-x1))){
        printf("The coordinates (%d,%d) , (%d,%d) , (%d,%d) are in straight line.",x1,y1,x2,y2,x3,y3);
    }
    else{
        printf("The coordinates (%d,%d) , (%d,%d) , (%d,%d) are not in straight line.",x1,y1,x2,y2,x3,y3);
    }
}