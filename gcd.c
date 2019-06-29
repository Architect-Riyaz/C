#include<stdio.h>
int main(){
    int num1,num2,q,r;
    printf("Enter two number to calculate their GCD:\n");
    scanf("%d%d",&num1,&num2);
    if(num1 < num2){
        num1 +=num2;
        num2 = num1 - num2;
        num1-=num2;
    }
    while(r!=0){
        q = num1/num2;
        r = num1%num2;
        num1 = num2;
        if (r !=0){
            num2 = r;
        }
        
    }
    printf("The GCD is %d",num2);
    return 0;
}