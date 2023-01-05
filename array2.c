// WAP, to calculate sum of elements of array 
#include <stdio.h>
void main(){
    int num[5],sum=0;
     printf("Enter the 5 values :");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        sum+=num[i];
    }
    printf("Sum of the elements of array :%d ",sum);
}