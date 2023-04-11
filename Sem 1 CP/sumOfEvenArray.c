// WAP, to enter 5 elements in array and then find the sum of even numbers in array
#include <stdio.h>
void main()
{
    int arr[5], sum = 0;
    printf("Enter the array : ");
    for (int i = 0; i <= 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum = sum + arr[i];
        }
    }
    printf("Sum of even numbers is : %d", sum);
}