#include<stdio.h>
int main(){
    int arr[100],size,sum=0;
    printf("Enter the amount of numbers to be add:");
    scanf("%d",&size);
    printf("Enter the numbers to get their total:\n");
    for(int i = 0; i < size ; i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("The total of the number is %d",sum);
    return 0;
}