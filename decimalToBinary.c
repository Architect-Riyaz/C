#include<stdio.h>
int main(){
    int userInput,revBinaryForm=0,binaryForm=0;
    printf("Enter a decimal number to find it's binary form:");
    scanf("%d",&userInput);
    for(int i = userInput; i != 1; i/=2){
        revBinaryForm *=10;
        revBinaryForm += i%2;
    }
    revBinaryForm *=10;
    revBinaryForm ++;
    for(int i = revBinaryForm;i > 0;i /= 10){
        binaryForm *=10;
        binaryForm += i%10;
    }
    printf("%d",binaryForm);
}