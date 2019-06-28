#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of y:");
    scanf("%d",&y);

    printf("Value of x before swap:%d\n",x);
    printf("Value of y before swap:%d\n", y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("Value of x after swap:%d\n", x);
    printf("Value of y after swap:%d\n", y);
    return 0;
}