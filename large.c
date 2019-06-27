#include<stdio.h>
int main(){
    int array[100],largest,size;
    printf("Enter the number of elements in the array:");
    scanf("%d",&size);
    printf("Enter the %d intergers:\n",size);

    for(int i= 0;i<size;i++)
        scanf("%d", &array[i]);
    largest = array[0];

    for(int i=0;i<size;i++){
        if(array[i]>largest)
            largest=array[i];
    }
    printf("The largest number in the array is %d",largest);
    return 0;
}