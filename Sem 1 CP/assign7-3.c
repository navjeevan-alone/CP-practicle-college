// wap, calculate the sum of the five numbers of array using pointer to array
#include <stdio.h>
void main()
{
    int x[5], *y, sum = 0;
    printf("Enter the array:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &x[i]);
        sum=sum+*(y+1);
    }
    printf("Sum of the array elements is :%d",sum);
}
// Enter the array:
// 1
// 2
// 3
// 4
// 5
// Sum of the array elements is :15