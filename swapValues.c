#include<stdio.h>
int main(){
    int x,y,temp;
    
    printf("Enter the value of X:");
    scanf("%d",&x);
    
    printf("\nEnter the value of Y:");
    scanf("%d",&y);
    
    printf("Value of x before swap:%d\n",x);
    printf("Value of y before swap:%d\n", y);

    temp = x;
    x = y;
    y = temp;

    printf("Value of x after swap:%d\n", x);
    printf("Value of y after swap:%d\n", y);
    return 0;
}