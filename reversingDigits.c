#include<stdio.h>
int main(){
    
    int userInput,result = 0;
    // printf("9 / 10=%d\n9\%10=%d\n",9/10,9%10);
    printf("Enter a number to get it reversed:");
    scanf("%d",&userInput);
    for(int i = userInput;i > 0;i /= 10){
        result *=10;
        result += i%10;
    }
    printf("Your reversed input is %d",result);
    return 0;
}