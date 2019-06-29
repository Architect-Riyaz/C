#include <stdio.h>
int main()
{
    int userInput, rem,i=1, binaryForm = 0;
    printf("Enter a decimal number to find it's binary form:");
    scanf("%d", &userInput);

    while(userInput !=0){
        rem = userInput%2;
        userInput /=2;
        binaryForm+=rem*i;
        i*=10;
    }
    printf("%d", binaryForm);
}