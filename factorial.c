#include<stdio.h>
int main(){
    int fact=1,userInput;
    // Getting Value from user to calculate factorial
    printf("Enter the number to calculate it's Factorial:");
    scanf("%d",&userInput);
    if (userInput < 0){
        printf("Enter a value greater than 0");
    }else{
        for(int i =1; i<userInput;i++)
            fact*=i;
    }
    printf("Factorial of %d is %d",userInput,fact);
    return 0;
    
}